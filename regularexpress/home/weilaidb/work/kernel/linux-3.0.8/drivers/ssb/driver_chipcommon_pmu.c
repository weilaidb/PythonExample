static u32 ssb_chipco_pll_read(struct ssb_chipcommon *cc, u32 offset)
static void ssb_chipco_pll_write(struct ssb_chipcommon *cc,
u32 offset, u32 value)
static void ssb_chipco_regctl_maskset(struct ssb_chipcommon *cc,
u32 offset, u32 mask, u32 set)
struct pmu0_plltab_entry ;
static const struct pmu0_plltab_entry pmu0_plltab[] = ;
#define SSB_PMU0_DEFAULT_XTALFREQ	20000
static const struct pmu0_plltab_entry * pmu0_plltab_find_entry(u32 crystalfreq)
static void ssb_pmu0_pllinit_r0(struct ssb_chipcommon *cc,
u32 crystalfreq)
struct pmu1_plltab_entry ;
static const struct pmu1_plltab_entry pmu1_plltab[] = ;
#define SSB_PMU1_DEFAULT_XTALFREQ	15360
static const struct pmu1_plltab_entry * pmu1_plltab_find_entry(u32 crystalfreq)
static void ssb_pmu1_pllinit_r0(struct ssb_chipcommon *cc,
u32 crystalfreq)
static void ssb_pmu_pll_init(struct ssb_chipcommon *cc)
struct pmu_res_updown_tab_entry ;
enum pmu_res_depend_tab_task ;
struct pmu_res_depend_tab_entry ;
static const struct pmu_res_updown_tab_entry pmu_res_updown_tab_4328a0[] = ;
static const struct pmu_res_depend_tab_entry pmu_res_depend_tab_4328a0[] = ;
static const struct pmu_res_updown_tab_entry pmu_res_updown_tab_4325a0[] = ;
static const struct pmu_res_depend_tab_entry pmu_res_depend_tab_4325a0[] = ;
static void ssb_pmu_resources_init(struct ssb_chipcommon *cc)
/* http:
void ssb_pmu_init(struct ssb_chipcommon *cc)
void ssb_pmu_set_ldo_voltage(struct ssb_chipcommon *cc,
enum ssb_pmu_ldo_volt_id id, u32 voltage)
void ssb_pmu_set_ldo_paref(struct ssb_chipcommon *cc, bool on)
EXPORT_SYMBOL(ssb_pmu_set_ldo_voltage);
EXPORT_SYMBOL(ssb_pmu_set_ldo_paref);
