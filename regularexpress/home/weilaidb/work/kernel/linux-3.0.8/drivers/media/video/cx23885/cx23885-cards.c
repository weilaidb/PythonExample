static unsigned int enable_885_ir;
module_param(enable_885_ir, int, 0644);
MODULE_PARM_DESC(enable_885_ir,
"Enable integrated IR controller for supported\n"
"\t\t    CX2388[57] boards that are wired for it:\n"
"\t\t\tHVR-1250 (reported safe)\n"
"\t\t\tTeVii S470 (reported unsafe)\n"
"\t\t    This can cause an interrupt storm with some cards.\n"
"\t\t    Default: 0 [Disabled]");
struct cx23885_board cx23885_boards[] = ;
const unsigned int cx23885_bcount = ARRAY_SIZE(cx23885_boards);
struct cx23885_subid cx23885_subids[] = ;
const unsigned int cx23885_idcount = ARRAY_SIZE(cx23885_subids);
void cx23885_card_list(struct cx23885_dev *dev)
static void hauppauge_eeprom(struct cx23885_dev *dev, u8 *eeprom_data)
int cx23885_tuner_callback(void *priv, int component, int command, int arg)
void cx23885_gpio_setup(struct cx23885_dev *dev)
int cx23885_ir_init(struct cx23885_dev *dev)
void cx23885_ir_fini(struct cx23885_dev *dev)
int netup_jtag_io(void *device, int tms, int tdi, int read_tdo)
void cx23885_ir_pci_int_enable(struct cx23885_dev *dev)
void cx23885_card_setup(struct cx23885_dev *dev)
