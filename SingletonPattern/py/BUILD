load("@rules_python//python:defs.bzl", "py_binary", "py_library")

py_library(
    name = "interface",
    srcs = ["interface.py"],
)

py_library(
    name = "weather_data",
    srcs = ["weather_data.py"],
    deps = [":interface"]
)

py_library(
    name = "display",
    srcs = ["display.py"],
    deps = [
        ":interface",
        ":weather_data"
    ],
)

py_binary(
    name = "main",
    srcs = ["main.py"],
    deps = [":display"]
)

