from pizza_store import NYPizzaStore, ChicagoPizzaStore


def main():
    ny_store = NYPizzaStore()
    chicago_store = ChicagoPizzaStore()

    pizza = ny_store.order_pizza('cheese')
    print(f'Ethan ordered a {pizza.get_name()}.')
    del pizza

    pizza = chicago_store.order_pizza('pepperoni')
    print(f'Joel ordered a {pizza.get_name()}.')
    del pizza


if __name__ == '__main__':
    main()
