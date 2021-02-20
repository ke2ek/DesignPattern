from abc import ABC, abstractmethod

from pizza import *


class PizzaStore(ABC):
    
    @abstractmethod
    def _create_pizza(self, item):
        raise NotImplementedError

    def order_pizza(self, item):
        pizza = self._create_pizza(item)
        pizza.prepare()
        pizza.bake()
        pizza.cut()
        pizza.box()
        return pizza


class NYPizzaStore(PizzaStore):

    def _create_pizza(self, item):
        if item == 'cheese':
            return NYStyleCheesePizza()
        elif item == 'veggie':
            return NYStyleVeggiePizza()
        elif item == 'clam':
            return NYStyleClamPizza()
        elif item == 'pepperoni':
            return NYStylePepperoniPizza()
        return None


class ChicagoPizzaStore(PizzaStore):
    
    def _create_pizza(self, item):
        if item == 'cheese':
            return ChicagoStyleCheesePizza() 
        elif item == 'veggie':
            return ChicagoStyleVeggiePizza
        elif item == 'clam':
            return ChicagoStyleClamPizza()
        elif item == 'pepperoni':
            return ChicagoStylePepperoniPizza()
        return None

