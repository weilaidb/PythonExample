#define SDGCTL_WIDTH (1 << 31)
#define PLL_CTL_VAL \
(((CONFIG_VCO_MULT & 63) << 9) | CLKIN_HALF | \
(PLL_BYPASS << 8) | (ANOMALY_05000305 ? 0 : 0x8000))
__attribute__((l1_text))
static void do_sync(void)
__attribute__((l1_text))
void init_clocks(void)
