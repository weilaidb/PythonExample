MODULE_PARM_DESC(agpmode, "AGP mode (0 to disable AGP)");
int nouveau_agpmode = -1;
module_param_named(agpmode, nouveau_agpmode, int, 0400);
MODULE_PARM_DESC(modeset, "Enable kernel modesetting");
static int nouveau_modeset = -1;
module_param_named(modeset, nouveau_modeset, int, 0400);
MODULE_PARM_DESC(vbios, "Override default VBIOS location");
char *nouveau_vbios;
module_param_named(vbios, nouveau_vbios, charp, 0400);
MODULE_PARM_DESC(vram_pushbuf, "Force DMA push buffers to be in VRAM");
int nouveau_vram_pushbuf;
module_param_named(vram_pushbuf, nouveau_vram_pushbuf, int, 0400);
MODULE_PARM_DESC(vram_notify, "Force DMA notifiers to be in VRAM");
int nouveau_vram_notify = 0;
module_param_named(vram_notify, nouveau_vram_notify, int, 0400);
MODULE_PARM_DESC(duallink, "Allow dual-link TMDS (>=GeForce 8)");
int nouveau_duallink = 1;
module_param_named(duallink, nouveau_duallink, int, 0400);
MODULE_PARM_DESC(uscript_lvds, "LVDS output script table ID (>=GeForce 8)");
int nouveau_uscript_lvds = -1;
module_param_named(uscript_lvds, nouveau_uscript_lvds, int, 0400);
MODULE_PARM_DESC(uscript_tmds, "TMDS output script table ID (>=GeForce 8)");
int nouveau_uscript_tmds = -1;
module_param_named(uscript_tmds, nouveau_uscript_tmds, int, 0400);
MODULE_PARM_DESC(ignorelid, "Ignore ACPI lid status");
int nouveau_ignorelid = 0;
module_param_named(ignorelid, nouveau_ignorelid, int, 0400);
MODULE_PARM_DESC(noaccel, "Disable all acceleration");
int nouveau_noaccel = 0;
module_param_named(noaccel, nouveau_noaccel, int, 0400);
MODULE_PARM_DESC(nofbaccel, "Disable fbcon acceleration");
int nouveau_nofbaccel = 0;
module_param_named(nofbaccel, nouveau_nofbaccel, int, 0400);
MODULE_PARM_DESC(force_post, "Force POST");
int nouveau_force_post = 0;
module_param_named(force_post, nouveau_force_post, int, 0400);
MODULE_PARM_DESC(override_conntype, "Ignore DCB connector type");
int nouveau_override_conntype = 0;
module_param_named(override_conntype, nouveau_override_conntype, int, 0400);
MODULE_PARM_DESC(tv_disable, "Disable TV-out detection\n");
int nouveau_tv_disable = 0;
module_param_named(tv_disable, nouveau_tv_disable, int, 0400);
MODULE_PARM_DESC(tv_norm, "Default TV norm.\n"
"\t\tSupported: PAL, PAL-M, PAL-N, PAL-Nc, NTSC-M, NTSC-J,\n"
"\t\t\thd480i, hd480p, hd576i, hd576p, hd720p, hd1080i.\n"
"\t\tDefault: PAL\n"
"\t\t*NOTE* Ignored for cards with external TV encoders.");
char *nouveau_tv_norm;
module_param_named(tv_norm, nouveau_tv_norm, charp, 0400);
MODULE_PARM_DESC(reg_debug, "Register access debug bitmask:\n"
"\t\t0x1 mc, 0x2 video, 0x4 fb, 0x8 extdev,\n"
"\t\t0x10 crtc, 0x20 ramdac, 0x40 vgacrtc, 0x80 rmvio,\n"
"\t\t0x100 vgaattr, 0x200 EVO (G80+). ");
int nouveau_reg_debug;
module_param_named(reg_debug, nouveau_reg_debug, int, 0600);
MODULE_PARM_DESC(perflvl, "Performance level (default: boot)\n");
char *nouveau_perflvl;
module_param_named(perflvl, nouveau_perflvl, charp, 0400);
MODULE_PARM_DESC(perflvl_wr, "Allow perflvl changes (warning: dangerous!)\n");
int nouveau_perflvl_wr;
module_param_named(perflvl_wr, nouveau_perflvl_wr, int, 0400);
MODULE_PARM_DESC(msi, "Enable MSI (default: off)\n");
int nouveau_msi;
module_param_named(msi, nouveau_msi, int, 0400);
int nouveau_fbpercrtc;
static struct pci_device_id pciidlist[] = ;
MODULE_DEVICE_TABLE(pci, pciidlist);
static struct drm_driver driver;
static int __devinit
nouveau_pci_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void
nouveau_pci_remove(struct pci_dev *pdev)
int
nouveau_pci_suspend(struct pci_dev *pdev, pm_message_t pm_state)
int
nouveau_pci_resume(struct pci_dev *pdev)
static struct drm_driver driver = ;
static struct pci_driver nouveau_pci_driver = ;
static int __init nouveau_init(void)
static void __exit nouveau_exit(void)
module_init(nouveau_init);
module_exit(nouveau_exit);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL and additional rights");
