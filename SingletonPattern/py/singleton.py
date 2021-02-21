# https://wikidocs.net/3693

class Singleton(object):
    __instance = None

    def __new__(cls, *args, **kwargs):
        if not isinstance(cls.__instance, cls):
            cls.__instance = object.__new__(cls, *args, **kwargs)
        return cls.__instance

    @classmethod
    def get_instance(cls):
        return cls.__instance

