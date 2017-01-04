static struct device_node *bcsr_node;
static void __iomem *bcsr_regs;
#define BCSR_ID			0
#define BCSR_PCI_CTRL	       	1
#define BCSR_FLASH_NV_POR_CTRL	2
#define BCSR_FENET_UART_CTRL	3
#define BCSR_PCI_IRQ		4
#define BCSR_XIRQ_SELECT	5
#define BCSR_XIRQ_ROUTING	6
#define BCSR_XIRQ_STATUS	7
#define BCSR_XIRQ_STATUS2	8
#define BCSR_SW_STAT_LED_CTRL	9
#define BCSR_GPIO_IRQ_PAR_CTRL	10
static __initdata struct of_device_id ep405_of_bus[] = ;
static int __init ep405_device_probe(void)
machine_device_initcall(ep405, ep405_device_probe);
static void __init ep405_init_bcsr(void)
static void __init ep405_setup_arch(void)
static int __init ep405_probe(void)
define_machine(ep405) ;
