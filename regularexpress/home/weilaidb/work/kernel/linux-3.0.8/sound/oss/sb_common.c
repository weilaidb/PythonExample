int sb_be_quiet;
static sb_devc *detected_devc;
static sb_devc *last_devc;
static unsigned char jazz_irq_bits[] = ;
static unsigned char jazz_dma_bits[] = ;
void *smw_free;
static int jazz16_base;
static unsigned char jazz16_bits;
static DEFINE_SPINLOCK(jazz16_lock);
static unsigned char *smw_ucode;
static int      smw_ucodeLen;
static sb_devc *last_sb;
int sb_dsp_command(sb_devc * devc, unsigned char val)
int sb_dsp_get_byte(sb_devc * devc)
static void sb_intr (sb_devc *devc)
static void pci_intr(sb_devc *devc)
static irqreturn_t sbintr(int irq, void *dev_id)
int sb_dsp_reset(sb_devc * devc)
static void dsp_get_vers(sb_devc * devc)
static int sb16_set_dma_hw(sb_devc * devc)
static void sb16_set_mpu_port(sb_devc * devc, struct address_info *hw_config)
static int sb16_set_irq_hw(sb_devc * devc, int level)
static void relocate_Jazz16(sb_devc * devc, struct address_info *hw_config)
static int init_Jazz16(sb_devc * devc, struct address_info *hw_config)
static void relocate_ess1688(sb_devc * devc)
int sb_dsp_detect(struct address_info *hw_config, int pci, int pciio, struct sb_module_options *sbmo)
int sb_dsp_init(struct address_info *hw_config, struct module *owner)
void sb_dsp_unload(struct address_info *hw_config, int sbmpu)
void sb_setmixer(sb_devc * devc, unsigned int port, unsigned int value)
unsigned int sb_getmixer(sb_devc * devc, unsigned int port)
void sb_chgmixer
(sb_devc * devc, unsigned int reg, unsigned int mask, unsigned int val)
static void smw_putmem(sb_devc * devc, int base, int addr, unsigned char val)
static unsigned char smw_getmem(sb_devc * devc, int base, int addr)
static int smw_midi_init(sb_devc * devc, struct address_info *hw_config)
static int init_Jazz16_midi(sb_devc * devc, struct address_info *hw_config)
int probe_sbmpu(struct address_info *hw_config, struct module *owner)
void unload_sbmpu(struct address_info *hw_config)
EXPORT_SYMBOL(sb_dsp_init);
EXPORT_SYMBOL(sb_dsp_detect);
EXPORT_SYMBOL(sb_dsp_unload);
EXPORT_SYMBOL(sb_be_quiet);
EXPORT_SYMBOL(probe_sbmpu);
EXPORT_SYMBOL(unload_sbmpu);
EXPORT_SYMBOL(smw_free);
MODULE_LICENSE("GPL");
