#include <string>
#define interface class
using namespace std;

enum class Size { TALL, GRANDE, VENTI };

interface Beverage {
protected:
    string description = "Unknown Beverage";
    Size size = Size::TALL;

public:
    virtual string getDescription() { return this->description; }
    void setSize(Size size) { this->size = size; }
    virtual Size getSize() = 0;
    virtual double cost() = 0;
};


class Espresso: public Beverage {
public:
    Espresso() { this->description = "Espresso Coffee"; }
    Size getSize() { return this->size; }
    double cost() { return 1.99; }
};


class HouseBlend: public Beverage {
public:
    HouseBlend() { this->description = "House Blend Coffee"; }
    Size getSize() { return this->size; }
    double cost() { return .89; }
};


class DarkRoast: public Beverage {
public:
    DarkRoast() { this->description = "Dark Roast Coffee"; }
    Size getSize() { return this->size; }
    double cost() { return .99; }
};

