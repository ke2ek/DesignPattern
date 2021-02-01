#include "WeatherData.h"

void WeatherData::registerObserver(IObserver* o) {
    observers.push_back(o);
}

void WeatherData::removeObserver(IObserver* o) {
    for (auto it = observers.begin(); it != observers.end(); it++) {
        if (*it == o) {
            observers.erase(it);
            return;
        }
    }
}

void WeatherData::notifyObservers() {
    for (auto& o : observers)
        o->update(temperature, humidity, pressure);
}

void WeatherData::measurementsChanged() {
    notifyObservers();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure) {
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    measurementsChanged();
}

// Getter
float WeatherData::getTemperature() const { return temperature; }
float WeatherData::getHumidity() const { return humidity; }
float WeatherData::getPressure() const { return pressure; }

