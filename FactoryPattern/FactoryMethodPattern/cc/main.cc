#include "PizzaStore.h"

int main() {
    PizzaStore* nyStore = new NYPizzaStore();
    PizzaStore* chicagoStore = new ChicagoPizzaStore();

    Pizza* pizza = nyStore->orderPizza("cheese");
    cout << "Ethan ordered a " << pizza->getName() << endl;
    delete pizza;

    pizza = chicagoStore->orderPizza("pepperoni");
    cout << "Joel ordered a " << pizza->getName() << endl;
    delete pizza;

    return 0;
}
