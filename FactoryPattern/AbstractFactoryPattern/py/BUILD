load("@rules_python//python:defs.bzl", "py_binary", "py_library")

py_library(
    name = "pizza",
    srcs = ["pizza.py"],
)

py_library(
    name = "pizza_store",
    srcs = ["pizza_store.py"],
    deps = [":pizza"],
)

py_binary(
    name = "main",
    srcs = ["main.py"],
    deps = [":pizza_store"],
)
