#define MODULE_NAME "budget_ci"
#define DEBIADDR_IR		0x4000
#define DEBIADDR_CICONTROL	0x0000
#define DEBIADDR_CIVERSION	0x4000
#define DEBIADDR_IO		0x1000
#define DEBIADDR_ATTR		0x3000
#define CICONTROL_RESET		0x01
#define CICONTROL_ENABLETS	0x02
#define CICONTROL_CAMDETECT	0x08
#define DEBICICTL		0x00420000
#define DEBICICAM		0x02420000
#define SLOTSTATUS_NONE		1
#define SLOTSTATUS_PRESENT	2
#define SLOTSTATUS_RESET	4
#define SLOTSTATUS_READY	8
#define SLOTSTATUS_OCCUPIED	(SLOTSTATUS_PRESENT|SLOTSTATUS_RESET|SLOTSTATUS_READY)
#define IR_DEVICE_ANY		255
static int rc5_device = -1;
module_param(rc5_device, int, 0644);
MODULE_PARM_DESC(rc5_device, "only IR commands to given RC5 device (device = 0 - 31, any device = 255, default: autodetect)");
static int ir_debug;
module_param(ir_debug, int, 0644);
MODULE_PARM_DESC(ir_debug, "enable debugging information for IR decoding");
DVB_DEFINE_MOD_OPT_ADAPTER_NR(adapter_nr);
struct budget_ci_ir ;
struct budget_ci ;
static void msp430_ir_interrupt(unsigned long data)
static int msp430_ir_init(struct budget_ci *budget_ci)
static void msp430_ir_deinit(struct budget_ci *budget_ci)
static int ciintf_read_attribute_mem(struct dvb_ca_en50221 *ca, int slot, int address)
static int ciintf_write_attribute_mem(struct dvb_ca_en50221 *ca, int slot, int address, u8 value)
static int ciintf_read_cam_control(struct dvb_ca_en50221 *ca, int slot, u8 address)
static int ciintf_write_cam_control(struct dvb_ca_en50221 *ca, int slot, u8 address, u8 value)
static int ciintf_slot_reset(struct dvb_ca_en50221 *ca, int slot)
static int ciintf_slot_shutdown(struct dvb_ca_en50221 *ca, int slot)
static int ciintf_slot_ts_enable(struct dvb_ca_en50221 *ca, int slot)
static void ciintf_interrupt(unsigned long data)
static int ciintf_poll_slot_status(struct dvb_ca_en50221 *ca, int slot, int open)
static int ciintf_init(struct budget_ci *budget_ci)
static void ciintf_deinit(struct budget_ci *budget_ci)
static void budget_ci_irq(struct saa7146_dev *dev, u32 * isr)
static u8 philips_su1278_tt_inittab[] = ;
static int philips_su1278_tt_set_symbol_rate(struct dvb_frontend *fe, u32 srate, u32 ratio)
static int philips_su1278_tt_tuner_set_params(struct dvb_frontend *fe,
struct dvb_frontend_parameters *params)
static struct stv0299_config philips_su1278_tt_config = ;
static int philips_tdm1316l_tuner_init(struct dvb_frontend *fe)
static int philips_tdm1316l_tuner_set_params(struct dvb_frontend *fe, struct dvb_frontend_parameters *params)
static int philips_tdm1316l_request_firmware(struct dvb_frontend *fe,
const struct firmware **fw, char *name)
static struct tda1004x_config philips_tdm1316l_config = ;
static struct tda1004x_config philips_tdm1316l_config_invert = ;
static int dvbc_philips_tdm1316l_tuner_set_params(struct dvb_frontend *fe, struct dvb_frontend_parameters *params)
static u8 dvbc_philips_tdm1316l_inittab[] = ;
static struct stv0297_config dvbc_philips_tdm1316l_config = ;
static struct tda10023_config tda10023_config = ;
static struct tda827x_config tda827x_config = ;
static const struct stb0899_s1_reg tt3200_stb0899_s1_init_1[] = ;
static const struct stb0899_s1_reg tt3200_stb0899_s1_init_3[] = ;
static struct stb0899_config tt3200_config = ;
static struct stb6100_config tt3200_stb6100_config = ;
static void frontend_init(struct budget_ci *budget_ci)
static int budget_ci_attach(struct saa7146_dev *dev, struct saa7146_pci_extension_data *info)
static int budget_ci_detach(struct saa7146_dev *dev)
static struct saa7146_extension budget_extension;
MAKE_BUDGET_INFO(ttbs2, "TT-Budget/S-1500 PCI", BUDGET_TT);
MAKE_BUDGET_INFO(ttbci, "TT-Budget/WinTV-NOVA-CI PCI", BUDGET_TT_HW_DISEQC);
MAKE_BUDGET_INFO(ttbt2, "TT-Budget/WinTV-NOVA-T	 PCI", BUDGET_TT);
MAKE_BUDGET_INFO(ttbtci, "TT-Budget-T-CI PCI", BUDGET_TT);
MAKE_BUDGET_INFO(ttbcci, "TT-Budget-C-CI PCI", BUDGET_TT);
MAKE_BUDGET_INFO(ttc1501, "TT-Budget C-1501 PCI", BUDGET_TT);
MAKE_BUDGET_INFO(tt3200, "TT-Budget S2-3200 PCI", BUDGET_TT);
MAKE_BUDGET_INFO(ttbs1500b, "TT-Budget S-1500B PCI", BUDGET_TT);
static struct pci_device_id pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, pci_tbl);
static struct saa7146_extension budget_extension = ;
static int __init budget_ci_init(void)
static void __exit budget_ci_exit(void)
module_init(budget_ci_init);
module_exit(budget_ci_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Michael Hunold, Jack Thomasson, Andrew de Quincey, others");
MODULE_DESCRIPTION("driver for the SAA7146 based so-called "
"budget PCI DVB cards w/ CI-module produced by "
"Siemens, Technotrend, Hauppauge");
