#define TARGET_DDR		0
#define TARGET_DEV_BUS		1
#define TARGET_PCIE0		4
#define TARGET_PCIE1		8
#define TARGET_PCIE(i)		((i) ? TARGET_PCIE1 : TARGET_PCIE0)
#define ATTR_DEV_SPI_ROM	0x1f
#define ATTR_DEV_BOOT		0x2f
#define ATTR_DEV_CS3		0x37
#define ATTR_DEV_CS2		0x3b
#define ATTR_DEV_CS1		0x3d
#define ATTR_DEV_CS0		0x3e
#define ATTR_PCIE_IO(l)		(0xf0 & ~(0x10 << (l)))
#define ATTR_PCIE_MEM(l)	(0xf8 & ~(0x10 << (l)))
#define DDR_BASE_CS_OFF(n)	(0x0000 + ((n) << 3))
#define DDR_SIZE_CS_OFF(n)	(0x0004 + ((n) << 3))
#define WIN0_OFF(n)		(BRIDGE_VIRT_BASE + 0x0000 + ((n) << 4))
#define WIN8_OFF(n)		(BRIDGE_VIRT_BASE + 0x0900 + (((n) - 8) << 4))
#define WIN_CTRL_OFF		0x0000
#define WIN_BASE_OFF		0x0004
#define WIN_REMAP_LO_OFF	0x0008
#define WIN_REMAP_HI_OFF	0x000c
struct mbus_dram_target_info mv78xx0_mbus_dram_info;
static void __init __iomem *win_cfg_base(int win)
static int __init cpu_win_can_remap(int win)
static void __init setup_cpu_win(int win, u32 base, u32 size,
u8 target, u8 attr, int remap)
void __init mv78xx0_setup_cpu_mbus(void)
void __init mv78xx0_setup_pcie_io_win(int window, u32 base, u32 size,
int maj, int min)
void __init mv78xx0_setup_pcie_mem_win(int window, u32 base, u32 size,
int maj, int min)
