#include <iostream>
#define interface class
using namespace std;

interface IObserver {
public:
    virtual void update(float temp, float humidity, float pressure);
};

interface ISubject {
public:
    virtual void registerObserver(IObserver o);
    virtual void removeObserver(IObserver o);
    virtual void notifyObservers();
};

interface IDisplayElement {
public:
    virtual void display();
};

