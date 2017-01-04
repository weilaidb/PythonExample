#define KPC             0x0000
#define KPDK            0x0008
#define KPREC           0x0010
#define KPMK            0x0018
#define KPAS            0x0020
#define KPASMKP0        0x0028
#define KPASMKP1        0x0030
#define KPASMKP2        0x0038
#define KPASMKP3        0x0040
#define KPKDI           0x0048
#define KPC_MKRN(n)	((((n) - 1) & 0x7) << 26)
#define KPC_MKCN(n)	((((n) - 1) & 0x7) << 23)
#define KPC_DKN(n)	((((n) - 1) & 0x7) << 6)
#define KPC_AS          (0x1 << 30)
#define KPC_ASACT       (0x1 << 29)
#define KPC_MI          (0x1 << 22)
#define KPC_IMKP        (0x1 << 21)
#define KPC_MS(n)	(0x1 << (13 + (n)))
#define KPC_MS_ALL      (0xff << 13)
#define KPC_ME          (0x1 << 12)
#define KPC_MIE         (0x1 << 11)
#define KPC_DK_DEB_SEL	(0x1 <<  9)
#define KPC_DI          (0x1 <<  5)
#define KPC_RE_ZERO_DEB (0x1 <<  4)
#define KPC_REE1        (0x1 <<  3)
#define KPC_REE0        (0x1 <<  2)
#define KPC_DE          (0x1 <<  1)
#define KPC_DIE         (0x1 <<  0)
#define KPDK_DKP        (0x1 << 31)
#define KPDK_DK(n)	((n) & 0xff)
#define KPREC_OF1       (0x1 << 31)
#define kPREC_UF1       (0x1 << 30)
#define KPREC_OF0       (0x1 << 15)
#define KPREC_UF0       (0x1 << 14)
#define KPREC_RECOUNT0(n)	((n) & 0xff)
#define KPREC_RECOUNT1(n)	(((n) >> 16) & 0xff)
#define KPMK_MKP        (0x1 << 31)
#define KPAS_SO         (0x1 << 31)
#define KPASMKPx_SO     (0x1 << 31)
#define KPAS_MUKP(n)	(((n) >> 26) & 0x1f)
#define KPAS_RP(n)	(((n) >> 4) & 0xf)
#define KPAS_CP(n)	((n) & 0xf)
#define KPASMKP_MKC_MASK	(0xff)
#define keypad_readl(off)	__raw_readl(keypad->mmio_base + (off))
#define keypad_writel(off, v)	__raw_writel((v), keypad->mmio_base + (off))
#define MAX_MATRIX_KEY_NUM	(MAX_MATRIX_KEY_ROWS * MAX_MATRIX_KEY_COLS)
#define MAX_KEYPAD_KEYS		(MAX_MATRIX_KEY_NUM + MAX_DIRECT_KEY_NUM)
struct pxa27x_keypad ;
static void pxa27x_keypad_build_keycode(struct pxa27x_keypad *keypad)
static void pxa27x_keypad_scan_matrix(struct pxa27x_keypad *keypad)
#define DEFAULT_KPREC	(0x007f007f)
static inline int rotary_delta(uint32_t kprec)
static void report_rotary_event(struct pxa27x_keypad *keypad, int r, int delta)
static void pxa27x_keypad_scan_rotary(struct pxa27x_keypad *keypad)
static void pxa27x_keypad_scan_direct(struct pxa27x_keypad *keypad)
static void clear_wakeup_event(struct pxa27x_keypad *keypad)
static irqreturn_t pxa27x_keypad_irq_handler(int irq, void *dev_id)
static void pxa27x_keypad_config(struct pxa27x_keypad *keypad)
static int pxa27x_keypad_open(struct input_dev *dev)
static void pxa27x_keypad_close(struct input_dev *dev)
static int pxa27x_keypad_suspend(struct device *dev)
static int pxa27x_keypad_resume(struct device *dev)
static const struct dev_pm_ops pxa27x_keypad_pm_ops = ;
static int __devinit pxa27x_keypad_probe(struct platform_device *pdev)
static int __devexit pxa27x_keypad_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:pxa27x-keypad");
static struct platform_driver pxa27x_keypad_driver = ;
static int __init pxa27x_keypad_init(void)
static void __exit pxa27x_keypad_exit(void)
module_init(pxa27x_keypad_init);
module_exit(pxa27x_keypad_exit);
MODULE_DESCRIPTION("PXA27x Keypad Controller Driver");
MODULE_LICENSE("GPL");
