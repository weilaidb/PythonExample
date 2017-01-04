#define MAX_MFC 5
#undef DEBUG
#define DPRINTK printk
static inline int DPRINTK(void *nothing, ...)
static struct parport *this_port[MAX_MFC] = ;
static volatile int dummy;
#define pia(dev) ((struct pia *)(dev->base))
static struct parport_operations pp_mfc3_ops;
static void mfc3_write_data(struct parport *p, unsigned char data)
static unsigned char mfc3_read_data(struct parport *p)
static unsigned char control_pc_to_mfc3(unsigned char control)
static unsigned char control_mfc3_to_pc(unsigned char control)
static void mfc3_write_control(struct parport *p, unsigned char control)
static unsigned char mfc3_read_control( struct parport *p)
static unsigned char mfc3_frob_control( struct parport *p, unsigned char mask, unsigned char val)
static unsigned char status_mfc3_to_pc(unsigned char status)
static unsigned char mfc3_read_status(struct parport *p)
static int use_cnt = 0;
static irqreturn_t mfc3_interrupt(int irq, void *dev_id)
static void mfc3_enable_irq(struct parport *p)
static void mfc3_disable_irq(struct parport *p)
static void mfc3_data_forward(struct parport *p)
static void mfc3_data_reverse(struct parport *p)
static void mfc3_init_state(struct pardevice *dev, struct parport_state *s)
static void mfc3_save_state(struct parport *p, struct parport_state *s)
static void mfc3_restore_state(struct parport *p, struct parport_state *s)
static struct parport_operations pp_mfc3_ops = ;
static int __init parport_mfc3_init(void)
static void __exit parport_mfc3_exit(void)
MODULE_AUTHOR("Joerg Dorchain <joerg@dorchain.net>");
MODULE_DESCRIPTION("Parport Driver for Multiface 3 expansion cards Paralllel Port");
MODULE_SUPPORTED_DEVICE("Multiface 3 Parallel Port");
MODULE_LICENSE("GPL");
module_init(parport_mfc3_init)
module_exit(parport_mfc3_exit)
