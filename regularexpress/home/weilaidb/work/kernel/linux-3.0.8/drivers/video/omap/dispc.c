#define MODULE_NAME			"dispc"
#define DSS_BASE			0x48050000
#define DSS_SYSCONFIG			0x0010
#define DISPC_BASE			0x48050400
#define DISPC_REVISION			0x0000
#define DISPC_SYSCONFIG			0x0010
#define DISPC_SYSSTATUS			0x0014
#define DISPC_IRQSTATUS			0x0018
#define DISPC_IRQENABLE			0x001C
#define DISPC_CONTROL			0x0040
#define DISPC_CONFIG			0x0044
#define DISPC_CAPABLE			0x0048
#define DISPC_DEFAULT_COLOR0		0x004C
#define DISPC_DEFAULT_COLOR1		0x0050
#define DISPC_TRANS_COLOR0		0x0054
#define DISPC_TRANS_COLOR1		0x0058
#define DISPC_LINE_STATUS		0x005C
#define DISPC_LINE_NUMBER		0x0060
#define DISPC_TIMING_H			0x0064
#define DISPC_TIMING_V			0x0068
#define DISPC_POL_FREQ			0x006C
#define DISPC_DIVISOR			0x0070
#define DISPC_SIZE_DIG			0x0078
#define DISPC_SIZE_LCD			0x007C
#define DISPC_DATA_CYCLE1		0x01D4
#define DISPC_DATA_CYCLE2		0x01D8
#define DISPC_DATA_CYCLE3		0x01DC
#define DISPC_GFX_BA0			0x0080
#define DISPC_GFX_BA1			0x0084
#define DISPC_GFX_POSITION		0x0088
#define DISPC_GFX_SIZE			0x008C
#define DISPC_GFX_ATTRIBUTES		0x00A0
#define DISPC_GFX_FIFO_THRESHOLD	0x00A4
#define DISPC_GFX_FIFO_SIZE_STATUS	0x00A8
#define DISPC_GFX_ROW_INC		0x00AC
#define DISPC_GFX_PIXEL_INC		0x00B0
#define DISPC_GFX_WINDOW_SKIP		0x00B4
#define DISPC_GFX_TABLE_BA		0x00B8
#define DISPC_VID1_BASE			0x00BC
#define DISPC_VID2_BASE			0x014C
#define DISPC_VID_BA0			0x0000
#define DISPC_VID_BA1			0x0004
#define DISPC_VID_POSITION		0x0008
#define DISPC_VID_SIZE			0x000C
#define DISPC_VID_ATTRIBUTES		0x0010
#define DISPC_VID_FIFO_THRESHOLD	0x0014
#define DISPC_VID_FIFO_SIZE_STATUS	0x0018
#define DISPC_VID_ROW_INC		0x001C
#define DISPC_VID_PIXEL_INC		0x0020
#define DISPC_VID_FIR			0x0024
#define DISPC_VID_PICTURE_SIZE		0x0028
#define DISPC_VID_ACCU0			0x002C
#define DISPC_VID_ACCU1			0x0030
#define DISPC_VID_FIR_COEF_H0		0x0034
#define DISPC_VID_FIR_COEF_HV0		0x0038
#define DISPC_VID_CONV_COEF0		0x0074
#define DISPC_IRQ_FRAMEMASK		0x0001
#define DISPC_IRQ_VSYNC			0x0002
#define DISPC_IRQ_EVSYNC_EVEN		0x0004
#define DISPC_IRQ_EVSYNC_ODD		0x0008
#define DISPC_IRQ_ACBIAS_COUNT_STAT	0x0010
#define DISPC_IRQ_PROG_LINE_NUM		0x0020
#define DISPC_IRQ_GFX_FIFO_UNDERFLOW	0x0040
#define DISPC_IRQ_GFX_END_WIN		0x0080
#define DISPC_IRQ_PAL_GAMMA_MASK	0x0100
#define DISPC_IRQ_OCP_ERR		0x0200
#define DISPC_IRQ_VID1_FIFO_UNDERFLOW	0x0400
#define DISPC_IRQ_VID1_END_WIN		0x0800
#define DISPC_IRQ_VID2_FIFO_UNDERFLOW	0x1000
#define DISPC_IRQ_VID2_END_WIN		0x2000
#define DISPC_IRQ_SYNC_LOST		0x4000
#define DISPC_IRQ_MASK_ALL		0x7fff
#define DISPC_IRQ_MASK_ERROR		(DISPC_IRQ_GFX_FIFO_UNDERFLOW |	\
DISPC_IRQ_VID1_FIFO_UNDERFLOW | \
DISPC_IRQ_VID2_FIFO_UNDERFLOW | \
DISPC_IRQ_SYNC_LOST)
#define RFBI_CONTROL			0x48050040
#define MAX_PALETTE_SIZE		(256 * 16)
#define FLD_MASK(pos, len)	(((1 << len) - 1) << pos)
#define MOD_REG_FLD(reg, mask, val) \
dispc_write_reg((reg), (dispc_read_reg(reg) & ~(mask)) | (val));
#define OMAP2_SRAM_START		0x40200000
#define OMAP2_SRAM_SIZE			0xa0000
#define DISPC_MEMTYPE_NUM		2
#define RESMAP_SIZE(_page_cnt)						\
((_page_cnt + (sizeof(unsigned long) * 8) - 1) / 8)
#define RESMAP_PTR(_res_map, _page_nr)					\
(((_res_map)->map) + (_page_nr) / (sizeof(unsigned long) * 8))
#define RESMAP_MASK(_page_nr)						\
(1 << ((_page_nr) & (sizeof(unsigned long) * 8 - 1)))
struct resmap ;
#define MAX_IRQ_HANDLERS            4
static struct  dispc;
static void enable_lcd_clocks(int enable);
static void inline dispc_write_reg(int idx, u32 val)
static u32 inline dispc_read_reg(int idx)
static void enable_rfbi_mode(int enable)
static void set_lcd_data_lines(int data_lines)
static void set_load_mode(int mode)
void omap_dispc_set_lcd_size(int x, int y)
EXPORT_SYMBOL(omap_dispc_set_lcd_size);
void omap_dispc_set_digit_size(int x, int y)
EXPORT_SYMBOL(omap_dispc_set_digit_size);
static void setup_plane_fifo(int plane, int ext_mode)
void omap_dispc_enable_lcd_out(int enable)
EXPORT_SYMBOL(omap_dispc_enable_lcd_out);
void omap_dispc_enable_digit_out(int enable)
EXPORT_SYMBOL(omap_dispc_enable_digit_out);
static inline int _setup_plane(int plane, int channel_out,
u32 paddr, int screen_width,
int pos_x, int pos_y, int width, int height,
int color_mode)
static int omap_dispc_setup_plane(int plane, int channel_out,
unsigned long offset,
int screen_width,
int pos_x, int pos_y, int width, int height,
int color_mode)
static void write_firh_reg(int plane, int reg, u32 value)
static void write_firhv_reg(int plane, int reg, u32 value)
static void set_upsampling_coef_table(int plane)
static int omap_dispc_set_scale(int plane,
int orig_width, int orig_height,
int out_width, int out_height)
static int omap_dispc_enable_plane(int plane, int enable)
static int omap_dispc_set_color_key(struct omapfb_color_key *ck)
static int omap_dispc_get_color_key(struct omapfb_color_key *ck)
static void load_palette(void)
static int omap_dispc_set_update_mode(enum omapfb_update_mode mode)
static void omap_dispc_get_caps(int plane, struct omapfb_caps *caps)
static enum omapfb_update_mode omap_dispc_get_update_mode(void)
static void setup_color_conv_coef(void)
static void calc_ck_div(int is_tft, int pck, int *lck_div, int *pck_div)
static void set_lcd_tft_mode(int enable)
static void set_lcd_timings(void)
static void recalc_irq_mask(void)
int omap_dispc_request_irq(unsigned long irq_mask, void (*callback)(void *data),
void *data)
EXPORT_SYMBOL(omap_dispc_request_irq);
void omap_dispc_free_irq(unsigned long irq_mask, void (*callback)(void *data),
void *data)
EXPORT_SYMBOL(omap_dispc_free_irq);
static irqreturn_t omap_dispc_irq_handler(int irq, void *dev)
static int get_dss_clocks(void)
static void put_dss_clocks(void)
static void enable_lcd_clocks(int enable)
static void enable_digit_clocks(int enable)
static void omap_dispc_suspend(void)
static void omap_dispc_resume(void)
static int omap_dispc_update_window(struct fb_info *fbi,
struct omapfb_update_window *win,
void (*complete_callback)(void *arg),
void *complete_callback_data)
static int mmap_kern(struct omapfb_mem_region *region)
static void mmap_user_open(struct vm_area_struct *vma)
static void mmap_user_close(struct vm_area_struct *vma)
static const struct vm_operations_struct mmap_user_ops = ;
static int omap_dispc_mmap_user(struct fb_info *info,
struct vm_area_struct *vma)
static void unmap_kern(struct omapfb_mem_region *region)
static int alloc_palette_ram(void)
static void free_palette_ram(void)
static int alloc_fbmem(struct omapfb_mem_region *region)
static void free_fbmem(struct omapfb_mem_region *region)
static struct resmap *init_resmap(unsigned long start, size_t size)
static void cleanup_resmap(struct resmap *res_map)
static inline int resmap_mem_type(unsigned long start)
static inline int resmap_page_reserved(struct resmap *res_map, unsigned page_nr)
static inline void resmap_reserve_page(struct resmap *res_map, unsigned page_nr)
static inline void resmap_free_page(struct resmap *res_map, unsigned page_nr)
static void resmap_reserve_region(unsigned long start, size_t size)
static void resmap_free_region(unsigned long start, size_t size)
static unsigned long resmap_alloc_region(int mtype, size_t size)
static int omap_dispc_setup_mem(int plane, size_t size, int mem_type,
unsigned long *paddr)
static int setup_fbmem(struct omapfb_mem_desc *req_md)
static void cleanup_fbmem(void)
static int omap_dispc_init(struct omapfb_device *fbdev, int ext_mode,
struct omapfb_mem_desc *req_vram)
static void omap_dispc_cleanup(void)
const struct lcd_ctrl omap2_int_ctrl = ;
