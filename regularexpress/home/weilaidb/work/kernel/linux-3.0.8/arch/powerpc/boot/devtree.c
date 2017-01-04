void dt_fixup_memory(u64 start, u64 size)
#define MHZ(x)	((x + 500000) / 1000000)
void dt_fixup_cpu_clocks(u32 cpu, u32 tb, u32 bus)
void dt_fixup_clock(const char *path, u32 freq)
void dt_fixup_mac_address_by_alias(const char *alias, const u8 *addr)
void dt_fixup_mac_address(u32 index, const u8 *addr)
void __dt_fixup_mac_addresses(u32 startindex, ...)
#define MAX_ADDR_CELLS 4
void dt_get_reg_format(void *node, u32 *naddr, u32 *nsize)
static void copy_val(u32 *dest, u32 *src, int naddr)
static int sub_reg(u32 *reg, u32 *sub)
static int add_reg(u32 *reg, u32 *add, int naddr)
static int compare_reg(u32 *reg, u32 *range, u32 *rangesize)
static int find_range(u32 *reg, u32 *ranges, int nregaddr,
int naddr, int nsize, int buflen)
static u32 prop_buf[MAX_PROP_LEN / 4];
static int dt_xlate(void *node, int res, int reglen, unsigned long *addr,
unsigned long *size)
int dt_xlate_reg(void *node, int res, unsigned long *addr, unsigned long *size)
int dt_xlate_addr(void *node, u32 *buf, int buflen, unsigned long *xlated_addr)
int dt_is_compatible(void *node, const char *compat)
int dt_get_virtual_reg(void *node, void **addr, int nres)
