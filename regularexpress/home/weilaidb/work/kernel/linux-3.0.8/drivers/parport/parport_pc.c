#define PARPORT_PC_MAX_PORTS PARPORT_MAX
#define HAS_DMA
#define ECR_SPP 00
#define ECR_PS2 01
#define ECR_PPF 02
#define ECR_ECP 03
#define ECR_EPP 04
#define ECR_VND 05
#define ECR_TST 06
#define ECR_CNF 07
#define ECR_MODE_MASK 0xe0
#define ECR_WRITE(p, v) frob_econtrol((p), 0xff, (v))
#undef DEBUG
#define DPRINTK  printk
#define DPRINTK(stuff...)
#define NR_SUPERIOS 3
static struct superio_struct  superios[NR_SUPERIOS] = ;
static int user_specified;
#if defined(CONFIG_PARPORT_PC_SUPERIO) || \
(defined(CONFIG_PARPORT_1284) && defined(CONFIG_PARPORT_PC_FIFO))
static int verbose_probing;
static int pci_registered_parport;
static int pnp_registered_parport;
static void frob_econtrol(struct parport *pb, unsigned char m,
unsigned char v)
static inline void frob_set_mode(struct parport *p, int mode)
static int change_mode(struct parport *p, int m)
static int clear_epp_timeout(struct parport *pb)
static void parport_pc_init_state(struct pardevice *dev,
struct parport_state *s)
static void parport_pc_save_state(struct parport *p, struct parport_state *s)
static void parport_pc_restore_state(struct parport *p,
struct parport_state *s)
static size_t parport_pc_epp_read_data(struct parport *port, void *buf,
size_t length, int flags)
static size_t parport_pc_epp_write_data(struct parport *port, const void *buf,
size_t length, int flags)
static size_t parport_pc_epp_read_addr(struct parport *port, void *buf,
size_t length, int flags)
static size_t parport_pc_epp_write_addr(struct parport *port,
const void *buf, size_t length,
int flags)
static size_t parport_pc_ecpepp_read_data(struct parport *port, void *buf,
size_t length, int flags)
static size_t parport_pc_ecpepp_write_data(struct parport *port,
const void *buf, size_t length,
int flags)
static size_t parport_pc_ecpepp_read_addr(struct parport *port, void *buf,
size_t length, int flags)
static size_t parport_pc_ecpepp_write_addr(struct parport *port,
const void *buf, size_t length,
int flags)
static size_t parport_pc_fifo_write_block_pio(struct parport *port,
const void *buf, size_t length)
static size_t parport_pc_fifo_write_block_dma(struct parport *port,
const void *buf, size_t length)
static inline size_t parport_pc_fifo_write_block(struct parport *port,
const void *buf, size_t length)
static size_t parport_pc_compat_write_block_pio(struct parport *port,
const void *buf, size_t length,
int flags)
static size_t parport_pc_ecp_write_block_pio(struct parport *port,
const void *buf, size_t length,
int flags)
static const struct parport_operations parport_pc_ops = ;
static struct superio_struct *find_free_superio(void)
static void __devinit show_parconfig_smsc37c669(int io, int key)
static void __devinit show_parconfig_winbond(int io, int key)
static void __devinit decode_winbond(int efer, int key, int devid,
int devrev, int oldid)
static void __devinit decode_smsc(int efer, int key, int devid, int devrev)
static void __devinit winbond_check(int io, int key)
static void __devinit winbond_check2(int io, int key)
static void __devinit smsc_check(int io, int key)
static void __devinit detect_and_report_winbond(void)
static void __devinit detect_and_report_smsc(void)
static void __devinit detect_and_report_it87(void)
static struct superio_struct *find_superio(struct parport *p)
static int get_superio_dma(struct parport *p)
static int get_superio_irq(struct parport *p)
static int parport_SPP_supported(struct parport *pb)
static int parport_ECR_present(struct parport *pb)
static int parport_PS2_supported(struct parport *pb)
static int parport_ECP_supported(struct parport *pb)
static int parport_ECPPS2_supported(struct parport *pb)
static int parport_EPP_supported(struct parport *pb)
static int parport_ECPEPP_supported(struct parport *pb)
static int __devinit parport_PS2_supported(struct parport *pb)
static int parport_ECP_supported(struct parport *pb)
static int __devinit parport_EPP_supported(struct parport *pb)
static int __devinit parport_ECPEPP_supported(struct parport *pb)
static int __devinit parport_ECPPS2_supported(struct parport *pb)
static int programmable_irq_support(struct parport *pb)
static int irq_probe_ECP(struct parport *pb)
static int irq_probe_EPP(struct parport *pb)
static int irq_probe_SPP(struct parport *pb)
static int parport_irq_probe(struct parport *pb)
static int programmable_dma_support(struct parport *p)
static int parport_dma_probe(struct parport *p)
static LIST_HEAD(ports_list);
static DEFINE_SPINLOCK(ports_lock);
struct parport *parport_pc_probe_port(unsigned long int base,
unsigned long int base_hi,
int irq, int dma,
struct device *dev,
int irqflags)
EXPORT_SYMBOL(parport_pc_probe_port);
void parport_pc_unregister_port(struct parport *p)
EXPORT_SYMBOL(parport_pc_unregister_port);
static int __devinit sio_ite_8872_probe(struct pci_dev *pdev, int autoirq,
int autodma,
const struct parport_pc_via_data *via)
static int __devinitdata parport_init_mode;
static struct parport_pc_via_data via_686a_data __devinitdata = ;
static struct parport_pc_via_data via_8231_data __devinitdata = ;
static int __devinit sio_via_probe(struct pci_dev *pdev, int autoirq,
int autodma,
const struct parport_pc_via_data *via)
enum parport_pc_sio_types ;
static struct parport_pc_superio  parport_pc_superio_info[] __devinitdata = ;
enum parport_pc_pci_cards ;
static struct parport_pc_pci  cards[] = ;
static const struct pci_device_id parport_pc_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, parport_pc_pci_tbl);
struct pci_parport_data ;
static int parport_pc_pci_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static void __devexit parport_pc_pci_remove(struct pci_dev *dev)
static struct pci_driver parport_pc_pci_driver = ;
static int __init parport_pc_init_superio(int autoirq, int autodma)
static struct pci_driver parport_pc_pci_driver;
static int __init parport_pc_init_superio(int autoirq, int autodma)
static const struct pnp_device_id parport_pc_pnp_tbl[] = ;
MODULE_DEVICE_TABLE(pnp, parport_pc_pnp_tbl);
static int parport_pc_pnp_probe(struct pnp_dev *dev,
const struct pnp_device_id *id)
static void parport_pc_pnp_remove(struct pnp_dev *dev)
static struct pnp_driver parport_pc_pnp_driver = ;
static struct pnp_driver parport_pc_pnp_driver;
static int __devinit parport_pc_platform_probe(struct platform_device *pdev)
static struct platform_driver parport_pc_platform_driver = ;
static int __devinit __attribute__((unused))
parport_pc_find_isa_ports(int autoirq, int autodma)
static void __init parport_pc_find_ports(int autoirq, int autodma)
static int __initdata io[PARPORT_PC_MAX_PORTS+1] = ;
static int __initdata io_hi[PARPORT_PC_MAX_PORTS+1] = ;
static int __initdata dmaval[PARPORT_PC_MAX_PORTS] = ;
static int __initdata irqval[PARPORT_PC_MAX_PORTS] = ;
static int __init parport_parse_param(const char *s, int *val,
int automatic, int none, int nofifo)
static int __init parport_parse_irq(const char *irqstr, int *val)
static int __init parport_parse_dma(const char *dmastr, int *val)
static int __init parport_init_mode_setup(char *str)
static const char *irq[PARPORT_PC_MAX_PORTS];
static const char *dma[PARPORT_PC_MAX_PORTS];
MODULE_PARM_DESC(io, "Base I/O address (SPP regs)");
module_param_array(io, int, NULL, 0);
MODULE_PARM_DESC(io_hi, "Base I/O address (ECR)");
module_param_array(io_hi, int, NULL, 0);
MODULE_PARM_DESC(irq, "IRQ line");
module_param_array(irq, charp, NULL, 0);
MODULE_PARM_DESC(dma, "DMA channel");
module_param_array(dma, charp, NULL, 0);
#if defined(CONFIG_PARPORT_PC_SUPERIO) || \
(defined(CONFIG_PARPORT_1284) && defined(CONFIG_PARPORT_PC_FIFO))
MODULE_PARM_DESC(verbose_probing, "Log chit-chat during initialisation");
module_param(verbose_probing, int, 0644);
static char *init_mode;
MODULE_PARM_DESC(init_mode,
"Initialise mode for VIA VT8231 port (spp, ps2, epp, ecp or ecpepp)");
module_param(init_mode, charp, 0);
static int __init parse_parport_params(void)
static int parport_setup_ptr __initdata;
static int __init parport_setup(char *str)
static int __init parse_parport_params(void)
__setup("parport=", parport_setup);
__setup("parport_init_mode=", parport_init_mode_setup);
static int __init parport_pc_init(void)
static void __exit parport_pc_exit(void)
MODULE_AUTHOR("Phil Blundell, Tim Waugh, others");
MODULE_DESCRIPTION("PC-style parallel port driver");
MODULE_LICENSE("GPL");
module_init(parport_pc_init)
module_exit(parport_pc_exit)
