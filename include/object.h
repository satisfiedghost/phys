#ifndef OBJECT2D
#define OBJECT2D
#include <stdio.h>
// 2D coordinate space
typedef struct Coordinates2D {
  float x;
  float y;
}Coordinates2D;

// An object's velocity, in 2D space.
typedef struct Velocity2D {
  float x;
  float y;
}Velocity2D;

// A point object, in 2D space
typedef struct Object2D {
  Coordinates2D m_coordinates;
  Velocity2D m_velocity;
}Object2D;

// Create the default object
void create_object2d(Object2D *obj);

// Create an object, with initial coordinates
void create_object2d_coordinates(Object2D *obj, float x, float y);

// Print a 2D object
void print_obj(Object2D *obj);
#endif