/* This file has been generated from /home/mav/paparazzi/conf/airframes/UniversityOfArizona/radian_L2.xml */
/* Please DO NOT EDIT */

#ifndef AIRFRAME_H
#define AIRFRAME_H

#define AIRFRAME_NAME "Radian"
#define AC_ID 1
#define MD5SUM ((uint8_t*)"\363\306\117\255\341\075\055\141\241\212\202\000\264\110\314\234")

#define SERVOS_NB 3

#define SERVO_MOTOR 0
#define SERVO_MOTOR_NEUTRAL 1000
#define SERVO_MOTOR_TRAVEL_UP 0.104166666667
#define SERVO_MOTOR_TRAVEL_DOWN 0
#define SERVO_MOTOR_MAX 2000
#define SERVO_MOTOR_MIN 1000

#define SERVO_RUDDER 2
#define SERVO_RUDDER_NEUTRAL 1500
#define SERVO_RUDDER_TRAVEL_UP 0.0520833333333
#define SERVO_RUDDER_TRAVEL_DOWN 0.0520833333333
#define SERVO_RUDDER_MAX 2000
#define SERVO_RUDDER_MIN 1000

#define SERVO_ELEVATOR 1
#define SERVO_ELEVATOR_NEUTRAL 1500
#define SERVO_ELEVATOR_TRAVEL_UP 0.0520833333333
#define SERVO_ELEVATOR_TRAVEL_DOWN 0.0520833333333
#define SERVO_ELEVATOR_MAX 2000
#define SERVO_ELEVATOR_MIN 1000


#define COMMAND_THROTTLE 0
#define COMMAND_ROLL 1
#define COMMAND_PITCH 2
#define COMMANDS_NB 3
#define COMMANDS_FAILSAFE {0,0,0}


#define SetCommandsFromRC(_commands_array, _rc_array) { \
  _commands_array[COMMAND_THROTTLE] = _rc_array[RADIO_THROTTLE];\
  _commands_array[COMMAND_ROLL] = _rc_array[RADIO_ROLL];\
  _commands_array[COMMAND_PITCH] = _rc_array[RADIO_PITCH];\
}

#define SetActuatorsFromCommands(values) { \
  uint32_t servo_value;\
  float command_value;\
  command_value = values[COMMAND_THROTTLE];\
  command_value *= command_value>0 ? SERVO_MOTOR_TRAVEL_UP : SERVO_MOTOR_TRAVEL_DOWN;\
  servo_value = SERVO_MOTOR_NEUTRAL + (int32_t)(command_value);\
  actuators[SERVO_MOTOR] = ChopServo(servo_value, SERVO_MOTOR_MIN, SERVO_MOTOR_MAX);\
\
  Actuator(SERVO_MOTOR) = SERVOS_TICS_OF_USEC(actuators[SERVO_MOTOR]);\
\
  command_value = values[COMMAND_ROLL];\
  command_value *= command_value>0 ? SERVO_RUDDER_TRAVEL_UP : SERVO_RUDDER_TRAVEL_DOWN;\
  servo_value = SERVO_RUDDER_NEUTRAL + (int32_t)(command_value);\
  actuators[SERVO_RUDDER] = ChopServo(servo_value, SERVO_RUDDER_MIN, SERVO_RUDDER_MAX);\
\
  Actuator(SERVO_RUDDER) = SERVOS_TICS_OF_USEC(actuators[SERVO_RUDDER]);\
\
  command_value = values[COMMAND_PITCH];\
  command_value *= command_value>0 ? SERVO_ELEVATOR_TRAVEL_UP : SERVO_ELEVATOR_TRAVEL_DOWN;\
  servo_value = SERVO_ELEVATOR_NEUTRAL + (int32_t)(command_value);\
  actuators[SERVO_ELEVATOR] = ChopServo(servo_value, SERVO_ELEVATOR_MIN, SERVO_ELEVATOR_MAX);\
\
  Actuator(SERVO_ELEVATOR) = SERVOS_TICS_OF_USEC(actuators[SERVO_ELEVATOR]);\
\
  ActuatorsCommit();\
}

#define AllActuatorsInit() { \
  ActuatorsInit();\
}

#define SECTION_AUTO1 1
#define AUTO1_MAX_ROLL 0.872664625
#define AUTO1_MAX_PITCH 0.6108652375

#define SECTION_AUTO2 1
#define AUTO2_MAX_ROLL 0.872664625
#define AUTO2_MAX_PITCH 0.4363323125

/* XML conf/airframes/UniversityOfArizona/calib/tucson_magnetics.xml */
#define SECTION_AHRS 1
#define AHRS_H_X 0.510045619461169
#define AHRS_H_Y 0.093273816847886
#define AHRS_H_Z 0.855075120184829

