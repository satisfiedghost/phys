#include "world.h"
#include <stdlib.h>

void create_world(World2D* world) {
  world->m_objs_2d = NULL;
  world->m_num_objs = 0;
}

void print_world(World2D* world) {
  printf("Printing the world!\n");
  for (size_t i = 0; i < world->m_num_objs; ++i) {
    printf("Object %ld: ", i);
    print_obj(&world->m_objs_2d[i]);
  }
}

void add_obj2d(World2D* world, Object2D* obj) {
  Object2D* ptr = (Object2D*)realloc(world->m_objs_2d, (world->m_num_objs + 1) * sizeof(Object2D));
  world->m_objs_2d = ptr;
  world->m_objs_2d[world->m_num_objs] = *obj;
  ++(world->m_num_objs);
}