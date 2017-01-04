static void ipath_update_pio_bufs(struct ipath_devdata *);
const char *ipath_get_unit_name(int unit)
#define DRIVER_LOAD_MSG "QLogic " IPATH_DRV_NAME " loaded: "
#define PFX IPATH_DRV_NAME ": "
const char ib_ipath_version[] = IPATH_IDSTR "\n";
static struct idr unit_table;
DEFINE_SPINLOCK(ipath_devs_lock);
LIST_HEAD(ipath_dev_list);
wait_queue_head_t ipath_state_wait;
unsigned ipath_debug = __IPATH_INFO;
module_param_named(debug, ipath_debug, uint, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(debug, "mask for debug prints");
EXPORT_SYMBOL_GPL(ipath_debug);
unsigned ipath_mtu4096 = 1;
module_param_named(mtu4096, ipath_mtu4096, uint, S_IRUGO);
MODULE_PARM_DESC(mtu4096, "enable MTU of 4096 bytes, if supported");
static unsigned ipath_hol_timeout_ms = 13000;
module_param_named(hol_timeout_ms, ipath_hol_timeout_ms, uint, S_IRUGO);
MODULE_PARM_DESC(hol_timeout_ms,
"duration of user app suspension after link failure");
unsigned ipath_linkrecovery = 1;
module_param_named(linkrecovery, ipath_linkrecovery, uint, S_IWUSR | S_IRUGO);
MODULE_PARM_DESC(linkrecovery, "enable workaround for link recovery issue");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("QLogic <support@qlogic.com>");
MODULE_DESCRIPTION("QLogic InfiniPath driver");
const char *ipath_ibcstatus_str[] = ;
static void __devexit ipath_remove_one(struct pci_dev *);
static int __devinit ipath_init_one(struct pci_dev *,
const struct pci_device_id *);
#define PCI_VENDOR_ID_PATHSCALE 0x1fc1
#define PCI_DEVICE_ID_INFINIPATH_HT 0xd
#define STATUS_TIMEOUT 60
static const struct pci_device_id ipath_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, ipath_pci_tbl);
static struct pci_driver ipath_driver = ;
static inline void read_bars(struct ipath_devdata *dd, struct pci_dev *dev,
u32 *bar0, u32 *bar1)
static void ipath_free_devdata(struct pci_dev *pdev,
struct ipath_devdata *dd)
static struct ipath_devdata *ipath_alloc_devdata(struct pci_dev *pdev)
static inline struct ipath_devdata *__ipath_lookup(int unit)
struct ipath_devdata *ipath_lookup(int unit)
int ipath_count_units(int *npresentp, int *nupp, int *maxportsp)
int __attribute__((weak)) ipath_enable_wc(struct ipath_devdata *dd)
void __attribute__((weak)) ipath_disable_wc(struct ipath_devdata *dd)
static void ipath_verify_pioperf(struct ipath_devdata *dd)
static void cleanup_device(struct ipath_devdata *dd);
static int __devinit ipath_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void cleanup_device(struct ipath_devdata *dd)
static void __devexit ipath_remove_one(struct pci_dev *pdev)
DEFINE_MUTEX(ipath_mutex);
static DEFINE_SPINLOCK(ipath_pioavail_lock);
void ipath_disarm_piobufs(struct ipath_devdata *dd, unsigned first,
unsigned cnt)
int ipath_wait_linkstate(struct ipath_devdata *dd, u32 state, int msecs)
static void decode_sdma_errs(struct ipath_devdata *dd, ipath_err_t err,
char *buf, size_t blen)
int ipath_decode_err(struct ipath_devdata *dd, char *buf, size_t blen,
ipath_err_t err)
static void get_rhf_errstring(u32 err, char *msg, size_t len)
static inline void *ipath_get_egrbuf(struct ipath_devdata *dd, u32 bufnum)
struct sk_buff *ipath_alloc_skb(struct ipath_devdata *dd,
gfp_t gfp_mask)
static void ipath_rcv_hdrerr(struct ipath_devdata *dd,
u32 eflags,
u32 l,
u32 etail,
__le32 *rhf_addr,
struct ipath_message_header *hdr)
void ipath_kreceive(struct ipath_portdata *pd)
static void ipath_update_pio_bufs(struct ipath_devdata *dd)
static void ipath_reset_availshadow(struct ipath_devdata *dd)
int ipath_setrcvhdrsize(struct ipath_devdata *dd, unsigned rhdrsize)
static noinline void no_pio_bufs(struct ipath_devdata *dd)
static u32 __iomem *ipath_getpiobuf_range(struct ipath_devdata *dd,
u32 *pbufnum, u32 first, u32 last, u32 firsti)
u32 __iomem *ipath_getpiobuf(struct ipath_devdata *dd, u32 plen, u32 *pbufnum)
void ipath_chg_pioavailkernel(struct ipath_devdata *dd, unsigned start,
unsigned len, int avail)
int ipath_create_rcvhdrq(struct ipath_devdata *dd,
struct ipath_portdata *pd)
void ipath_cancel_sends(struct ipath_devdata *dd, int restore_sendctrl)
void ipath_force_pio_avail_update(struct ipath_devdata *dd)
static void ipath_set_ib_lstate(struct ipath_devdata *dd, int linkcmd,
int linitcmd)
int ipath_set_linkstate(struct ipath_devdata *dd, u8 newstate)
int ipath_set_mtu(struct ipath_devdata *dd, u16 arg)
int ipath_set_lid(struct ipath_devdata *dd, u32 lid, u8 lmc)
void ipath_write_kreg_port(const struct ipath_devdata *dd, ipath_kreg regno,
unsigned port, u64 value)
#define LED_OVER_FREQ_SHIFT 8
#define LED_OVER_FREQ_MASK (0xFF<<LED_OVER_FREQ_SHIFT)
#define LED_OVER_BOTH_OFF (8)
static void ipath_run_led_override(unsigned long opaque)
void ipath_set_led_override(struct ipath_devdata *dd, unsigned int val)
void ipath_shutdown_device(struct ipath_devdata *dd)
void ipath_free_pddata(struct ipath_devdata *dd, struct ipath_portdata *pd)
static int __init infinipath_init(void)
static void __exit infinipath_cleanup(void)
int ipath_reset_device(int unit)
static int ipath_signal_procs(struct ipath_devdata *dd, int sig)
static void ipath_hol_signal_down(struct ipath_devdata *dd)
static void ipath_hol_signal_up(struct ipath_devdata *dd)
void ipath_hol_down(struct ipath_devdata *dd)
void ipath_hol_up(struct ipath_devdata *dd)
void ipath_hol_event(unsigned long opaque)
int ipath_set_rx_pol_inv(struct ipath_devdata *dd, u8 new_pol_inv)
void ipath_enable_armlaunch(struct ipath_devdata *dd)
void ipath_disable_armlaunch(struct ipath_devdata *dd)
module_init(infinipath_init);
module_exit(infinipath_cleanup);
