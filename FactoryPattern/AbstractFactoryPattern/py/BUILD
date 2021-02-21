load("@rules_python//python:defs.bzl", "py_binary", "py_library")

py_library(
    name = "ingredient",
    srcs = ["ingredient.py"],
)

py_library(
    name = "factory",
    srcs = ["pizza_ingredient_factory.py"],
    deps = [":ingredient"],
)

py_library(
    name = "pizza",
    srcs = ["pizza.py"],
    deps = [":factory"]
)

py_library(
    name = "pizza_store",
    srcs = ["pizza_store.py"],
    deps = [
        ":factory",
        ":pizza",
    ],
)

py_binary(
    name = "main",
    srcs = ["main.py"],
    deps = [":pizza_store"],
)

