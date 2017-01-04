#define DRV_NAME "sja1000_isa"
#define MAXDEV 8
MODULE_AUTHOR("Wolfgang Grandegger <wg@grandegger.com>");
MODULE_DESCRIPTION("Socket-CAN driver for SJA1000 on the ISA bus");
MODULE_LICENSE("GPL v2");
#define CLK_DEFAULT	16000000
#define CDR_DEFAULT	(CDR_CBP | CDR_CLK_OFF)
#define OCR_DEFAULT	OCR_TX0_PUSHPULL
static unsigned long port[MAXDEV];
static unsigned long mem[MAXDEV];
static int __devinitdata irq[MAXDEV];
static int __devinitdata clk[MAXDEV];
static char __devinitdata cdr[MAXDEV] = ;
static char __devinitdata ocr[MAXDEV] = ;
static char __devinitdata indirect[MAXDEV] = ;
module_param_array(port, ulong, NULL, S_IRUGO);
MODULE_PARM_DESC(port, "I/O port number");
module_param_array(mem, ulong, NULL, S_IRUGO);
MODULE_PARM_DESC(mem, "I/O memory address");
module_param_array(indirect, byte, NULL, S_IRUGO);
MODULE_PARM_DESC(indirect, "Indirect access via address and data port");
module_param_array(irq, int, NULL, S_IRUGO);
MODULE_PARM_DESC(irq, "IRQ number");
module_param_array(clk, int, NULL, S_IRUGO);
MODULE_PARM_DESC(clk, "External oscillator clock frequency "
"(default=16000000 [16 MHz])");
module_param_array(cdr, byte, NULL, S_IRUGO);
MODULE_PARM_DESC(cdr, "Clock divider register "
"(default=0x48 [CDR_CBP | CDR_CLK_OFF])");
module_param_array(ocr, byte, NULL, S_IRUGO);
MODULE_PARM_DESC(ocr, "Output control register "
"(default=0x18 [OCR_TX0_PUSHPULL])");
#define SJA1000_IOSIZE          0x20
#define SJA1000_IOSIZE_INDIRECT 0x02
static u8 sja1000_isa_mem_read_reg(const struct sja1000_priv *priv, int reg)
static void sja1000_isa_mem_write_reg(const struct sja1000_priv *priv,
int reg, u8 val)
static u8 sja1000_isa_port_read_reg(const struct sja1000_priv *priv, int reg)
static void sja1000_isa_port_write_reg(const struct sja1000_priv *priv,
int reg, u8 val)
static u8 sja1000_isa_port_read_reg_indirect(const struct sja1000_priv *priv,
int reg)
static void sja1000_isa_port_write_reg_indirect(const struct sja1000_priv *priv,
int reg, u8 val)
static int __devinit sja1000_isa_match(struct device *pdev, unsigned int idx)
static int __devinit sja1000_isa_probe(struct device *pdev, unsigned int idx)
static int __devexit sja1000_isa_remove(struct device *pdev, unsigned int idx)
static struct isa_driver sja1000_isa_driver = ;
static int __init sja1000_isa_init(void)
static void __exit sja1000_isa_exit(void)
module_init(sja1000_isa_init);
module_exit(sja1000_isa_exit);
