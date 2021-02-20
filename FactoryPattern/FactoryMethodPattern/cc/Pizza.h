#include <iostream>
#include <string>
#include <vector>
#define interface class
using namespace std; 


interface Pizza {
protected:
    string name;
    string dough;
    string sauce;
    vector<string> toppings;

public:
    Pizza() { toppings.clear(); }
    virtual ~Pizza() { }

    virtual void prepare() {
        cout << "Preparing " << name << endl;
        cout << "Tossing dough..." << endl;
        cout << "Adding sauce..." << endl;
        cout << "Adding toppings: ";
        for (string& s : toppings)
            cout << s << " ";
        cout << endl;
    }

    virtual void bake() {
        cout << "Bake for 25 minutes at 350." << endl;
    }

    virtual void cut() {
        cout << "Cutting the pizza into diagonal slices." << endl;
    }

    virtual void box() {
        cout << "Place pizza in official PizzaStore box." << endl;
    }

    string getName() const { return name; }
};

/* NY Style Pizza */
class NYStyleCheesePizza: public Pizza {
public:
    NYStyleCheesePizza() {
        name = "NY Style Sauce and Cheese Pizza";
        dough = "Thin Crust Dough";
        sauce = "Marinara Sauce";
        toppings.push_back("Grated Reggiano Cheese");
    }
};


class NYStyleVeggiePizza : public Pizza {
public:
    NYStyleVeggiePizza() {
        name = "NY Style Sauce and Veggie Pizza";
        dough = "Thin Crust Dough";
        sauce = "Marinara Sauce";
        toppings.push_back("Grated Reggiano Cheese");
    }
};


class NYStyleClamPizza : public Pizza {
public:
    NYStyleClamPizza() {
        name = "NY Style Sauce and Clam Pizza";
        dough = "Thin Crust Dough";
        sauce = "Marinara Sauce";
        toppings.push_back("Grated Reggiano Cheese");
    }
};


class NYStylePepperoniPizza : public Pizza {
public:
    NYStylePepperoniPizza() {
        name = "NY Style Sauce and Pepperoni Pizza";
        dough = "Thin Crust Dough";
        sauce = "Marinara Sauce";
        toppings.push_back("Grated Reggiano Cheese");
    }
};


/* Chicago Style Pizza */
class ChicagoStyleCheesePizza : public Pizza {
public:
    ChicagoStyleCheesePizza() {
        name = "Chicago Style Deep Dish Cheese Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";
        toppings.push_back("Shredded Mozzarella Cheese");
    }

    void cut() {
        cout << "Cutting the pizza into square slices." << endl;
    }
};


class ChicagoStyleVeggiePizza : public Pizza {
public:
    ChicagoStyleVeggiePizza() {
        name = "Chicago Style Deep Dish Veggie Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";
        toppings.push_back("Shredded Mozzarella Cheese");
    }
};


class ChicagoStyleClamPizza : public Pizza {
public:
    ChicagoStyleClamPizza() {
        name = "Chicago Style Deep Dish Clam Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";
        toppings.push_back("Shredded Mozzarella Cheese");
    }

    void cut() {
        cout << "Cutting the pizza into vertical slices." << endl;
    }
};


class ChicagoStylePepperoniPizza : public Pizza {
public:
    ChicagoStylePepperoniPizza() {
        name = "Chicago Style Deep Dish Pepperoni Pizza";
        dough = "Extra Thick Crust Dough";
        sauce = "Plum Tomato Sauce";
        toppings.push_back("Shredded Mozzarella Cheese");
    }

    void cut() {
        cout << "Cutting the pizza into horizontal slices." << endl;
    }
};

