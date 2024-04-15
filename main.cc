#include <iostream>

#include "rtweekend.h"

#include "scenes/three_orb_scene.h"
#include "scenes/random_sphere_scene.h"
#include "scenes/checkered_spheres.h"
#include "scenes/earth_scene.h"
#include "scenes/perlin_spheres_scene.h"
#include "scenes/quads_scene.h"

const int image_width = 800;
const int samples_per_pixel = 100;
const int max_depth = 50;

int main()
{
    int scene_number;
    std::clog << "Scenes:\n\
    1 => Three Orb\n\
    2 => Random Sphere\n\
    3 => Checkered Spheres\n\
    4 => Earth\n\
    5 => Perlin Spheres\n\
    6 => Quads\n ";
    std::clog
        << "Please Select a scene: ";
    std::cin >> scene_number;
    switch (scene_number)
    {
    case 1:
        three_orb_scene(image_width, samples_per_pixel, max_depth);
        break;

    case 2:
        random_sphere_scene(image_width, samples_per_pixel, max_depth);
        break;

    case 3:
        checkered_spheres(image_width, samples_per_pixel, max_depth);
        break;

    case 4:
        earth_scene(image_width, samples_per_pixel, max_depth);
        break;

    case 5:
        perlin_spheres_scene(image_width, samples_per_pixel, max_depth);
        break;

    case 6:
        quads_scene(image_width, samples_per_pixel, max_depth);
        break;
    default:
        std::clog << "Invalid Scene Selected\n";
        break;
    }

    return 0;
}