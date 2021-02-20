#include <vector>

#include "Ingredient.h"

/* Pizza ingredient factory interface */
interface PizzaIngredientFactory {
public:
    virtual ~PizzaIngredientFactory() { }

    virtual Dough* createDough() = 0;
    virtual Sauce* createSauce() = 0;
    virtual Cheese* createCheese() = 0;
    virtual vector<Veggie*> createVeggies() = 0;
    virtual Pepperoni* createPepperoni() = 0;
    virtual Clams* createClams() = 0;
};

/* NY Pizza ingredient factory classes */
class NYPizzaIngredientFactory : public PizzaIngredientFactory {
public:
    Dough* createDough() {
        return new ThinCrustDough();
    }

    Sauce* createSauce() {
        return new MarinaraSauce();
    }

    Cheese* createCheese() {
        return new ReggianoCheese();
    }

    vector<Veggie*> createVeggies() {
        vector<Veggie*> veggies;
        veggies.push_back(new Garlic());
        veggies.push_back(new Onion());
        veggies.push_back(new Mushroom());
        veggies.push_back(new RedPepper());
        return veggies;
    }

    Pepperoni* createPepperoni() {
        return new SlicedPepperoni();
    }

    Clams* createClams() {
        return new FreshClams();
    }
};

/* Chicago Pizza ingredient factory classes */
class ChicagoPizzaIngredientFactory : public PizzaIngredientFactory {
public:
    Dough* createDough() {
        return new ThickCrustDough();
    }

    Sauce* createSauce() {
        return new PlumTomatoSauce();
    }

    Cheese* createCheese() {
        return new MozzarellaCheese();
    }

    vector<Veggie*> createVeggies() {
        vector<Veggie*> veggies;
        veggies.push_back(new BlackOlives());
        veggies.push_back(new Spinach());
        veggies.push_back(new Eggplant());
        return veggies;
    }

    Pepperoni* createPepperoni() {
        return new SlicedPepperoni();
    }

    Clams* createClams() {
        return new FrozenClams();
    }
};

