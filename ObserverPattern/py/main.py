from display import *


def main():
    weather_data = WeatherData()
    current_display = CurrentConditionsDisplay(weather_data)
    statistics_display = StatisticsDisplay(weather_data)
    forecast_display = ForecastDisplay(weather_data)
    heat_display = HeatIndexDisplay(weather_data)

    weather_data.set_measurements(80, 65, 30.4);
    weather_data.set_measurements(82, 70, 29.2);
    weather_data.set_measurements(78, 90, 29.2);
    weather_data.set_measurements(76, 86, 26.4);


if __name__ == '__main__':
    main()
