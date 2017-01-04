#define TARGET_DDR		0
#define TARGET_DEV_BUS		1
#define TARGET_SRAM		3
#define TARGET_PCIE		4
#define ATTR_DEV_SPI_ROM	0x1e
#define ATTR_DEV_BOOT		0x1d
#define ATTR_DEV_NAND		0x2f
#define ATTR_DEV_CS3		0x37
#define ATTR_DEV_CS2		0x3b
#define ATTR_DEV_CS1		0x3d
#define ATTR_DEV_CS0		0x3e
#define ATTR_PCIE_IO		0xe0
#define ATTR_PCIE_MEM		0xe8
#define ATTR_PCIE1_IO		0xd0
#define ATTR_PCIE1_MEM		0xd8
#define ATTR_SRAM		0x01
#define DDR_BASE_CS_OFF(n)	(0x0000 + ((n) << 3))
#define DDR_SIZE_CS_OFF(n)	(0x0004 + ((n) << 3))
#define WIN_OFF(n)		(BRIDGE_VIRT_BASE + 0x0000 + ((n) << 4))
#define WIN_CTRL_OFF		0x0000
#define WIN_BASE_OFF		0x0004
#define WIN_REMAP_LO_OFF	0x0008
#define WIN_REMAP_HI_OFF	0x000c
struct mbus_dram_target_info kirkwood_mbus_dram_info;
static int __init cpu_win_can_remap(int win)
static void __init setup_cpu_win(int win, u32 base, u32 size,
u8 target, u8 attr, int remap)
void __init kirkwood_setup_cpu_mbus(void)
