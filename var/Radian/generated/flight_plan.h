/* This file has been generated from /home/mav/paparazzi/conf/flight_plans/sdplan.xml */
/* Please DO NOT EDIT */

#ifndef FLIGHT_PLAN_H
#define FLIGHT_PLAN_H

#include "std.h"
#include "generated/modules.h"
#define FLIGHT_PLAN_NAME "SDplan"
#define NAV_UTM_EAST0 503186
#define NAV_UTM_NORTH0 3567889
#define NAV_UTM_ZONE0 12
#define NAV_LAT0 322476700 /* 1e7deg */
#define NAV_LON0 1037821848 /* 1e7deg */
#define NAV_ALT0 735000 /* mm above msl */
#define NAV_MSL0 -28150 /* mm, EGM96 geoid-height (msl) over ellipsoid */
#define QFU 0.0
#define WP_dummy 0
#define WP_HOME 1
#define WP_STDBY 2
#define WP_1 3
#define WP_2 4
#define WP_S1 5
#define WP_S2 6
#define WP_CLIMB 7
#define WP__BASELEG 8
#define WP_TD 9
#define WP_AF 10
#define WAYPOINTS { \
 {42.0, 42.0, 765},\
 {0.0, 0.0, 765},\
 {49.5, 20.0, 765},\
 {10.1, 38.0, 765},\
 {132.3, 28.0, 765},\
 {-119.2, 14.0, 765},\
 {150.0, 41.0, 765},\
 {-114.5, 32.0, 765},\
 {168.8, -13.8, 765},\
 {28.8, 50.0, 0.0},\
 {177.4, 45.1, 30.0},\
};
#define WAYPOINTS_LLA { \
 {322480487, 1037826308, 76500}, /* 1e7deg, 1e7deg, cm (hmsl=-28.15m) */ \
 {322476699, 1037821848, 76500}, /* 1e7deg, 1e7deg, cm (hmsl=-28.15m) */ \
 {322478502, 1037827104, 76500}, /* 1e7deg, 1e7deg, cm (hmsl=-28.15m) */ \
 {322480127, 1037822922, 76500}, /* 1e7deg, 1e7deg, cm (hmsl=-28.15m) */ \
 {322479222, 1037835894, 76500}, /* 1e7deg, 1e7deg, cm (hmsl=-28.15m) */ \
 {322477966, 1037809195, 76500}, /* 1e7deg, 1e7deg, cm (hmsl=-28.15m) */ \
 {322480394, 1037837773, 76500}, /* 1e7deg, 1e7deg, cm (hmsl=-28.15m) */ \
 {322479590, 1037809695, 76500}, /* 1e7deg, 1e7deg, cm (hmsl=-28.15m) */ \
 {322475450, 1037839767, 76500}, /* 1e7deg, 1e7deg, cm (hmsl=-28.15m) */ \
 {322481209, 1037824907, 0}, /* 1e7deg, 1e7deg, cm (hmsl=-28.15m) */ \
 {322480763, 1037840682, 3000}, /* 1e7deg, 1e7deg, cm (hmsl=-28.15m) */ \
};
#define NB_WAYPOINT 11
#define NB_BLOCK 11
#define GROUND_ALT 735.
#define GROUND_ALT_CM 73500
#define SECURITY_HEIGHT 1.2
#define SECURITY_ALT 736.2
#define MAX_DIST_FROM_HOME 200.
#ifdef NAV_C

