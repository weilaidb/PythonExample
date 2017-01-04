#undef DEBUG
#define SET_BOOT_BAT
#define DBG(fmt...) do  while(0)
#define DBG(fmt...) do  while(0)
extern void __start(unsigned long r3, unsigned long r4, unsigned long r5);
static unsigned long __initdata bootx_dt_strbase;
static unsigned long __initdata bootx_dt_strend;
static unsigned long __initdata bootx_node_chosen;
static boot_infos_t * __initdata bootx_info;
static char __initdata bootx_disp_path[256];
#define BOOT_INFO_IS_COMPATIBLE(bi) \
((bi)->compatible_version <= BOOT_INFO_VERSION)
#define BOOT_INFO_IS_V2_COMPATIBLE(bi)	((bi)->version >= 2)
#define BOOT_INFO_IS_V4_COMPATIBLE(bi)	((bi)->version >= 4)
static void __init bootx_printf(const char *format, ...)
static void __init bootx_printf(const char *format, ...)
static void * __init bootx_early_getprop(unsigned long base,
unsigned long node,
char *prop)
#define dt_push_token(token, mem) \
do  while(0)
static unsigned long __init bootx_dt_find_string(char *str)
static void __init bootx_dt_add_prop(char *name, void *data, int size,
unsigned long *mem_end)
static void __init bootx_add_chosen_props(unsigned long base,
unsigned long *mem_end)
static void __init bootx_add_display_props(unsigned long base,
unsigned long *mem_end,
int has_real_node)
static void __init bootx_dt_add_string(char *s, unsigned long *mem_end)
static void __init bootx_scan_dt_build_strings(unsigned long base,
unsigned long node,
unsigned long *mem_end)
static void __init bootx_scan_dt_build_struct(unsigned long base,
unsigned long node,
unsigned long *mem_end)
static unsigned long __init bootx_flatten_dt(unsigned long start)
static void __init btext_welcome(boot_infos_t *bi)
void __init bootx_init(unsigned long r3, unsigned long r4)
