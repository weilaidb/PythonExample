#define __MFD_WM8994_CORE_H__
enum wm8994_type ;
struct regulator_dev;
struct regulator_bulk_data;
#define WM8994_NUM_GPIO_REGS 11
#define WM8994_NUM_LDO_REGS   2
#define WM8994_NUM_IRQ_REGS   2
#define WM8994_IRQ_TEMP_SHUT		0
#define WM8994_IRQ_MIC1_DET		1
#define WM8994_IRQ_MIC1_SHRT		2
#define WM8994_IRQ_MIC2_DET		3
#define WM8994_IRQ_MIC2_SHRT		4
#define WM8994_IRQ_FLL1_LOCK		5
#define WM8994_IRQ_FLL2_LOCK		6
#define WM8994_IRQ_SRC1_LOCK		7
#define WM8994_IRQ_SRC2_LOCK		8
#define WM8994_IRQ_AIF1DRC1_SIG_DET	9
#define WM8994_IRQ_AIF1DRC2_SIG_DET	10
#define WM8994_IRQ_AIF2DRC_SIG_DET	11
#define WM8994_IRQ_FIFOS_ERR		12
#define WM8994_IRQ_WSEQ_DONE		13
#define WM8994_IRQ_DCS_DONE		14
#define WM8994_IRQ_TEMP_WARN		15
#define WM8994_IRQ_GPIO(x) (x + WM8994_IRQ_TEMP_WARN)
struct wm8994 ;
int wm8994_reg_read(struct wm8994 *wm8994, unsigned short reg);
int wm8994_reg_write(struct wm8994 *wm8994, unsigned short reg,
unsigned short val);
int wm8994_set_bits(struct wm8994 *wm8994, unsigned short reg,
unsigned short mask, unsigned short val);
int wm8994_bulk_read(struct wm8994 *wm8994, unsigned short reg,
int count, u16 *buf);
int wm8994_bulk_write(struct wm8994 *wm8994, unsigned short reg,
int count, const u16 *buf);
static inline int wm8994_request_irq(struct wm8994 *wm8994, int irq,
irq_handler_t handler, const char *name,
void *data)
static inline void wm8994_free_irq(struct wm8994 *wm8994, int irq, void *data)
int wm8994_irq_init(struct wm8994 *wm8994);
void wm8994_irq_exit(struct wm8994 *wm8994);
