#include "object.h"


// Create the default object
void create_object2d(Object2D *obj) {
  obj->m_coordinates.x = 0;
  obj->m_coordinates.y = 0;
  obj->m_velocity.x = 0;
  obj->m_velocity.y = 0;
}

// Create an object, with initial coordinates
void create_object2d_coordinates(Object2D *obj, float x, float y) {
  obj->m_coordinates.x = x;
  obj->m_coordinates.y = y;
  obj->m_velocity.x = 0;
  obj->m_velocity.y = 0;
}

// Print a 2D object
void print_obj(Object2D *obj) {
  printf("Obj2D - X:%0.3f ~ Y:%0.3f\n", obj->m_coordinates.x, obj->m_coordinates.y);
}