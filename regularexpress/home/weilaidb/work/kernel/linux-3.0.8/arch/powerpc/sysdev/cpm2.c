cpm_cpm2_t __iomem *cpmp;
cpm2_map_t __iomem *cpm2_immr;
EXPORT_SYMBOL(cpm2_immr);
#define CPM_MAP_SIZE	(0x40000)
void __init cpm2_reset(void)
static DEFINE_SPINLOCK(cmd_lock);
#define MAX_CR_CMD_LOOPS        10000
int cpm_command(u32 command, u8 opcode)
EXPORT_SYMBOL(cpm_command);
void __cpm2_setbrg(uint brg, uint rate, uint clk, int div16, int src)
EXPORT_SYMBOL(__cpm2_setbrg);
int cpm2_clk_setup(enum cpm_clk_target target, int clock, int mode)
int cpm2_smc_clk_setup(enum cpm_clk_target target, int clock)
struct cpm2_ioports ;
void cpm2_set_pin(int port, int pin, int flags)
static int cpm_init_par_io(void)
arch_initcall(cpm_init_par_io);
