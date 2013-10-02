/* This file has been generated from /home/mav/paparazzi/conf/airframes/TestHardware/LisaL_v1.1_b2_v1.2_rc.xml */
/* Please DO NOT EDIT */

#ifndef AIRFRAME_H
#define AIRFRAME_H

#define AIRFRAME_NAME "LisaLv11_Booz2v12_RC"
#define AC_ID 9
#define MD5SUM ((uint8_t*)"\116\166\176\345\162\165\326\001\015\322\134\317\321\131\237\272")

#define SERVOS_NB 4

#define SERVO_FRONT 0
#define SERVO_FRONT_NEUTRAL 0
#define SERVO_FRONT_TRAVEL_UP 0.0265625
#define SERVO_FRONT_TRAVEL_DOWN 0
#define SERVO_FRONT_MAX 255
#define SERVO_FRONT_MIN 0

#define SERVO_BACK 1
#define SERVO_BACK_NEUTRAL 0
#define SERVO_BACK_TRAVEL_UP 0.0265625
#define SERVO_BACK_TRAVEL_DOWN 0
#define SERVO_BACK_MAX 255
#define SERVO_BACK_MIN 0

#define SERVO_RIGHT 2
#define SERVO_RIGHT_NEUTRAL 0
#define SERVO_RIGHT_TRAVEL_UP 0.0265625
#define SERVO_RIGHT_TRAVEL_DOWN 0
#define SERVO_RIGHT_MAX 255
#define SERVO_RIGHT_MIN 0

#define SERVO_LEFT 3
#define SERVO_LEFT_NEUTRAL 0
#define SERVO_LEFT_TRAVEL_UP 0.0265625
#define SERVO_LEFT_TRAVEL_DOWN 0
#define SERVO_LEFT_MAX 255
#define SERVO_LEFT_MIN 0


#define COMMAND_PITCH 0
#define COMMAND_ROLL 1
#define COMMAND_YAW 2
#define COMMAND_THRUST 3
#define COMMANDS_NB 4
#define COMMANDS_FAILSAFE {0,0,0,0}


#define SECTION_ACTUATORS_MKK 1
#define ACTUATORS_MKK_NB 4
#define ACTUATORS_MKK_ADDR { 0x52, 0x54, 0x56, 0x58 }

#define SECTION_SUPERVISION 1
#define SUPERVISION_MIN_MOTOR 2
#define SUPERVISION_MAX_MOTOR 210
#define SUPERVISION_TRIM_A 0
#define SUPERVISION_TRIM_E 0
#define SUPERVISION_TRIM_R 0
#define SUPERVISION_NB_MOTOR 4
#define SUPERVISION_SCALE 256
#define SUPERVISION_ROLL_COEF {    0,    0, -256,  256 }
#define SUPERVISION_PITCH_COEF {  256, -256,    0,    0 }
#define SUPERVISION_YAW_COEF { -256, -256,  256,  256 }
#define SUPERVISION_THRUST_COEF {  256,  256,  256,  256 }

