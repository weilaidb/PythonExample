struct ssb_bus ssb_bcm47xx;
EXPORT_SYMBOL(ssb_bcm47xx);
static void bcm47xx_machine_restart(char *command)
static void bcm47xx_machine_halt(void)
#define READ_FROM_NVRAM(_outvar, name, buf) \
if (nvram_getprefix(prefix, name, buf, sizeof(buf)) >= 0)\
sprom->_outvar = simple_strtoul(buf, NULL, 0);
#define READ_FROM_NVRAM2(_outvar, name1, name2, buf) \
if (nvram_getprefix(prefix, name1, buf, sizeof(buf)) >= 0 || \
nvram_getprefix(prefix, name2, buf, sizeof(buf)) >= 0)\
sprom->_outvar = simple_strtoul(buf, NULL, 0);
static inline int nvram_getprefix(const char *prefix, char *name,
char *buf, int len)
static u32 nvram_getu32(const char *name, char *buf, int len)
static void bcm47xx_fill_sprom(struct ssb_sprom *sprom, const char *prefix)
int bcm47xx_get_sprom(struct ssb_bus *bus, struct ssb_sprom *out)
static int bcm47xx_get_invariants(struct ssb_bus *bus,
struct ssb_init_invariants *iv)
void __init plat_mem_setup(void)
