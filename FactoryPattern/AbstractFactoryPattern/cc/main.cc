#include "PizzaStore.h"

void order(PizzaStore* store, const string& item, const string& who) {
    Pizza* pizza = store->orderPizza(item);
    cout << who << " ordered a " << pizza->getName() << endl;
    cout << pizza->toString() << endl;
    delete pizza;
}

int main() {
    PizzaStore* nyStore = new NYPizzaStore();
    PizzaStore* chicagoStore = new ChicagoPizzaStore();

    order(nyStore, "cheese", "Ethan");
    order(chicagoStore, "cheese", "Joel");

    order(nyStore, "clam", "Ethan");
    order(chicagoStore, "clam", "Joel");

    order(nyStore, "veggie", "Ethan");
    order(chicagoStore, "veggie", "Joel");

    order(nyStore, "pepperoni", "Ethan");
    order(chicagoStore, "pepperoni", "Joel");

    return 0;
}
