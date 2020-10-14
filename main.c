#include <stdio.h>
#include "log.h"
#include "object.h"
#include "world.h"
#include "phys.h"

int main() {
  World2D world;
  create_world(&world);
  const size_t num_objs = 1000;
  Object2D objs[num_objs];

  for (size_t i = 0; i < num_objs; i++) {
    create_object2d_coordinates(&objs[i], 5, 0);
    add_obj2d(&world, &objs[i]);
  }

  for (size_t i = 0; i < 1e3; i++) {
    evaluate(&world);
  }
  print_world(&world);
  cheat_print();
}