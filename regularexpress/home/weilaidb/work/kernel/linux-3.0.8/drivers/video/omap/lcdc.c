#define MODULE_NAME			"lcdc"
#define MAX_PALETTE_SIZE		PAGE_SIZE
enum lcdc_load_mode ;
static struct omap_lcd_controller  lcdc;
static void inline enable_irqs(int mask)
static void inline disable_irqs(int mask)
static void set_load_mode(enum lcdc_load_mode mode)
static void enable_controller(void)
static void disable_controller_async(void)
static void disable_controller(void)
static void reset_controller(u32 status)
static void setup_lcd_dma(void)
static irqreturn_t lcdc_irq_handler(int irq, void *dev_id)
static int omap_lcdc_setup_plane(int plane, int channel_out,
unsigned long offset, int screen_width,
int pos_x, int pos_y, int width, int height,
int color_mode)
static int omap_lcdc_enable_plane(int plane, int enable)
static void load_palette(void)
static int omap_lcdc_setcolreg(u_int regno, u16 red, u16 green, u16 blue,
u16 transp, int update_hw_pal)
static void calc_ck_div(int is_tft, int pck, int *pck_div)
static void inline setup_regs(void)
static int omap_lcdc_set_update_mode(enum omapfb_update_mode mode)
static enum omapfb_update_mode omap_lcdc_get_update_mode(void)
static void omap_lcdc_suspend(void)
static void omap_lcdc_resume(void)
static void omap_lcdc_get_caps(int plane, struct omapfb_caps *caps)
int omap_lcdc_set_dma_callback(void (*callback)(void *data), void *data)
EXPORT_SYMBOL(omap_lcdc_set_dma_callback);
void omap_lcdc_free_dma_callback(void)
EXPORT_SYMBOL(omap_lcdc_free_dma_callback);
static void lcdc_dma_handler(u16 status, void *data)
static int mmap_kern(void)
static void unmap_kern(void)
static int alloc_palette_ram(void)
static void free_palette_ram(void)
static int alloc_fbmem(struct omapfb_mem_region *region)
static void free_fbmem(void)
static int setup_fbmem(struct omapfb_mem_desc *req_md)
static void cleanup_fbmem(void)
static int omap_lcdc_init(struct omapfb_device *fbdev, int ext_mode,
struct omapfb_mem_desc *req_vram)
static void omap_lcdc_cleanup(void)
const struct lcd_ctrl omap1_int_ctrl = ;
