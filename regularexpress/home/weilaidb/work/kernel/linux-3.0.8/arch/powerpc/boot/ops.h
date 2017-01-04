#define _PPC_BOOT_OPS_H_
#define	COMMAND_LINE_SIZE	512
#define	MAX_PATH_LEN		256
#define	MAX_PROP_LEN		256
typedef void (*kernel_entry_t)(unsigned long r3, unsigned long r4, void *r5);
struct platform_ops ;
extern struct platform_ops platform_ops;
struct dt_ops ;
extern struct dt_ops dt_ops;
struct console_ops ;
extern struct console_ops console_ops;
struct serial_console_data ;
struct loader_info ;
extern struct loader_info loader_info;
void start(void);
void fdt_init(void *blob);
int serial_console_init(void);
int ns16550_console_init(void *devp, struct serial_console_data *scdp);
int mpsc_console_init(void *devp, struct serial_console_data *scdp);
int cpm_console_init(void *devp, struct serial_console_data *scdp);
int mpc5200_psc_console_init(void *devp, struct serial_console_data *scdp);
int uartlite_console_init(void *devp, struct serial_console_data *scdp);
void *simple_alloc_init(char *base, unsigned long heap_size,
unsigned long granularity, unsigned long max_allocs);
extern void flush_cache(void *, unsigned long);
int dt_xlate_reg(void *node, int res, unsigned long *addr, unsigned long *size);
int dt_xlate_addr(void *node, u32 *buf, int buflen, unsigned long *xlated_addr);
int dt_is_compatible(void *node, const char *compat);
void dt_get_reg_format(void *node, u32 *naddr, u32 *nsize);
int dt_get_virtual_reg(void *node, void **addr, int nres);
static inline void *finddevice(const char *name)
static inline int getprop(void *devp, const char *name, void *buf, int buflen)
static inline int setprop(void *devp, const char *name,
const void *buf, int buflen)
#define setprop_val(devp, name, val) \
do  while (0)
static inline int setprop_str(void *devp, const char *name, const char *buf)
static inline int del_node(const void *devp)
static inline void *get_parent(const char *devp)
static inline void *create_node(const void *parent, const char *name)
static inline void *find_node_by_prop_value(const void *prev,
const char *propname,
const char *propval, int proplen)
static inline void *find_node_by_prop_value_str(const void *prev,
const char *propname,
const char *propval)
static inline void *find_node_by_devtype(const void *prev,
const char *type)
static inline void *find_node_by_alias(const char *alias)
static inline void *find_node_by_compatible(const void *prev,
const char *compat)
void dt_fixup_memory(u64 start, u64 size);
void dt_fixup_cpu_clocks(u32 cpufreq, u32 tbfreq, u32 busfreq);
void dt_fixup_clock(const char *path, u32 freq);
void dt_fixup_mac_address_by_alias(const char *alias, const u8 *addr);
void dt_fixup_mac_address(u32 index, const u8 *addr);
void __dt_fixup_mac_addresses(u32 startindex, ...);
#define dt_fixup_mac_addresses(...) \
__dt_fixup_mac_addresses(0, __VA_ARGS__, NULL)
static inline void *find_node_by_linuxphandle(const u32 linuxphandle)
static inline char *get_path(const void *phandle, char *buf, int len)
static inline void *malloc(unsigned long size)
static inline void free(void *ptr)
static inline void exit(void)
#define fatal(args...)
#define BSS_STACK(size) \
static char _bss_stack[size]; \
void *_platform_stack_top = _bss_stack + sizeof(_bss_stack);
extern unsigned long timebase_period_ns;
void udelay(long delay);
extern char _start[];
extern char __bss_start[];
extern char _end[];
extern char _vmlinux_start[];
extern char _vmlinux_end[];
extern char _initrd_start[];
extern char _initrd_end[];
extern char _dtb_start[];
extern char _dtb_end[];
static inline __attribute__((const))
int __ilog2_u32(u32 n)
