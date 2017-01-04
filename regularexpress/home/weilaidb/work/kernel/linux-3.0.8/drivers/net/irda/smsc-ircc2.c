MODULE_AUTHOR("Daniele Peri <peri@csai.unipa.it>");
MODULE_DESCRIPTION("SMC IrCC SIR/FIR controller driver");
MODULE_LICENSE("GPL");
static int smsc_nopnp = 1;
module_param_named(nopnp, smsc_nopnp, bool, 0);
MODULE_PARM_DESC(nopnp, "Do not use PNP to detect controller settings, defaults to true");
#define DMA_INVAL 255
static int ircc_dma = DMA_INVAL;
module_param(ircc_dma, int, 0);
MODULE_PARM_DESC(ircc_dma, "DMA channel");
#define IRQ_INVAL 255
static int ircc_irq = IRQ_INVAL;
module_param(ircc_irq, int, 0);
MODULE_PARM_DESC(ircc_irq, "IRQ line");
static int ircc_fir;
module_param(ircc_fir, int, 0);
MODULE_PARM_DESC(ircc_fir, "FIR Base Address");
static int ircc_sir;
module_param(ircc_sir, int, 0);
MODULE_PARM_DESC(ircc_sir, "SIR Base Address");
static int ircc_cfg;
module_param(ircc_cfg, int, 0);
MODULE_PARM_DESC(ircc_cfg, "Configuration register base address");
static int ircc_transceiver;
module_param(ircc_transceiver, int, 0);
MODULE_PARM_DESC(ircc_transceiver, "Transceiver type");
struct smsc_ircc_subsystem_configuration ;
struct smsc_transceiver ;
struct smsc_chip ;
struct smsc_chip_address ;
struct smsc_ircc_cb ;
#define SMSC_IRCC2_DRIVER_NAME			"smsc-ircc2"
#define SMSC_IRCC2_C_IRDA_FALLBACK_SPEED	9600
#define SMSC_IRCC2_C_DEFAULT_TRANSCEIVER	1
#define SMSC_IRCC2_C_NET_TIMEOUT		0
#define SMSC_IRCC2_C_SIR_STOP			0
static const char *driver_name = SMSC_IRCC2_DRIVER_NAME;
static int smsc_ircc_open(unsigned int firbase, unsigned int sirbase, u8 dma, u8 irq);
static int smsc_ircc_present(unsigned int fir_base, unsigned int sir_base);
static void smsc_ircc_setup_io(struct smsc_ircc_cb *self, unsigned int fir_base, unsigned int sir_base, u8 dma, u8 irq);
static void smsc_ircc_setup_qos(struct smsc_ircc_cb *self);
static void smsc_ircc_init_chip(struct smsc_ircc_cb *self);
static int __exit smsc_ircc_close(struct smsc_ircc_cb *self);
static int  smsc_ircc_dma_receive(struct smsc_ircc_cb *self);
static void smsc_ircc_dma_receive_complete(struct smsc_ircc_cb *self);
static void smsc_ircc_sir_receive(struct smsc_ircc_cb *self);
static netdev_tx_t  smsc_ircc_hard_xmit_sir(struct sk_buff *skb,
struct net_device *dev);
static netdev_tx_t  smsc_ircc_hard_xmit_fir(struct sk_buff *skb,
struct net_device *dev);
static void smsc_ircc_dma_xmit(struct smsc_ircc_cb *self, int bofs);
static void smsc_ircc_dma_xmit_complete(struct smsc_ircc_cb *self);
static void smsc_ircc_change_speed(struct smsc_ircc_cb *self, u32 speed);
static void smsc_ircc_set_sir_speed(struct smsc_ircc_cb *self, u32 speed);
static irqreturn_t smsc_ircc_interrupt(int irq, void *dev_id);
static irqreturn_t smsc_ircc_interrupt_sir(struct net_device *dev);
static void smsc_ircc_sir_start(struct smsc_ircc_cb *self);
#if SMSC_IRCC2_C_SIR_STOP
static void smsc_ircc_sir_stop(struct smsc_ircc_cb *self);
static void smsc_ircc_sir_write_wakeup(struct smsc_ircc_cb *self);
static int  smsc_ircc_sir_write(int iobase, int fifo_size, __u8 *buf, int len);
static int  smsc_ircc_net_open(struct net_device *dev);
static int  smsc_ircc_net_close(struct net_device *dev);
static int  smsc_ircc_net_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
#if SMSC_IRCC2_C_NET_TIMEOUT
static void smsc_ircc_timeout(struct net_device *dev);
static int smsc_ircc_is_receiving(struct smsc_ircc_cb *self);
static void smsc_ircc_probe_transceiver(struct smsc_ircc_cb *self);
static void smsc_ircc_set_transceiver_for_speed(struct smsc_ircc_cb *self, u32 speed);
static void smsc_ircc_sir_wait_hw_transmitter_finish(struct smsc_ircc_cb *self);
static int __init smsc_ircc_look_for_chips(void);
static const struct smsc_chip * __init smsc_ircc_probe(unsigned short cfg_base, u8 reg, const struct smsc_chip *chip, char *type);
static int __init smsc_superio_flat(const struct smsc_chip *chips, unsigned short cfg_base, char *type);
static int __init smsc_superio_paged(const struct smsc_chip *chips, unsigned short cfg_base, char *type);
static int __init smsc_superio_fdc(unsigned short cfg_base);
static int __init smsc_superio_lpc(unsigned short cfg_base);
static int __init preconfigure_smsc_chip(struct smsc_ircc_subsystem_configuration *conf);
static int __init preconfigure_through_82801(struct pci_dev *dev, struct smsc_ircc_subsystem_configuration *conf);
static void __init preconfigure_ali_port(struct pci_dev *dev,
unsigned short port);
static int __init preconfigure_through_ali(struct pci_dev *dev, struct smsc_ircc_subsystem_configuration *conf);
static int __init smsc_ircc_preconfigure_subsystems(unsigned short ircc_cfg,
unsigned short ircc_fir,
unsigned short ircc_sir,
unsigned char ircc_dma,
unsigned char ircc_irq);
static void smsc_ircc_set_transceiver_toshiba_sat1800(int fir_base, u32 speed);
static int  smsc_ircc_probe_transceiver_toshiba_sat1800(int fir_base);
static void smsc_ircc_set_transceiver_smsc_ircc_fast_pin_select(int fir_base, u32 speed);
static int  smsc_ircc_probe_transceiver_smsc_ircc_fast_pin_select(int fir_base);
static void smsc_ircc_set_transceiver_smsc_ircc_atc(int fir_base, u32 speed);
static int  smsc_ircc_probe_transceiver_smsc_ircc_atc(int fir_base);
static int smsc_ircc_suspend(struct platform_device *dev, pm_message_t state);
static int smsc_ircc_resume(struct platform_device *dev);
static struct platform_driver smsc_ircc_driver = ;
static struct smsc_transceiver smsc_transceivers[] =
;
#define SMSC_IRCC2_C_NUMBER_OF_TRANSCEIVERS (ARRAY_SIZE(smsc_transceivers) - 1)
#define	KEY55_1	0
#define	KEY55_2	1
#define	NoIRDA	2
#define	SIR	0
#define	FIR	4
#define	SERx4	8
static struct smsc_chip __initdata fdc_chips_flat[] =
;
static struct smsc_chip __initdata fdc_chips_paged[] =
;
static struct smsc_chip __initdata lpc_chips_flat[] =
;
static struct smsc_chip __initdata lpc_chips_paged[] =
;
#define SMSCSIO_TYPE_FDC	1
#define SMSCSIO_TYPE_LPC	2
#define SMSCSIO_TYPE_FLAT	4
#define SMSCSIO_TYPE_PAGED	8
static struct smsc_chip_address __initdata possible_addresses[] =
;
static struct smsc_ircc_cb *dev_self[] = ;
static unsigned short dev_count;
static inline void register_bank(int iobase, int bank)
static const struct pnp_device_id smsc_ircc_pnp_table[] = ;
MODULE_DEVICE_TABLE(pnp, smsc_ircc_pnp_table);
static int pnp_driver_registered;
static int __devinit smsc_ircc_pnp_probe(struct pnp_dev *dev,
const struct pnp_device_id *dev_id)
static struct pnp_driver smsc_ircc_pnp_driver = ;
static struct pnp_driver smsc_ircc_pnp_driver;
static int __init smsc_ircc_legacy_probe(void)
static int __init smsc_ircc_init(void)
static netdev_tx_t smsc_ircc_net_xmit(struct sk_buff *skb,
struct net_device *dev)
static const struct net_device_ops smsc_ircc_netdev_ops = ;
static int __devinit smsc_ircc_open(unsigned int fir_base, unsigned int sir_base, u8 dma, u8 irq)
static int smsc_ircc_present(unsigned int fir_base, unsigned int sir_base)
static void smsc_ircc_setup_io(struct smsc_ircc_cb *self,
unsigned int fir_base, unsigned int sir_base,
u8 dma, u8 irq)
static void smsc_ircc_setup_qos(struct smsc_ircc_cb *self)
static void smsc_ircc_init_chip(struct smsc_ircc_cb *self)
static int smsc_ircc_net_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
#if SMSC_IRCC2_C_NET_TIMEOUT
static void smsc_ircc_timeout(struct net_device *dev)
static netdev_tx_t smsc_ircc_hard_xmit_sir(struct sk_buff *skb,
struct net_device *dev)
static void smsc_ircc_set_fir_speed(struct smsc_ircc_cb *self, u32 speed)
static void smsc_ircc_fir_start(struct smsc_ircc_cb *self)
static void smsc_ircc_fir_stop(struct smsc_ircc_cb *self)
static void smsc_ircc_change_speed(struct smsc_ircc_cb *self, u32 speed)
static void smsc_ircc_set_sir_speed(struct smsc_ircc_cb *self, __u32 speed)
static netdev_tx_t smsc_ircc_hard_xmit_fir(struct sk_buff *skb,
struct net_device *dev)
static void smsc_ircc_dma_xmit(struct smsc_ircc_cb *self, int bofs)
static void smsc_ircc_dma_xmit_complete(struct smsc_ircc_cb *self)
static int smsc_ircc_dma_receive(struct smsc_ircc_cb *self)
static void smsc_ircc_dma_receive_complete(struct smsc_ircc_cb *self)
static void smsc_ircc_sir_receive(struct smsc_ircc_cb *self)
static irqreturn_t smsc_ircc_interrupt(int dummy, void *dev_id)
static irqreturn_t smsc_ircc_interrupt_sir(struct net_device *dev)
static int smsc_ircc_request_irq(struct smsc_ircc_cb *self)
static void smsc_ircc_start_interrupts(struct smsc_ircc_cb *self)
static void smsc_ircc_stop_interrupts(struct smsc_ircc_cb *self)
static int smsc_ircc_net_open(struct net_device *dev)
static int smsc_ircc_net_close(struct net_device *dev)
static int smsc_ircc_suspend(struct platform_device *dev, pm_message_t state)
static int smsc_ircc_resume(struct platform_device *dev)
static int __exit smsc_ircc_close(struct smsc_ircc_cb *self)
static void __exit smsc_ircc_cleanup(void)
static void smsc_ircc_sir_start(struct smsc_ircc_cb *self)
#if SMSC_IRCC2_C_SIR_STOP
void smsc_ircc_sir_stop(struct smsc_ircc_cb *self)
static void smsc_ircc_sir_write_wakeup(struct smsc_ircc_cb *self)
static int smsc_ircc_sir_write(int iobase, int fifo_size, __u8 *buf, int len)
static int smsc_ircc_is_receiving(struct smsc_ircc_cb *self)
static void smsc_ircc_probe_transceiver(struct smsc_ircc_cb *self)
static void smsc_ircc_set_transceiver_for_speed(struct smsc_ircc_cb *self, u32 speed)
static void smsc_ircc_sir_wait_hw_transmitter_finish(struct smsc_ircc_cb *self)
static int __init smsc_ircc_look_for_chips(void)
static int __init smsc_superio_flat(const struct smsc_chip *chips, unsigned short cfgbase, char *type)
static int __init smsc_superio_paged(const struct smsc_chip *chips, unsigned short cfg_base, char *type)
static int __init smsc_access(unsigned short cfg_base, unsigned char reg)
static const struct smsc_chip * __init smsc_ircc_probe(unsigned short cfg_base, u8 reg, const struct smsc_chip *chip, char *type)
static int __init smsc_superio_fdc(unsigned short cfg_base)
static int __init smsc_superio_lpc(unsigned short cfg_base)
#define PCIID_VENDOR_INTEL 0x8086
#define PCIID_VENDOR_ALI 0x10b9
static struct smsc_ircc_subsystem_configuration subsystem_configurations[] __initdata = ;
static int __init preconfigure_smsc_chip(struct
smsc_ircc_subsystem_configuration
*conf)
#define VID 0x00
#define DID 0x02
#define PIRQ_A_D_ROUT 0x60
#define SIRQ_CNTL 0x64
#define PIRQ_E_H_ROUT 0x68
#define PCI_DMA_C 0x90
#define COM_DEC 0xe0
#define GEN1_DEC 0xe4
#define LPC_EN 0xe6
#define GEN2_DEC 0xec
static int __init preconfigure_through_82801(struct pci_dev *dev,
struct
smsc_ircc_subsystem_configuration
*conf)
static void __init preconfigure_ali_port(struct pci_dev *dev,
unsigned short port)
static int __init preconfigure_through_ali(struct pci_dev *dev,
struct
smsc_ircc_subsystem_configuration
*conf)
static int __init smsc_ircc_preconfigure_subsystems(unsigned short ircc_cfg,
unsigned short ircc_fir,
unsigned short ircc_sir,
unsigned char ircc_dma,
unsigned char ircc_irq)
static void smsc_ircc_set_transceiver_smsc_ircc_atc(int fir_base, u32 speed)
static int smsc_ircc_probe_transceiver_smsc_ircc_atc(int fir_base)
static void smsc_ircc_set_transceiver_smsc_ircc_fast_pin_select(int fir_base, u32 speed)
static int smsc_ircc_probe_transceiver_smsc_ircc_fast_pin_select(int fir_base)
static void smsc_ircc_set_transceiver_toshiba_sat1800(int fir_base, u32 speed)
static int smsc_ircc_probe_transceiver_toshiba_sat1800(int fir_base)
module_init(smsc_ircc_init);
module_exit(smsc_ircc_cleanup);
