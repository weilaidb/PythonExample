#undef PORT_MUX
#define PORT_MUX BFIN_PORT_MUX
#define _d(name, bits, addr, perms) debugfs_create_x##bits(name, perms, parent, (u##bits *)addr)
#define d(name, bits, addr)         _d(name, bits, addr, S_IRUSR|S_IWUSR)
#define d_RO(name, bits, addr)      _d(name, bits, addr, S_IRUSR)
#define d_WO(name, bits, addr)      _d(name, bits, addr, S_IWUSR)
#define D_RO(name, bits) d_RO(#name, bits, name)
#define D_WO(name, bits) d_WO(#name, bits, name)
#define D32(name)        d(#name, 32, name)
#define D16(name)        d(#name, 16, name)
#define REGS_OFF(peri, mmr) offsetof(struct bfin_##peri##_regs, mmr)
#define __REGS(peri, sname, rname) \
do  while (0)
#define REGS_STR_PFX(buf, pfx, num) \
()
#define REGS_STR_PFX_C(buf, pfx, num) \
()
extern u32 last_seqstat;
static int debug_cclk_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(fops_debug_cclk, debug_cclk_get, NULL, "0x%08llx\n");
static int debug_sclk_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(fops_debug_sclk, debug_sclk_get, NULL, "0x%08llx\n");
#define DEFINE_SYSREG(sr, pre, post) \
static int sysreg_##sr##_get(void *data, u64 *val) \
\
static int sysreg_##sr##_set(void *data, u64 val) \
\
DEFINE_SIMPLE_ATTRIBUTE(fops_sysreg_##sr, sysreg_##sr##_get, sysreg_##sr##_set, "0x%08llx\n")
DEFINE_SYSREG(cycles, , );
DEFINE_SYSREG(cycles2, __asm__ __volatile__("%0 = cycles;" : "=d"(tmp)), );
DEFINE_SYSREG(emudat, , );
DEFINE_SYSREG(seqstat, , );
DEFINE_SYSREG(syscfg, , CSYNC());
#define D_SYSREG(sr) debugfs_create_file(#sr, S_IRUSR|S_IWUSR, parent, NULL, &fops_sysreg_##sr)
#define CAN_OFF(mmr)  REGS_OFF(can, mmr)
#define __CAN(uname, lname) __REGS(can, #uname, lname)
static void __init __maybe_unused
bfin_debug_mmrs_can(struct dentry *parent, unsigned long base, int num)
#define CAN(num) bfin_debug_mmrs_can(parent, CAN##num##_MC1, num)
#define __DMA(uname, lname) __REGS(dma, #uname, lname)
static void __init __maybe_unused
bfin_debug_mmrs_dma(struct dentry *parent, unsigned long base, int num, char mdma, const char *pfx)
#define _DMA(num, base, mdma, pfx) bfin_debug_mmrs_dma(parent, base, num, mdma, pfx "DMA")
#define DMA(num)  _DMA(num, DMA##num##_NEXT_DESC_PTR, 0, "")
#define _MDMA(num, x) \
do  while (0)
#define MDMA(num) _MDMA(num, M)
#define IMDMA(num) _MDMA(num, IM)
#define __EPPI(uname, lname) __REGS(eppi, #uname, lname)
static void __init __maybe_unused
bfin_debug_mmrs_eppi(struct dentry *parent, unsigned long base, int num)
#define EPPI(num) bfin_debug_mmrs_eppi(parent, EPPI##num##_STATUS, num)
#define __GPTIMER(uname, lname) __REGS(gptimer, #uname, lname)
static void __init __maybe_unused
bfin_debug_mmrs_gptimer(struct dentry *parent, unsigned long base, int num)
#define GPTIMER(num) bfin_debug_mmrs_gptimer(parent, TIMER##num##_CONFIG, num)
#define __HMDMA(uname, lname) __REGS(hmdma, #uname, lname)
static void __init __maybe_unused
bfin_debug_mmrs_hmdma(struct dentry *parent, unsigned long base, int num)
#define HMDMA(num) bfin_debug_mmrs_hmdma(parent, HMDMA##num##_CONTROL, num)
#define bfin_gpio_regs gpio_port_t
#define __PORT(uname, lname) __REGS(gpio, #uname, lname)
static void __init __maybe_unused
bfin_debug_mmrs_port(struct dentry *parent, unsigned long base, int num)
#define PORT(base, num) bfin_debug_mmrs_port(parent, base, num)
#define __PPI(uname, lname) __REGS(ppi, #uname, lname)
static void __init __maybe_unused
bfin_debug_mmrs_ppi(struct dentry *parent, unsigned long base, int num)
#define PPI(num) bfin_debug_mmrs_ppi(parent, PPI##num##_CONTROL, num)
#define __SPI(uname, lname) __REGS(spi, #uname, lname)
static void __init __maybe_unused
bfin_debug_mmrs_spi(struct dentry *parent, unsigned long base, int num)
#define SPI(num) bfin_debug_mmrs_spi(parent, SPI##num##_REGBASE, num)
static inline int sport_width(void *mmr)
static int sport_set(void *mmr, u64 val)
static int sport_get(void *mmr, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(fops_sport, sport_get, sport_set, "0x%08llx\n");
DEFINE_SIMPLE_ATTRIBUTE(fops_sport_wo, NULL, sport_set, "0x%08llx\n");
#define SPORT_OFF(mmr) (SPORT0_##mmr - SPORT0_TCR1)
#define _D_SPORT(name, perms, fops) \
do  while (0)
#define __SPORT_RW(name) _D_SPORT(name, S_IRUSR|S_IWUSR, &fops_sport)
#define __SPORT_RO(name) _D_SPORT(name, S_IRUSR, &fops_sport_ro)
#define __SPORT_WO(name) _D_SPORT(name, S_IWUSR, &fops_sport_wo)
#define __SPORT(name, bits) \
do  while (0)
static void __init __maybe_unused
bfin_debug_mmrs_sport(struct dentry *parent, unsigned long base, int num)
#define SPORT(num) bfin_debug_mmrs_sport(parent, SPORT##num##_TCR1, num)
#define __TWI(uname, lname) __REGS(twi, #uname, lname)
static void __init __maybe_unused
bfin_debug_mmrs_twi(struct dentry *parent, unsigned long base, int num)
#define TWI(num) bfin_debug_mmrs_twi(parent, TWI##num##_CLKDIV, num)
#define __UART(uname, lname) __REGS(uart, #uname, lname)
static void __init __maybe_unused
bfin_debug_mmrs_uart(struct dentry *parent, unsigned long base, int num)
#define UART(num) bfin_debug_mmrs_uart(parent, UART##num##_DLL, num)
static struct dentry *debug_mmrs_dentry;
static int __init bfin_debug_mmrs_init(void)
module_init(bfin_debug_mmrs_init);
static void __exit bfin_debug_mmrs_exit(void)
module_exit(bfin_debug_mmrs_exit);
MODULE_LICENSE("GPL");