static inline void auto_nav(void) {
  switch (nav_block) {
    Block(0) // Wait GPS
    ; // pre_call
    switch(nav_stage) {
      Stage(0)
        kill_throttle = 1;
        NextStageAndBreak();
        break;
      Label(while_1)
      Stage(1)
        if (! (!(GpsFixValid()))) Goto(endwhile_2) else NextStageAndBreak();
        Stage(2)
          Goto(while_1)
        Label(endwhile_2)
      default:
      Stage(3)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(1) // Geo init
    ; // pre_call
    switch(nav_stage) {
      Label(while_3)
      Stage(0)
        if (! (LessThan(NavBlockTime(),10))) Goto(endwhile_4) else NextStageAndBreak();
        Stage(1)
          Goto(while_3)
        Label(endwhile_4)
      Stage(2)
        if (! (NavSetGroundReferenceHere()))
          NextStageAndBreak();
        break;
      default:
      Stage(3)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(2) // Holding point
    ; // pre_call
    switch(nav_stage) {
      Stage(0)
        kill_throttle = 1;
        NextStageAndBreak();
        break;
      Stage(1)
        {
          NavAttitude(RadOfDeg(0));
          NavVerticalAutoThrottleMode(RadOfDeg(0.000000));
          NavVerticalThrottleMode(9600*(0));
        }
        break;
      default:
      Stage(2)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(3) // Takeoff
    ; // pre_call
    if ((nav_block != 4) && (estimator_z>(ground_alt+25))) { GotoBlock(4); return; }
    switch(nav_stage) {
      Stage(0)
        kill_throttle = 0;
        NextStageAndBreak();
        break;
      Stage(1)
        estimator_flight_time = 0;
        NextStageAndBreak();
        break;
      Stage(2)
        if (NavApproachingFrom(7,1,CARROT)) NextStageAndBreakFrom(7) else {
          NavGotoWaypoint(7);
          NavVerticalAutoThrottleMode(RadOfDeg(15));
          NavVerticalThrottleMode(9600*(1.000000));
        }
        break;
      default:
      Stage(3)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(4) // Standby
    ; // pre_call
    switch(nav_stage) {
      Stage(0)
        NavVerticalAutoThrottleMode(RadOfDeg(0.000000));
        NavVerticalAltitudeMode(WaypointAlt(2), 0.);
        NavCircleWaypoint(2, nav_radius);
        break;
      default:
      Stage(1)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(5) // Line 1-2
    ; // pre_call
    switch(nav_stage) {
      Stage(0)
        if (! (nav_line_init()))
          NextStageAndBreak();
        break;
      Stage(1)
        if (! (nav_line(WP_1, WP_2, nav_radius)))
          NextStageAndBreak();
        break;
      default:
      Stage(2)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(6) // Land Right AF-TD
    ; // pre_call
    switch(nav_stage) {
      Stage(0)
        nav_radius = DEFAULT_CIRCLE_RADIUS;
        NextStageAndBreak();
        break;
      Stage(1)
        GotoBlock(7);
        break;
      default:
      Stage(2)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(7) // land
    ; // pre_call
    switch(nav_stage) {
      Stage(0)
        if (! (nav_compute_baseleg(WP_AF, WP_TD, WP__BASELEG, nav_radius)))
          NextStageAndBreak();
        break;
      Stage(1)
        NavVerticalAutoThrottleMode(RadOfDeg(0.000000));
        NavVerticalAltitudeMode(WaypointAlt(8), 0.);
        NavCircleWaypoint(8, nav_radius);
        if ((NavCircleCount()>0.500000)) NextStageAndBreak();
        break;
      Stage(2)
        NavVerticalAutoThrottleMode(RadOfDeg(0.000000));
        NavVerticalAltitudeMode(WaypointAlt(8), 0.);
        NavCircleWaypoint(8, nav_radius);
        if (And(NavQdrCloseTo((DegOfRad(baseleg_out_qdr)-((nav_radius/fabs(nav_radius))*10))),(10>fabs((estimator_z-WaypointAlt(WP__BASELEG)))))) NextStageAndBreak();
        break;
      default:
      Stage(3)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(8) // final
    ; // pre_call
    if ((nav_block != 9) && ((ground_alt+10)>estimator_z)) { GotoBlock(9); return; }
    switch(nav_stage) {
      Stage(0)
        if (NavApproachingFrom(9,10,CARROT)) NextStageAndBreakFrom(9) else {
          NavSegment(10, 9);
          NavVerticalAutoThrottleMode(RadOfDeg(0.000000));
          NavGlide(10, 9);
        }
        break;
      default:
      Stage(1)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(9) // flare
    ; // pre_call
    switch(nav_stage) {
      Stage(0)
        if (NavApproachingFrom(9,10,0)) NextStageAndBreakFrom(9) else {
          NavSegment(10, 9);
          NavVerticalAutoThrottleMode(RadOfDeg(0.000000));
          NavVerticalThrottleMode(9600*(0.000000));
        }
        break;
      Stage(1)
        if (FALSE) NextStageAndBreak() else {
          NavAttitude(RadOfDeg(0.000000));
          NavVerticalAutoThrottleMode(RadOfDeg(0.000000));
          NavVerticalThrottleMode(9600*(0.000000));
        }
        break;
      default:
      Stage(2)
        NextBlock();
        break;
    }
    ; // post_call
    break;

    Block(10) // HOME
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
