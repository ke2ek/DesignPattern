from abc import ABC, abstractmethod


class Pizza(ABC):
    """ Pizza base class """

    def __init__(self, name=None):
        self._name = name or 'Pizza'
        self._dough = None
        self._sauce = None
        self._veggies = []
        self._cheese = None
        self._pepperoni = None
        self._clams = None

    def __str__(self):
        result = f'---- {self._name} ----\n'

        if self._dough is not None:
            result += str(self._dough) + '\n'

        if self._sauce is not None:
            result += str(self._sauce) + '\n'

        if len(self._veggies) > 0:
            result += ', '.join([str(v) for v in self._veggies])
            result += '\n'

        if self._cheese is not None:
            result += str(self._cheese) + '\n'

        if self._pepperoni is not None:
            result += str(self._pepperoni) + '\n'

        if self._clams is not None:
            result += str(self._clams) + '\n'

        return result

    @abstractmethod
    def prepare(self):
        raise NotImplementedError

    def bake(self):
        print('Bake for 25 minutes at 350.')

    def cut(self):
        print('Cutting the pizza into diagonal slices.')

    def box(self):
        print('Place pizza in official PizzaStore box.')

    def set_name(self, name):
        self._name = name

    def get_name(self):
        return self._name


class CheesePizza(Pizza):
    """ Cheese pizza class """

    def __init__(self, factory):
        super().__init__('Cheese Pizza')
        self._factory = factory

    def prepare(self):
        print('Preparing ...', self._name)
        self._dough = self._factory.create_dough()
        self._sauce = self._factory.create_sauce()
        self._cheese = self._factory.create_cheese()
        self._clams = self._factory.create_clams()


class PepperoniPizza(Pizza):
    """ Pepperoni pizza class """

    def __init__(self, factory):
        super().__init__('Pepperoni Pizza')
        self._factory = factory

    def prepare(self):
        print('Preparing ...', self._name)
        self._dough = self._factory.create_dough()
        self._sauce = self._factory.create_sauce()
        self._cheese = self._factory.create_cheese()
        self._veggies = self._factory.create_veggies()
        self._pepperoni = self._factory.create_pepperoni()


class VeggiePizza(Pizza):
    """ Veggie pizza class """

    def __init__(self, factory):
        super().__init__('Veggie Pizza')
        self._factory = factory

    def prepare(self):
        print('Preparing ...', self._name)
        self._dough = self._factory.create_dough()
        self._sauce = self._factory.create_sauce()
        self._cheese = self._factory.create_cheese()
        self._veggies = self._factory.create_veggies()


class ClamPizza(Pizza):
    """ Clam pizza class """

    def __init__(self, factory):
        super().__init__('Clam Pizza')
        self._factory = factory

    def prepare(self):
        print('Preparing ...', self._name)
        self._dough = self._factory.create_dough()
        self._sauce = self._factory.create_sauce()
        self._cheese = self._factory.create_cheese()
        self._clams = self._factory.create_clams()
        self._veggies = self._factory.create_veggies()
