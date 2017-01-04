#define TARGET_DDR		0x0
#define TARGET_BOOTROM		0x1
#define TARGET_CESA		0x3
#define TARGET_PCIE0		0x4
#define TARGET_PCIE1		0x8
#define TARGET_SCRATCHPAD	0xd
#define ATTR_CESA		0x01
#define ATTR_BOOTROM		0xfd
#define ATTR_DEV_SPI0_ROM	0xfe
#define ATTR_DEV_SPI1_ROM	0xfb
#define ATTR_PCIE_IO		0xe0
#define ATTR_PCIE_MEM		0xe8
#define ATTR_SCRATCHPAD		0x0
#define WIN_CTRL(n)	(BRIDGE_VIRT_BASE + ((n) << 4) + 0x0)
#define WIN_BASE(n)	(BRIDGE_VIRT_BASE + ((n) << 4) + 0x4)
#define WIN_REMAP_LO(n)	(BRIDGE_VIRT_BASE + ((n) << 4) + 0x8)
#define WIN_REMAP_HI(n)	(BRIDGE_VIRT_BASE + ((n) << 4) + 0xc)
struct mbus_dram_target_info dove_mbus_dram_info;
static inline void __iomem *ddr_map_sc(int i)
static int cpu_win_can_remap(int win)
static void __init setup_cpu_win(int win, u32 base, u32 size,
u8 target, u8 attr, int remap)
void __init dove_setup_cpu_mbus(void)
