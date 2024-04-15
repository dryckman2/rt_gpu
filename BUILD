cc_binary(
    name = "rtx",
    srcs = [
        "camera.h",
        "main.cc",
    ],
    deps = [
        "scenes",
    ],
)

cc_library(
    name = "scenes",
    srcs = [
        "scenes/checkered_spheres.h",
        "scenes/earth_scene.h",
        "scenes/perlin_spheres_scene.h",
        "scenes/quads_scene.h",
        "scenes/random_sphere_scene.h",
        "scenes/three_orb_scene.h",
    ],
    deps = [
        "hittables",
        "materials",
        "rtweekend",
        "texture",
    ],
)

cc_library(
    name = "hittables",
    srcs = [
        "hittables/bvh.h",
        "hittables/hittable.h",
        "hittables/hittable_list.h",
        "hittables/quad.h",
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
        "materials/dielectric.h",
        "materials/lambertian.h",
        "materials/material.h",
        "materials/metal.h",
    ],
    deps = [
        "math_structures",
        "texture",
    ],
)

cc_library(
    name = "texture",
    srcs = [
        "textures/checker_texture.h",
        "textures/image_texture.h",
        "textures/noise_texture.h",
        "textures/texture.h",
    ],
    deps = [
        "perlin",
        "rtweekend",
    ],
)

cc_library(
    name = "perlin",
    srcs = ["perlin.h"],
)

cc_library(
    name = "math_structures",
    srcs = [
        "math_structures/aabb.h",
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
        "rtw_stb_image.h",
        "rtweekend.h",
    ],
    deps = ["external_extension"],
)

cc_library(
    name = "external_extension",
    srcs = [
        "external_extension/stb_image.h",
    ],
)
