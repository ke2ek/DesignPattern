load("@rules_python//python:defs.bzl", "py_binary", "py_library")

py_library(
    name = "beverage",
    srcs = ["beverage.py"],
)

py_library(
    name = "decorator",
    srcs = ["decorator.py"],
    deps = [":beverage"],
)

py_binary(
    name = "main",
    srcs = ["main.py"],
    deps = [":decorator"],
)
