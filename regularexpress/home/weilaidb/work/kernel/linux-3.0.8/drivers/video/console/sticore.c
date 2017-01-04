#define STI_DRIVERVERSION "Version 0.9a"
static struct sti_struct *default_sti __read_mostly;
static int num_sti_roms __read_mostly;
static struct sti_struct *sti_roms[MAX_STI_ROMS] __read_mostly;
static const u8 col_trans[8] = ;
#define c_fg(sti, c) col_trans[((c>> 8) & 7)]
#define c_bg(sti, c) col_trans[((c>>11) & 7)]
#define c_index(sti, c) ((c) & 0xff)
static const struct sti_init_flags default_init_flags = ;
static int sti_init_graph(struct sti_struct *sti)
static const struct sti_conf_flags default_conf_flags = ;
static void sti_inq_conf(struct sti_struct *sti)
static const struct sti_font_flags default_font_flags = ;
void
sti_putc(struct sti_struct *sti, int c, int y, int x)
static const struct sti_blkmv_flags clear_blkmv_flags = ;
void
sti_set(struct sti_struct *sti, int src_y, int src_x,
int height, int width, u8 color)
void
sti_clear(struct sti_struct *sti, int src_y, int src_x,
int height, int width, int c)
static const struct sti_blkmv_flags default_blkmv_flags = ;
void
sti_bmove(struct sti_struct *sti, int src_y, int src_x,
int dst_y, int dst_x, int height, int width)
static void sti_flush(unsigned long start, unsigned long end)
static void __devinit sti_rom_copy(unsigned long base, unsigned long count,
void *dest)
static char default_sti_path[21] __read_mostly;
static int __devinit sti_setup(char *str)
__setup("sti=", sti_setup);
static char __devinitdata	*font_name[MAX_STI_ROMS] = ;
static int __devinitdata	font_index[MAX_STI_ROMS],
font_height[MAX_STI_ROMS],
font_width[MAX_STI_ROMS];
static int __devinit sti_font_setup(char *str)
__setup("sti_font=", sti_font_setup);
static void __devinit
sti_dump_globcfg(struct sti_glob_cfg *glob_cfg, unsigned int sti_mem_request)
static void __devinit
sti_dump_outptr(struct sti_struct *sti)
static int __devinit
sti_init_glob_cfg(struct sti_struct *sti,
unsigned long rom_address, unsigned long hpa)
static struct sti_cooked_font __devinit
*sti_select_fbfont(struct sti_cooked_rom *cooked_rom, const char *fbfont_name)
static struct sti_cooked_font __devinit
*sti_select_fbfont(struct sti_cooked_rom *cooked_rom, const char *fbfont_name)
static struct sti_cooked_font __devinit
*sti_select_font(struct sti_cooked_rom *rom,
int (*search_font_fnc)(struct sti_cooked_rom *, int, int))
static void __devinit
sti_dump_rom(struct sti_rom *rom)
static int __devinit
sti_cook_fonts(struct sti_cooked_rom *cooked_rom,
struct sti_rom *raw_rom)
static int __devinit
sti_search_font(struct sti_cooked_rom *rom, int height, int width)
#define BMODE_RELOCATE(offset)		offset = (offset) / 4;
#define BMODE_LAST_ADDR_OFFS		0x50
static void * __devinit
sti_bmode_font_raw(struct sti_cooked_font *f)
static void __devinit
sti_bmode_rom_copy(unsigned long base, unsigned long count, void *dest)
static struct sti_rom * __devinit
sti_get_bmode_rom (unsigned long address)
static struct sti_rom __devinit *sti_get_wmode_rom(unsigned long address)
static int __devinit sti_read_rom(int wordmode, struct sti_struct *sti,
unsigned long address)
static struct sti_struct * __devinit
sti_try_rom_generic(unsigned long address, unsigned long hpa, struct pci_dev *pd)
static void __devinit sticore_check_for_default_sti(struct sti_struct *sti, char *path)
static int __devinit sticore_pa_init(struct parisc_device *dev)
static int __devinit sticore_pci_init(struct pci_dev *pd,
const struct pci_device_id *ent)
static void __devexit sticore_pci_remove(struct pci_dev *pd)
static struct pci_device_id sti_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, sti_pci_tbl);
static struct pci_driver pci_sti_driver = ;
static struct parisc_device_id sti_pa_tbl[] = ;
static struct parisc_driver pa_sti_driver = ;
static int sticore_initialized __read_mostly;
static void __devinit sti_init_roms(void)
struct sti_struct * sti_get_rom(unsigned int index)
EXPORT_SYMBOL(sti_get_rom);
MODULE_AUTHOR("Philipp Rumpf, Helge Deller, Thomas Bogendoerfer");
MODULE_DESCRIPTION("Core STI driver for HP's NGLE series graphics cards in HP PARISC machines");
MODULE_LICENSE("GPL v2");
