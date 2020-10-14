#include "phys.h"
#include <time.h>
#include <stdlib.h>

typedef struct timespec wait_t;

static long t = 0;
// Just does gravity, for now.
void evaluate(World2D* world) {
  for (size_t i = 0; i < world->m_num_objs; ++i) {
    Velocity2D *v_vector = &world->m_objs_2d[i].m_velocity;
    Coordinates2D *pos = &world->m_objs_2d[i].m_coordinates;
    // in one static step it would then have...
    pos->y += v_vector->y * (RESOLUTION_US / US_IN_S);
    v_vector->y += GRAVITY_ACCEL * (RESOLUTION_US / US_IN_S);
  }
  #ifndef FREE_RUNNING
  // simulate passing time
  wait_t wait;
  wait_t unused;
  wait.tv_nsec = NS_IN_US * RESOLUTION_US;
  t += wait.tv_nsec;
  nanosleep((const struct timespec*)&wait, &unused);
  #endif
}

void cheat_print() {
  printf("%f seconds have passed.\n", t / 1e9);
}