/*
 * Wind_Turbine_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "Wind_Turbine".
 *
 * Model version              : 1.718
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Thu Jul 14 09:44:54 2022
 *
 * Target selection: slrt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->32-bit x86 compatible
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Wind_Turbine_types_h_
#define RTW_HEADER_Wind_Turbine_types_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_struct_VSqffC9uXgYsTbCmvsqodH_
#define DEFINED_TYPEDEF_FOR_struct_VSqffC9uXgYsTbCmvsqodH_

typedef struct {
  real_T angle_of_attack[24];
  real_T coeff_lift[24];
  real_T coeff_drag[24];
  real_T air_density;
  real_T lift_factor;
  real_T drag_factor;
  real_T time_constant;
} struct_VSqffC9uXgYsTbCmvsqodH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_j4uDtLxTuVlfySlL7I37OF_
#define DEFINED_TYPEDEF_FOR_struct_j4uDtLxTuVlfySlL7I37OF_

typedef struct {
  real_T Density;
  real_T SpeedOfSound;
} struct_j4uDtLxTuVlfySlL7I37OF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_cJepJpl6l6WZHfwxyrGDO_
#define DEFINED_TYPEDEF_FOR_struct_cJepJpl6l6WZHfwxyrGDO_

typedef struct {
  real_T length;
  real_T Profile[104];
} struct_cJepJpl6l6WZHfwxyrGDO;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_TYiGBWmU7WQFv4djjnOwy_
#define DEFINED_TYPEDEF_FOR_struct_TYiGBWmU7WQFv4djjnOwy_

typedef struct {
  real_T x;
  real_T y;
  real_T z;
  real_T radius;
  real_T angle;
} struct_TYiGBWmU7WQFv4djjnOwy;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_Di3CnZQBxWGEFFAy3tQxi_
#define DEFINED_TYPEDEF_FOR_struct_Di3CnZQBxWGEFFAy3tQxi_

typedef struct {
  real_T MaxLiftCoefficent;
  real_T ParasiteDragCoefficient;
  real_T InducedDragFactor;
  real_T MaxDragCoefficient;
  real_T mass;
  real_T inertia[9];
  real_T radius;
  struct_cJepJpl6l6WZHfwxyrGDO Geometry;
  struct_TYiGBWmU7WQFv4djjnOwy Pitch_Actuator_Offset;
  real_T damping;
  real_T nominal_rpm;
  real_T min_rpm;
  real_T max_rpm;
} struct_Di3CnZQBxWGEFFAy3tQxi;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_apfOIp3eiu3sjFRMWNq7jF_
#define DEFINED_TYPEDEF_FOR_struct_apfOIp3eiu3sjFRMWNq7jF_

typedef struct {
  real_T Re[8];
  real_T AoA[116];
  real_T Cl[116];
  real_T Cd[116];
} struct_apfOIp3eiu3sjFRMWNq7jF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_SVIV8u68u95QU7HYBtdrxG_
#define DEFINED_TYPEDEF_FOR_struct_SVIV8u68u95QU7HYBtdrxG_

typedef struct {
  real_T mass;
  real_T inertia[9];
  real_T height;
  real_T base_radius;
  real_T top_radius;
} struct_SVIV8u68u95QU7HYBtdrxG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_kskDyotS523t4kXE8GJRSG_
#define DEFINED_TYPEDEF_FOR_struct_kskDyotS523t4kXE8GJRSG_

typedef struct {
  real_T x;
  real_T y;
  real_T z;
} struct_kskDyotS523t4kXE8GJRSG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_7Dw7EYLPof4SAxQi9inliC_
#define DEFINED_TYPEDEF_FOR_struct_7Dw7EYLPof4SAxQi9inliC_

typedef struct {
  real_T z;
  real_T x;
} struct_7Dw7EYLPof4SAxQi9inliC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_BEohjYjTsyr7qGdIVl9prG_
#define DEFINED_TYPEDEF_FOR_struct_BEohjYjTsyr7qGdIVl9prG_

typedef struct {
  real_T root_radius;
  struct_7Dw7EYLPof4SAxQi9inliC ctr_to_leading_edge;
  struct_7Dw7EYLPof4SAxQi9inliC ctr_to_a1;
  struct_7Dw7EYLPof4SAxQi9inliC ctr_to_a2;
  struct_7Dw7EYLPof4SAxQi9inliC ctr_to_b1;
  struct_7Dw7EYLPof4SAxQi9inliC ctr_to_b2;
  struct_7Dw7EYLPof4SAxQi9inliC ctr_to_c1;
  struct_7Dw7EYLPof4SAxQi9inliC ctr_to_d1;
  struct_7Dw7EYLPof4SAxQi9inliC ctr_to_e1;
  struct_7Dw7EYLPof4SAxQi9inliC ctr_to_trailing_edge;
  real_T scaling_tip;
  real_T LF_Tri[6];
  real_T UF_Tri[8];
  real_T LR_Tri[6];
  real_T UR_Tri[6];
  real_T Lower_Leading_Edge_Cone[6];
  real_T Upper_Leading_Edge_Cone[6];
} struct_BEohjYjTsyr7qGdIVl9prG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_EwfAMnACdOmniE2EROF9tF_
#define DEFINED_TYPEDEF_FOR_struct_EwfAMnACdOmniE2EROF9tF_

typedef struct {
  real_T mass;
  real_T inertia[9];
  real_T length;
  real_T width;
  real_T damping;
  struct_kskDyotS523t4kXE8GJRSG Actuator_Offset;
  struct_BEohjYjTsyr7qGdIVl9prG Geometry;
} struct_EwfAMnACdOmniE2EROF9tF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_vEQifxoUfBQWJnkIUMm7VG_
#define DEFINED_TYPEDEF_FOR_struct_vEQifxoUfBQWJnkIUMm7VG_

typedef struct {
  real_T first_step;
  real_T planetary;
  real_T second_step_primary_generator;
} struct_vEQifxoUfBQWJnkIUMm7VG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_BccaCAC54sh1YgM3Vjr6j_
#define DEFINED_TYPEDEF_FOR_struct_BccaCAC54sh1YgM3Vjr6j_

typedef struct {
  real_T viscous_losses[2];
} struct_BccaCAC54sh1YgM3Vjr6j;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_GphMeAxusWEaIPERrSwCqC_
#define DEFINED_TYPEDEF_FOR_struct_GphMeAxusWEaIPERrSwCqC_

typedef struct {
  real_T mass;
  struct_vEQifxoUfBQWJnkIUMm7VG Gear_Ratio;
  struct_BccaCAC54sh1YgM3Vjr6j Planetary;
  real_T inertia_carrier_shaft;
  real_T inertia_sun_shaft;
  real_T inertia_first_step_shaft;
  real_T Solver_Consistency_Tolerance;
  real_T MSLD_Interface_TF_Coeff;
  real_T MSLD_Interface_Filter_Coeff;
} struct_GphMeAxusWEaIPERrSwCqC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_IxHLiFZ9bqHC7py6CjHCUF_
#define DEFINED_TYPEDEF_FOR_struct_IxHLiFZ9bqHC7py6CjHCUF_

typedef struct {
  real_T inertia;
  real_T damping;
} struct_IxHLiFZ9bqHC7py6CjHCUF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_vNhlyn4U16hX6DT2LmQbID_
#define DEFINED_TYPEDEF_FOR_struct_vNhlyn4U16hX6DT2LmQbID_

typedef struct {
  real_T P_Gain;
  real_T I_Gain;
  real_T D_Gain;
  real_T max_angle;
  real_T max_lift;
  real_T enough_lift;
  real_T stall;
} struct_vNhlyn4U16hX6DT2LmQbID;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_TVma8f5sh5pwgVDoSH4pdG_
#define DEFINED_TYPEDEF_FOR_struct_TVma8f5sh5pwgVDoSH4pdG_

typedef struct {
  real_T P_Gain;
  real_T I_Gain;
  real_T D_Gain;
  struct_vNhlyn4U16hX6DT2LmQbID Angle_Of_Attack;
  real_T emergency_brake_pitch_angle;
  real_T park_pitch_angle;
} struct_TVma8f5sh5pwgVDoSH4pdG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_p3kYapSXlKN8ZkY8laKfiB_
#define DEFINED_TYPEDEF_FOR_struct_p3kYapSXlKN8ZkY8laKfiB_

typedef struct {
  real_T gain;
  real_T time_constant;
  real_T saturation;
} struct_p3kYapSXlKN8ZkY8laKfiB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_mPfRZVTEI2aavkvCZhqFlE_
#define DEFINED_TYPEDEF_FOR_struct_mPfRZVTEI2aavkvCZhqFlE_

typedef struct {
  real_T max_area;
  real_T max_opening;
  real_T leakage_area;
  real_T initial_opening_pa;
  real_T initial_opening_at;
  real_T initial_opening_pb;
  real_T initial_opening_bt;
} struct_mPfRZVTEI2aavkvCZhqFlE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_qqcSWHsTJPbwF9SfkQd5VB_
#define DEFINED_TYPEDEF_FOR_struct_qqcSWHsTJPbwF9SfkQd5VB_

typedef struct {
  real_T damping;
  real_T piston_area;
  real_T stroke;
  real_T initial_disp_from_a;
  real_T contact_stiffness;
  real_T contact_damping;
} struct_qqcSWHsTJPbwF9SfkQd5VB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_4b0RClW1XSwQlt5iiDBvJG_
#define DEFINED_TYPEDEF_FOR_struct_4b0RClW1XSwQlt5iiDBvJG_

typedef struct {
  real_T outer_radius;
  real_T inner_radius;
} struct_4b0RClW1XSwQlt5iiDBvJG;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_7Od5ztdL3MA9pgNqKQKaO_
#define DEFINED_TYPEDEF_FOR_struct_7Od5ztdL3MA9pgNqKQKaO_

typedef struct {
  real_T initial_position;
} struct_7Od5ztdL3MA9pgNqKQKaO;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_JhlboIaYaj8R9lEqIdikPC_
#define DEFINED_TYPEDEF_FOR_struct_JhlboIaYaj8R9lEqIdikPC_

typedef struct {
  real_T capacity;
  real_T preload_pressure;
  real_T maximum_pressure;
  real_T initial_volume;
} struct_JhlboIaYaj8R9lEqIdikPC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_TF0qlVsmftkcm4fSW5nY9_
#define DEFINED_TYPEDEF_FOR_struct_TF0qlVsmftkcm4fSW5nY9_

typedef struct {
  real_T max_area;
} struct_TF0qlVsmftkcm4fSW5nY9;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_0JXeuUB3gt3OTCUvuJ240D_
#define DEFINED_TYPEDEF_FOR_struct_0JXeuUB3gt3OTCUvuJ240D_

typedef struct {
  real_T hydraulic_actuator_scale_factor;
  real_T ideal_actuator_scale_factor;
  real_T hydraulic_pressure;
  real_T hydraulic_tf_coeff;
  struct_p3kYapSXlKN8ZkY8laKfiB Servo;
  real_T servo2valve_conversion;
  struct_mPfRZVTEI2aavkvCZhqFlE Valve;
  struct_qqcSWHsTJPbwF9SfkQd5VB Cylinder;
  struct_4b0RClW1XSwQlt5iiDBvJG Geometry;
  real_T orifice_area;
  struct_7Od5ztdL3MA9pgNqKQKaO Sensor;
  struct_JhlboIaYaj8R9lEqIdikPC Accumulator;
  struct_TF0qlVsmftkcm4fSW5nY9 Emergency_Pitch_Valve;
  real_T constraint_tol;
  real_T cylinder_length;
  real_T cylinder_inertia[9];
  real_T cylinder_mass;
  real_T rod_inertia[9];
  real_T rod_mass;
  real_T ideal_actuator_time_constant;
  real_T hydraulic_actuator_time_constant;
} struct_0JXeuUB3gt3OTCUvuJ240D;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_FuIiYSaPhRTyUiQkL3RNRD_
#define DEFINED_TYPEDEF_FOR_struct_FuIiYSaPhRTyUiQkL3RNRD_

typedef struct {
  real_T damping;
} struct_FuIiYSaPhRTyUiQkL3RNRD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_VSENtQ6fZQrBZOqoppZMdD_
#define DEFINED_TYPEDEF_FOR_struct_VSENtQ6fZQrBZOqoppZMdD_

typedef struct {
  struct_FuIiYSaPhRTyUiQkL3RNRD Rotor_Connection;
} struct_VSENtQ6fZQrBZOqoppZMdD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_OjQLboKReyZeIgL3dGgREE_
#define DEFINED_TYPEDEF_FOR_struct_OjQLboKReyZeIgL3dGgREE_

typedef struct {
  real_T resistance;
  real_T inductance;
} struct_OjQLboKReyZeIgL3dGgREE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_984l7ADgqaeuRBr4wfIaEB_
#define DEFINED_TYPEDEF_FOR_struct_984l7ADgqaeuRBr4wfIaEB_

typedef struct {
  real_T damping;
  real_T inertia;
} struct_984l7ADgqaeuRBr4wfIaEB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_HCGqbP8tixzWKaWoF8hoFB_
#define DEFINED_TYPEDEF_FOR_struct_HCGqbP8tixzWKaWoF8hoFB_

typedef struct {
  real_T ron;
  real_T rp;
  real_T cp;
} struct_HCGqbP8tixzWKaWoF8hoFB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_Bugcbf7mGNGCxM7TeKCQAC_
#define DEFINED_TYPEDEF_FOR_struct_Bugcbf7mGNGCxM7TeKCQAC_

typedef struct {
  real_T mass;
  real_T nominal_power;
  real_T voltage;
  real_T frequency;
  struct_OjQLboKReyZeIgL3dGgREE Stator;
  struct_OjQLboKReyZeIgL3dGgREE Rotor;
  real_T mutual_inductance;
  real_T poles;
  struct_984l7ADgqaeuRBr4wfIaEB Simple;
  real_T generator_time_constant;
  real_T PSLD_Interface_Filter_Coeff;
  struct_HCGqbP8tixzWKaWoF8hoFB Breakers;
  real_T radps2pu;
  real_T torque_pu2Nm;
} struct_Bugcbf7mGNGCxM7TeKCQAC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_QlEvLM8RYCeXZuczgmMWvB_
#define DEFINED_TYPEDEF_FOR_struct_QlEvLM8RYCeXZuczgmMWvB_

typedef struct {
  real_T mass;
  real_T rated_power;
} struct_QlEvLM8RYCeXZuczgmMWvB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_hu7Ih2xmcHcBhGiXdCXRDB_
#define DEFINED_TYPEDEF_FOR_struct_hu7Ih2xmcHcBhGiXdCXRDB_

typedef struct {
  real_T voltage;
  real_T frequency;
} struct_hu7Ih2xmcHcBhGiXdCXRDB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_9w7DyzDqSSDIxgpxbWV87G_
#define DEFINED_TYPEDEF_FOR_struct_9w7DyzDqSSDIxgpxbWV87G_

typedef struct {
  real_T stiffness;
  real_T damping;
  real_T torque_radius;
  real_T peak_normal_force;
  real_T engagement_threshold;
  real_T inertia_housing;
  real_T piston_area;
  real_T threshold_pressure;
  real_T kinetic_friction_coeff;
  real_T static_friction_coeff;
  real_T num_friction_surfaces;
  real_T clutch_vel_tol;
} struct_9w7DyzDqSSDIxgpxbWV87G;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_u2Fg7l6NpXDCyu5gOhTODB_
#define DEFINED_TYPEDEF_FOR_struct_u2Fg7l6NpXDCyu5gOhTODB_

typedef struct {
  real_T stiffness;
  real_T damping;
} struct_u2Fg7l6NpXDCyu5gOhTODB;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_nr6CGXkijBrjApc494iFmF_
#define DEFINED_TYPEDEF_FOR_struct_nr6CGXkijBrjApc494iFmF_

typedef struct {
  real_T max_torque_vector[4];
  real_T max_speed_vector[4];
  real_T control_time_constant;
  real_T resistance;
  real_T damping;
  real_T voltage;
  real_T filter_constant;
} struct_nr6CGXkijBrjApc494iFmF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_21ZBgO0VNUSR0mYKhVSREC_
#define DEFINED_TYPEDEF_FOR_struct_21ZBgO0VNUSR0mYKhVSREC_

typedef struct {
  real_T scaling_factor;
} struct_21ZBgO0VNUSR0mYKhVSREC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_P2L5V6YG83XZ6MgEyLl6iE_
#define DEFINED_TYPEDEF_FOR_struct_P2L5V6YG83XZ6MgEyLl6iE_

typedef struct {
  real_T inertia_motor_shaft;
  real_T inertia_carrier;
  real_T p_gear_rato_step_1;
  real_T p_gear_rato_step_2;
  real_T p_gear_rato_step_3;
  real_T p_gear_rato_step_4;
  real_T yaw_gear_diameter;
  real_T yaw_gear_thickness;
  struct_u2Fg7l6NpXDCyu5gOhTODB Gearbox_Flexibility;
  real_T damping;
  real_T MSLD_Interface_TF_Coeff;
  real_T MSLD_Interface_Filter_Coeff;
  real_T yaw_ring_diameter;
  real_T yaw_ring_thickness;
  struct_nr6CGXkijBrjApc494iFmF Motor;
  struct_21ZBgO0VNUSR0mYKhVSREC Ideal;
  real_T max_yaw_rate;
  real_T ideal_actuator_time_constant;
} struct_P2L5V6YG83XZ6MgEyLl6iE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_f1VjlOGa4YmuBgvwAAhrHF_
#define DEFINED_TYPEDEF_FOR_struct_f1VjlOGa4YmuBgvwAAhrHF_

typedef struct {
  real_T P_Gain;
  real_T I_Gain;
} struct_f1VjlOGa4YmuBgvwAAhrHF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_GdoRUZPqyeOp3ZdXMVaVoH_
#define DEFINED_TYPEDEF_FOR_struct_GdoRUZPqyeOp3ZdXMVaVoH_

typedef struct {
  real_T P_Gain;
  real_T I_Gain;
  real_T D_Gain;
  struct_f1VjlOGa4YmuBgvwAAhrHF Yaw_Rate;
} struct_GdoRUZPqyeOp3ZdXMVaVoH;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_mC66eZk2N1YAuWT4t3qGSE_
#define DEFINED_TYPEDEF_FOR_struct_mC66eZk2N1YAuWT4t3qGSE_

typedef struct {
  real_T profile[728];
} struct_mC66eZk2N1YAuWT4t3qGSE;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_OvERKxa5emj52ZlerRp2AF_
#define DEFINED_TYPEDEF_FOR_struct_OvERKxa5emj52ZlerRp2AF_

typedef struct {
  real_T mass;
  real_T inertia[9];
  real_T length;
  struct_kskDyotS523t4kXE8GJRSG CG_Offset;
  struct_kskDyotS523t4kXE8GJRSG Yaw_Ctr_Offset;
  real_T damping;
  real_T chamfer;
  struct_mC66eZk2N1YAuWT4t3qGSE Geometry;
} struct_OvERKxa5emj52ZlerRp2AF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_yWCqpMB2eT21MIMr1gFptC_
#define DEFINED_TYPEDEF_FOR_struct_yWCqpMB2eT21MIMr1gFptC_

typedef struct {
  real_T wind_speed_cut_in_lower;
  real_T wind_speed_cut_out;
  real_T wind_speed_cut_in_upper;
  real_T wind_speed_average_period;
  real_T turbine_speed_cut_in;
  real_T turbine_speed_cut_out;
  real_T turbine_speed_park;
  real_T sample_time;
} struct_yWCqpMB2eT21MIMr1gFptC;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_KKJLTD5WsNaCWur35lwnIF_
#define DEFINED_TYPEDEF_FOR_struct_KKJLTD5WsNaCWur35lwnIF_

typedef struct {
  real_T AL_Dynamics;
} struct_KKJLTD5WsNaCWur35lwnIF;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_jBfPITc89BZOUITYrKwRRD_
#define DEFINED_TYPEDEF_FOR_struct_jBfPITc89BZOUITYrKwRRD_

typedef struct {
  struct_KKJLTD5WsNaCWur35lwnIF Simple_Lift_And_Drag;
} struct_jBfPITc89BZOUITYrKwRRD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_VxB4cZRzPu25TOKhJlNWLD_
#define DEFINED_TYPEDEF_FOR_struct_VxB4cZRzPu25TOKhJlNWLD_

typedef struct {
  struct_VSqffC9uXgYsTbCmvsqodH Lift_Drag_Coeff;
  struct_j4uDtLxTuVlfySlL7I37OF Air;
  struct_Di3CnZQBxWGEFFAy3tQxi Rotor;
  struct_apfOIp3eiu3sjFRMWNq7jF NACA0015;
  struct_SVIV8u68u95QU7HYBtdrxG Tower;
  struct_EwfAMnACdOmniE2EROF9tF Blade;
  struct_GphMeAxusWEaIPERrSwCqC Geartrain;
  struct_IxHLiFZ9bqHC7py6CjHCUF Empty_Geartrain;
  struct_TVma8f5sh5pwgVDoSH4pdG Pitch_Controller;
  struct_0JXeuUB3gt3OTCUvuJ240D Pitch_Actuator;
  struct_VSENtQ6fZQrBZOqoppZMdD Pitch_Actuation;
  struct_Bugcbf7mGNGCxM7TeKCQAC Generator;
  struct_QlEvLM8RYCeXZuczgmMWvB Transformer;
  struct_hu7Ih2xmcHcBhGiXdCXRDB Grid;
  struct_9w7DyzDqSSDIxgpxbWV87G Brakes;
  struct_P2L5V6YG83XZ6MgEyLl6iE Yaw_Actuator;
  struct_GdoRUZPqyeOp3ZdXMVaVoH Yaw_Controller;
  struct_OvERKxa5emj52ZlerRp2AF Nacelle;
  struct_yWCqpMB2eT21MIMr1gFptC Main_Controller;
  struct_jBfPITc89BZOUITYrKwRRD Environment;
} struct_VxB4cZRzPu25TOKhJlNWLD;

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_xsORZR4HqlewCZVNsuZuW_
#define DEFINED_TYPEDEF_FOR_struct_xsORZR4HqlewCZVNsuZuW_

typedef struct {
  real_T extension[88];
  real_T angle[88];
} struct_xsORZR4HqlewCZVNsuZuW;

#endif

/* Parameters (default storage) */
typedef struct P_Wind_Turbine_T_ P_Wind_Turbine_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Wind_Turbine_T RT_MODEL_Wind_Turbine_T;

#endif                                 /* RTW_HEADER_Wind_Turbine_types_h_ */
