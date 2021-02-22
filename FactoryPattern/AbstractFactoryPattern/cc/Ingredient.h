#include <iostream>
#include <string>
#define interface class
using namespace std;

/* Ingredient interfaces */
interface Dough {
protected:
    string name;

public:
    virtual ~Dough() { }
    virtual string toString() { return name; }
};

interface Sauce {
protected:
    string name;

public:
    virtual ~Sauce() { }
    virtual string toString() { return name; }
};

interface Cheese {
protected:
    string name;

public:
    virtual ~Cheese() { }
    virtual string toString() { return name; }
};

interface Veggie {
protected:
    string name;

public:
    virtual ~Veggie() { }
    virtual string toString() { return name; }
};

interface Pepperoni {
protected:
    string name;

public:
    virtual ~Pepperoni() { }
    virtual string toString() { return name; }
};

interface Clams {
protected:
    string name;

public:
    virtual ~Clams() { }
    virtual string toString() { return name; }
};

/* Dough classes */
class ThinCrustDough : public Dough {
public:
    ThinCrustDough() {
        name = "Thin Crush Dough";
    }
};

class ThickCrustDough : public Dough {
public:
    ThickCrustDough() {
        name = "ThickCrust style extra thick crust dough";
    }
};

/* Sauce classes */
class MarinaraSauce : public Sauce {
public:
    MarinaraSauce() {
        name = "Marinara Sauce";
    }
};

class PlumTomatoSauce : public Sauce {
public:
    PlumTomatoSauce() {
        name = "Tomato sauce with plum tomatoes";
    }
};

/* Cheese classes */
class ReggianoCheese : public Cheese {
public:
    ReggianoCheese() {
        name = "Reggiano Cheese";
    }
};

class MozzarellaCheese : public Cheese {
public:
    MozzarellaCheese() {
        name = "Shredded Mozzarella";
    }
};

class ParmesanCheese : public Cheese {
public:
    ParmesanCheese() {
        name = "Shredded Parmesan";
    }
};

/* Veggie classes */
class Garlic : public Veggie {
public:
    Garlic() {
        name = "Garlic";
    }
};

class Onion : public Veggie {
public:
    Onion() {
        name = "Onion";
    }
};

class Mushroom : public Veggie {
public:
    Mushroom() {
        name = "Mushroom";
    }
};

class RedPepper : public Veggie {
public:
    RedPepper() {
        name = "Red Pepper";
    }
};

class BlackOlives : public Veggie {
public:
    BlackOlives() {
        name = "Black Olives";
    }
};

class Spinach : public Veggie {
public:
    Spinach() {
        name = "Spinach";
    }
};

class Eggplant : public Veggie {
public:
    Eggplant() {
        name = "Eggplant";
    }
};

/* Pepperoni classes */
class SlicedPepperoni : public Pepperoni {
public:
    SlicedPepperoni() {
        name = "Sliced Pepperoni";
    }
};

/* Clam classes */
class FreshClams : public Clams {
public:
    FreshClams() {
        name = "Fresh Clams from Long Island Sounds";
    }
};

class FrozenClams : public Clams {
public:
    FrozenClams() {
        name = "Frozen Clams from Chesapeake Bay";
    }
};

