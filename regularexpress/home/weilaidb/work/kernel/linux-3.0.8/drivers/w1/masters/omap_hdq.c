#define	MOD_NAME	"OMAP_HDQ:"
#define OMAP_HDQ_REVISION			0x00
#define OMAP_HDQ_TX_DATA			0x04
#define OMAP_HDQ_RX_DATA			0x08
#define OMAP_HDQ_CTRL_STATUS			0x0c
#define OMAP_HDQ_CTRL_STATUS_INTERRUPTMASK	(1<<6)
#define OMAP_HDQ_CTRL_STATUS_CLOCKENABLE	(1<<5)
#define OMAP_HDQ_CTRL_STATUS_GO			(1<<4)
#define OMAP_HDQ_CTRL_STATUS_INITIALIZATION	(1<<2)
#define OMAP_HDQ_CTRL_STATUS_DIR		(1<<1)
#define OMAP_HDQ_CTRL_STATUS_MODE		(1<<0)
#define OMAP_HDQ_INT_STATUS			0x10
#define OMAP_HDQ_INT_STATUS_TXCOMPLETE		(1<<2)
#define OMAP_HDQ_INT_STATUS_RXCOMPLETE		(1<<1)
#define OMAP_HDQ_INT_STATUS_TIMEOUT		(1<<0)
#define OMAP_HDQ_SYSCONFIG			0x14
#define OMAP_HDQ_SYSCONFIG_SOFTRESET		(1<<1)
#define OMAP_HDQ_SYSCONFIG_AUTOIDLE		(1<<0)
#define OMAP_HDQ_SYSSTATUS			0x18
#define OMAP_HDQ_SYSSTATUS_RESETDONE		(1<<0)
#define OMAP_HDQ_FLAG_CLEAR			0
#define OMAP_HDQ_FLAG_SET			1
#define OMAP_HDQ_TIMEOUT			(HZ/5)
#define OMAP_HDQ_MAX_USER			4
static DECLARE_WAIT_QUEUE_HEAD(hdq_wait_queue);
static int w1_id;
struct hdq_data ;
static int __devinit omap_hdq_probe(struct platform_device *pdev);
static int omap_hdq_remove(struct platform_device *pdev);
static struct platform_driver omap_hdq_driver = ;
static u8 omap_w1_read_byte(void *_hdq);
static void omap_w1_write_byte(void *_hdq, u8 byte);
static u8 omap_w1_reset_bus(void *_hdq);
static void omap_w1_search_bus(void *_hdq, struct w1_master *master_dev,
u8 search_type,	w1_slave_found_callback slave_found);
static struct w1_bus_master omap_w1_master = ;
static inline u8 hdq_reg_in(struct hdq_data *hdq_data, u32 offset)
static inline void hdq_reg_out(struct hdq_data *hdq_data, u32 offset, u8 val)
static inline u8 hdq_reg_merge(struct hdq_data *hdq_data, u32 offset,
u8 val, u8 mask)
static int hdq_wait_for_flag(struct hdq_data *hdq_data, u32 offset,
u8 flag, u8 flag_set, u8 *status)
static int hdq_write_byte(struct hdq_data *hdq_data, u8 val, u8 *status)
static irqreturn_t hdq_isr(int irq, void *_hdq)
static u8 omap_w1_reset_bus(void *_hdq)
static void omap_w1_search_bus(void *_hdq, struct w1_master *master_dev,
u8 search_type, w1_slave_found_callback slave_found)
static int _omap_hdq_reset(struct hdq_data *hdq_data)
static int omap_hdq_break(struct hdq_data *hdq_data)
static int hdq_read_byte(struct hdq_data *hdq_data, u8 *val)
static int omap_hdq_get(struct hdq_data *hdq_data)
static int omap_hdq_put(struct hdq_data *hdq_data)
static u8 omap_w1_read_byte(void *_hdq)
static void omap_w1_write_byte(void *_hdq, u8 byte)
static int __devinit omap_hdq_probe(struct platform_device *pdev)
static int omap_hdq_remove(struct platform_device *pdev)
static int __init
omap_hdq_init(void)
module_init(omap_hdq_init);
static void __exit
omap_hdq_exit(void)
module_exit(omap_hdq_exit);
module_param(w1_id, int, S_IRUSR);
MODULE_PARM_DESC(w1_id, "1-wire id for the slave detection");
MODULE_AUTHOR("Texas Instruments");
MODULE_DESCRIPTION("HDQ driver Library");
MODULE_LICENSE("GPL");
