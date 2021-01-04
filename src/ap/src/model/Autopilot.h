#ifndef RTW_HEADER_Autopilot_h_
#define RTW_HEADER_Autopilot_h_
#include <cfloat>
#include <cmath>
#include <cstring>
#ifndef Autopilot_COMMON_INCLUDES_
# define Autopilot_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif

#include "Autopilot_types.h"

typedef struct {
  uint8_T is_active_c1_Autopilot;
  uint8_T is_c1_Autopilot;
} rtDW_Chart_Autopilot_T;

typedef struct {
  real_T u;
  real_T LAW;
} BlockIO_Autopilot_T;

typedef struct {
  real_T Delay_DSTATE;
  real_T Delay_DSTATE_m;
  real_T Delay1_DSTATE;
  real_T Delay_DSTATE_o;
  real_T Delay_DSTATE_k;
  real_T Delay1_DSTATE_o;
  real_T Delay_DSTATE_h;
  real_T Delay_DSTATE_h5;
  real_T Delay1_DSTATE_c;
  real_T Delay_DSTATE_i;
  real_T Delay_DSTATE_n;
  real_T Delay_DSTATE_os;
  real_T Delay1_DSTATE_p;
  real_T Delay_DSTATE_e;
  real_T Delay_DSTATE_ki;
  real_T Delay1_DSTATE_b;
  real_T Delay_DSTATE_it;
  real_T Delay_DSTATE_mk;
  real_T Delay1_DSTATE_d;
  real_T Delay_DSTATE_b;
  real_T Delay_DSTATE_kl;
  real_T Delay1_DSTATE_m;
  real_T Delay_DSTATE_nn;
  real_T loc_trk_time;
  uint8_T icLoad;
  uint8_T icLoad_f;
  uint8_T is_active_c10_Autopilot;
  uint8_T is_c10_Autopilot;
  uint8_T is_active_c3_Autopilot;
  uint8_T is_c3_Autopilot;
  uint8_T is_active_c5_Autopilot;
  uint8_T is_c5_Autopilot;
  uint8_T is_active_c6_Autopilot;
  uint8_T is_c6_Autopilot;
  uint8_T is_LOC;
  boolean_T IC_FirstOutputTime;
  boolean_T IC_FirstOutputTime_b;
  boolean_T IC_FirstOutputTime_i;
  boolean_T IC_FirstOutputTime_n;
  boolean_T IC_FirstOutputTime_a;
  boolean_T IC_FirstOutputTime_o;
  rtDW_Chart_Autopilot_T sf_Chart_mu;
  rtDW_Chart_Autopilot_T sf_Chart_cg;
  rtDW_Chart_Autopilot_T sf_Chart_f;
  rtDW_Chart_Autopilot_T sf_Chart_c;
  rtDW_Chart_Autopilot_T sf_Chart_n;
  rtDW_Chart_Autopilot_T sf_Chart_a;
  rtDW_Chart_Autopilot_T sf_Chart_m;
} D_Work_Autopilot_T;

typedef struct {
  ap_input in;
} ExternalInputs_Autopilot_T;

typedef struct {
  ap_output out;
} ExternalOutputs_Autopilot_T;

