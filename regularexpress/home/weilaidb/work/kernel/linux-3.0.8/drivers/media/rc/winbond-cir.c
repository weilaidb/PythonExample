#define DRVNAME "winbond-cir"
#define WBCIR_REG_WCEIR_CTL	0x03
#define WBCIR_REG_WCEIR_STS	0x04
#define WBCIR_REG_WCEIR_EV_EN	0x05
#define WBCIR_REG_WCEIR_CNTL	0x06
#define WBCIR_REG_WCEIR_CNTH	0x07
#define WBCIR_REG_WCEIR_INDEX	0x08
#define WBCIR_REG_WCEIR_DATA	0x09
#define WBCIR_REG_WCEIR_CSL	0x0A
#define WBCIR_REG_WCEIR_CFG1	0x0B
#define WBCIR_REG_WCEIR_CFG2	0x0C
#define WBCIR_REG_ECEIR_CTS	0x00
#define WBCIR_REG_ECEIR_CCTL	0x01
#define WBCIR_REG_ECEIR_CNT_LO	0x02
#define WBCIR_REG_ECEIR_CNT_HI	0x03
#define WBCIR_REG_ECEIR_IREM	0x04
#define WBCIR_REG_SP3_BSR	0x03
#define WBCIR_REG_SP3_RXDATA	0x00
#define WBCIR_REG_SP3_TXDATA	0x00
#define WBCIR_REG_SP3_IER	0x01
#define WBCIR_REG_SP3_EIR	0x02
#define WBCIR_REG_SP3_FCR	0x02
#define WBCIR_REG_SP3_MCR	0x04
#define WBCIR_REG_SP3_LSR	0x05
#define WBCIR_REG_SP3_MSR	0x06
#define WBCIR_REG_SP3_ASCR	0x07
#define WBCIR_REG_SP3_BGDL	0x00
#define WBCIR_REG_SP3_BGDH	0x01
#define WBCIR_REG_SP3_EXCR1	0x02
#define WBCIR_REG_SP3_EXCR2	0x04
#define WBCIR_REG_SP3_TXFLV	0x06
#define WBCIR_REG_SP3_RXFLV	0x07
#define WBCIR_REG_SP3_MRID	0x00
#define WBCIR_REG_SP3_SH_LCR	0x01
#define WBCIR_REG_SP3_SH_FCR	0x02
#define WBCIR_REG_SP3_IRCR1	0x02
#define WBCIR_REG_SP3_IRCR2	0x04
#define WBCIR_REG_SP3_IRCR3	0x00
#define WBCIR_REG_SP3_SIR_PW	0x02
#define WBCIR_REG_SP3_IRRXDC	0x00
#define WBCIR_REG_SP3_IRTXMC	0x01
#define WBCIR_REG_SP3_RCCFG	0x02
#define WBCIR_REG_SP3_IRCFG1	0x04
#define WBCIR_REG_SP3_IRCFG4	0x07
#define WBCIR_IRQ_NONE		0x00
#define WBCIR_IRQ_RX		0x01
#define WBCIR_IRQ_TX_LOW	0x02
#define WBCIR_IRQ_ERR		0x04
#define WBCIR_IRQ_TX_EMPTY	0x20
#define WBCIR_LED_ENABLE	0x80
#define WBCIR_RX_AVAIL		0x01
#define WBCIR_RX_OVERRUN	0x02
#define WBCIR_TX_EOT		0x04
#define WBCIR_RX_DISABLE	0x20
#define WBCIR_TX_UNDERRUN	0x40
#define WBCIR_EXT_ENABLE	0x01
#define WBCIR_REGSEL_COMPARE	0x10
#define WBCIR_REGSEL_MASK	0x20
#define WBCIR_REG_ADDR0		0x00
enum wbcir_bank ;
enum wbcir_protocol ;
enum wbcir_rxstate ;
enum wbcir_txstate ;
#define WBCIR_NAME	"Winbond CIR"
#define WBCIR_ID_FAMILY          0xF1
#define	WBCIR_ID_CHIP            0x04
#define INVALID_SCANCODE   0x7FFFFFFF
#define WAKEUP_IOMEM_LEN         0x10
#define EHFUNC_IOMEM_LEN         0x10
#define SP_IOMEM_LEN             0x08
struct wbcir_data ;
static enum wbcir_protocol protocol = IR_PROTOCOL_RC6;
module_param(protocol, uint, 0444);
MODULE_PARM_DESC(protocol, "IR protocol to use for the power-on command "
"(0 = RC5, 1 = NEC, 2 = RC6A, default)");
static int invert;
module_param(invert, bool, 0444);
MODULE_PARM_DESC(invert, "Invert the signal from the IR receiver");
static int txandrx;
module_param(txandrx, bool, 0444);
MODULE_PARM_DESC(invert, "Allow simultaneous TX and RX");
static unsigned int wake_sc = 0x800F040C;
module_param(wake_sc, uint, 0644);
MODULE_PARM_DESC(wake_sc, "Scancode of the power-on IR command");
static unsigned int wake_rc6mode = 6;
module_param(wake_rc6mode, uint, 0644);
MODULE_PARM_DESC(wake_rc6mode, "RC6 mode for the power-on command "
"(0 = 0, 6 = 6A, default)");
static void
wbcir_set_bits(unsigned long addr, u8 bits, u8 mask)
static inline void
wbcir_select_bank(struct wbcir_data *data, enum wbcir_bank bank)
static inline void
wbcir_set_irqmask(struct wbcir_data *data, u8 irqmask)
static enum led_brightness
wbcir_led_brightness_get(struct led_classdev *led_cdev)
static void
wbcir_led_brightness_set(struct led_classdev *led_cdev,
enum led_brightness brightness)
static u8
wbcir_to_rc6cells(u8 val)
static void
wbcir_idle_rx(struct rc_dev *dev, bool idle)
static void
wbcir_irq_rx(struct wbcir_data *data, struct pnp_dev *device)
static void
wbcir_irq_tx(struct wbcir_data *data)
static irqreturn_t
wbcir_irq_handler(int irqno, void *cookie)
static int
wbcir_txcarrier(struct rc_dev *dev, u32 carrier)
static int
wbcir_txmask(struct rc_dev *dev, u32 mask)
static int
wbcir_tx(struct rc_dev *dev, int *buf, u32 bufsize)
static void
wbcir_shutdown(struct pnp_dev *device)
static int
wbcir_suspend(struct pnp_dev *device, pm_message_t state)
static void
wbcir_init_hw(struct wbcir_data *data)
static int
wbcir_resume(struct pnp_dev *device)
static int __devinit
wbcir_probe(struct pnp_dev *device, const struct pnp_device_id *dev_id)
static void __devexit
wbcir_remove(struct pnp_dev *device)
static const struct pnp_device_id wbcir_ids[] = ;
MODULE_DEVICE_TABLE(pnp, wbcir_ids);
static struct pnp_driver wbcir_driver = ;
static int __init
wbcir_init(void)
static void __exit
wbcir_exit(void)
module_init(wbcir_init);
module_exit(wbcir_exit);
MODULE_AUTHOR("David Härdeman <david@hardeman.nu>");
MODULE_DESCRIPTION("Winbond SuperI/O Consumer IR Driver");
MODULE_LICENSE("GPL");
