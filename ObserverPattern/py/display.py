from weather_data import WeatherData
from interface import Observer, DisplayElement


class CurrentConditionsDisplay(Observer, DisplayElement):
    """Display the current condition."""

    def __init__(self, weather_data):
        self._temperature = 0.0
        self._humidity = 0.0
        weather_data.register_observer(self)

    def update(self, temperature, humidity, pressure):
        self._temperature = temperature
        self._humidity = humidity
        self.display()

    def display(self):
        print(f'Current conditions: {self._temperature}F degrees and '
              f'{self._humidity}%% humidity.')


class StatisticsDisplay(Observer, DisplayElement):
    """Display the statistics screen."""

    def __init__(self, weather_data):
        self._temperatures = []
        self._humidities = []
        self._pressures = []
        weather_data.register_observer(self)

    def update(self, temperature, humidity, pressure):
        self._temperatures.append(temperature)
        self._humidities.append(humidity)
        self._pressures.append(pressure)
        self.display()

    def display(self):
        n = len(self._temperatures)
        if n == 0:
            print('[Statistics] No Data.')
            return

        avgT, minT, maxT = self._temperatures[:1]*3
        avgH, minH, maxH = self._humidities[:1]*3
        avgP, minP, maxP = self._pressures[:1]*3
        for t, h, p in zip(self._temperatures, self._humidities, self._pressures):
            minT, maxT = min(minT, t), max(maxT, t)
            minH, maxH = min(minH, h), max(maxH, h)
            minP, maxP = min(minP, p), max(maxP, p)
            avgT += t
            avgH += h
            avgP += p
        
        avgT /= n
        avgH /= n
        avgP /= n
        print(f'[Statistics] Total Current Data #{n}')
        print(f'\t[Temperature] Avg: {avgT}, Min: {minT}, Max: {maxT}')
        print(f'\t[Humidity] Avg: {avgH}, Min: {minH}, Max: {maxH}')
        print(f'\t[Pressure] Avg: {avgP}, Min: {minP}, Max: {maxP}')


class ForecastDisplay(Observer, DisplayElement):
    """Display the forecast screen."""

    def __init__(self, weather_data):
        self._current_pressure = 29.92
        self._last_pressure = 0.0
        weather_data.register_observer(self)

    def update(self, temperature, humidity, pressure):
        self._last_pressure = self._current_pressure
        self._current_pressure = pressure
        self.display()

    def display(self):
        print('[Forcast]', end=' ')
        if self._current_pressure > self._last_pressure:
            print('Improving weather on the way!')
        elif self._current_pressure == self._last_pressure:
            print('More of the same.')
        else:
            print('Watch out for cooler, rainy weather.')


class HeatIndexDisplay(Observer, DisplayElement):
    """Display the HeatIndex screen."""

    def __init__(self, weather_data):
        self._heat_index = 0.0
        weather_data.register_observer(self)

    def update(self, temperature, humidity, pressure):
        self._heat_index = self.compute_heat_index(temperature, humidity)
        self.display()

    def display(self):
        print(f'[HeatIndex] Heat Index is {self._heat_index}')

    @staticmethod
    def compute_heat_index(t, rh):
        index = ((16.923 + (0.185212 * t) + (5.37941 * rh) - (0.100254 * t * rh) 
                + (0.00941695 * (t * t)) + (0.00728898 * (rh * rh)) 
                + (0.000345372 * (t * t * rh)) - (0.000814971 * (t * rh * rh))
                + (0.0000102102 * (t * t * rh * rh)) - (0.000038646 * (t * t * t))
                + (0.0000291583 * (rh * rh * rh)) + (0.00000142721 * (t * t * t * rh))
                + (0.000000197483 * (t * rh * rh * rh)) - (0.0000000218429 * (t * t * t * rh * rh))
                + 0.000000000843296 * (t * t * rh * rh * rh)) - (0.0000000000481975 * (t * t * t * rh * rh * rh)));
        return index

