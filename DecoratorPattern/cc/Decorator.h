#include "Beverage.h"

interface CondimentDecorator : public Beverage {
public:
    virtual ~CondimentDecorator() { }
    virtual string getDescription() = 0;
};


class Mocha : public CondimentDecorator {
private:
    Beverage* beverage;

public:
    Mocha(Beverage* beverage) {
        this->beverage = beverage;
    }

    double cost() {
        return .20 + this->beverage->cost();
    }

    string getDescription() {
        return this->beverage->getDescription() + ", Mocha";
    }

    Size getSize() {
        return this->beverage->getSize();
    }
};


class Soy : public CondimentDecorator {
private:
    Beverage* beverage;

public:
    Soy(Beverage* beverage) {
        this->beverage = beverage;
    }

    double cost() {
        double cost = this->beverage->cost();
        if (getSize() == Size::TALL) {
            cost += .10;
        } else if (getSize() == Size::GRANDE) {
            cost += .15;
        } else {
            cost += .20;
        }
        return cost;
    }

    string getDescription() {
        return this->beverage->getDescription() + ", Soy";
    }

    Size getSize() {
        return this->beverage->getSize();
    }
};


class Whip : public CondimentDecorator {
private:
    Beverage* beverage;

public:
    Whip(Beverage* beverage) {
        this->beverage = beverage;
    }

    double cost() {
        return .10 + this->beverage->cost();
    }

    string getDescription() {
        return this->beverage->getDescription() + ", Whip";
    }

    Size getSize() {
        return this->beverage->getSize();
    }
};

