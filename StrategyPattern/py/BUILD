load("@rules_python//python:defs.bzl", "py_binary", "py_library")

py_library(
    name = "behavior",
    srcs = ["behavior.py"],
)

py_library(
    name = "fly_behavior",
    srcs = ["fly_behavior.py"],
    deps = [":behavior"],
)

py_library(
    name = "quack_behavior",
    srcs = ["quack_behavior.py"],
    deps = [":behavior"],
)

py_library(
    name = "duck",
    srcs = ["duck.py"],
    deps = [
        ":fly_behavior",
        ":quack_behavior",
    ],
)

py_binary(
    name = "main",
    srcs = ["main.py"],
    deps = [":duck"],
)
