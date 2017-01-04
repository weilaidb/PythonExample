#undef DEBUG_PROM
#define MAX_PROPERTY_LENGTH	(1UL * 1024 * 1024)
#define DEVTREE_CHUNK_SIZE	0x100000
#define MEM_RESERVE_MAP_SIZE	8
#define RELOC(x)        (*PTRRELOC(&(x)))
#define ADDR(x)		(u32) add_reloc_offset((unsigned long)(x))
#define OF_WORKAROUNDS	0
#define RELOC(x)	(x)
#define ADDR(x)		(u32) (x)
#define OF_WORKAROUNDS	of_workarounds
int of_workarounds;
#define OF_WA_CLAIM	1
#define OF_WA_LONGTRAIL	2
#define PROM_BUG() do  while (0)
#define prom_debug(x...)	prom_printf(x)
#define prom_debug(x...)
typedef u32 prom_arg_t;
struct prom_args ;
struct prom_t ;
struct mem_map_entry ;
typedef u32 cell_t;
extern void __start(unsigned long r3, unsigned long r4, unsigned long r5);
extern int enter_prom(struct prom_args *args, unsigned long entry);
static inline int enter_prom(struct prom_args *args, unsigned long entry)
extern void copy_and_flush(unsigned long dest, unsigned long src,
unsigned long size, unsigned long offset);
static struct prom_t __initdata prom;
static unsigned long prom_entry __initdata;
#define PROM_SCRATCH_SIZE 256
static char __initdata of_stdout_device[256];
static char __initdata prom_scratch[PROM_SCRATCH_SIZE];
static unsigned long __initdata dt_header_start;
static unsigned long __initdata dt_struct_start, dt_struct_end;
static unsigned long __initdata dt_string_start, dt_string_end;
static unsigned long __initdata prom_initrd_start, prom_initrd_end;
static int __initdata prom_iommu_force_on;
static int __initdata prom_iommu_off;
static unsigned long __initdata prom_tce_alloc_start;
static unsigned long __initdata prom_tce_alloc_end;
#define PLATFORM_PSERIES	0x0100
#define PLATFORM_PSERIES_LPAR	0x0101
#define PLATFORM_LPAR		0x0001
#define PLATFORM_POWERMAC	0x0400
#define PLATFORM_GENERIC	0x0500
static int __initdata of_platform;
static char __initdata prom_cmd_line[COMMAND_LINE_SIZE];
static unsigned long __initdata prom_memory_limit;
static unsigned long __initdata alloc_top;
static unsigned long __initdata alloc_top_high;
static unsigned long __initdata alloc_bottom;
static unsigned long __initdata rmo_top;
static unsigned long __initdata ram_top;
static struct mem_map_entry __initdata mem_reserve_map[MEM_RESERVE_MAP_SIZE];
static int __initdata mem_reserve_cnt;
static cell_t __initdata regbuf[1024];
#define PROM_ERROR		(-1u)
#define PHANDLE_VALID(p)	((p) != 0 && (p) != PROM_ERROR)
#define IHANDLE_VALID(i)	((i) != 0 && (i) != PROM_ERROR)
static int __init call_prom(const char *service, int nargs, int nret, ...)
static int __init call_prom_ret(const char *service, int nargs, int nret,
prom_arg_t *rets, ...)
static void __init prom_print(const char *msg)
static void __init prom_print_hex(unsigned long val)
#define UL_DIGITS 21
static void __init prom_print_dec(unsigned long val)
static void __init prom_printf(const char *format, ...)
static unsigned int __init prom_claim(unsigned long virt, unsigned long size,
unsigned long align)
static void __init __attribute__((noreturn)) prom_panic(const char *reason)
static int __init prom_next_node(phandle *nodep)
static int inline prom_getprop(phandle node, const char *pname,
void *value, size_t valuelen)
static int inline prom_getproplen(phandle node, const char *pname)
static void add_string(char **str, const char *q)
static char *tohex(unsigned int x)
static int __init prom_setprop(phandle node, const char *nodename,
const char *pname, void *value, size_t valuelen)
#define isxdigit(c)	(('0' <= (c) && (c) <= '9') \
|| ('a' <= (c) && (c) <= 'f') \
|| ('A' <= (c) && (c) <= 'F'))
#define isdigit(c)	('0' <= (c) && (c) <= '9')
#define islower(c)	('a' <= (c) && (c) <= 'z')
#define toupper(c)	(islower(c) ? ((c) - 'a' + 'A') : (c))
unsigned long prom_strtoul(const char *cp, const char **endp)
unsigned long prom_memparse(const char *ptr, const char **retptr)
static void __init early_cmdline_parse(void)
#define W(x)	((x) >> 24) & 0xff, ((x) >> 16) & 0xff, \
((x) >> 8) & 0xff, (x) & 0xff
#define OV_IGNORE		0x80
#define OV_CESSATION_POLICY	0x40
#define OV1_PPC_2_00		0x80
#define OV1_PPC_2_01		0x40
#define OV1_PPC_2_02		0x20
#define OV1_PPC_2_03		0x10
#define OV1_PPC_2_04		0x08
#define OV1_PPC_2_05		0x04
#define OV1_PPC_2_06		0x02
#define OV2_REAL_MODE		0x20
#define OV3_FP			0x80
#define OV3_VMX			0x40
#define OV3_DFP			0x20
#define OV5_LPAR		0x80
#define OV5_SPLPAR		0x40
#define OV5_DRCONF_MEMORY	0x20
#define OV5_LARGE_PAGES		0x10
#define OV5_DONATE_DEDICATE_CPU 0x02
#define OV5_MSI			0x01
#define OV5_MSI			0x00
#define OV5_CMO			0x80
#define OV5_XCMO			0x40
#define OV5_CMO			0x00
#define OV5_XCMO			0x00
#define OV5_TYPE1_AFFINITY	0x80
#define OV6_LINUX		0x02
static unsigned char ibm_architecture_vec[] = ;
static struct fake_elf  fake_elf = ;
static int __init prom_count_smt_threads(void)
static void __init prom_send_capabilities(void)
static unsigned long __init alloc_up(unsigned long size, unsigned long align)
static unsigned long __init alloc_down(unsigned long size, unsigned long align,
int highmem)
static unsigned long __init prom_next_cell(int s, cell_t **cellp)
static void __init reserve_mem(u64 base, u64 size)
static void __init prom_init_mem(void)
static void __init prom_instantiate_rtas(void)
static void __init prom_initialize_tce_table(void)
#define LOW_ADDR(x)	(((unsigned long) &(x)) & 0xff)
static void __init prom_hold_cpus(void)
static void __init prom_init_client_services(unsigned long pp)
static void __init prom_find_mmu(void)
#define prom_find_mmu()
static void __init prom_init_stdout(void)
static void __init prom_close_stdin(void)
static int __init prom_find_machine_type(void)
static int __init prom_set_color(ihandle ih, int i, int r, int g, int b)
static void __init prom_check_displays(void)
static void __init *make_room(unsigned long *mem_start, unsigned long *mem_end,
unsigned long needed, unsigned long align)
#define dt_push_token(token, mem_start, mem_end) \
do  while(0)
static unsigned long __init dt_find_string(char *str)
#define MAX_PROPERTY_NAME 64
static void __init scan_dt_build_strings(phandle node,
unsigned long *mem_start,
unsigned long *mem_end)
static void __init scan_dt_build_struct(phandle node, unsigned long *mem_start,
unsigned long *mem_end)
static void __init flatten_device_tree(void)
static void __init fixup_device_tree_maple(void)
#define CPC925_MC_START		0xf8000000
#define CPC925_MC_LENGTH	0x1000000
static void __init fixup_device_tree_maple_memory_controller(void)
#define fixup_device_tree_maple()
#define fixup_device_tree_maple_memory_controller()
static void __init fixup_device_tree_chrp(void)
#define fixup_device_tree_chrp()
#if defined(CONFIG_PPC64) && defined(CONFIG_PPC_PMAC)
static void __init fixup_device_tree_pmac(void)
#define fixup_device_tree_pmac()
static void __init fixup_device_tree_efika_add_phy(void)
static void __init fixup_device_tree_efika(void)
#define fixup_device_tree_efika()
static void __init fixup_device_tree(void)
static void __init prom_find_boot_cpu(void)
static void __init prom_check_initrd(unsigned long r3, unsigned long r4)
unsigned long __init prom_init(unsigned long r3, unsigned long r4,
unsigned long pp,
unsigned long r6, unsigned long r7,
unsigned long kbase)
