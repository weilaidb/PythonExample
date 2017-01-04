#define D11SCC_SLOW2FAST_TRANSITION	2
#define EXT_ILP_HZ 32768
#define ILP_CALC_DUR	10
#define FVCO_880	880000
#define FVCO_1760	1760000
#define FVCO_1440	1440000
#define FVCO_960	960000
#define PMU1_XTALTAB0_1440_12000K	0
#define PMU1_XTALTAB0_1440_13000K	1
#define PMU1_XTALTAB0_1440_14400K	2
#define PMU1_XTALTAB0_1440_15360K	3
#define PMU1_XTALTAB0_1440_16200K	4
#define PMU1_XTALTAB0_1440_16800K	5
#define PMU1_XTALTAB0_1440_19200K	6
#define PMU1_XTALTAB0_1440_19800K	7
#define PMU1_XTALTAB0_1440_20000K	8
#define PMU1_XTALTAB0_1440_25000K	9
#define PMU1_XTALTAB0_1440_26000K	10
#define PMU1_XTALTAB0_1440_30000K	11
#define PMU1_XTALTAB0_1440_37400K	12
#define PMU1_XTALTAB0_1440_38400K	13
#define PMU1_XTALTAB0_1440_40000K	14
#define PMU1_XTALTAB0_1440_48000K	15
#define PMU1_XTALTAB0_960_12000K	0
#define PMU1_XTALTAB0_960_13000K	1
#define PMU1_XTALTAB0_960_14400K	2
#define PMU1_XTALTAB0_960_15360K	3
#define PMU1_XTALTAB0_960_16200K	4
#define PMU1_XTALTAB0_960_16800K	5
#define PMU1_XTALTAB0_960_19200K	6
#define PMU1_XTALTAB0_960_19800K	7
#define PMU1_XTALTAB0_960_20000K	8
#define PMU1_XTALTAB0_960_25000K	9
#define PMU1_XTALTAB0_960_26000K	10
#define PMU1_XTALTAB0_960_30000K	11
#define PMU1_XTALTAB0_960_37400K	12
#define PMU1_XTALTAB0_960_38400K	13
#define PMU1_XTALTAB0_960_40000K	14
#define PMU1_XTALTAB0_960_48000K	15
#define PMU1_XTALTAB0_880_12000K	0
#define PMU1_XTALTAB0_880_13000K	1
#define PMU1_XTALTAB0_880_14400K	2
#define PMU1_XTALTAB0_880_15360K	3
#define PMU1_XTALTAB0_880_16200K	4
#define PMU1_XTALTAB0_880_16800K	5
#define PMU1_XTALTAB0_880_19200K	6
#define PMU1_XTALTAB0_880_19800K	7
#define PMU1_XTALTAB0_880_20000K	8
#define PMU1_XTALTAB0_880_24000K	9
#define PMU1_XTALTAB0_880_25000K	10
#define PMU1_XTALTAB0_880_26000K	11
#define PMU1_XTALTAB0_880_30000K	12
#define PMU1_XTALTAB0_880_37400K	13
#define PMU1_XTALTAB0_880_38400K	14
#define PMU1_XTALTAB0_880_40000K	15
#define XTAL_FREQ_24000MHZ		24000
#define XTAL_FREQ_30000MHZ		30000
#define XTAL_FREQ_37400MHZ		37400
#define XTAL_FREQ_48000MHZ		48000
#define RES_DEPEND_SET		0
#define RES_DEPEND_ADD		1
#define RES_DEPEND_REMOVE	-1
#define D11SCC_SLOW2FAST_TRANSITION	2
typedef struct  pmu_res_updown_t;
typedef struct  pmu_res_depend_t;
typedef struct  pmu1_xtaltab0_t;
static bool si_pmu_res_depfltr_bb(si_t *sih);
static bool si_pmu_res_depfltr_ncb(si_t *sih);
static bool si_pmu_res_depfltr_paldo(si_t *sih);
static bool si_pmu_res_depfltr_npaldo(si_t *sih);
static const pmu_res_updown_t bcm4328a0_res_updown[] = ;
static const pmu_res_depend_t bcm4328a0_res_depend[] = ;
static const pmu_res_updown_t bcm4325a0_res_updown_qt[] = ;
static const pmu_res_updown_t bcm4325a0_res_updown[] = ;
static const pmu_res_depend_t bcm4325a0_res_depend[] = ;
static const pmu_res_updown_t bcm4315a0_res_updown_qt[] = ;
static const pmu_res_updown_t bcm4315a0_res_updown[] = ;
static const pmu_res_depend_t bcm4315a0_res_depend[] = ;
static const pmu_res_updown_t bcm4329_res_updown[] = ;
static const pmu_res_depend_t bcm4329_res_depend[] = ;
static const pmu_res_updown_t bcm4319a0_res_updown_qt[] = ;
static const pmu_res_updown_t bcm4319a0_res_updown[] = ;
static const pmu_res_depend_t bcm4319a0_res_depend[] = ;
static const pmu_res_updown_t bcm4336a0_res_updown_qt[] = ;
static const pmu_res_updown_t bcm4336a0_res_updown[] = ;
static const pmu_res_depend_t bcm4336a0_res_depend[] = ;
static const pmu_res_updown_t bcm4330a0_res_updown_qt[] = ;
static const pmu_res_updown_t bcm4330a0_res_updown[] = ;
static const pmu_res_depend_t bcm4330a0_res_depend[] = ;
static const pmu1_xtaltab0_t pmu1_xtaltab0_1440[] = ;
static const pmu1_xtaltab0_t pmu1_xtaltab0_960[] = ;
static const pmu1_xtaltab0_t pmu1_xtaltab0_880_4329[] = ;
static const pmu1_xtaltab0_t pmu1_xtaltab0_880[] = ;
static bool si_pmu_res_depfltr_bb(si_t *sih)
static bool si_pmu_res_depfltr_ncb(si_t *sih)
static bool si_pmu_res_depfltr_paldo(si_t *sih)
static bool si_pmu_res_depfltr_npaldo(si_t *sih)
static u32
si_pmu_res_deps(si_t *sih, chipcregs_t *cc, u32 rsrcs,
bool all)
static void si_pmu_res_masks(si_t *sih, u32 * pmin, u32 * pmax)
static uint
si_pmu_res_uptime(si_t *sih, chipcregs_t *cc, u8 rsrc)
static void
si_pmu_spuravoid_pllupdate(si_t *sih, chipcregs_t *cc, u8 spuravoid)
static const pmu1_xtaltab0_t *si_pmu1_xtaldef0(si_t *sih)
static const pmu1_xtaltab0_t *si_pmu1_xtaltab0(si_t *sih)
static u32
si_pmu1_alpclk0(si_t *sih, chipcregs_t *cc)
static u32 si_pmu1_pllfvco0(si_t *sih)
static void si_pmu_set_4330_plldivs(si_t *sih)
static void si_pmu1_pllinit0(si_t *sih, chipcregs_t *cc, u32 xtal)
u32 si_pmu_ilp_clock(si_t *sih)
void si_pmu_set_ldo_voltage(si_t *sih, u8 ldo, u8 voltage)
u16 si_pmu_fast_pwrup_delay(si_t *sih)
void si_pmu_sprom_enable(si_t *sih, bool enable)
u32 si_pmu_chipcontrol(si_t *sih, uint reg, u32 mask, u32 val)
u32 si_pmu_regcontrol(si_t *sih, uint reg, u32 mask, u32 val)
u32 si_pmu_pllcontrol(si_t *sih, uint reg, u32 mask, u32 val)
void si_pmu_pllupd(si_t *sih)
u32 si_pmu_alp_clock(si_t *sih)
void si_pmu_spuravoid(si_t *sih, u8 spuravoid)
void si_pmu_init(si_t *sih)
void si_pmu_chip_init(si_t *sih)
void si_pmu_swreg_init(si_t *sih)
void si_pmu_pll_init(si_t *sih, uint xtalfreq)
void si_pmu_res_init(si_t *sih)
u32 si_pmu_measure_alpclk(si_t *sih)
bool si_pmu_is_otp_powered(si_t *sih)
void si_pmu_otp_power(si_t *sih, bool on)
