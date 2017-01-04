#define A11S_CLK_CNTL_ADDR (MSM_CSR_BASE + 0x100)
#define A11S_CLK_SEL_ADDR (MSM_CSR_BASE + 0x104)
#define A11S_VDD_SVS_PLEVEL_ADDR (MSM_CSR_BASE + 0x124)
#define ACPU_PLL_TCXO	-1
#define ACPU_PLL_0	0
#define ACPU_PLL_1	1
#define ACPU_PLL_2	2
#define ACPU_PLL_3	3
#define PERF_SWITCH_DEBUG 0
#define PERF_SWITCH_STEP_DEBUG 0
struct clock_state
;
static struct clk *ebi1_clk;
static struct clock_state drv_state = ;
static void __init acpuclk_init(void);
enum ;
struct clkctl_acpu_speed ;
#if (0)
static struct clkctl_acpu_speed  acpu_freq_tbl[] = ;
static struct clkctl_acpu_speed  acpu_freq_tbl[] = ;
static struct cpufreq_frequency_table freq_table[] = ;
static int pc_pll_request(unsigned id, unsigned on)
unsigned long acpuclk_power_collapse(void)
unsigned long acpuclk_get_wfi_rate(void)
unsigned long acpuclk_wait_for_irq(void)
static int acpuclk_set_vdd_level(int vdd)
static void acpuclk_set_div(const struct clkctl_acpu_speed *hunt_s)
int acpuclk_set_rate(unsigned long rate, int for_power_collapse)
static void __init acpuclk_init(void)
unsigned long acpuclk_get_rate(void)
uint32_t acpuclk_get_switch_time(void)
static void __init lpj_init(void)
void __init msm_acpu_clock_init(struct msm_acpu_clock_platform_data *clkdata)
