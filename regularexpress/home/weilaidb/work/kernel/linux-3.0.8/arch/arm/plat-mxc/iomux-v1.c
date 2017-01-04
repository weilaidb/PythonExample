static void __iomem *imx_iomuxv1_baseaddr;
static unsigned imx_iomuxv1_numports;
static inline unsigned long imx_iomuxv1_readl(unsigned offset)
static inline void imx_iomuxv1_writel(unsigned long val, unsigned offset)
static inline void imx_iomuxv1_rmwl(unsigned offset,
unsigned long mask, unsigned long value)
static inline void imx_iomuxv1_set_puen(
unsigned int port, unsigned int pin, int on)
static inline void imx_iomuxv1_set_ddir(
unsigned int port, unsigned int pin, int out)
static inline void imx_iomuxv1_set_gpr(
unsigned int port, unsigned int pin, int af)
static inline void imx_iomuxv1_set_gius(
unsigned int port, unsigned int pin, int inuse)
static inline void imx_iomuxv1_set_ocr(
unsigned int port, unsigned int pin, unsigned int ocr)
static inline void imx_iomuxv1_set_iconfa(
unsigned int port, unsigned int pin, unsigned int aout)
static inline void imx_iomuxv1_set_iconfb(
unsigned int port, unsigned int pin, unsigned int bout)
int mxc_gpio_mode(int gpio_mode)
EXPORT_SYMBOL(mxc_gpio_mode);
static int imx_iomuxv1_setup_multiple(const int *list, unsigned count)
int mxc_gpio_setup_multiple_pins(const int *pin_list, unsigned count,
const char *label)
EXPORT_SYMBOL(mxc_gpio_setup_multiple_pins);
void mxc_gpio_release_multiple_pins(const int *pin_list, int count)
EXPORT_SYMBOL(mxc_gpio_release_multiple_pins);
int __init imx_iomuxv1_init(void __iomem *base, int numports)
