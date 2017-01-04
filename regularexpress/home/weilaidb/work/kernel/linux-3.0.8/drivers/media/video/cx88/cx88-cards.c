static unsigned int tuner[] = ;
static unsigned int radio[] = ;
static unsigned int card[]  = ;
module_param_array(tuner, int, NULL, 0444);
module_param_array(radio, int, NULL, 0444);
module_param_array(card,  int, NULL, 0444);
MODULE_PARM_DESC(tuner,"tuner type");
MODULE_PARM_DESC(radio,"radio tuner type");
MODULE_PARM_DESC(card,"card type");
static unsigned int latency = UNSET;
module_param(latency,int,0444);
MODULE_PARM_DESC(latency,"pci latency timer");
static int disable_ir;
module_param(disable_ir, int, 0444);
MODULE_PARM_DESC(disable_ir, "Disable IR support");
#define info_printk(core, fmt, arg...) \
printk(KERN_INFO "%s: " fmt, core->name , ## arg)
#define warn_printk(core, fmt, arg...) \
printk(KERN_WARNING "%s: " fmt, core->name , ## arg)
#define err_printk(core, fmt, arg...) \
printk(KERN_ERR "%s: " fmt, core->name , ## arg)
static const struct cx88_board cx88_boards[] = ;
static const struct cx88_subid cx88_subids[] = ;
static void leadtek_eeprom(struct cx88_core *core, u8 *eeprom_data)
static void hauppauge_eeprom(struct cx88_core *core, u8 *eeprom_data)
static const struct  gdi_tuner[] = ;
static void gdi_eeprom(struct cx88_core *core, u8 *eeprom_data)
static int cx88_dvico_xc2028_callback(struct cx88_core *core,
int command, int arg)
static int cx88_xc3028_geniatech_tuner_callback(struct cx88_core *core,
int command, int mode)
static int cx88_xc3028_winfast1800h_callback(struct cx88_core *core,
int command, int arg)
static int cx88_pv_8000gt_callback(struct cx88_core *core,
int command, int arg)
static void dvico_fusionhdtv_hybrid_init(struct cx88_core *core)
static int cx88_xc2028_tuner_callback(struct cx88_core *core,
int command, int arg)
static int cx88_xc5000_tuner_callback(struct cx88_core *core,
int command, int arg)
int cx88_tuner_callback(void *priv, int component, int command, int arg)
EXPORT_SYMBOL(cx88_tuner_callback);
static void cx88_card_list(struct cx88_core *core, struct pci_dev *pci)
static void cx88_card_setup_pre_i2c(struct cx88_core *core)
void cx88_setup_xc3028(struct cx88_core *core, struct xc2028_ctrl *ctl)
EXPORT_SYMBOL_GPL(cx88_setup_xc3028);
static void cx88_card_setup(struct cx88_core *core)
static int cx88_pci_quirks(const char *name, struct pci_dev *pci)
int cx88_get_resources(const struct cx88_core *core, struct pci_dev *pci)
struct cx88_core *cx88_core_create(struct pci_dev *pci, int nr)
