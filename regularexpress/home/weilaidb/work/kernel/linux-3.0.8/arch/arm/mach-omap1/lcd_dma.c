int omap_lcd_dma_running(void)
static struct lcd_dma_info  lcd_dma;
void omap_set_lcd_dma_b1(unsigned long addr, u16 fb_xres, u16 fb_yres,
int data_type)
EXPORT_SYMBOL(omap_set_lcd_dma_b1);
void omap_set_lcd_dma_src_port(int port)
void omap_set_lcd_dma_ext_controller(int external)
EXPORT_SYMBOL(omap_set_lcd_dma_ext_controller);
void omap_set_lcd_dma_single_transfer(int single)
EXPORT_SYMBOL(omap_set_lcd_dma_single_transfer);
void omap_set_lcd_dma_b1_rotation(int rotate)
EXPORT_SYMBOL(omap_set_lcd_dma_b1_rotation);
void omap_set_lcd_dma_b1_mirror(int mirror)
EXPORT_SYMBOL(omap_set_lcd_dma_b1_mirror);
void omap_set_lcd_dma_b1_vxres(unsigned long vxres)
EXPORT_SYMBOL(omap_set_lcd_dma_b1_vxres);
void omap_set_lcd_dma_b1_scale(unsigned int xscale, unsigned int yscale)
EXPORT_SYMBOL(omap_set_lcd_dma_b1_scale);
static void set_b1_regs(void)
static irqreturn_t lcd_dma_irq_handler(int irq, void *dev_id)
int omap_request_lcd_dma(void (*callback)(u16 status, void *data),
void *data)
EXPORT_SYMBOL(omap_request_lcd_dma);
void omap_free_lcd_dma(void)
EXPORT_SYMBOL(omap_free_lcd_dma);
void omap_enable_lcd_dma(void)
EXPORT_SYMBOL(omap_enable_lcd_dma);
void omap_setup_lcd_dma(void)
EXPORT_SYMBOL(omap_setup_lcd_dma);
void omap_stop_lcd_dma(void)
EXPORT_SYMBOL(omap_stop_lcd_dma);
static int __init omap_init_lcd_dma(void)
arch_initcall(omap_init_lcd_dma);
