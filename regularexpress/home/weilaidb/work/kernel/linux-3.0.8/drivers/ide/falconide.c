#define DRV_NAME "falconide"
#define ATA_HD_BASE	0xfff00000
#define ATA_HD_CONTROL	0x39
static int falconide_intr_lock;
static void falconide_release_lock(void)
static void falconide_get_lock(irq_handler_t handler, void *data)
static void falconide_input_data(ide_drive_t *drive, struct ide_cmd *cmd,
void *buf, unsigned int len)
static void falconide_output_data(ide_drive_t *drive, struct ide_cmd *cmd,
void *buf, unsigned int len)
static const struct ide_tp_ops falconide_tp_ops = ;
static const struct ide_port_info falconide_port_info = ;
static void __init falconide_setup_ports(struct ide_hw *hw)
static int __init falconide_init(void)
module_init(falconide_init);
MODULE_LICENSE("GPL");