#define SECTION_IMU 1
#define IMU_GYRO_P_NEUTRAL 32581
#define IMU_GYRO_Q_NEUTRAL 32008
#define IMU_GYRO_R_NEUTRAL 33207
#define IMU_GYRO_P_SENS .903
#define IMU_GYRO_P_SENS_NUM 903
#define IMU_GYRO_P_SENS_DEN 1000
#define IMU_GYRO_Q_SENS .905
#define IMU_GYRO_Q_SENS_NUM 181
#define IMU_GYRO_Q_SENS_DEN 200
#define IMU_GYRO_R_SENS .893
#define IMU_GYRO_R_SENS_NUM 893
#define IMU_GYRO_R_SENS_DEN 1000
#define IMU_GYRO_PQ_SENS 0.0
#define IMU_GYRO_PQ_SENS_NUM 0
#define IMU_GYRO_PQ_SENS_DEN 1
#define IMU_GYRO_PR_SENS 0.0
#define IMU_GYRO_PR_SENS_NUM 0
#define IMU_GYRO_PR_SENS_DEN 1
#define IMU_GYRO_QR_SENS 0.0
#define IMU_GYRO_QR_SENS_NUM 0
#define IMU_GYRO_QR_SENS_DEN 1
#define IMU_ACCEL_X_NEUTRAL 25950
#define IMU_ACCEL_Y_NEUTRAL 26351
#define IMU_ACCEL_Z_NEUTRAL 25696
#define IMU_ACCEL_X_SENS 1.86342150011
#define IMU_ACCEL_X_SENS_NUM 18528
#define IMU_ACCEL_X_SENS_DEN 9943
#define IMU_ACCEL_Y_SENS 1.88378993899
#define IMU_ACCEL_Y_SENS_NUM 27298
#define IMU_ACCEL_Y_SENS_DEN 14491
#define IMU_ACCEL_Z_SENS 1.86557913201
#define IMU_ACCEL_Z_SENS_NUM 49061
#define IMU_ACCEL_Z_SENS_DEN 26298
#define IMU_ACCEL_XY_SENS 0.0
#define IMU_ACCEL_XY_SENS_NUM 0
#define IMU_ACCEL_XY_SENS_DEN 1
#define IMU_ACCEL_XZ_SENS 0.0
#define IMU_ACCEL_XZ_SENS_NUM 0
#define IMU_ACCEL_XZ_SENS_DEN 1
#define IMU_ACCEL_YZ_SENS 0.0
#define IMU_ACCEL_YZ_SENS_NUM 0
#define IMU_ACCEL_YZ_SENS_DEN 1
#define IMU_MAG_X_NEUTRAL 0
#define IMU_MAG_Y_NEUTRAL 0
#define IMU_MAG_Z_NEUTRAL 0
#define IMU_MAG_X_SENS 1.
#define IMU_MAG_X_SENS_NUM 1
#define IMU_MAG_X_SENS_DEN 1
#define IMU_MAG_Y_SENS 1.
#define IMU_MAG_Y_SENS_NUM 1
#define IMU_MAG_Y_SENS_DEN 1
#define IMU_MAG_Z_SENS 1.
#define IMU_MAG_Z_SENS_NUM 1
#define IMU_MAG_Z_SENS_DEN 1
#define IMU_BODY_TO_IMU_PHI 0.
#define IMU_BODY_TO_IMU_THETA 0.
#define IMU_BODY_TO_IMU_PSI 0.

#define SECTION_AUTOPILOT 1
#define MODE_AUTO1 AP_MODE_ATTITUDE_DIRECT
#define MODE_MANUAL AP_MODE_ATTITUDE_Z_HOLD
#define MODE_AUTO2 AP_MODE_HOVER_Z_HOLD

#define SECTION_BAT 1
#define CATASTROPHIC_BAT_LEVEL 12.4
#define MAX_BAT_LEVEL 16.8
#define CRITIC_BAT_LEVEL 13.0
#define LOW_BAT_LEVEL 14.0

#define SECTION_STABILIZATION_RATE 1
#define STABILIZATION_RATE_SP_MAX_P 10000
#define STABILIZATION_RATE_SP_MAX_Q 10000
#define STABILIZATION_RATE_SP_MAX_R 10000
#define STABILIZATION_RATE_GAIN_P 400
#define STABILIZATION_RATE_GAIN_Q 400
#define STABILIZATION_RATE_GAIN_R 350

