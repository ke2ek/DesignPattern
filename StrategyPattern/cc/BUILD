load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "behaviors",
    srcs = ["behaviors.h"],
)

cc_library(
    name = "ducks",
    srcs = ["ducks.h"],
    deps = [":behaviors"],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [":ducks"],
)