struct Parameters_Autopilot_T_ {
  ap_output ap_output_MATLABStruct;
  real_T ScheduledGain_BreakpointsForDimension1[3];
  real_T ScheduledGain_BreakpointsForDimension1_d[4];
  real_T ScheduledGain_BreakpointsForDimension1_l[4];
  real_T ScheduledGain_BreakpointsForDimension1_p[4];
  real_T ScheduledGain_BreakpointsForDimension1_a[5];
  real_T ScheduledGain_BreakpointsForDimension1_f[4];
  real_T ScheduledGain_BreakpointsForDimension1_e[5];
  real_T ScheduledGain_BreakpointsForDimension1_pz[4];
  real_T ScheduledGain_BreakpointsForDimension1_h[5];
  real_T LagFilter1_C1;
  real_T LagFilter_C1;
  real_T LagFilter_C1_l;
  real_T LagFilter1_C1_a;
  real_T LagFilter_C1_n;
  real_T LagFilter1_C1_p;
  real_T LagFilter_C1_g;
  real_T DiscreteTimeIntegratorVariableTs_Gain;
  real_T DiscreteDerivativeVariableTs_Gain;
  real_T DiscreteDerivativeVariableTs_Gain_m;
  real_T DiscreteDerivativeVariableTs_Gain_l;
  real_T DiscreteDerivativeVariableTs_Gain_lf;
  real_T DiscreteTimeIntegratorVariableTs_InitialCondition;
  real_T DiscreteDerivativeVariableTs_InitialCondition;
  real_T RateLimiterVariableTs_InitialCondition;
  real_T DiscreteDerivativeVariableTs_InitialCondition_e;
  real_T DiscreteDerivativeVariableTs_InitialCondition_h;
  real_T DiscreteDerivativeVariableTs_InitialCondition_b;
  real_T RateLimiterVariableTs_InitialCondition_p;
  real_T DiscreteTimeIntegratorVariableTs_LowerLimit;
  real_T ScheduledGain_Table[3];
  real_T ScheduledGain_Table_h[4];
  real_T ScheduledGain_Table_c[4];
  real_T ScheduledGain_Table_f[4];
  real_T ScheduledGain_Table_p[5];
  real_T ScheduledGain_Table_n[4];
  real_T ScheduledGain_Table_pf[5];
  real_T ScheduledGain_Table_g[4];
  real_T ScheduledGain_Table_i[5];
  real_T DiscreteTimeIntegratorVariableTs_UpperLimit;
  real_T CompareToConstant_const;
  real_T CompareToConstant_const_d;
  real_T CompareToConstant_const_j;
  real_T RateLimiterVariableTs_lo;
  real_T RateLimiterVariableTs_lo_o;
  real_T RateLimiterVariableTs_up;
  real_T RateLimiterVariableTs_up_i;
  real_T Constant_Value;
  real_T Gain_Gain;
  real_T Gain1_Gain;
  real_T Constant1_Value;
  real_T Gain_Gain_a;
  real_T Gain_Gain_b;
  real_T Gain5_Gain;
  real_T beta_Value;
  real_T beta_Value_m;
  real_T beta_Value_b;
  real_T beta_Value_e;
  real_T Constant3_Value;
  real_T Gain_Gain_h;
  real_T Gain1_Gain_j;
  real_T Gain1_Gain_l;
  real_T Gain1_Gain_f;
  real_T Gain1_Gain_m;
  real_T msftmin_Gain;
  real_T Constant_Value_p;
  real_T Constant3_Value_n;
  real_T ftmintoms_Gain;
  real_T Gain_Gain_l;
  real_T Gain_Gain_m;
  real_T Constant2_Value;
  real_T Gain4_Gain;
  real_T Switch_Threshold;
  real_T Gain1_Gain_e;
  real_T Gain_Gain_c;
  real_T Gain1_Gain_n;
  real_T Gain1_Gain_a;
  real_T msftmin_Gain_i;
  real_T ftmintoms_Gain_l;
  real_T Gain_Gain_g;
  real_T Gain_Gain_d;
  real_T Switch_Threshold_k;
  real_T Gain1_Gain_h;
  real_T Gain1_Gain_k;
  real_T msftmin_Gain_k;
  real_T Constant_Value_b;
  real_T Gain_Gain_e;
  real_T ftmintoms_Gain_m;
  real_T Gain_Gain_j;
  real_T Gain_Gain_n;
  real_T Gain1_Gain_hl;
  real_T Gain1_Gain_mv;
  real_T msftmin_Gain_g;
  real_T Gain_Gain_f;
  real_T Saturation_UpperSat;
  real_T Saturation_LowerSat;
  real_T ftmintoms_Gain_o;
  real_T Gain_Gain_g5;
  real_T Gain_Gain_p;
  real_T Constant_Value_m;
  real_T Y_Y0;
  real_T Gain1_Gain_b;
  real_T GainTheta_Gain;
  real_T GainTheta1_Gain;
  real_T Gain_Gain_lv;
  real_T Gainqk_Gain;
  real_T Gain_Gain_aq;
  real_T Gain_Gain_k;
  real_T Gainpk_Gain;
  real_T Gain_Gain_af;
  real_T Constant1_Value_p;
  real_T Saturation_UpperSat_k;
  real_T Saturation_LowerSat_m;
  real_T Gain1_Gain_k1;
  real_T Saturation1_UpperSat;
  real_T Saturation1_LowerSat;
  real_T Gain2_Gain;
  real_T Switch_Threshold_o;
  real_T Gain1_Gain_h5;
  real_T Saturation_UpperSat_o;
  real_T Saturation_LowerSat_o;
  real_T Gain2_Gain_g;
  real_T Saturation1_UpperSat_g;
  real_T Saturation1_LowerSat_k;
  real_T Gain6_Gain;
  real_T Constant3_Value_j;
  real_T Constant3_Value_jx;
  real_T Gain1_Gain_fq;
  real_T Constant3_Value_a;
  real_T Constant3_Value_p;
  real_T Gain_Gain_la;
  real_T Constant3_Value_c;
  real_T Gain_Gain_ht;
  real_T Constant2_Value_l;
  real_T Constant1_Value_e;
  real_T Delay_InitialCondition;
  real_T Constant_Value_i;
  real_T Delay1_InitialCondition;
  real_T ROLLLIM1_tableData[5];
  real_T ROLLLIM1_bp01Data[5];
  real_T Constant3_Value_d;
  real_T Gain_Gain_mu;
  real_T Constant_Value_c;
  real_T Constant3_Value_h;
  real_T Gain_Gain_cr;
  real_T Constant_Value_i1;
  real_T Constant3_Value_l;
  real_T Constant3_Value_m;
  real_T Gain_Gain_nu;
  real_T Saturation_UpperSat_kr;
  real_T Saturation_LowerSat_p;
  real_T Gain2_Gain_f;
  real_T Gain1_Gain_nh;
  real_T Gain_Gain_a1;
  real_T Constant_Value_cw;
  real_T Constant3_Value_lm;
  real_T Constant3_Value_i;
  real_T Gain1_Gain_ly;
  real_T Saturation_UpperSat_m;
  real_T Saturation_LowerSat_k;
  real_T Saturation1_UpperSat_i;
  real_T Saturation1_LowerSat_g;
  real_T Constant3_Value_hb;
  real_T Constant3_Value_lb;
  real_T Gain3_Gain;
  real_T Gain_Gain_l0;
  real_T Constant_Value_e;
  real_T Constant3_Value_ci;
  real_T Constant3_Value_m5;
  real_T Gain3_Gain_i;
  real_T Delay_InitialCondition_j;
  real_T Constant_Value_io;
  real_T Delay1_InitialCondition_m;
  real_T Gain_Gain_h1;
  real_T Constant_Value_p1;
  real_T Constant2_Value_h;
  real_T Gain1_Gain_kf;
  real_T Delay_InitialCondition_p;
  real_T Constant_Value_mn;
  real_T Delay1_InitialCondition_e;
  real_T Saturation_UpperSat_n;
  real_T Saturation_LowerSat_d;
  real_T Constant_Value_g;
  real_T Switch_Threshold_d;
  real_T kntoms_Gain;
  real_T IC_Value;
  real_T kntoms_Gain_e;
  real_T IC_Value_i;
  real_T Gain3_Gain_f;
  real_T Delay_InitialCondition_jp;
  real_T Constant_Value_l;
  real_T Delay1_InitialCondition_c;
  real_T Saturation_UpperSat_h;
  real_T Saturation_LowerSat_c;
  real_T Gain1_Gain_bz;
  real_T Constant_Value_em;
  real_T Gain1_Gain_k0;
  real_T Gain1_Gain_o;
  real_T Gain_Gain_lt;
  real_T Gain_Gain_gi;
  real_T Constant1_Value_ef;
  real_T Gain_Gain_h4;
  real_T Constant_Value_k;
  real_T Gain1_Gain_oj;
  real_T Gain1_Gain_p;
  real_T kntoms_Gain_i;
  real_T msftmin_Gain_n;
  real_T ftmintoms_Gain_n;
  real_T IC_Value_f;
  real_T Gain_Gain_kq;
  real_T Gain_Gain_li;
  real_T kntoms_Gain_a;
  real_T IC_Value_d;
  real_T Gain1_Gain_jl;
  real_T Gain3_Gain_o;
  real_T Delay_InitialCondition_i;
  real_T Constant_Value_cg;
  real_T Delay1_InitialCondition_n;
  real_T kntoms_Gain_av;
  real_T IC_Value_h;
  real_T Constant1_Value_d;
  real_T Gain3_Gain_fd;
  real_T Delay_InitialCondition_m;
  real_T Constant_Value_eg;
  real_T Delay1_InitialCondition_a;
  real_T Saturation_UpperSat_nk;
  real_T Saturation_LowerSat_h;
  real_T Gain1_Gain_pc;
  real_T Constant_Value_j;
  real_T Gain1_Gain_k4;
  real_T Gain1_Gain_fr;
  real_T Gain_Gain_o;
  real_T Gain_Gain_le;
  real_T Constant1_Value_l;
  real_T Gain_Gain_hk;
  real_T Constant_Value_in;
  real_T Gain1_Gain_j5;
  real_T Gain1_Gain_c;
  real_T kntoms_Gain_f;
  real_T msftmin_Gain_nw;
  real_T ftmintoms_Gain_lh;
  real_T IC_Value_k;
  real_T Gain_Gain_jb;
  real_T Gain_Gain_oq;
  real_T Constant1_Value_i;
  real_T Constant2_Value_h1;
  real_T Gain1_Gain_f3;
  real_T Delay_InitialCondition_f;
  real_T Constant_Value_d;
  real_T Delay1_InitialCondition_l;
  real_T Saturation_UpperSat_j;
  real_T Saturation_LowerSat_g;
  real_T Constant_Value_lg;
  uint8_T ManualSwitch_CurrentSetting;
  uint8_T ManualSwitch_CurrentSetting_b;
};

extern const ap_input Autopilot_rtZap_input;
extern const ap_output Autopilot_rtZap_output;
class AutopilotModelClass {
 public:
  ExternalInputs_Autopilot_T Autopilot_U;
  ExternalOutputs_Autopilot_T Autopilot_Y;
  void initialize();
  void step();
  void terminate();
  AutopilotModelClass();
  ~AutopilotModelClass();
 private:
  static Parameters_Autopilot_T Autopilot_P;
  BlockIO_Autopilot_T Autopilot_B;
  D_Work_Autopilot_T Autopilot_DWork;
  void Autopilot_Chart_Init(rtDW_Chart_Autopilot_T *localDW);
  void Autopilot_Chart(real_T rtu_right, real_T rtu_left, real_T rtu_use_short_path, real_T *rty_out,
                       rtDW_Chart_Autopilot_T *localDW);
};

#endif

