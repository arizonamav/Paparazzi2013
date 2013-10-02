/* This file has been generated from /home/mav/paparazzi/conf/airframes/UniversityOfArizona/radian_L2.xml */
/* Please DO NOT EDIT */

#ifndef MODULES_H
#define MODULES_H

#define MODULES_IDLE  0
#define MODULES_RUN   1
#define MODULES_START 2
#define MODULES_STOP  3

#ifdef MODULES_C
#define EXTERN_MODULES
#else
#define EXTERN_MODULES extern
#endif
#include "std.h"
#include "gps/gps_ubx_ucenter.h"

#define GPS_UBX_UCENTER_PERIODIC_PERIOD 0.250000
#define GPS_UBX_UCENTER_PERIODIC_FREQ 4.000000

EXTERN_MODULES uint8_t gps_ubx_gps_ubx_ucenter_periodic_status;

#ifdef MODULES_C

static inline void modules_init(void) {
  gps_ubx_ucenter_init();
  gps_ubx_gps_ubx_ucenter_periodic_status = MODULES_START;
}

static inline void modules_periodic_task(void) {
  static uint8_t i15; i15++; if (i15>=15) i15=0;

  if (gps_ubx_gps_ubx_ucenter_periodic_status == MODULES_START) { gps_ubx_ucenter_init(); gps_ubx_gps_ubx_ucenter_periodic_status = MODULES_RUN; }
  if (gps_ubx_gps_ubx_ucenter_periodic_status == MODULES_STOP) { ; gps_ubx_gps_ubx_ucenter_periodic_status = MODULES_IDLE; }

  if (i15 == 0 && gps_ubx_gps_ubx_ucenter_periodic_status == MODULES_RUN) {
    gps_ubx_ucenter_periodic();
  }
}

static inline void modules_event_task(void) {
}

#endif // MODULES_C

#ifdef MODULES_DATALINK_C

#include "messages.h"
#include "generated/airframe.h"
static inline void modules_parse_datalink(uint8_t msg_id __attribute__ ((unused))) {
}

#endif // MODULES_DATALINK_C

#endif // MODULES_H
