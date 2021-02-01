load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "interface",
    srcs = ["Interface.h"],
)

cc_library(
    name = "weatherdata",
    srcs = ["WeatherData.cc"],
    hdrs = ["WeatherData.h"],
    deps = [":interface"],
)

cc_library(
    name = "display",
    srcs = ["Display.cc"],
    hdrs = ["Display.h"],
    deps = [":weatherdata"],
)

cc_binary(
    name = "main",
    srcs = ["WeatherDataStation.cc"],
    deps = [
        ":display",
    ],
)

