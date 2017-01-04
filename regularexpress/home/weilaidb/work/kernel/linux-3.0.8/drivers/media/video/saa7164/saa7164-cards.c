#define REGLEN_8bit	1
#define REGLEN_16bit	2
struct saa7164_board saa7164_boards[] = ;
const unsigned int saa7164_bcount = ARRAY_SIZE(saa7164_boards);
struct saa7164_subid saa7164_subids[] = ;
const unsigned int saa7164_idcount = ARRAY_SIZE(saa7164_subids);
void saa7164_card_list(struct saa7164_dev *dev)
#define PCIEBRIDGE_UNITID 2
void saa7164_gpio_setup(struct saa7164_dev *dev)
static void hauppauge_eeprom(struct saa7164_dev *dev, u8 *eeprom_data)
void saa7164_card_setup(struct saa7164_dev *dev)
int saa7164_i2caddr_to_unitid(struct saa7164_i2c *bus, int addr)
int saa7164_i2caddr_to_reglen(struct saa7164_i2c *bus, int addr)
char *saa7164_unitid_name(struct saa7164_dev *dev, u8 unitid)
