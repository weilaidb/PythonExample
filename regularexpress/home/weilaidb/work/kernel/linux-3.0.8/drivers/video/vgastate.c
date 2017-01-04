struct regstate ;
static inline unsigned char vga_rcrtcs(void __iomem *regbase, unsigned short iobase,
unsigned char reg)
static inline void vga_wcrtcs(void __iomem *regbase, unsigned short iobase,
unsigned char reg, unsigned char val)
static void save_vga_text(struct vgastate *state, void __iomem *fbbase)
static void restore_vga_text(struct vgastate *state, void __iomem *fbbase)
static void save_vga_mode(struct vgastate *state)
static void restore_vga_mode(struct vgastate *state)
static void save_vga_cmap(struct vgastate *state)
static void restore_vga_cmap(struct vgastate *state)
static void vga_cleanup(struct vgastate *state)
int save_vga(struct vgastate *state)
int restore_vga (struct vgastate *state)
EXPORT_SYMBOL(save_vga);
EXPORT_SYMBOL(restore_vga);
MODULE_AUTHOR("James Simmons <jsimmons@users.sf.net>");
MODULE_DESCRIPTION("VGA State Save/Restore");
MODULE_LICENSE("GPL");
