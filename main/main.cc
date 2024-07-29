#include <iostream>

#include "../scenes/checkered_spheres_scene.h"
#include "../scenes/cornell_box_scene.h"
#include "../scenes/cornell_box_smoke_scene.h"
#include "../scenes/earth_scene.h"
#include "../scenes/final_scene.h"
#include "../scenes/perlin_spheres_scene.h"
#include "../scenes/quads_scene.h"
#include "../scenes/random_sphere_scene.h"
#include "../scenes/simple_light_scene.h"
#include "../scenes/three_orb_scene.h"

const int image_width = 800;
const int samples_per_pixel = 1000;
const int max_depth = 50;

const std::string_view scene_string = "Scenes:\n\
     1 => Three Orb\n\
     2 => Random Sphere\n\
     3 => Checkered Spheres\n\
     4 => Earth\n\
     5 => Perlin Spheres\n\
     6 => Quads\n\
     7 => Simple Light Scene\n\
     8 => Cornell Box Scene\n\
     9 => Cornell Box Smoke Scene\n\
    10 => Final Scene Large\n\
    11 => Final Scene small\n";

int main() {
  int scene_number;
  std::clog << scene_string;
  std::clog << "Please Select a scene: ";
  std::cin >> scene_number;
  switch (scene_number) {
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

  case 7:
    simple_light_scene(image_width, samples_per_pixel, max_depth);
    break;

  case 8:
    cornell_box_scene(image_width, samples_per_pixel, max_depth);
    break;

  case 9:
    cornell_smoke_scene(image_width, samples_per_pixel, max_depth);
    break;

  case 10:
    final_scene(800, 10000, 40);
    break;
  case 11:
    final_scene(400, 250, 4);
    break;

  default:
    std::clog << "Invalid Scene Selected\n";
    break;
  }

  return 0;
}
