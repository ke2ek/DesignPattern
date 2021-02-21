from abc import ABC, abstractmethod

from ingredient import *


class PizzaIngredientFactory(ABC):
    @abstractmethod
    def create_dough(self):
        raise NotImplementedError

    @abstractmethod
    def create_sauce(self):
        raise NotImplementedError

    @abstractmethod
    def create_cheese(self):
        raise NotImplementedError

    @abstractmethod
    def create_veggies(self):
        raise NotImplementedError

    @abstractmethod
    def create_pepperoni(self):
        raise NotImplementedError

    @abstractmethod
    def create_clams(self):
        raise NotImplementedError


class NYPizzaIngredientFactory(PizzaIngredientFactory):
    
    def create_dough(self):
        return ThinCrustDough()

    def create_sauce(self):
        return MarinaraSauce()

    def create_cheese(self):
        return ReggianoCheese()

    def create_veggies(self):
        return [Garlic(), Onion(), Mushroom(), RedPepper()]

    def create_pepperoni(self):
        return SlicedPepperoni()

    def create_clams(self):
        return FreshClams()


class ChicagoPizzaIngredientFactory(PizzaIngredientFactory):

    def create_dough(self):
        return ThickCrustDough()

    def create_sauce(self):
        return PlumTomatoSauce()

    def create_cheese(self):
        return MozzarellaCheese()

    def create_veggies(self):
        return [BlackOlives(), Spinach(), Eggplant()]

    def create_pepperoni(self):
        return SlicedPepperoni()

    def create_clams(self):
        return FrozenClams()

