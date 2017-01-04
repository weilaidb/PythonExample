#define MODULE_NAME "vmlfb"
#define VML_TOHW(_val, _width) ((((_val) << (_width)) + 0x7FFF - (_val)) >> 16)
static struct mutex vml_mutex;
static struct list_head global_no_mode;
static struct list_head global_has_mode;
static struct fb_ops vmlfb_ops;
static struct vml_sys *subsys = NULL;
static char *vml_default_mode = "1024x768@60";
static struct fb_videomode defaultmode = ;
static u32 vml_mem_requested = (10 * 1024 * 1024);
static u32 vml_mem_contig = (4 * 1024 * 1024);
static u32 vml_mem_min = (4 * 1024 * 1024);
static u32 vml_clocks[] = ;
static u32 vml_num_clocks = ARRAY_SIZE(vml_clocks);
static int vmlfb_alloc_vram_area(struct vram_area *va, unsigned max_order,
unsigned min_order)
static void vmlfb_free_vram_area(struct vram_area *va)
static void vmlfb_free_vram(struct vml_info *vinfo)
static int vmlfb_alloc_vram(struct vml_info *vinfo,
size_t requested,
size_t min_total, size_t min_contig)
static int vmlfb_get_gpu(struct vml_par *par)
static int vmlfb_vram_offset(struct vml_info *vinfo, unsigned long offset)
static int vmlfb_enable_mmio(struct vml_par *par)
static void vmlfb_disable_mmio(struct vml_par *par)
static void vmlfb_release_devices(struct vml_par *par)
static void __devexit vml_pci_remove(struct pci_dev *dev)
static void vmlfb_set_pref_pixel_format(struct fb_var_screeninfo *var)
static int __devinit vml_pci_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static int vmlfb_open(struct fb_info *info, int user)
static int vmlfb_release(struct fb_info *info, int user)
static int vml_nearest_clock(int clock)
static int vmlfb_check_var_locked(struct fb_var_screeninfo *var,
struct vml_info *vinfo)
static int vmlfb_check_var(struct fb_var_screeninfo *var, struct fb_info *info)
static void vml_wait_vblank(struct vml_info *vinfo)
static void vmlfb_disable_pipe(struct vml_info *vinfo)
static void vml_dump_regs(struct vml_info *vinfo)
static int vmlfb_set_par_locked(struct vml_info *vinfo)
static int vmlfb_set_par(struct fb_info *info)
static int vmlfb_blank_locked(struct vml_info *vinfo)
static int vmlfb_blank(int blank_mode, struct fb_info *info)
static int vmlfb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info)
static int vmlfb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static int vmlfb_mmap(struct fb_info *info, struct vm_area_struct *vma)
static int vmlfb_sync(struct fb_info *info)
static int vmlfb_cursor(struct fb_info *info, struct fb_cursor *cursor)
static struct fb_ops vmlfb_ops = ;
static struct pci_device_id vml_ids[] = ;
static struct pci_driver vmlfb_pci_driver = ;
static void __exit vmlfb_cleanup(void)
static int __init vmlfb_init(void)
int vmlfb_register_subsys(struct vml_sys *sys)
EXPORT_SYMBOL_GPL(vmlfb_register_subsys);
void vmlfb_unregister_subsys(struct vml_sys *sys)
EXPORT_SYMBOL_GPL(vmlfb_unregister_subsys);
module_init(vmlfb_init);
module_exit(vmlfb_cleanup);
MODULE_AUTHOR("Tungsten Graphics");
MODULE_DESCRIPTION("Initialization of the Vermilion display devices");
MODULE_VERSION("1.0.0");
MODULE_LICENSE("GPL");
