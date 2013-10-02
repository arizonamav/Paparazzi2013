/* This file has been generated from /home/mav/paparazzi/var/LisaLv11_Booz2v12_RC/settings_modules.xml /home/mav/paparazzi/conf/settings/settings_booz2.xml /home/mav/paparazzi/var/LisaLv11_Booz2v12_RC/settings_telemetry.xml */
/* Please DO NOT EDIT */

#ifndef SETTINGS_H
#define SETTINGS_H

#define RCSettings(mode_changed) { \
}

#include "autopilot.h"
#include "guidance/guidance_h.h"
#include "guidance/guidance_v.h"
#include "navigation.h"
#include "stabilization/stabilization_attitude.h"
#include "stabilization/stabilization_rate.h"
#include "subsystems/ins.h"
#include "generated/modules.h"
#include "generated/periodic_telemetry.h"

#define DlSetting(_idx, _value) { \
  switch (_idx) { \
    case 0: telemetry_mode_Main = _value; break;\
    case 1: autopilot_mode_auto2 = _value; break;\
    case 2: autopilot_KillThrottle( _value ); _value = kill_throttle; break;\
    case 3: autopilot_SetPowerSwitch( _value ); _value = autopilot_power_switch; break;\
    case 4: autopilot_rc = _value; break;\
    case 5: stabilization_rate_gain.p = _value; break;\
    case 6: stabilization_rate_gain.q = _value; break;\
    case 7: stabilization_rate_gain.r = _value; break;\
    case 8: stabilization_gains.p.x = _value; break;\
    case 9: stabilization_gains.d.x = _value; break;\
    case 10: stabilization_attitude_SetKiPhi( _value ); _value = stabilization_gains.i.x; break;\
    case 11: stabilization_gains.dd.x = _value; break;\
    case 12: stabilization_gains.p.y = _value; break;\
    case 13: stabilization_gains.d.y = _value; break;\
    case 14: stabilization_gains.i.y = _value; break;\
    case 15: stabilization_gains.dd.y = _value; break;\
    case 16: stabilization_gains.p.z = _value; break;\
    case 17: stabilization_gains.d.z = _value; break;\
    case 18: stabilization_gains.i.z = _value; break;\
    case 19: stabilization_gains.dd.z = _value; break;\
    case 20: guidance_v_kp = _value; break;\
    case 21: guidance_v_kd = _value; break;\
    case 22: guidance_v_SetKi( _value ); _value = guidance_v_ki; break;\
    case 23: guidance_v_z_sp = _value; break;\
    case 24: guidance_v_SetNominalHoverThrottle( _value ); _value = guidance_v_nominal_throttle; break;\
    case 25: ins_vf_realign = _value; break;\
    case 26: guidance_h_pos_sp.x = _value; break;\
    case 27: guidance_h_pos_sp.y = _value; break;\
    case 28: guidance_h_psi_sp = _value; break;\
    case 29: guidance_h_pgain = _value; break;\
    case 30: guidance_h_dgain = _value; break;\
    case 31: guidance_h_SetKi( _value ); _value = guidance_h_igain; break;\
    case 32: guidance_h_again = _value; break;\
    case 33: ins_hf_realign = _value; break;\
    case 34: navigation_SetFlightAltitude( _value ); _value = flight_altitude; break;\
    case 35: nav_heading = _value; break;\
    case 36: nav_radius = _value; break;\
    default: break;\
  }\
}
#define PeriodicSendDlValue(_trans, _dev) { \
  static uint8_t i;\
  float var;\
  if (i >= 37) i = 0;\
  switch (i) { \
    case 0: var = telemetry_mode_Main; break;\
    case 1: var = autopilot_mode_auto2; break;\
    case 2: var = kill_throttle; break;\
    case 3: var = autopilot_power_switch; break;\
    case 4: var = autopilot_rc; break;\
    case 5: var = stabilization_rate_gain.p; break;\
    case 6: var = stabilization_rate_gain.q; break;\
    case 7: var = stabilization_rate_gain.r; break;\
    case 8: var = stabilization_gains.p.x; break;\
    case 9: var = stabilization_gains.d.x; break;\
    case 10: var = stabilization_gains.i.x; break;\
    case 11: var = stabilization_gains.dd.x; break;\
    case 12: var = stabilization_gains.p.y; break;\
    case 13: var = stabilization_gains.d.y; break;\
    case 14: var = stabilization_gains.i.y; break;\
    case 15: var = stabilization_gains.dd.y; break;\
    case 16: var = stabilization_gains.p.z; break;\
    case 17: var = stabilization_gains.d.z; break;\
    case 18: var = stabilization_gains.i.z; break;\
    case 19: var = stabilization_gains.dd.z; break;\
    case 20: var = guidance_v_kp; break;\
    case 21: var = guidance_v_kd; break;\
    case 22: var = guidance_v_ki; break;\
    case 23: var = guidance_v_z_sp; break;\
    case 24: var = guidance_v_nominal_throttle; break;\
    case 25: var = ins_vf_realign; break;\
    case 26: var = guidance_h_pos_sp.x; break;\
    case 27: var = guidance_h_pos_sp.y; break;\
    case 28: var = guidance_h_psi_sp; break;\
    case 29: var = guidance_h_pgain; break;\
    case 30: var = guidance_h_dgain; break;\
    case 31: var = guidance_h_igain; break;\
    case 32: var = guidance_h_again; break;\
    case 33: var = ins_hf_realign; break;\
    case 34: var = flight_altitude; break;\
    case 35: var = nav_heading; break;\
    case 36: var = nav_radius; break;\
    default: var = 0.; break;\
  }\
  DOWNLINK_SEND_DL_VALUE(_trans, _dev, &i, &var);\
  i++;\
}
static inline float settings_get_value(uint8_t i) {
  switch (i) { \
    case 0: return telemetry_mode_Main;
    case 1: return autopilot_mode_auto2;
    case 2: return kill_throttle;
    case 3: return autopilot_power_switch;
    case 4: return autopilot_rc;
    case 5: return stabilization_rate_gain.p;
    case 6: return stabilization_rate_gain.q;
    case 7: return stabilization_rate_gain.r;
    case 8: return stabilization_gains.p.x;
    case 9: return stabilization_gains.d.x;
    case 10: return stabilization_gains.i.x;
    case 11: return stabilization_gains.dd.x;
    case 12: return stabilization_gains.p.y;
    case 13: return stabilization_gains.d.y;
    case 14: return stabilization_gains.i.y;
    case 15: return stabilization_gains.dd.y;
    case 16: return stabilization_gains.p.z;
    case 17: return stabilization_gains.d.z;
    case 18: return stabilization_gains.i.z;
    case 19: return stabilization_gains.dd.z;
    case 20: return guidance_v_kp;
    case 21: return guidance_v_kd;
    case 22: return guidance_v_ki;
    case 23: return guidance_v_z_sp;
    case 24: return guidance_v_nominal_throttle;
    case 25: return ins_vf_realign;
    case 26: return guidance_h_pos_sp.x;
    case 27: return guidance_h_pos_sp.y;
    case 28: return guidance_h_psi_sp;
    case 29: return guidance_h_pgain;
    case 30: return guidance_h_dgain;
    case 31: return guidance_h_igain;
    case 32: return guidance_h_again;
    case 33: return ins_hf_realign;
    case 34: return flight_altitude;
    case 35: return nav_heading;
    case 36: return nav_radius;
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
