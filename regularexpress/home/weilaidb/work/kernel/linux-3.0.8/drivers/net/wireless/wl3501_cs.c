#define slow_down_io()
#define WL3501_NOPLOOP(n)
#define wl3501_outb(a, b)
#define wl3501_outb_p(a, b)
#define wl3501_outsb(a, b, c)
#define WL3501_RELEASE_TIMEOUT (25 * HZ)
#define WL3501_MAX_ADHOC_TRIES 16
#define WL3501_RESUME	0
#define WL3501_SUSPEND	1
static int wl3501_config(struct pcmcia_device *link);
static void wl3501_release(struct pcmcia_device *link);
static const struct  iw_channel_table[] = ;
static int iw_valid_channel(int reg_domain, int channel)
static int iw_default_channel(int reg_domain)
static void iw_set_mgmt_info_element(enum iw_mgmt_info_element_ids id,
struct iw_mgmt_info_element *el,
void *value, int len)
static void iw_copy_mgmt_info_element(struct iw_mgmt_info_element *to,
struct iw_mgmt_info_element *from)
static inline void wl3501_switch_page(struct wl3501_card *this, u8 page)
static int wl3501_get_flash_mac_addr(struct wl3501_card *this)
static void wl3501_set_to_wla(struct wl3501_card *this, u16 dest, void *src,
int size)
static void wl3501_get_from_wla(struct wl3501_card *this, u16 src, void *dest,
int size)
static u16 wl3501_get_tx_buffer(struct wl3501_card *this, u16 len)
static void wl3501_free_tx_buffer(struct wl3501_card *this, u16 ptr)
static int wl3501_esbq_req_test(struct wl3501_card *this)
static void wl3501_esbq_req(struct wl3501_card *this, u16 *ptr)
static int wl3501_esbq_exec(struct wl3501_card *this, void *sig, int sig_size)
static int wl3501_get_mib_value(struct wl3501_card *this, u8 index,
void *bf, int size)
static int wl3501_pwr_mgmt(struct wl3501_card *this, int suspend)
static int wl3501_send_pkt(struct wl3501_card *this, u8 *data, u16 len)
static int wl3501_mgmt_resync(struct wl3501_card *this)
static inline int wl3501_fw_bss_type(struct wl3501_card *this)
static inline int wl3501_fw_cap_info(struct wl3501_card *this)
static int wl3501_mgmt_scan(struct wl3501_card *this, u16 chan_time)
static int wl3501_mgmt_join(struct wl3501_card *this, u16 stas)
static int wl3501_mgmt_start(struct wl3501_card *this)
static void wl3501_mgmt_scan_confirm(struct wl3501_card *this, u16 addr)
static int wl3501_block_interrupt(struct wl3501_card *this)
static int wl3501_unblock_interrupt(struct wl3501_card *this)
static u16 wl3501_receive(struct wl3501_card *this, u8 *bf, u16 size)
static void wl3501_esbq_req_free(struct wl3501_card *this)
static int wl3501_esbq_confirm(struct wl3501_card *this)
static void wl3501_online(struct net_device *dev)
static void wl3501_esbq_confirm_done(struct wl3501_card *this)
static int wl3501_mgmt_auth(struct wl3501_card *this)
static int wl3501_mgmt_association(struct wl3501_card *this)
static void wl3501_mgmt_join_confirm(struct net_device *dev, u16 addr)
static inline void wl3501_alarm_interrupt(struct net_device *dev,
struct wl3501_card *this)
static inline void wl3501_md_confirm_interrupt(struct net_device *dev,
struct wl3501_card *this,
u16 addr)
static inline void wl3501_md_ind_interrupt(struct net_device *dev,
struct wl3501_card *this, u16 addr)
static inline void wl3501_get_confirm_interrupt(struct wl3501_card *this,
u16 addr, void *sig, int size)
static inline void wl3501_start_confirm_interrupt(struct net_device *dev,
struct wl3501_card *this,
u16 addr)
static inline void wl3501_assoc_confirm_interrupt(struct net_device *dev,
u16 addr)
static inline void wl3501_auth_confirm_interrupt(struct wl3501_card *this,
u16 addr)
static inline void wl3501_rx_interrupt(struct net_device *dev)
static inline void wl3501_ack_interrupt(struct wl3501_card *this)
static irqreturn_t wl3501_interrupt(int irq, void *dev_id)
static int wl3501_reset_board(struct wl3501_card *this)
static int wl3501_init_firmware(struct wl3501_card *this)
static int wl3501_close(struct net_device *dev)
static int wl3501_reset(struct net_device *dev)
static void wl3501_tx_timeout(struct net_device *dev)
static netdev_tx_t wl3501_hard_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static int wl3501_open(struct net_device *dev)
static struct iw_statistics *wl3501_get_wireless_stats(struct net_device *dev)
static void wl3501_detach(struct pcmcia_device *link)
static int wl3501_get_name(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_set_freq(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_get_freq(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_set_mode(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_get_mode(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_get_sens(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_get_range(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_set_wap(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_get_wap(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_set_scan(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_get_scan(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_set_essid(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_get_essid(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_set_nick(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_get_nick(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_get_rate(struct net_device *dev, struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_get_rts_threshold(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_get_frag_threshold(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_get_txpow(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_get_retry(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_get_encode(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static int wl3501_get_power(struct net_device *dev,
struct iw_request_info *info,
union iwreq_data *wrqu, char *extra)
static const iw_handler	wl3501_handler[] = ;
static const struct iw_handler_def wl3501_handler_def = ;
static const struct net_device_ops wl3501_netdev_ops = ;
static int wl3501_probe(struct pcmcia_device *p_dev)
static int wl3501_config(struct pcmcia_device *link)
static void wl3501_release(struct pcmcia_device *link)
static int wl3501_suspend(struct pcmcia_device *link)
static int wl3501_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id wl3501_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, wl3501_ids);
static struct pcmcia_driver wl3501_driver = ;
static int __init wl3501_init_module(void)
static void __exit wl3501_exit_module(void)
module_init(wl3501_init_module);
module_exit(wl3501_exit_module);
MODULE_AUTHOR("Fox Chen <mhchen@golf.ccl.itri.org.tw>, "
"Arnaldo Carvalho de Melo <acme@conectiva.com.br>,"
"Gustavo Niemeyer <niemeyer@conectiva.com>");
MODULE_DESCRIPTION("Planet wl3501 wireless driver");
MODULE_LICENSE("GPL");
