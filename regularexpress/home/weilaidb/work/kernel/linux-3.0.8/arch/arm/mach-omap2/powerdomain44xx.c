static int omap4_pwrdm_set_next_pwrst(struct powerdomain *pwrdm, u8 pwrst)
static int omap4_pwrdm_read_next_pwrst(struct powerdomain *pwrdm)
static int omap4_pwrdm_read_pwrst(struct powerdomain *pwrdm)
static int omap4_pwrdm_read_prev_pwrst(struct powerdomain *pwrdm)
static int omap4_pwrdm_set_lowpwrstchange(struct powerdomain *pwrdm)
static int omap4_pwrdm_clear_all_prev_pwrst(struct powerdomain *pwrdm)
static int omap4_pwrdm_set_logic_retst(struct powerdomain *pwrdm, u8 pwrst)
static int omap4_pwrdm_set_mem_onst(struct powerdomain *pwrdm, u8 bank,
u8 pwrst)
static int omap4_pwrdm_set_mem_retst(struct powerdomain *pwrdm, u8 bank,
u8 pwrst)
static int omap4_pwrdm_read_logic_pwrst(struct powerdomain *pwrdm)
static int omap4_pwrdm_read_logic_retst(struct powerdomain *pwrdm)
static int omap4_pwrdm_read_mem_pwrst(struct powerdomain *pwrdm, u8 bank)
static int omap4_pwrdm_read_mem_retst(struct powerdomain *pwrdm, u8 bank)
static int omap4_pwrdm_wait_transition(struct powerdomain *pwrdm)
struct pwrdm_ops omap4_pwrdm_operations = ;
