cc_binary(
    name = "rtx",
    srcs = [
        "camera.h",
        "main.cc",
    ],
    deps = [
        "hittables",
        "math_structures",
        "rtweekend",
    ],
)

cc_library(
    name = "hittables",
    srcs = [
        "hittables/hittable.h",
        "hittables/hittable_list.h",
        "hittables/sphere.h",
    ],
    deps = [
        "materials",
        "rtweekend",
    ],
)

cc_library(
    name = "materials",
    srcs = [
        "materials/lambertian.h",
        "materials/material.h",
        "materials/metal.h",
    ],
    deps = ["math_structures"],
)

cc_library(
    name = "math_structures",
    srcs = [
        "math_structures/color.h",
        "math_structures/interval.h",
        "math_structures/ray.h",
        "math_structures/vec3.h",
    ],
    deps = ["rtweekend"],
)

cc_library(
    name = "rtweekend",
    srcs = [
        "rtweekend.h",
    ],
)
