#include <iostream>
#define interface class
using namespace std;

interface IObserver {
public:
    virtual ~IObserver() { }
    virtual void update(float temp, float humidity, float pressure) = 0;
};

interface ISubject {
public:
    virtual ~ISubject() { }
    virtual void registerObserver(IObserver* o) = 0;
    virtual void removeObserver(IObserver* o) = 0;
    virtual void notifyObservers() = 0;
};

interface IDisplayElement {
public:
    virtual ~IDisplayElement() { }
    virtual void display() = 0;
};

