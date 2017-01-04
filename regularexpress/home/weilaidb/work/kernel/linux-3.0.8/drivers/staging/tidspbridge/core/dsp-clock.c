#define OMAP_SSI_OFFSET			0x58000
#define OMAP_SSI_SIZE			0x1000
#define OMAP_SSI_SYSCONFIG_OFFSET	0x10
#define SSI_AUTOIDLE			(1 << 0)
#define SSI_SIDLE_SMARTIDLE		(2 << 3)
#define SSI_MIDLE_NOIDLE		(1 << 12)
#define IVA2_CLK	0
#define GPT_CLK		1
#define WDT_CLK		2
#define MCBSP_CLK	3
#define SSI_CLK		4
#define DMT_ID(id) ((id) + 4)
#define MCBSP_ID(id) ((id) - 6)
static struct omap_dm_timer *timer[4];
struct clk *iva2_clk;
struct dsp_ssi ;
static struct dsp_ssi ssi;
static u32 dsp_clocks;
static inline u32 is_dsp_clk_active(u32 clk, u8 id)
static inline void set_dsp_clk_active(u32 *clk, u8 id)
static inline void set_dsp_clk_inactive(u32 *clk, u8 id)
static s8 get_clk_type(u8 id)
void dsp_clk_exit(void)
void dsp_clk_init(void)
void dsp_gpt_wait_overflow(short int clk_id, unsigned int load)
int dsp_clk_enable(enum dsp_clk_id clk_id)
u32 dsp_clock_enable_all(u32 dsp_per_clocks)
int dsp_clk_disable(enum dsp_clk_id clk_id)
u32 dsp_clock_disable_all(u32 dsp_per_clocks)
u32 dsp_clk_get_iva2_rate(void)
void ssi_clk_prepare(bool FLAG)
