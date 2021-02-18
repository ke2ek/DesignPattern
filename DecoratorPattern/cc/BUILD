load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "beverage",
    srcs = ["Beverage.h"],
)

cc_library(
    name = "decorator",
    srcs = ["Decorator.h"],
    deps = [":beverage"],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [":decorator"],
)
