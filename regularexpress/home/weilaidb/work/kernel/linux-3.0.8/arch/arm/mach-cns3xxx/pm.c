void cns3xxx_pwr_clk_en(unsigned int block)
EXPORT_SYMBOL(cns3xxx_pwr_clk_en);
void cns3xxx_pwr_clk_dis(unsigned int block)
EXPORT_SYMBOL(cns3xxx_pwr_clk_dis);
void cns3xxx_pwr_power_up(unsigned int block)
;
EXPORT_SYMBOL(cns3xxx_pwr_power_up);
void cns3xxx_pwr_power_down(unsigned int block)
;
EXPORT_SYMBOL(cns3xxx_pwr_power_down);
static void cns3xxx_pwr_soft_rst_force(unsigned int block)
EXPORT_SYMBOL(cns3xxx_pwr_soft_rst_force);
void cns3xxx_pwr_soft_rst(unsigned int block)
EXPORT_SYMBOL(cns3xxx_pwr_soft_rst);
void arch_reset(char mode, const char *cmd)
int cns3xxx_cpu_clock(void)
EXPORT_SYMBOL(cns3xxx_cpu_clock);
atomic_t usb_pwr_ref = ATOMIC_INIT(0);
EXPORT_SYMBOL(usb_pwr_ref);
