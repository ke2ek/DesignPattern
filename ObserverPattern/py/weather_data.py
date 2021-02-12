from interface import Subject, Observer

class WeatherData(Subject):

    def __init__(self):
        self._observers = []
        self._temperature = 0.0
        self._humidity = 0.0
        self._pressure = 0.0

    def register_observer(self, o):
        if not isinstance(o, Observer):
            raise TypeError
        self._observers.append(o)

    def remove_observer(self, o):
        if not isinstance(o, Observer):
            raise TypeError
        self._observers.remove(o)

    def notify_observers(self):
        for o in self._observers:
            o.update(self._temperature, self._humidity, self._pressure)

    def measurements_changed(self):
        self.notify_observers()

    def set_measurements(self, temperature, humidity, pressure):
        self._temperature = temperature
        self._humidity = humidity
        self._pressure = pressure
        self.measurements_changed()

    def get_temperature(self):
        return self.temperature

    def get_humidity(self):
        return self.humidity

    def get_pressure(self):
        return self.pressure

