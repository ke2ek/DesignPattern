#include "Display.h"

/* CurrentConditionsDisplay */
CurrentConditionsDisplay::CurrentConditionsDisplay(ISubject* weatherData) {
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::update(float temperature, float humidity, float pressure) {
    this->temperature = temperature;
    this->humidity = humidity;
    display();
}

void CurrentConditionsDisplay::display() {
    cout << "Current conditions: " << temperature << "F degreess and ";
    cout << humidity << "\% humidity" << endl;
}


/* StatisticsDisplay */
StatisticsDisplay::StatisticsDisplay(ISubject* weatherData) {
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void StatisticsDisplay::update(float temperature, float humidity, float pressure) {
    this->temperatures.push_back(temperature);
    this->humidities.push_back(humidity);
    this->pressures.push_back(pressure);
    display();
}

void StatisticsDisplay::display() {
    int n = temperatures.size();
    if (n == 0) {
        cout << "[Statistics] No data." << endl;
        return;
    }
    float avgT, minT, maxT;
    float avgH, minH, maxH;
    float avgP, minP, maxP;
    avgT = minT = maxT = temperatures[0];
    avgH = minH = maxH = humidities[0];
    avgP = minP = maxP = pressures[0];
    for (int i = 1; i < n; i++) {
        if (minT > temperatures[i]) minT = temperatures[i];
        if (maxT < temperatures[i]) maxT = temperatures[i];
        avgT += temperatures[i];

        if (minH > humidities[i]) minH = humidities[i];
        if (maxH < humidities[i]) maxH = humidities[i];
        avgH += humidities[i];

        if (minP > pressures[i]) minP = pressures[i];
        if (maxP < pressures[i]) maxP = pressures[i];
        avgP += pressures[i];
    }
    avgT /= n, avgH /= n, avgP /= n;

    cout << "[Statistics] Total Current Data #" << n << endl;
    cout << "\t[Temperature] Avg: " << avgT << ", Min: " << minT << ", Max: " << maxT << endl;
    cout << "\t[Humidity] Avg: " << avgH << ", Min: " << minH << ", Max: " << maxH << endl;
    cout << "\t[Pressure] Avg: " << avgP << ", Min: " << minP << ", Max: " << maxP << endl;
}


/* ForecastDisplay */
ForecastDisplay::ForecastDisplay(ISubject* weatherData) {
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
    currentPressure = 29.92f;
}

void ForecastDisplay::update(float temperature, float humidity, float pressure) {
    lastPressure = currentPressure;
    currentPressure = pressure;
    display();
}

void ForecastDisplay::display() {
    cout << "Forecast: ";
    if (currentPressure > lastPressure) {
        cout << "Improving weather on the way!" << endl;
    } else if (currentPressure == lastPressure) {
        cout << "More of the same" << endl;
    } else {
        cout << "Watch out for cooler, rainy weather" << endl;
    }
}


/* HeatIndexDisplay */
HeatIndexDisplay::HeatIndexDisplay(ISubject* weatherData) {
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
    heatIndex = 0.0f;
}

void HeatIndexDisplay::update(float temperature, float humidity, float pressure) {
    heatIndex = computeHeatIndex(temperature, humidity);
    display();
}

void HeatIndexDisplay::display() {
    cout << "Heat Index is " << heatIndex << endl;
}

float HeatIndexDisplay::computeHeatIndex(float t, float rh) {
    float index = (float)((16.923 + (0.185212 * t) + (5.37941 * rh) - (0.100254 * t * rh) 
                + (0.00941695 * (t * t)) + (0.00728898 * (rh * rh)) 
                + (0.000345372 * (t * t * rh)) - (0.000814971 * (t * rh * rh))
                + (0.0000102102 * (t * t * rh * rh)) - (0.000038646 * (t * t * t))
                + (0.0000291583 * (rh * rh * rh)) + (0.00000142721 * (t * t * t * rh))
                + (0.000000197483 * (t * rh * rh * rh)) - (0.0000000218429 * (t * t * t * rh * rh))
                + 0.000000000843296 * (t * t * rh * rh * rh)) - (0.0000000000481975 * (t * t * t * rh * rh * rh)));
    return index;
}

