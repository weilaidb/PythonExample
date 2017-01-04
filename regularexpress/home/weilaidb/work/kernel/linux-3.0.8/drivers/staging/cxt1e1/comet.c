#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define STATIC
#define STATIC  static
extern int  cxt1e1_log_level;
#define COMET_NUM_SAMPLES   24
#define COMET_NUM_UNITS     5
STATIC void SetPwrLevel (comet_t * comet);
STATIC void WrtRcvEqualizerTbl (ci_t * ci, comet_t * comet, u_int32_t *table);
STATIC void WrtXmtWaveformTbl (ci_t * ci, comet_t * comet, u_int8_t table[COMET_NUM_SAMPLES][COMET_NUM_UNITS]);
void       *TWV_table[12] = ;
static int
lbo_tbl_lkup (int t1, int lbo)
void
init_comet (void *ci, comet_t * comet, u_int32_t port_mode, int clockmaster,
u_int8_t moreParams)
STATIC void
WrtXmtWaveform (ci_t * ci, comet_t * comet, u_int32_t sample, u_int32_t unit, u_int8_t data)
STATIC void
WrtXmtWaveformTbl (ci_t * ci, comet_t * comet,
u_int8_t table[COMET_NUM_SAMPLES][COMET_NUM_UNITS])
STATIC void
WrtRcvEqualizerTbl (ci_t * ci, comet_t * comet, u_int32_t *table)
STATIC void
SetPwrLevel (comet_t * comet)
