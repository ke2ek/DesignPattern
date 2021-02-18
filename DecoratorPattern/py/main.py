from decorator import *
from beverage import *


def main():
    espresso = Espresso()
    print(espresso.get_description() + ' $' + str(espresso.cost()))

    dark_roast = DarkRoast()
    dark_roast.set_size(Beverage.GRANDE)
    dark_roast = Mocha(dark_roast)
    dark_roast = Soy(dark_roast)
    dark_roast = Whip(dark_roast)
    print(dark_roast.get_description() + ' $' + str(dark_roast.cost()))

    house_blend = HouseBlend()
    house_blend.set_size(Beverage.VENTI)
    house_blend = Soy(house_blend)
    house_blend = Mocha(house_blend)
    house_blend = Whip(house_blend)
    print(house_blend.get_description() + ' $' + str(house_blend.cost()))


if __name__ == '__main__':
    main()

