static char name_mute[]    = "mute";
static char name_radio[]   = "Radio";
static char name_tv[]      = "Television";
static char name_tv_mono[] = "TV (mono only)";
static char name_comp[]    = "Composite";
static char name_comp1[]   = "Composite1";
static char name_comp2[]   = "Composite2";
static char name_comp3[]   = "Composite3";
static char name_comp4[]   = "Composite4";
static char name_svideo[]  = "S-Video";
struct saa7134_board saa7134_boards[] = ;
const unsigned int saa7134_bcount = ARRAY_SIZE(saa7134_boards);
struct pci_device_id saa7134_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, saa7134_pci_tbl);
static void board_flyvideo(struct saa7134_dev *dev)
static int saa7134_xc2028_callback(struct saa7134_dev *dev,
int command, int arg)
static int saa7134_xc5000_callback(struct saa7134_dev *dev,
int command, int arg)
static int saa7134_tda8290_827x_callback(struct saa7134_dev *dev,
int command, int arg)
static inline int saa7134_tda18271_hvr11x0_toggle_agc(struct saa7134_dev *dev,
enum tda18271_mode mode)
static inline int saa7134_kworld_sbtvd_toggle_agc(struct saa7134_dev *dev,
enum tda18271_mode mode)
static int saa7134_tda8290_18271_callback(struct saa7134_dev *dev,
int command, int arg)
static int saa7134_tda8290_callback(struct saa7134_dev *dev,
int command, int arg)
int saa7134_tuner_callback(void *priv, int component, int command, int arg)
EXPORT_SYMBOL(saa7134_tuner_callback);
static void hauppauge_eeprom(struct saa7134_dev *dev, u8 *eeprom_data)
int saa7134_board_init1(struct saa7134_dev *dev)
static void saa7134_tuner_setup(struct saa7134_dev *dev)
int saa7134_board_init2(struct saa7134_dev *dev)
