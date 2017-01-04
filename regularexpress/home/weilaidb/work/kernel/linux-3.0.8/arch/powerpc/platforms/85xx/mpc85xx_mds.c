#undef DEBUG
#define DBG(fmt...) udbg_printf(fmt)
#define DBG(fmt...)
#define MV88E1111_SCR	0x10
#define MV88E1111_SCR_125CLK	0x0010
static int mpc8568_fixup_125_clock(struct phy_device *phydev)
static int mpc8568_mds_phy_fixups(struct phy_device *phydev)
extern void __init mpc85xx_smp_init(void);
static struct of_device_id mpc85xx_qe_ids[] __initdata = ;
static void __init mpc85xx_publish_qe_devices(void)
static void __init mpc85xx_mds_reset_ucc_phys(void)
static void __init mpc85xx_mds_qe_init(void)
static void __init mpc85xx_mds_qeic_init(void)
static void __init mpc85xx_publish_qe_devices(void)
static void __init mpc85xx_mds_qe_init(void)
static void __init mpc85xx_mds_qeic_init(void)
static void __init mpc85xx_mds_setup_arch(void)
static int __init board_fixups(void)
machine_arch_initcall(mpc8568_mds, board_fixups);
machine_arch_initcall(mpc8569_mds, board_fixups);
static struct of_device_id mpc85xx_ids[] = ;
static struct of_device_id p1021_ids[] = ;
static int __init mpc85xx_publish_devices(void)
static int __init p1021_publish_devices(void)
machine_device_initcall(mpc8568_mds, mpc85xx_publish_devices);
machine_device_initcall(mpc8569_mds, mpc85xx_publish_devices);
machine_device_initcall(p1021_mds, p1021_publish_devices);
machine_arch_initcall(mpc8568_mds, swiotlb_setup_bus_notifier);
machine_arch_initcall(mpc8569_mds, swiotlb_setup_bus_notifier);
machine_arch_initcall(p1021_mds, swiotlb_setup_bus_notifier);
static void __init mpc85xx_mds_pic_init(void)
static int __init mpc85xx_mds_probe(void)
define_machine(mpc8568_mds) ;
static int __init mpc8569_mds_probe(void)
define_machine(mpc8569_mds) ;
static int __init p1021_mds_probe(void)
define_machine(p1021_mds) ;
