#include "Pizza.h"
#define interface class

/* Pizza store interface */
interface PizzaStore {
protected:
    virtual Pizza* createPizza(const string& type) = 0;

public:
    virtual ~PizzaStore() { }
    Pizza* orderPizza(const string& type) {
        Pizza* pizza = createPizza(type);
        cout << "--- Making a " << pizza->getName() << " ---" << endl;
        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();
        return pizza;
    }
};

/* Pizza store classes */
class NYPizzaStore : public PizzaStore {
protected:
    Pizza* createPizza(const string& type) {
        Pizza* pizza = nullptr;
        PizzaIngredientFactory* ingredientFactory = new NYPizzaIngredientFactory();

        if (type == "cheese") {
            pizza = new CheesePizza(ingredientFactory);
            pizza->setName("New York Style Cheese Pizza");
        } else if (type == "veggie") {
            pizza = new VeggiePizza(ingredientFactory);
            pizza->setName("New York Style Veggie Pizza");
        } else if (type == "clam") {
            pizza = new ClamPizza(ingredientFactory);
            pizza->setName("New York Style Clam Pizza");
        } else if (type == "pepperoni") {
            pizza = new PepperoniPizza(ingredientFactory);
            pizza->setName("New York Style Pepperoni Pizza");
        }

        return pizza;
    }
};


class ChicagoPizzaStore : public PizzaStore {
protected:
    Pizza* createPizza(const string& type) {
        Pizza* pizza = nullptr;
        PizzaIngredientFactory* ingredientFactory = new ChicagoPizzaIngredientFactory();

        if (type == "cheese") {
            pizza = new CheesePizza(ingredientFactory);
            pizza->setName("Chicago Style Cheese Pizza");
        } else if (type == "veggie") {
            pizza = new VeggiePizza(ingredientFactory);
            pizza->setName("Chicago Style Veggie Pizza");
        } else if (type == "clam") {
            pizza = new ClamPizza(ingredientFactory);
            pizza->setName("Chicago Style Clam Pizza");
        } else if (type == "pepperoni") {
            pizza = new PepperoniPizza(ingredientFactory);
            pizza->setName("Chicago Style Pepperoni Pizza");
        }

        return pizza;
    }
};

