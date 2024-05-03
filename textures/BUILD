load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "textures",
    srcs = [
        "checker_texture.h",
        "image_texture.h",
        "noise_texture.h",
        "texture.h",
    ],
    visibility = ["//visibility:public"],
    deps = [
        "//extras:perlin",
        "//extras:rtweekend",
    ],
)
