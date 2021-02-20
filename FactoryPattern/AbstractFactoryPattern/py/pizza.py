import abc

''' Pizza class '''
class Pizza(abc.ABC):

    def prepare(self):
        print(f'Preparing {self._name}')
        print(f'Tossing dough... {self._dough}')
        print(f'Adding sauce... {self._sauce}')
        print('Adding toppings... {' '.join(self._toppings)}')

    def bake(self):
        print('Bake for 25 minutes at 350.')

    def cut(self):
        print('Cutting the pizza into diagonal slices.')

    def box(self):
        print('Place pizza in official PizzaStore box.')

    def get_name(self):
        return self._name

''' NY Style Pizza '''
class NYStyleCheesePizza(Pizza):
    def __init__(self):
        self._name = 'NY Style Sauce and Cheese Pizza'
        self._dough = 'Thin Crust Dough'
        self._sauce = 'Marinara Sauce'
        self._toppings = ['Grated Reggiano Cheese']


class NYStyleVeggiePizza(Pizza):
    def __init__(self):
        self._name = 'NY Style Sauce and Veggie Pizza'
        self._dough = 'Thin Crust Dough'
        self._sauce = 'Marinara Sauce'
        self._toppings = ['Grated Reggiano Cheese']


class NYStyleClamPizza(Pizza):
    def __init__(self):
        self._name = 'NY Style Sauce and Clam Pizza'
        self._dough = 'Thin Crust Dough'
        self._sauce = 'Marinara Sauce'
        self._toppings = ['Grated Reggiano Cheese']


class NYStylePepperoniPizza(Pizza):
    def __init__(self):
        self._name = 'NY Style Sauce and Pepperoni Pizza'
        self._dough = 'Thin Crust Dough'
        self._sauce = 'Marinara Sauce'
        self._toppings = ['Grated Reggiano Cheese']

''' Chicago Style Pizza '''
class ChicagoStyleCheesePizza(Pizza):
    def __init__(self):
        self._name = 'Chicago Style Deep Dish Cheese Pizza'
        self._dough = 'Extra Thick Crust Dough'
        self._sauce = 'Plum Tomato Sauce'
        self._toppings = ['Shredded Mozzarella Cheese']

    def cut(self):
        print('Cutting the pizza into square slices.')


class ChicagoStyleVeggiePizza(Pizza):
    def __init__(self):
        self._name = 'Chicago Style Deep Dish Veggie Pizza'
        self._dough = 'Extra Thick Crust Dough'
        self._sauce = 'Plum Tomato Sauce'
        self._toppings = ['Shredded Mozzarella Cheese']


class ChicagoStyleClamPizza(Pizza):
    def __init__(self):
        self._name = 'Chicago Style Deep Dish Clam Pizza'
        self._dough = 'Extra Thick Crust Dough'
        self._sauce = 'Plum Tomato Sauce'
        self._toppings = ['Shredded Mozzarella Cheese']

    def cut(self):
        print('Cutting the pizza into vertical slices.')


class ChicagoStylePepperoniPizza(Pizza):
    def __init__(self):
        self._name = 'Chicago Style Deep Dish Pepperoni Pizza'
        self._dough = 'Extra Thick Crust Dough'
        self._sauce = 'Plum Tomato Sauce'
        self._toppings = ['Shredded Mozzarella Cheese']

    def cut(self):
        print('Cutting the pizza into horizontal slices.')