/* XML conf/airframes/UniversityOfArizona/calib/imu_asp21_008.xml */
#define SECTION_IMU 1
#define IMU_GYRO_P_NEUTRAL 0
#define IMU_GYRO_Q_NEUTRAL 0
#define IMU_GYRO_R_NEUTRAL -7
#define IMU_GYRO_P_SENS 4.359
#define IMU_GYRO_P_SENS_NUM 4359
#define IMU_GYRO_P_SENS_DEN 1000
#define IMU_GYRO_Q_SENS 4.359
#define IMU_GYRO_Q_SENS_NUM 4359
#define IMU_GYRO_Q_SENS_DEN 1000
#define IMU_GYRO_R_SENS 4.359
#define IMU_GYRO_R_SENS_NUM 4359
#define IMU_GYRO_R_SENS_DEN 1000
#define IMU_ACCEL_X_NEUTRAL 65
#define IMU_ACCEL_Y_NEUTRAL 20
#define IMU_ACCEL_Z_NEUTRAL -79
#define IMU_ACCEL_X_SENS 4.91952821789
#define IMU_ACCEL_X_SENS_NUM 32951
#define IMU_ACCEL_X_SENS_DEN 6698
#define IMU_ACCEL_Y_SENS 4.91495258089
#define IMU_ACCEL_Y_SENS_NUM 33692
#define IMU_ACCEL_Y_SENS_DEN 6855
#define IMU_ACCEL_Z_SENS 4.86349876552
#define IMU_ACCEL_Z_SENS_NUM 53017
#define IMU_ACCEL_Z_SENS_DEN 10901
#define IMU_MAG_X_NEUTRAL 97
#define IMU_MAG_Y_NEUTRAL 85
#define IMU_MAG_Z_NEUTRAL -271
#define IMU_MAG_X_SENS 5.01574100906
#define IMU_MAG_X_SENS_NUM 16888
#define IMU_MAG_X_SENS_DEN 3367
#define IMU_MAG_Y_SENS 5.92770654371
#define IMU_MAG_Y_SENS_NUM 16645
#define IMU_MAG_Y_SENS_DEN 2808
#define IMU_MAG_Z_SENS 5.89336515457
#define IMU_MAG_Z_SENS_NUM 61733
#define IMU_MAG_Z_SENS_DEN 10475

#define SECTION_IMU 1
#define IMU_BODY_TO_IMU_PHI RadOfDeg(173.)
#define IMU_BODY_TO_IMU_THETA RadOfDeg(0.)
#define IMU_BODY_TO_IMU_PSI RadOfDeg(90.)

#define SECTION_BAT 1
#define CATASTROPHIC_BAT_LEVEL 9.9

#define SECTION_MISC 1
#define NOMINAL_AIRSPEED 15.
#define CARROT 5.
#define KILL_MODE_DISTANCE (1.5*MAX_DIST_FROM_HOME)
#define CONTROL_RATE 60
#define DEFAULT_CIRCLE_RADIUS 120.

#define SECTION_VERTICAL CONTROL 1
#define V_CTL_POWER_CTL_BAT_NOMINAL 11.1
#define V_CTL_ALTITUDE_PGAIN 0.06
#define V_CTL_ALTITUDE_MAX_CLIMB 2.
#define V_CTL_AUTO_THROTTLE_NOMINAL_CRUISE_THROTTLE 0.45
#define V_CTL_AUTO_THROTTLE_MIN_CRUISE_THROTTLE 0.35
#define V_CTL_AUTO_THROTTLE_MAX_CRUISE_THROTTLE 0.85
#define V_CTL_AUTO_THROTTLE_CLIMB_THROTTLE_INCREMENT 0.2
#define V_CTL_AUTO_THROTTLE_PGAIN 0.023
#define V_CTL_AUTO_THROTTLE_IGAIN 0.01
#define V_CTL_AUTO_THROTTLE_PITCH_OF_VZ_PGAIN 0.05
#define V_CTL_AUTO_PITCH_PGAIN 0.06
#define V_CTL_AUTO_PITCH_IGAIN 0.0
#define V_CTL_AUTO_PITCH_MAX_PITCH 0.35
#define V_CTL_AUTO_PITCH_MIN_PITCH -0.35
#define V_CTL_THROTTLE_SLEW 0.1

#define SECTION_HORIZONTAL CONTROL 1
#define H_CTL_COURSE_PGAIN 0.9
#define H_CTL_ROLL_MAX_SETPOINT 0.70
#define H_CTL_PITCH_MAX_SETPOINT 0.5
#define H_CTL_PITCH_MIN_SETPOINT -0.5
#define H_CTL_ROLL_PGAIN 6600.
#define H_CTL_AILERON_OF_THROTTLE 0.0
#define H_CTL_PITCH_PGAIN 5500.
#define H_CTL_PITCH_DGAIN 0.4
#define H_CTL_ELEVATOR_OF_ROLL 2400

#define SECTION_NAV 1
#define NAV_PITCH 0.
#define NAV_GLIDE_PITCH_TRIM 0

#define SECTION_FAILSAFE 1
#define FAILSAFE_DELAY_WITHOUT_GPS 2
#define FAILSAFE_DEFAULT_THROTTLE 0.3
#define FAILSAFE_DEFAULT_ROLL 0.3
#define FAILSAFE_DEFAULT_PITCH 0.5
#define FAILSAFE_HOME_RADIUS 100

#define SECTION_SIMU 1
#define YAW_RESPONSE_FACTOR 0.5


#endif // AIRFRAME_H