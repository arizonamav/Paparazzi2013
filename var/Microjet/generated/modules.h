/* This file has been generated from /home/mav/paparazzi/conf/airframes/microjet_example.xml */
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
#include "openlog/openlog.h"
#include "sensors/infrared_adc.h"
#include "digital_cam/servo_cam_ctrl.h"

#define PERIODIC_2HZ_OPENLOG_PERIOD 0.500000
#define PERIODIC_2HZ_OPENLOG_FREQ 2.000000
#define INFRARED_ADC_UPDATE_PERIOD 0.016667
#define INFRARED_ADC_UPDATE_FREQ 60.000000
#define SERVO_CAM_CTRL_PERIODIC_PERIOD 0.250000
#define SERVO_CAM_CTRL_PERIODIC_FREQ 4.000000

EXTERN_MODULES uint8_t openlog_periodic_2Hz_openlog_status;
EXTERN_MODULES uint8_t digital_cam_servo_servo_cam_ctrl_periodic_status;

#ifdef MODULES_C

static inline void modules_init(void) {
  init_openlog();
  openlog_periodic_2Hz_openlog_status = MODULES_START;
  infrared_adc_init();
  servo_cam_ctrl_init();
  digital_cam_servo_servo_cam_ctrl_periodic_status = MODULES_START;
}

static inline void modules_periodic_task(void) {
  static uint8_t i1; i1++; if (i1>=1) i1=0;
  static uint8_t i15; i15++; if (i15>=15) i15=0;
  static uint8_t i30; i30++; if (i30>=30) i30=0;

  if (openlog_periodic_2Hz_openlog_status == MODULES_START) { ; openlog_periodic_2Hz_openlog_status = MODULES_RUN; }
  if (openlog_periodic_2Hz_openlog_status == MODULES_STOP) { ; openlog_periodic_2Hz_openlog_status = MODULES_IDLE; }


  if (digital_cam_servo_servo_cam_ctrl_periodic_status == MODULES_START) { ; digital_cam_servo_servo_cam_ctrl_periodic_status = MODULES_RUN; }
  if (digital_cam_servo_servo_cam_ctrl_periodic_status == MODULES_STOP) { ; digital_cam_servo_servo_cam_ctrl_periodic_status = MODULES_IDLE; }

  infrared_adc_update();
  if (i15 == 0 && digital_cam_servo_servo_cam_ctrl_periodic_status == MODULES_RUN) {
    servo_cam_ctrl_periodic();
  }
  if (i30 == 7 && openlog_periodic_2Hz_openlog_status == MODULES_RUN) {
    periodic_2Hz_openlog();
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
