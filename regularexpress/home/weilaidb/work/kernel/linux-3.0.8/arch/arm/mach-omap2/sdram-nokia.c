struct sdram_timings ;
static const struct sdram_timings nokia_97dot6mhz_timings[] = ;
static const struct sdram_timings nokia_166mhz_timings[] = ;
static const struct sdram_timings nokia_195dot2mhz_timings[] = ;
static const struct  nokia_timings[] = ;
static struct omap_sdrc_params nokia_sdrc_params[ARRAY_SIZE(nokia_timings) + 1];
static unsigned long sdrc_get_fclk_period(long rate)
static unsigned int sdrc_ps_to_ticks(unsigned int time_ps, long rate)
#undef DEBUG
static int set_sdrc_timing_regval(u32 *regval, int st_bit, int end_bit,
int ticks, long rate, const char *name)
static int set_sdrc_timing_regval(u32 *regval, int st_bit, int end_bit,
int ticks)
#define SDRC_SET_ONE(reg, st, end, field, rate) \
if (set_sdrc_timing_regval((reg), (st), (end), \
memory_timings->field, (rate), #field) < 0) \
err = -1;
#define SDRC_SET_ONE(reg, st, end, field, rate) \
if (set_sdrc_timing_regval((reg), (st), (end), \
memory_timings->field) < 0) \
err = -1;
static int set_sdrc_timing_regval_ps(u32 *regval, int st_bit, int end_bit,
int time, long rate, const char *name)
static int set_sdrc_timing_regval_ps(u32 *regval, int st_bit, int end_bit,
int time, long rate)
#define SDRC_SET_ONE_PS(reg, st, end, field, rate) \
if (set_sdrc_timing_regval_ps((reg), (st), (end), \
memory_timings->field, \
(rate), #field) < 0) \
err = -1;
#define SDRC_SET_ONE_PS(reg, st, end, field, rate) \
if (set_sdrc_timing_regval_ps((reg), (st), (end), \
memory_timings->field, (rate)) < 0) \
err = -1;
static int sdrc_timings(int id, long rate,
const struct sdram_timings *memory_timings)
struct omap_sdrc_params *nokia_get_sdram_timings(void)
