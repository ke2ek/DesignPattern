from beverage import Beverage


class CondimentDecorator(Beverage):
    pass


class Mocha(CondimentDecorator):

    def __init__(self, beverage):
        self.__beverage = beverage

    def cost(self):
        return 0.20 + self.__beverage.cost()
    
    def get_description(self):
        return self.__beverage.get_description() + ', Mocha'

    def get_size(self):
        return self.__beverage.get_size()


class Soy(CondimentDecorator):

    def __init__(self, beverage):
        self.__beverage = beverage

    def cost(self):
        cost = self.__beverage.cost()
        if self.get_size() == Beverage.TALL:
            cost += 0.10
        elif self.get_size() == Beverage.GRANDE:
            cost += 0.15
        else:
            cost += 0.20
        return cost

    def get_description(self):
        return self.__beverage.get_description() + ', Soy'

    def get_size(self):
        return self.__beverage.get_size()


class Whip(CondimentDecorator):

    def __init__(self, beverage):
        self.__beverage = beverage

    def cost(self):
        return 0.10 + self.__beverage.cost()

    def get_description(self):
        return self.__beverage.get_description() + ', Whip'

    def get_size(self):
        return self.__beverage.get_size()

