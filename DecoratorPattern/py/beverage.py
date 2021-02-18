from abc import ABC, abstractmethod


class Beverage(ABC):
    TALL = 1
    GRANDE = 2
    VENTI = 3
    
    def __init__(self):
        self._description = 'Unknown Beverage'
        self._size = Beverage.TALL

    def set_size(self, size):
        self._size = size

    def get_description(self):
        return self._description

    @abstractmethod
    def get_size(self):
        raise NotImplementedError

    @abstractmethod
    def cost(self):
        raise NotImplementedError


class Espresso(Beverage):
    
    def __init__(self):
        self._description = 'Espresso Coffee'

    def get_size(self):
        return self._size

    def cost(self):
        return 1.99


class HouseBlend(Beverage):

    def __init__(self):
        self._description = 'House Blend Coffee'

    def get_size(self):
        return self._size

    def cost(self):
        return 0.89


class DarkRoast(Beverage):

    def __init__(self):
        self._description = 'Dark Roast Coffee'

    def get_size(self):
        return self._size

    def cost(self):
        return 0.99

