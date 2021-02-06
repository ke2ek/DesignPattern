#include "Interface.h"

#include <vector>

class WeatherData : public ISubject {
private:
    vector<IObserver*> observers;
    float temperature;
    float humidity;
    float pressure;

public:
    void registerObserver(IObserver* o);
    void removeObserver(IObserver* o);
    void notifyObservers();
    void measurementsChanged();
    void setMeasurements(float temperature, float humidity, float pressure);

    float getTemperature() const;
    float getHumidity() const;
    float getPressure() const;
};

