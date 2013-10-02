/* This file has been generated from /home/mav/paparazzi/var/Radian/settings_modules.xml /home/mav/paparazzi/conf/settings/basic.xml /home/mav/paparazzi/var/Radian/settings_telemetry.xml */
/* Please DO NOT EDIT */

#ifndef SETTINGS_H
#define SETTINGS_H

#define RCSettings(mode_changed) { \
}

#include "autopilot.h"
#include "estimator.h"
#include "subsystems/gps.h"
#include "subsystems/nav.h"
#include "generated/modules.h"
#include "generated/periodic_telemetry.h"

#define DlSetting(_idx, _value) { \
  switch (_idx) { \
    case 0: telemetry_mode_Ap = _value; break;\
    case 1: telemetry_mode_Fbw = _value; break;\
    case 2: flight_altitude = _value; break;\
    case 3: nav_course = _value; break;\
    case 4: nav_IncreaseShift( _value ); _value = nav_shift; break;\
    case 5: estimator_flight_time = _value; break;\
    case 6: nav_SetNavRadius( _value ); _value = nav_radius; break;\
    case 7: pprz_mode = _value; break;\
    case 8: launch = _value; break;\
    case 9: kill_throttle = _value; break;\
    case 10: gps_Reset( _value ); _value = gps.reset; break;\
    case 11: gps_ubx_gps_ubx_ucenter_periodic_status = _value; break;\
    default: break;\
  }\
}
#define PeriodicSendDlValue(_trans, _dev) { \
  static uint8_t i;\
  float var;\
  if (i >= 12) i = 0;\
  switch (i) { \
    case 0: var = telemetry_mode_Ap; break;\
    case 1: var = telemetry_mode_Fbw; break;\
    case 2: var = flight_altitude; break;\
    case 3: var = nav_course; break;\
    case 4: var = nav_shift; break;\
    case 5: var = estimator_flight_time; break;\
    case 6: var = nav_radius; break;\
    case 7: var = pprz_mode; break;\
    case 8: var = launch; break;\
    case 9: var = kill_throttle; break;\
    case 10: var = gps.reset; break;\
    case 11: var = gps_ubx_gps_ubx_ucenter_periodic_status; break;\
    default: var = 0.; break;\
  }\
  DOWNLINK_SEND_DL_VALUE(_trans, _dev, &i, &var);\
  i++;\
}
static inline float settings_get_value(uint8_t i) {
  switch (i) { \
    case 0: return telemetry_mode_Ap;
    case 1: return telemetry_mode_Fbw;
    case 2: return flight_altitude;
    case 3: return nav_course;
    case 4: return nav_shift;
    case 5: return estimator_flight_time;
    case 6: return nav_radius;
    case 7: return pprz_mode;
    case 8: return launch;
    case 9: return kill_throttle;
    case 10: return gps.reset;
    case 11: return gps_ubx_gps_ubx_ucenter_periodic_status;
    default: return 0.;
    }
  }

/* Persistent Settings */
struct PersistentSettings {
};

extern struct PersistentSettings pers_settings;

static inline void persistent_settings_store( void ) {
}

static inline void persistent_settings_load( void ) {
};

#endif // SETTINGS_H
