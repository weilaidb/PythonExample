#define M_DDR		1
#define M_LOCK_CTRL	(1 << 2)
#define M_UNLOCK	0
#define M_LOCK		1
static struct memory_timings mem_timings;
static u32 curr_perf_level = CORE_CLK_SRC_DPLL_X2;
static u32 omap2xxx_sdrc_get_slow_dll_ctrl(void)
static u32 omap2xxx_sdrc_get_fast_dll_ctrl(void)
static u32 omap2xxx_sdrc_get_type(void)
u32 omap2xxx_sdrc_dll_is_unlocked(void)
u32 omap2xxx_sdrc_reprogram(u32 level, u32 force)
void omap2xxx_sdrc_init_params(u32 force_lock_to_unlock_mode)
