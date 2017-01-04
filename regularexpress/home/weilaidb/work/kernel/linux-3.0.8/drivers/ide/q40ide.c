#define Q40IDE_NUM_HWIFS	2
#define PCIDE_BASE1	0x1f0
#define PCIDE_BASE2	0x170
#define PCIDE_BASE3	0x1e8
#define PCIDE_BASE4	0x168
#define PCIDE_BASE5	0x1e0
#define PCIDE_BASE6	0x160
static const unsigned long pcide_bases[Q40IDE_NUM_HWIFS] = ;
static int q40ide_default_irq(unsigned long base)
static void q40_ide_setup_ports(struct ide_hw *hw, unsigned long base, int irq)
static void q40ide_input_data(ide_drive_t *drive, struct ide_cmd *cmd,
void *buf, unsigned int len)
static void q40ide_output_data(ide_drive_t *drive, struct ide_cmd *cmd,
void *buf, unsigned int len)
static const struct ide_tp_ops q40ide_tp_ops = ;
static const struct ide_port_info q40ide_port_info = ;
static const char *q40_ide_names[Q40IDE_NUM_HWIFS]=;
static int __init q40ide_init(void)
module_init(q40ide_init);
MODULE_LICENSE("GPL");
