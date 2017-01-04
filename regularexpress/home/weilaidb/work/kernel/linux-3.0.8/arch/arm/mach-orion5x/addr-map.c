#define TARGET_DDR		0
#define TARGET_DEV_BUS		1
#define TARGET_PCI		3
#define TARGET_PCIE		4
#define TARGET_SRAM		9
#define ATTR_PCIE_MEM		0x59
#define ATTR_PCIE_IO		0x51
#define ATTR_PCIE_WA		0x79
#define ATTR_PCI_MEM		0x59
#define ATTR_PCI_IO		0x51
#define ATTR_DEV_CS0		0x1e
#define ATTR_DEV_CS1		0x1d
#define ATTR_DEV_CS2		0x1b
#define ATTR_DEV_BOOT		0xf
#define ATTR_SRAM		0x0
#define ORION5X_DDR_REG(x)	(ORION5X_DDR_VIRT_BASE | (x))
#define DDR_BASE_CS(n)		ORION5X_DDR_REG(0x1500 + ((n) << 3))
#define DDR_SIZE_CS(n)		ORION5X_DDR_REG(0x1504 + ((n) << 3))
#define ORION5X_BRIDGE_REG(x)	(ORION5X_BRIDGE_VIRT_BASE | (x))
#define CPU_WIN_CTRL(n)		ORION5X_BRIDGE_REG(0x000 | ((n) << 4))
#define CPU_WIN_BASE(n)		ORION5X_BRIDGE_REG(0x004 | ((n) << 4))
#define CPU_WIN_REMAP_LO(n)	ORION5X_BRIDGE_REG(0x008 | ((n) << 4))
#define CPU_WIN_REMAP_HI(n)	ORION5X_BRIDGE_REG(0x00c | ((n) << 4))
struct mbus_dram_target_info orion5x_mbus_dram_info;
static int __initdata win_alloc_count;
static int __init orion5x_cpu_win_can_remap(int win)
static int __init setup_cpu_win(int win, u32 base, u32 size,
u8 target, u8 attr, int remap)
void __init orion5x_setup_cpu_mbus_bridge(void)
void __init orion5x_setup_dev_boot_win(u32 base, u32 size)
void __init orion5x_setup_dev0_win(u32 base, u32 size)
void __init orion5x_setup_dev1_win(u32 base, u32 size)
void __init orion5x_setup_dev2_win(u32 base, u32 size)
void __init orion5x_setup_pcie_wa_win(u32 base, u32 size)
int __init orion5x_setup_sram_win(void)
