""" Base class """
class Ingredient:
    def __str__(self):
        return self._name

""" Dough classes """
class Dough(Ingredient):
    pass


class ThinCrustDough(Dough):
    def __init__(self):
        self._name = 'Thin Crush Dough'


class ThickCrustDough(Dough):
    def __init__(self):
        self._name = 'ThickCrust style extra thick crust dough'

""" Sauce classes """
class Sauce(Ingredient):
    pass


class MarinaraSauce(Sauce):
    def __init__(self):
        self._name = 'Marinara Sauce'


class PlumTomatoSauce(Sauce):
    def __init__(self):
        self._name = 'Tomato sauce with plum tomatoes'

""" Cheese classes """
class Cheese(Ingredient):
    pass


class ReggianoCheese(Cheese):
    def __init__(self):
        self._name = 'Reggiano Cheese'


class MozzarellaCheese(Cheese):
    def __init__(self):
        self._name = 'Shredded Mozzarella'


class ParmesanCheese(Cheese):
    def __init__(self):
        self._name = 'Shredded Parmesan'

""" Veggie classes """
class Veggie(Ingredient):
    pass


class Garlic(Veggie):
    def __init__(self):
        self._name = 'Garlic'


class Onion(Veggie):
    def __init__(self):
        self._name = 'Onion'


class Mushroom(Veggie):
    def __init__(self):
        self._name = 'Mushroom'


class RedPepper(Veggie):
    def __init__(self):
        self._name = 'Red Pepper'


class BlackOlives(Veggie):
    def __init__(self):
        self._name = 'Black Olives'


class Spinach(Veggie):
    def __init__(self):
        self._name = 'Spinach'


class Eggplant(Veggie):
    def __init__(self):
        self._name = 'Eggplant'

""" Pepperoni classes """
class Pepperoni(Ingredient):
    pass


class SlicedPepperoni(Pepperoni):
    def __init__(self):
        self._name = 'Sliced Pepperoni'

""" Clams classes """
class Clams(Ingredient):
    pass


class FreshClams(Clams):
    def __init__(self):
        self._name = 'Fresh Clams from Long Island Sounds'


class FrozenClams(Clams):
    def __init__(self):
        self._name = 'Frozen Clams from Chesapeake Bay'

