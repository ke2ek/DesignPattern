load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "singleton",
    srcs = ["Singleton.cc"],
    hdrs = ["Singleton.h"],
)

cc_binary(
    name = "main",
    srcs = ["main.cc"],
    deps = [":singleton"],
)

