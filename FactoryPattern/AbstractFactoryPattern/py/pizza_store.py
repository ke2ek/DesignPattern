from abc import ABC, abstractmethod

from pizza import CheesePizza
from pizza import ClamPizza
from pizza import VeggiePizza
from pizza import PepperoniPizza
from pizza_ingredient_factory import NYPizzaIngredientFactory
from pizza_ingredient_factory import ChicagoPizzaIngredientFactory


class PizzaStore(ABC):
    """ Pizza store base class """

    @abstractmethod
    def _create_pizza(self, item):
        raise NotImplementedError

    def order_pizza(self, item):
        pizza = self._create_pizza(item)
        print('--- Making a', pizza.get_name(), '---')
        pizza.prepare()
        pizza.bake()
        pizza.cut()
        pizza.box()
        return pizza


class NYPizzaStore(PizzaStore):
    """ NY style pizza store class """

    def _create_pizza(self, item):
        pizza = None
        factory = NYPizzaIngredientFactory()

        if item == 'cheese':
            pizza = CheesePizza(factory)
            pizza.set_name('New York Style Cheese Pizza')
        elif item == 'veggie':
            pizza = VeggiePizza(factory)
            pizza.set_name('New York Style Veggie Pizza')
        elif item == 'clam':
            pizza = ClamPizza(factory)
            pizza.set_name('New York Style Clam Pizza')
        elif item == 'pepperoni':
            pizza = PepperoniPizza(factory)
            pizza.set_name('New York Style Pepperoni Pizza')

        return pizza


class ChicagoPizzaStore(PizzaStore):
    """ Chicago style pizza store class """
    
    def _create_pizza(self, item):
        pizza = None
        factory = ChicagoPizzaIngredientFactory()

        if item == 'cheese':
            pizza = CheesePizza(factory)
            pizza.set_name('Chicago Style Cheese Pizza')
        elif item == 'veggie':
            pizza = VeggiePizza(factory)
            pizza.set_name('Chicago Style Veggie Pizza')
        elif item == 'clam':
            pizza = ClamPizza(factory)
            pizza.set_name('Chicago Style Clam Pizza')
        elif item == 'pepperoni':
            pizza = PepperoniPizza(factory)
            pizza.set_name('Chicago Style Pepperoni Pizza')

        return pizza
