from singleton import Singleton


def main():
    singleton = Singleton()
    print('Address =', hex(id(singleton)))
    instance = Singleton.get_instance()
    print('Address =', hex(id(instance)))


if __name__ == '__main__':
    main()
