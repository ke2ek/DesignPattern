from pizza_store import NYPizzaStore, ChicagoPizzaStore


def main():
    ny_store = NYPizzaStore()
    chicago_store = ChicagoPizzaStore()

    def order(store, item, who):
        pizza = store.order_pizza(item)
        print(who, 'ordered a', pizza.get_name())
        print(pizza)
        del pizza

    order(ny_store, 'cheese', 'Ethan')
    order(chicago_store, 'cheese', 'Joel')

    order(ny_store, 'clam', 'Ethan')
    order(chicago_store, 'clam', 'Joel')

    order(ny_store, 'veggie', 'Ethan')
    order(chicago_store, 'veggie', 'Joel')

    order(ny_store, 'pepperoni', 'Ethan')
    order(chicago_store, 'pepperoni', 'Joel')


if __name__ == '__main__':
    main()
