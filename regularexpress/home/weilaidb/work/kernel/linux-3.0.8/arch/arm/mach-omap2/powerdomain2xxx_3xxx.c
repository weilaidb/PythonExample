static int omap2_pwrdm_set_next_pwrst(struct powerdomain *pwrdm, u8 pwrst)
static int omap2_pwrdm_read_next_pwrst(struct powerdomain *pwrdm)
static int omap2_pwrdm_read_pwrst(struct powerdomain *pwrdm)
static int omap2_pwrdm_set_mem_onst(struct powerdomain *pwrdm, u8 bank,
u8 pwrst)
static int omap2_pwrdm_set_mem_retst(struct powerdomain *pwrdm, u8 bank,
u8 pwrst)
static int omap2_pwrdm_read_mem_pwrst(struct powerdomain *pwrdm, u8 bank)
static int omap2_pwrdm_read_mem_retst(struct powerdomain *pwrdm, u8 bank)
static int omap2_pwrdm_set_logic_retst(struct powerdomain *pwrdm, u8 pwrst)
static int omap2_pwrdm_wait_transition(struct powerdomain *pwrdm)
static int omap3_pwrdm_read_prev_pwrst(struct powerdomain *pwrdm)
static int omap3_pwrdm_read_logic_pwrst(struct powerdomain *pwrdm)
static int omap3_pwrdm_read_logic_retst(struct powerdomain *pwrdm)
static int omap3_pwrdm_read_prev_logic_pwrst(struct powerdomain *pwrdm)
static int omap3_get_mem_bank_lastmemst_mask(u8 bank)
static int omap3_pwrdm_read_prev_mem_pwrst(struct powerdomain *pwrdm, u8 bank)
static int omap3_pwrdm_clear_all_prev_pwrst(struct powerdomain *pwrdm)
static int omap3_pwrdm_enable_hdwr_sar(struct powerdomain *pwrdm)
static int omap3_pwrdm_disable_hdwr_sar(struct powerdomain *pwrdm)
struct pwrdm_ops omap2_pwrdm_operations = ;
struct pwrdm_ops omap3_pwrdm_operations = ;