#define SECTION_STABILIZATION_ATTITUDE 1
#define STABILIZATION_ATTITUDE_SP_MAX_PHI 0.7853981625
#define STABILIZATION_ATTITUDE_SP_MAX_THETA 0.7853981625
#define STABILIZATION_ATTITUDE_SP_MAX_R 1.570796325
#define STABILIZATION_ATTITUDE_DEADBAND_R 250
#define STABILIZATION_ATTITUDE_REF_OMEGA_P 13.962634
#define STABILIZATION_ATTITUDE_REF_ZETA_P 0.9
#define STABILIZATION_ATTITUDE_REF_MAX_P 5.23598775
#define STABILIZATION_ATTITUDE_REF_MAX_PDOT RadOfDeg(7000.)
#define STABILIZATION_ATTITUDE_REF_OMEGA_Q 13.962634
#define STABILIZATION_ATTITUDE_REF_ZETA_Q 0.9
#define STABILIZATION_ATTITUDE_REF_MAX_Q 5.23598775
#define STABILIZATION_ATTITUDE_REF_MAX_QDOT RadOfDeg(7000.)
#define STABILIZATION_ATTITUDE_REF_OMEGA_R 8.72664625
#define STABILIZATION_ATTITUDE_REF_ZETA_R 0.9
#define STABILIZATION_ATTITUDE_REF_MAX_R 3.14159265
#define STABILIZATION_ATTITUDE_REF_MAX_RDOT RadOfDeg(1800.)
#define STABILIZATION_ATTITUDE_PHI_PGAIN 900
#define STABILIZATION_ATTITUDE_PHI_DGAIN 200
#define STABILIZATION_ATTITUDE_PHI_IGAIN 200
#define STABILIZATION_ATTITUDE_THETA_PGAIN 900
#define STABILIZATION_ATTITUDE_THETA_DGAIN 200
#define STABILIZATION_ATTITUDE_THETA_IGAIN 200
#define STABILIZATION_ATTITUDE_PSI_PGAIN 900
#define STABILIZATION_ATTITUDE_PSI_DGAIN 200
#define STABILIZATION_ATTITUDE_PSI_IGAIN 10
#define STABILIZATION_ATTITUDE_PHI_DDGAIN 200
#define STABILIZATION_ATTITUDE_THETA_DDGAIN 200
#define STABILIZATION_ATTITUDE_PSI_DDGAIN 200

#define SECTION_AHRS 1
#define AHRS_PROPAGATE_FREQUENCY 512
#define AHRS_H_X  0.3723657
#define AHRS_H_Y  0.1515225
#define AHRS_H_Z -0.9156335

#define SECTION_INS 1
#define INS_BARO_SENS 10.
#define INS_BARO_SENS_NUM 10
#define INS_BARO_SENS_DEN 1

#define SECTION_GUIDANCE_V 1
#define GUIDANCE_V_MIN_ERR_Z POS_BFP_OF_REAL(-10.)
#define GUIDANCE_V_MAX_ERR_Z POS_BFP_OF_REAL( 10.)
#define GUIDANCE_V_MIN_ERR_ZD SPEED_BFP_OF_REAL(-10.)
#define GUIDANCE_V_MAX_ERR_ZD SPEED_BFP_OF_REAL( 10.)
#define GUIDANCE_V_MAX_SUM_ERR 2000000
#define GUIDANCE_V_HOVER_KP 150
#define GUIDANCE_V_HOVER_KD 80
#define GUIDANCE_V_HOVER_KI 0
#define GUIDANCE_V_RC_CLIMB_COEF 163
#define GUIDANCE_V_RC_CLIMB_DEAD_BAND 160000

#define SECTION_GUIDANCE_H 1
#define GUIDANCE_H_PGAIN 100
#define GUIDANCE_H_DGAIN 100
#define GUIDANCE_H_IGAIN 0

#define SECTION_MISC 1
#define FACE_REINJ_1 1024

#define SECTION_SIMULATOR 1
#define NPS_ACTUATOR_NAMES {"front_motor", "back_motor", "right_motor", "left_motor"}
#define NPS_INITIAL_CONDITITONS "reset00"
#define NPS_SENSORS_PARAMS "nps_sensors_params_booz2_a1.h"


#endif // AIRFRAME_H