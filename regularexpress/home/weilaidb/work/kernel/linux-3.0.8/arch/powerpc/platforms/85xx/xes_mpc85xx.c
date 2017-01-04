#define MPC85xx_L2CTL_L2E		0x80000000
#define MPC85xx_L2CTL_L2I		0x40000000
#define MPC85xx_L2CTL_L2SIZ_MASK	0x30000000
void __init xes_mpc85xx_pic_init(void)
static void xes_mpc85xx_configure_l2(void __iomem *l2_base)
static void xes_mpc85xx_fixups(void)
static int primary_phb_addr;
extern void __init mpc85xx_smp_init(void);
static void __init xes_mpc85xx_setup_arch(void)
static struct of_device_id __initdata xes_mpc85xx_ids[] = ;
static int __init xes_mpc85xx_publish_devices(void)
machine_device_initcall(xes_mpc8572, xes_mpc85xx_publish_devices);
machine_device_initcall(xes_mpc8548, xes_mpc85xx_publish_devices);
machine_device_initcall(xes_mpc8540, xes_mpc85xx_publish_devices);
static int __init xes_mpc8572_probe(void)
static int __init xes_mpc8548_probe(void)
static int __init xes_mpc8540_probe(void)
define_machine(xes_mpc8572) ;
define_machine(xes_mpc8548) ;
define_machine(xes_mpc8540) ;
