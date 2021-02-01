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

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [":weatherdata"],
)
