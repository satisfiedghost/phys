#ifndef WORLD
#define WORLD
// An abstraction of a world, and everything in it.
#include "object.h"
#include <stdint.h>

typedef struct World2D{
  size_t m_num_objs;  // < Do you really need a comment for this one?
  Object2D* m_objs_2d; // < A list of all objects in this world.
}World2D;

// Add an object to the world
void add_obj2d(World2D* world, Object2D* obj);

// Create an empty world
void create_world(World2D* world);

// Print the world
void print_world(World2D *world);
#endif