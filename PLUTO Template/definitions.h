#define  PHYSICS                 RMHD
#define  DIMENSIONS              2
#define  COMPONENTS              2
#define  GEOMETRY                CARTESIAN
#define  BODY_FORCE              POTENTIAL
#define  COOLING                 H2_COOL
#define  RECONSTRUCTION          LINEAR
#define  TIME_STEPPING           RK2
#define  DIMENSIONAL_SPLITTING   NO
#define  NTRACER                 0
#define  USER_DEF_PARAMETERS     14

/* -- physics dependent declarations -- */

#define  EOS                     IDEAL
#define  ENTROPY_SWITCH          NO
#define  DIVB_CONTROL            NO

/* -- user-defined parameters (labels) -- */

#define  radius_cloud            0
#define  rho_ism                 1
#define  rho_cloud               2
#define  rho_jet                 3
#define  lorentz_jet             4
#define  pressure_gas            5
#define  pressure_jet            6
#define  x_HI_cloud              7
#define  x_HI_ism                8
#define  x_HII_cloud             9
#define  x_HII_ism               10
#define  x_H2_cloud              11
#define  x_H2_ism                12
#define  pl_rho1                 13

/* [Beg] user-defined constants (do not change this line) */

#define  UNIT_DENSITY            1.67e-24
#define  UNIT_LENGTH             3.0e19
#define  UNIT_VELOCITY           3.0e10

/* [End] user-defined constants (do not change this line) */

/* -- supplementary constants (user editable) -- */ 

#define  INITIAL_SMOOTHING         NO
#define  WARNING_MESSAGES          NO
#define  PRINT_TO_FILE             NO
#define  INTERNAL_BOUNDARY         NO
#define  SHOCK_FLATTENING          NO
#define  CHAR_LIMITING             NO
#define  LIMITER                   DEFAULT
#define  ASSIGN_VECTOR_POTENTIAL   NO
#define  UPDATE_VECTOR_POTENTIAL   NO
