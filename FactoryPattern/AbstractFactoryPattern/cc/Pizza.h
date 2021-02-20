#include "PizzaIngredientFactory.h"

/* Pizza interface */
interface Pizza {
protected:
    string name;
    Dough* dough;
    Sauce* sauce;
    vector<Veggie*> veggies;
    Cheese* cheese;
    Pepperoni* pepperoni;
    Clams* clams;

public:
    Pizza() : dough(nullptr), sauce(nullptr), cheese(nullptr), 
              pepperoni(nullptr), clams(nullptr)
    { veggies.clear(); }

    virtual ~Pizza() { }
    virtual void prepare() = 0;

    virtual void bake() {
        cout << "Bake for 25 minutes at 350." << endl;
    }

    virtual void cut() {
        cout << "Cutting the pizza into diagonal slices." << endl;
    }

    virtual void box() {
        cout << "Place pizza in official PizzaStore box." << endl;
    }

    void setName(const string& name) { this->name = name; }

    string getName() const { return name; }

    virtual string toString() {
        string result = "---- " + name + " ----\n";

        if (dough != nullptr)
            result += dough->toString() + "\n";

        if (sauce != nullptr)
            result += sauce->toString() + "\n";

        for (int i = 0; i < veggies.size(); i++) {
            result += veggies[i]->toString();
            if (i == veggies.size() - 1) result += "\n";
            else result += ", ";
        }

        if (cheese != nullptr)
            result += cheese->toString() + "\n";

        if (pepperoni != nullptr)
            result += pepperoni->toString() + "\n";

        if (clams != nullptr)
            result += clams->toString() + "\n";

        return result;
    }
};

/* Pizza classes */
class CheesePizza : public Pizza {
private:
    PizzaIngredientFactory* factory;

public:
    CheesePizza(PizzaIngredientFactory* factory) : factory(factory) {
        name = "Cheese Pizza";
    }

    void prepare() {
        cout << "Preparing ... " << name << endl;
        dough = factory->createDough();
        sauce = factory->createSauce();
        cheese = factory->createCheese();
    }
};


class ClamPizza : public Pizza {
private:
    PizzaIngredientFactory* factory;

public:
    ClamPizza(PizzaIngredientFactory* factory) : factory(factory) {
        name = "Clam Pizza";
    }

    void prepare() {
        cout << "Preparing ... " << name << endl;
        dough = factory->createDough();
        sauce = factory->createSauce();
        cheese = factory->createCheese();
        clams = factory->createClams();
    }
};

class PepperoniPizza : public Pizza {
private:
    PizzaIngredientFactory* factory;

public:
    PepperoniPizza(PizzaIngredientFactory* factory) : factory(factory) {
        name = "Pepperoni Pizza";
    }

    void prepare() {
        cout << "Preparing ... " << name << endl;
        dough = factory->createDough();
        sauce = factory->createSauce();
        cheese = factory->createCheese();
        veggies = factory->createVeggies();
        pepperoni = factory->createPepperoni();
    }
};

class VeggiePizza : public Pizza {
private:
    PizzaIngredientFactory* factory;

public:
    VeggiePizza(PizzaIngredientFactory* factory) : factory(factory) {
        name = "Veggie Pizza";
    }

    void prepare() {
        cout << "Preparing ... " << name << endl;
        dough = factory->createDough();
        sauce = factory->createSauce();
        cheese = factory->createCheese();
        veggies = factory->createVeggies();
    }
};

