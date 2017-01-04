#define DRV_NAME "ide-h8300"
#define bswap(d) \
()
static void mm_outsw(unsigned long addr, void *buf, u32 len)
static void mm_insw(unsigned long addr, void *buf, u32 len)
static void h8300_input_data(ide_drive_t *drive, struct ide_cmd *cmd,
void *buf, unsigned int len)
static void h8300_output_data(ide_drive_t *drive, struct ide_cmd *cmd,
void *buf, unsigned int len)
static const struct ide_tp_ops h8300_tp_ops = ;
#define H8300_IDE_GAP (2)
static inline void hw_setup(struct ide_hw *hw)
static const struct ide_port_info h8300_port_info = ;
static int __init h8300_ide_init(void)
module_init(h8300_ide_init);
MODULE_LICENSE("GPL");
