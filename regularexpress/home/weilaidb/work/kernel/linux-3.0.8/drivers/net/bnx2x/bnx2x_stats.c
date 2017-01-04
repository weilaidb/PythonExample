#define ADD_64(s_hi, a_hi, s_lo, a_lo) \
do  while (0)
#define DIFF_64(d_hi, m_hi, s_hi, d_lo, m_lo, s_lo) \
do  while (0)
#define UPDATE_STAT64(s, t) \
do  while (0)
#define UPDATE_STAT64_NIG(s, t) \
do  while (0)
#define ADD_EXTEND_64(s_hi, s_lo, a) \
do  while (0)
#define UPDATE_EXTEND_STAT(s) \
do  while (0)
#define UPDATE_EXTEND_TSTAT(s, t) \
do  while (0)
#define UPDATE_EXTEND_USTAT(s, t) \
do  while (0)
#define UPDATE_EXTEND_XSTAT(s, t) \
do  while (0)
#define SUB_64(m_hi, s_hi, m_lo, s_lo) \
do  while (0)
#define SUB_EXTEND_64(m_hi, m_lo, s) \
do  while (0)
#define SUB_EXTEND_USTAT(s, t) \
do  while (0)
static inline long bnx2x_hilo(u32 *hiref)
static void bnx2x_storm_stats_post(struct bnx2x *bp)
static void bnx2x_hw_stats_post(struct bnx2x *bp)
static int bnx2x_stats_comp(struct bnx2x *bp)
static void bnx2x_stats_pmf_update(struct bnx2x *bp)
static void bnx2x_port_stats_init(struct bnx2x *bp)
static void bnx2x_func_stats_init(struct bnx2x *bp)
static void bnx2x_stats_start(struct bnx2x *bp)
static void bnx2x_stats_pmf_start(struct bnx2x *bp)
static void bnx2x_stats_restart(struct bnx2x *bp)
static void bnx2x_bmac_stats_update(struct bnx2x *bp)
static void bnx2x_emac_stats_update(struct bnx2x *bp)
static int bnx2x_hw_stats_update(struct bnx2x *bp)
static int bnx2x_storm_stats_update(struct bnx2x *bp)
static void bnx2x_net_stats_update(struct bnx2x *bp)
static void bnx2x_drv_stats_update(struct bnx2x *bp)
static void bnx2x_stats_update(struct bnx2x *bp)
static void bnx2x_port_stats_stop(struct bnx2x *bp)
static void bnx2x_stats_stop(struct bnx2x *bp)
static void bnx2x_stats_do_nothing(struct bnx2x *bp)
static const struct  bnx2x_stats_stm[STATS_STATE_MAX][STATS_EVENT_MAX] = ;
void bnx2x_stats_handle(struct bnx2x *bp, enum bnx2x_stats_event event)
static void bnx2x_port_stats_base_init(struct bnx2x *bp)
static void bnx2x_func_stats_base_init(struct bnx2x *bp)
static void bnx2x_func_stats_base_update(struct bnx2x *bp)
void bnx2x_stats_init(struct bnx2x *bp)
