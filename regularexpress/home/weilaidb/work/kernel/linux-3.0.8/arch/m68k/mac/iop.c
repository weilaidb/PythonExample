int iop_scc_present,iop_ism_present;
struct listener ;
static volatile struct mac_iop *iop_base[NUM_IOPS];
static struct iop_msg iop_msg_pool[NUM_IOP_MSGS];
static struct iop_msg *iop_send_queue[NUM_IOPS][NUM_IOP_CHAN];
static struct listener iop_listeners[NUM_IOPS][NUM_IOP_CHAN];
irqreturn_t iop_ism_irq(int, void *);
extern void oss_irq_enable(int);
static __inline__ void iop_loadaddr(volatile struct mac_iop *iop, __u16 addr)
static __inline__ __u8 iop_readb(volatile struct mac_iop *iop, __u16 addr)
static __inline__ void iop_writeb(volatile struct mac_iop *iop, __u16 addr, __u8 data)
static __inline__ void iop_stop(volatile struct mac_iop *iop)
static __inline__ void iop_start(volatile struct mac_iop *iop)
static __inline__ void iop_bypass(volatile struct mac_iop *iop)
static __inline__ void iop_interrupt(volatile struct mac_iop *iop)
static int iop_alive(volatile struct mac_iop *iop)
static struct iop_msg *iop_alloc_msg(void)
static void iop_free_msg(struct iop_msg *msg)
void __init iop_preinit(void)
void __init iop_init(void)
void __init iop_register_interrupts(void)
int iop_listen(uint iop_num, uint chan,
void (*handler)(struct iop_msg *),
const char *devname)
void iop_complete_message(struct iop_msg *msg)
static void iop_do_send(struct iop_msg *msg)
static void iop_handle_send(uint iop_num, uint chan)
static void iop_handle_recv(uint iop_num, uint chan)
int iop_send_message(uint iop_num, uint chan, void *privdata,
uint msg_len, __u8 *msg_data,
void (*handler)(struct iop_msg *))
void iop_upload_code(uint iop_num, __u8 *code_start,
uint code_len, __u16 shared_ram_start)
void iop_download_code(uint iop_num, __u8 *code_start,
uint code_len, __u16 shared_ram_start)
__u8 *iop_compare_code(uint iop_num, __u8 *code_start,
uint code_len, __u16 shared_ram_start)
irqreturn_t iop_ism_irq(int irq, void *dev_id)
