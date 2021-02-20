#include "Pizza.h"
#define interface class


interface PizzaStore {
protected:
    virtual Pizza* createPizza(const string& type) = 0;

public:
    Pizza* orderPizza(const string& type) {
        Pizza* pizza = createPizza(type);
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
        return pizza;
    }
};


class NYPizzaStore: public PizzaStore {
protected:
    Pizza* createPizza(const string& type) {
        if (type == "cheese")
            return new NYStyleCheesePizza();
        else if (type == "veggie")
            return new NYStyleVeggiePizza();
        else if (type == "clam")
            return new NYStyleClamPizza();
        else if (type == "pepperoni")
            return new NYStylePepperoniPizza();
        return nullptr;
    }
};


class ChicagoPizzaStore: public PizzaStore {
protected:
    Pizza* createPizza(const string& type) {
        if (type == "cheese")
            return new ChicagoStyleCheesePizza();
        else if (type == "veggie")
            return new ChicagoStyleVeggiePizza();
        else if (type == "clam")
            return new ChicagoStyleClamPizza();
        else if (type == "pepperoni")
            return new ChicagoStylePepperoniPizza();
        return nullptr;
    }
};

