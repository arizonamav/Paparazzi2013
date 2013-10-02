/* This file has been generated from /home/mav/paparazzi/conf/flight_plans/dummy.xml */
/* Please DO NOT EDIT */

#ifndef FLIGHT_PLAN_H
#define FLIGHT_PLAN_H

#include "std.h"
#include "generated/modules.h"
#define FLIGHT_PLAN_NAME "Dummy"
#define NAV_UTM_EAST0 360285
#define NAV_UTM_NORTH0 4813595
#define NAV_UTM_ZONE0 31
#define NAV_LAT0 434622300 /* 1e7deg */
#define NAV_LON0 12728900 /* 1e7deg */
#define NAV_ALT0 185000 /* mm above msl */
#define NAV_MSL0 51850 /* mm, EGM96 geoid-height (msl) over ellipsoid */
#define QFU 270.0
#define WP_dummy 0
#define WP_HOME 1
#define WAYPOINTS { \
 {42.0, 42.0, 250},\
 {0.0, 120.0, 250.},\
};
#define WAYPOINTS_LLA { \
 {434626158, 12733981, 25000}, /* 1e7deg, 1e7deg, cm (hmsl=51.85m) */ \
 {434633100, 12728592, 25000}, /* 1e7deg, 1e7deg, cm (hmsl=51.85m) */ \
};
#define NB_WAYPOINT 2
#define NB_BLOCK 1
#define GROUND_ALT 185.
#define GROUND_ALT_CM 18500
#define SECURITY_HEIGHT 25.
#define SECURITY_ALT 210.
#define MAX_DIST_FROM_HOME 1000.
#ifdef NAV_C

static inline void auto_nav(void) {
  switch (nav_block) {
    Block(0) // HOME
    ; // pre_call
    switch(nav_stage) {
      Stage(0)
        nav_home();
        break;
      default:
      Stage(1)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    default: break;
  }
}
#endif // NAV_C

#endif // FLIGHT_PLAN_H
