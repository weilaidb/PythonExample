MODULE_DESCRIPTION("Driver for Technologic Systems TS-CAN1 PC104 boards");
MODULE_AUTHOR("Andre B. Oliveira <anbadeol@gmail.com>");
MODULE_LICENSE("GPL");
#define TSCAN1_MAXDEV 4
#define TSCAN1_ID1	0
#define TSCAN1_ID2	1
#define TSCAN1_VERSION	2
#define TSCAN1_LED	3
#define TSCAN1_PAGE	4
#define TSCAN1_MODE	5
#define TSCAN1_JUMPERS	6
#define TSCAN1_ID1_VALUE 0xf6
#define TSCAN1_ID2_VALUE 0xb9
#define TSCAN1_MODE_ENABLE 0x40
#define TSCAN1_JP4 0x10
#define TSCAN1_JP5 0x20
#define TSCAN1_PLD_ADDRESS 0x150
#define TSCAN1_PLD_SIZE 8
#define TSCAN1_SJA1000_SIZE 32
#define TSCAN1_SJA1000_XTAL 16000000
static const unsigned short tscan1_sja1000_addresses[] __devinitconst = ;
static u8 tscan1_read(const struct sja1000_priv *priv, int reg)
static void tscan1_write(const struct sja1000_priv *priv, int reg, u8 val)
static int __devinit tscan1_probe(struct device *dev, unsigned id)
static int __devexit tscan1_remove(struct device *dev, unsigned id)
static struct isa_driver tscan1_isa_driver = ;
static int __init tscan1_init(void)
module_init(tscan1_init);
static void __exit tscan1_exit(void)
module_exit(tscan1_exit);
