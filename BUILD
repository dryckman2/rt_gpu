cc_binary(
    name = "rtx",
    srcs = ["main.cc"],
    deps = ["math_structures",
    "hittables"],
)

cc_library(
    name = "math_structures",
    srcs = ["math_structures/vec3.h",
            "math_structures/color.h",
            "math_structures/ray.h"],
)

cc_library(
    name = "hittables",
    srcs = [
        "hittables/hittable_list.h","hittables/hittable.h","hittables/sphere.h"
    ]
)