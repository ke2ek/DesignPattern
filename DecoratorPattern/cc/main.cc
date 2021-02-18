#include <iostream>

#include "Decorator.h"

int main() {
    Beverage* p1 = new Espresso();
    cout << p1->getDescription() + " $" << p1->cost() << endl;

    Beverage* p2 = new DarkRoast();
    p2->setSize(Size::GRANDE);
    p2 = new Mocha(p2);
    p2 = new Soy(p2);
    p2 = new Whip(p2);
    cout << p2->getDescription() + " $" << p2->cost() << endl;

    Beverage* p3 = new HouseBlend();
    p3->setSize(Size::VENTI);
    p3 = new Soy(p3);
    p3 = new Mocha(p3);
    p3 = new Whip(p3);
    cout << p3->getDescription() + " $" << p3->cost() << endl;

    return 0;
}
