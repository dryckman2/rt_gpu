load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_binary(
    name = "main",
    srcs = [
        "main.cc",
    ],
    deps = [
        "//extras:rtweekend",
        "//main:camera",
        "//scenes",
    ],
)

cc_library(
    name = "camera",
    srcs = ["camera.h"],
)
