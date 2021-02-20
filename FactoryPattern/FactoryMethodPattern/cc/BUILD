load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "pizza",
    srcs = ["Pizza.h"],
)

cc_library(
    name = "pizza_store",
    srcs = ["PizzaStore.h"],
    deps = [":pizza"],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [":pizza_store"],
)
