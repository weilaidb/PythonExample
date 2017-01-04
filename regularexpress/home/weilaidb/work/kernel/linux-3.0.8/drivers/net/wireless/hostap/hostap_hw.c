static int mtu = 1500;
module_param(mtu, int, 0444);
MODULE_PARM_DESC(mtu, "Maximum transfer unit");
static int channel[MAX_PARM_DEVICES] = ;
module_param_array(channel, int, NULL, 0444);
MODULE_PARM_DESC(channel, "Initial channel");
static char essid[33] = "test";
module_param_string(essid, essid, sizeof(essid), 0444);
MODULE_PARM_DESC(essid, "Host AP's ESSID");
static int iw_mode[MAX_PARM_DEVICES] = ;
module_param_array(iw_mode, int, NULL, 0444);
MODULE_PARM_DESC(iw_mode, "Initial operation mode");
static int beacon_int[MAX_PARM_DEVICES] = ;
module_param_array(beacon_int, int, NULL, 0444);
MODULE_PARM_DESC(beacon_int, "Beacon interval (1 = 1024 usec)");
static int dtim_period[MAX_PARM_DEVICES] = ;
module_param_array(dtim_period, int, NULL, 0444);
MODULE_PARM_DESC(dtim_period, "DTIM period");
static char dev_template[16] = "wlan%d";
module_param_string(dev_template, dev_template, sizeof(dev_template), 0444);
MODULE_PARM_DESC(dev_template, "Prefix for network device name (default: "
"wlan%d)");
#define EXTRA_EVENTS_WTERR 0
#define EXTRA_EVENTS_WTERR HFA384X_EV_WTERR
#define HFA384X_BAP0_EVENTS \
(HFA384X_EV_TXEXC | HFA384X_EV_RX | HFA384X_EV_INFO | HFA384X_EV_TX)
#define HFA384X_EVENT_MASK \
(HFA384X_BAP0_EVENTS | HFA384X_EV_ALLOC | HFA384X_EV_INFDROP | \
HFA384X_EV_CMD | HFA384X_EV_TICK | \
EXTRA_EVENTS_WTERR)
#define HFA384X_TX_CTRL_FLAGS \
(HFA384X_TX_CTRL_802_11 | HFA384X_TX_CTRL_TX_EX)
#define HFA384X_CMD_BUSY_TIMEOUT 5000
#define HFA384X_BAP_BUSY_TIMEOUT 50000
#define HFA384X_CMD_COMPL_TIMEOUT 20000
#define HFA384X_DL_COMPL_TIMEOUT 1000000
#define HFA384X_INIT_TIMEOUT (HZ / 2)
#define HFA384X_ALLOC_COMPL_TIMEOUT (HZ / 20)
static void prism2_hw_reset(struct net_device *dev);
static void prism2_check_sta_fw_version(local_info_t *local);
static int prism2_download_aux_dump(struct net_device *dev,
unsigned int addr, int len, u8 *buf);
static u8 * prism2_read_pda(struct net_device *dev);
static int prism2_download(local_info_t *local,
struct prism2_download_param *param);
static void prism2_download_free_data(struct prism2_download_data *dl);
static int prism2_download_volatile(local_info_t *local,
struct prism2_download_data *param);
static int prism2_download_genesis(local_info_t *local,
struct prism2_download_data *param);
static int prism2_get_ram_size(local_info_t *local);
#define HFA384X_MAGIC 0x8A32
static u16 hfa384x_read_reg(struct net_device *dev, u16 reg)
static void hfa384x_read_regs(struct net_device *dev,
struct hfa384x_regs *regs)
static inline void __hostap_cmd_queue_free(local_info_t *local,
struct hostap_cmd_queue *entry,
int del_req)
static inline void hostap_cmd_queue_free(local_info_t *local,
struct hostap_cmd_queue *entry,
int del_req)
static void prism2_clear_cmd_queue(local_info_t *local)
static int hfa384x_cmd_issue(struct net_device *dev,
struct hostap_cmd_queue *entry)
static int hfa384x_cmd(struct net_device *dev, u16 cmd, u16 param0,
u16 *param1, u16 *resp0)
static int hfa384x_cmd_callback(struct net_device *dev, u16 cmd, u16 param0,
void (*callback)(struct net_device *dev,
long context, u16 resp0,
u16 status),
long context)
static int __hfa384x_cmd_no_wait(struct net_device *dev, u16 cmd, u16 param0,
int io_debug_num)
static int hfa384x_cmd_wait(struct net_device *dev, u16 cmd, u16 param0)
static inline int hfa384x_cmd_no_wait(struct net_device *dev, u16 cmd,
u16 param0)
static void prism2_cmd_ev(struct net_device *dev)
static int hfa384x_wait_offset(struct net_device *dev, u16 o_off)
static int hfa384x_setup_bap(struct net_device *dev, u16 bap, u16 id,
int offset)
static int hfa384x_get_rid(struct net_device *dev, u16 rid, void *buf, int len,
int exact_len)
static int hfa384x_set_rid(struct net_device *dev, u16 rid, void *buf, int len)
static void hfa384x_disable_interrupts(struct net_device *dev)
static void hfa384x_enable_interrupts(struct net_device *dev)
static void hfa384x_events_no_bap0(struct net_device *dev)
static void hfa384x_events_all(struct net_device *dev)
static void hfa384x_events_only_cmd(struct net_device *dev)
static u16 hfa384x_allocate_fid(struct net_device *dev, int len)
static int prism2_reset_port(struct net_device *dev)
static int prism2_get_version_info(struct net_device *dev, u16 rid,
const char *txt)
static int prism2_setup_rids(struct net_device *dev)
static int prism2_hw_init(struct net_device *dev, int initial)
static int prism2_hw_init2(struct net_device *dev, int initial)
static int prism2_hw_enable(struct net_device *dev, int initial)
static int prism2_hw_config(struct net_device *dev, int initial)
static void prism2_hw_shutdown(struct net_device *dev, int no_disable)
static void prism2_hw_reset(struct net_device *dev)
static void prism2_schedule_reset(local_info_t *local)
static void handle_reset_queue(struct work_struct *work)
static int prism2_get_txfid_idx(local_info_t *local)
static void prism2_transmit_cb(struct net_device *dev, long context,
u16 resp0, u16 res)
static int prism2_transmit(struct net_device *dev, int idx)
static int prism2_tx_80211(struct sk_buff *skb, struct net_device *dev)
#define EXTRA_FID_READ_TESTS
static u16 prism2_read_fid_reg(struct net_device *dev, u16 reg)
static void prism2_rx(local_info_t *local)
static void hostap_rx_skb(local_info_t *local, struct sk_buff *skb)
static void hostap_rx_tasklet(unsigned long data)
static void prism2_alloc_ev(struct net_device *dev)
static void hostap_tx_callback(local_info_t *local,
struct hfa384x_tx_frame *txdesc, int ok,
char *payload)
static int hostap_tx_compl_read(local_info_t *local, int error,
struct hfa384x_tx_frame *txdesc,
char **payload)
static void prism2_tx_ev(local_info_t *local)
static void hostap_sta_tx_exc_tasklet(unsigned long data)
static void prism2_txexc(local_info_t *local)
static void hostap_info_tasklet(unsigned long data)
static void prism2_info(local_info_t *local)
static void hostap_bap_tasklet(unsigned long data)
static void prism2_infdrop(struct net_device *dev)
static void prism2_ev_tick(struct net_device *dev)
static void prism2_check_magic(local_info_t *local)
static irqreturn_t prism2_interrupt(int irq, void *dev_id)
static void prism2_check_sta_fw_version(local_info_t *local)
static void hostap_passive_scan(unsigned long data)
static void handle_comms_qual_update(struct work_struct *work)
static void hostap_tick_timer(unsigned long data)
static int prism2_registers_proc_read(char *page, char **start, off_t off,
int count, int *eof, void *data)
struct set_tim_data ;
static int prism2_set_tim(struct net_device *dev, int aid, int set)
static void handle_set_tim_queue(struct work_struct *work)
static void prism2_clear_set_tim_queue(local_info_t *local)
static struct lock_class_key hostap_netdev_xmit_lock_key;
static struct lock_class_key hostap_netdev_addr_lock_key;
static void prism2_set_lockdep_class_one(struct net_device *dev,
struct netdev_queue *txq,
void *_unused)
static void prism2_set_lockdep_class(struct net_device *dev)
static struct net_device *
prism2_init_local_data(struct prism2_helper_functions *funcs, int card_idx,
struct device *sdev)
static int hostap_hw_ready(struct net_device *dev)
static void prism2_free_local_data(struct net_device *dev)
#if (defined(PRISM2_PCI) && defined(CONFIG_PM)) || defined(PRISM2_PCCARD)
static void prism2_suspend(struct net_device *dev)
