static struct  pnp_bios_callpoint;
asmlinkage void pnp_bios_callfunc(void);
__asm__(".text			\n"
__ALIGN_STR "\n"
"pnp_bios_callfunc:\n"
"	pushl %edx	\n"
"	pushl %ecx	\n"
"	pushl %ebx	\n"
"	pushl %eax	\n"
"	lcallw *pnp_bios_callpoint\n"
"	addl $16, %esp	\n"
"	lret		\n"
".previous		\n");
#define Q2_SET_SEL(cpu, selname, address, size) \
do  while(0)
static struct desc_struct bad_bios_desc = GDT_ENTRY_INIT(0x4092,
(unsigned long)__va(0x400UL), PAGE_SIZE - 0x400 - 1);
u32 pnp_bios_fault_esp;
u32 pnp_bios_fault_eip;
u32 pnp_bios_is_utter_crap = 0;
static spinlock_t pnp_bios_lock;
static inline u16 call_pnp_bios(u16 func, u16 arg1, u16 arg2, u16 arg3,
u16 arg4, u16 arg5, u16 arg6, u16 arg7,
void *ts1_base, u32 ts1_size,
void *ts2_base, u32 ts2_size)
void pnpbios_print_status(const char *module, u16 status)
#define PNP_GET_NUM_SYS_DEV_NODES		0x00
#define PNP_GET_SYS_DEV_NODE			0x01
#define PNP_SET_SYS_DEV_NODE			0x02
#define PNP_GET_EVENT				0x03
#define PNP_SEND_MESSAGE			0x04
#define PNP_GET_DOCKING_STATION_INFORMATION	0x05
#define PNP_SET_STATIC_ALLOCED_RES_INFO		0x09
#define PNP_GET_STATIC_ALLOCED_RES_INFO		0x0a
#define PNP_GET_APM_ID_TABLE			0x0b
#define PNP_GET_PNP_ISA_CONFIG_STRUC		0x40
#define PNP_GET_ESCD_INFO			0x41
#define PNP_READ_ESCD				0x42
#define PNP_WRITE_ESCD				0x43
static int __pnp_bios_dev_node_info(struct pnp_dev_node_info *data)
int pnp_bios_dev_node_info(struct pnp_dev_node_info *data)
static int __pnp_bios_get_dev_node(u8 *nodenum, char boot,
struct pnp_bios_node *data)
int pnp_bios_get_dev_node(u8 *nodenum, char boot, struct pnp_bios_node *data)
static int __pnp_bios_set_dev_node(u8 nodenum, char boot,
struct pnp_bios_node *data)
int pnp_bios_set_dev_node(u8 nodenum, char boot, struct pnp_bios_node *data)
int pnp_bios_dock_station_info(struct pnp_docking_station_info *data)
static int __pnp_bios_get_stat_res(char *info)
int pnp_bios_get_stat_res(char *info)
static int __pnp_bios_isapnp_config(struct pnp_isa_config_struc *data)
int pnp_bios_isapnp_config(struct pnp_isa_config_struc *data)
static int __pnp_bios_escd_info(struct escd_info_struc *data)
int pnp_bios_escd_info(struct escd_info_struc *data)
static int __pnp_bios_read_escd(char *data, u32 nvram_base)
int pnp_bios_read_escd(char *data, u32 nvram_base)
void pnpbios_calls_init(union pnp_bios_install_struct *header)
