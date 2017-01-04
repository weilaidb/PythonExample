extern void malta_be_init(void);
extern int malta_be_handler(struct pt_regs *regs, int is_fixup);
static struct resource standard_io_resources[] = ;
const char *get_system_type(void)
#if defined(CONFIG_MIPS_MT_SMTC)
const char display_string[] = "       SMTC LINUX ON MALTA       ";
const char display_string[] = "        LINUX ON MALTA       ";
static void __init fd_activate(void)
static void __init pci_clock_check(void)
#if defined(CONFIG_VT) && defined(CONFIG_VGA_CONSOLE)
static void __init screen_info_setup(void)
static void __init bonito_quirks_setup(void)
void __init plat_mem_setup(void)
