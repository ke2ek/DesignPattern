#include "WeatherData.h"

class CurrentConditionsDisplay : public IObserver, public IDisplayElement {
private:
    float temperature;
    float humidity;
    ISubject* weatherData;

public:
    CurrentConditionsDisplay(ISubject* weatherData);
    void update(float temperature, float humidity, float pressure);
    void display();
};


class StatisticsDisplay : public IObserver, public IDisplayElement {
private:
    vector<float> temperatures;
    vector<float> humidities;
    vector<float> pressures;
    ISubject* weatherData;

public:
    StatisticsDisplay(ISubject* weatherData);
    void update(float temperature, float humidity, float pressure);
    void display();
};


class ForecastDisplay : public IObserver, public IDisplayElement {
private:
    float currentPressure;
    float lastPressure;
    ISubject* weatherData;

public:
    ForecastDisplay(ISubject* weatherData);
    void update(float temperature, float humidity, float pressure);
    void display();
};


class HeatIndexDisplay : public IObserver, public IDisplayElement {
private:
    float heatIndex;
    ISubject* weatherData;

public:
    HeatIndexDisplay(ISubject* weatherData);
    void update(float temperature, float humidity, float pressure);
    void display();
    float computeHeatIndex(float t, float rh);
};


/*
class ThirdPartyDisplay : public IObserver, public IDisplayElement {
private:
    ISubject* weatherData;

public:
    ForecastDisplay(ISubject* weatherData);
    void update(float temperature, float humidity, float pressure);
    void display();
};
*/

