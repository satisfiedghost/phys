// Physics functions
#include "world.h"
#include "object.h"

//#define FREE_RUNNING

static const float RESOLUTION_US = 1000;

static const float MS_IN_S = 1e3;
static const float US_IN_S = 1e6;
static const float NS_IN_MS = 1e6;
static const float NS_IN_US = 1e3;
static const float GRAVITY_ACCEL = -9.81; // m / s / s

// Run a physics simluation for each object in world.
// Objects are simulated discretely in increments of "RESOLUTION_MS"
void evaluate(World2D *world);

void cheat_print();