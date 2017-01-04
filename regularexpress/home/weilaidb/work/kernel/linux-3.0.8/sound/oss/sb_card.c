MODULE_DESCRIPTION("OSS Soundblaster ISA PnP and legacy sound driver");
MODULE_LICENSE("GPL");
extern void *smw_free;
static int __initdata mpu_io	= 0;
static int __initdata io	= -1;
static int __initdata irq	= -1;
static int __initdata dma	= -1;
static int __initdata dma16	= -1;
static int __initdata type	= 0;
static int __initdata esstype   = 0;
static int __initdata acer 	= 0;
static int __initdata sm_games 	= 0;
static struct sb_card_config *legacy = NULL;
static int pnp_registered;
static int __initdata pnp       = 1;
static int __initdata pnp       = 0;
module_param(io, int, 000);
MODULE_PARM_DESC(io,       "Soundblaster i/o base address (0x220,0x240,0x260,0x280)");
module_param(irq, int, 000);
MODULE_PARM_DESC(irq,	   "IRQ (5,7,9,10)");
module_param(dma, int, 000);
MODULE_PARM_DESC(dma,	   "8-bit DMA channel (0,1,3)");
module_param(dma16, int, 000);
MODULE_PARM_DESC(dma16,	   "16-bit DMA channel (5,6,7)");
module_param(mpu_io, int, 000);
MODULE_PARM_DESC(mpu_io,   "MPU base address");
module_param(type, int, 000);
MODULE_PARM_DESC(type,	   "You can set this to specific card type (doesn't " \
"work with pnp)");
module_param(sm_games, int, 000);
MODULE_PARM_DESC(sm_games, "Enable support for Logitech soundman games " \
"(doesn't work with pnp)");
module_param(esstype, int, 000);
MODULE_PARM_DESC(esstype,  "ESS chip type (doesn't work with pnp)");
module_param(acer, int, 000);
MODULE_PARM_DESC(acer,	   "Set this to detect cards in some ACER notebooks "\
"(doesn't work with pnp)");
module_param(pnp, int, 000);
MODULE_PARM_DESC(pnp,     "Went set to 0 will disable detection using PnP. "\
"Default is 1.\n");
static int sb_register_oss(struct sb_card_config *scc, struct sb_module_options *sbmo)
static void sb_unload(struct sb_card_config *scc)
static int __init sb_init_legacy(void)
static void sb_dev2cfg(struct pnp_dev *dev, struct sb_card_config *scc)
static unsigned int sb_pnp_devices;
static int sb_pnp_probe(struct pnp_card_link *card, const struct pnp_card_device_id *card_id)
static void sb_pnp_remove(struct pnp_card_link *card)
static struct pnp_card_driver sb_pnp_driver = ;
MODULE_DEVICE_TABLE(pnp_card, sb_pnp_card_table);
static void sb_unregister_all(void)
static int __init sb_init(void)
static void __exit sb_exit(void)
module_init(sb_init);
module_exit(sb_exit);
