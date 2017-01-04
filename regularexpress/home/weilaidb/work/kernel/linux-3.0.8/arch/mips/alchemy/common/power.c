static unsigned int sleep_usb[2];
static unsigned int sleep_sys_clocks[5];
static unsigned int sleep_sys_pinfunc;
static unsigned int sleep_static_memctlr[4][3];
static void save_core_regs(void)
static void restore_core_regs(void)
void au_sleep(void)
