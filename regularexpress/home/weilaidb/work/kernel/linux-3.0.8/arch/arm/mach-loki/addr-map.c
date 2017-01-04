#define TARGET_DDR		0
#define TARGET_DEV_BUS		1
#define TARGET_PCIE0		3
#define TARGET_PCIE1		4
#define ATTR_DEV_BOOT		0x0f
#define ATTR_DEV_CS2		0x1b
#define ATTR_DEV_CS1		0x1d
#define ATTR_DEV_CS0		0x1e
#define ATTR_PCIE_IO		0x51
#define ATTR_PCIE_MEM		0x59
#define DDR_SIZE_CS(n)		DDR_REG(0x1500 + ((n) << 3))
#define DDR_BASE_CS(n)		DDR_REG(0x1504 + ((n) << 3))
#define BRIDGE_REG(x)		(BRIDGE_VIRT_BASE | (x))
#define CPU_WIN_CTRL(n)		BRIDGE_REG(0x000 | ((n) << 4))
#define CPU_WIN_BASE(n)		BRIDGE_REG(0x004 | ((n) << 4))
#define CPU_WIN_REMAP_LO(n)	BRIDGE_REG(0x008 | ((n) << 4))
#define CPU_WIN_REMAP_HI(n)	BRIDGE_REG(0x00c | ((n) << 4))
struct mbus_dram_target_info loki_mbus_dram_info;
static void __init setup_cpu_win(int win, u32 base, u32 size,
u8 target, u8 attr, int remap)
void __init loki_setup_cpu_mbus(void)
void __init loki_setup_dev_boot_win(u32 base, u32 size)
