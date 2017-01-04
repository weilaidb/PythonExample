#define SUBMIT_URB(u, f)  usb_submit_urb(u, f)
enum cmd_mode ;
#define THROTTLE_JIFFIES	(HZ/8)
#define URB_ASYNC_UNLINK 0
#define USB_QUEUE_BULK 0
#define ROUNDUP64(a) (((a)+63)&~63)
static void dbprint_urb(struct urb *urb);
static void
hfa384x_int_rxmonitor(wlandevice_t *wlandev, hfa384x_usb_rxfrm_t *rxfrm);
static void hfa384x_usb_defer(struct work_struct *data);
static int submit_rx_urb(hfa384x_t *hw, gfp_t flags);
static int submit_tx_urb(hfa384x_t *hw, struct urb *tx_urb, gfp_t flags);
static void hfa384x_usbout_callback(struct urb *urb);
static void hfa384x_ctlxout_callback(struct urb *urb);
static void hfa384x_usbin_callback(struct urb *urb);
static void
hfa384x_usbin_txcompl(wlandevice_t *wlandev, hfa384x_usbin_t * usbin);
static void hfa384x_usbin_rx(wlandevice_t *wlandev, struct sk_buff *skb);
static void hfa384x_usbin_info(wlandevice_t *wlandev, hfa384x_usbin_t * usbin);
static void
hfa384x_usbout_tx(wlandevice_t *wlandev, hfa384x_usbout_t *usbout);
static void hfa384x_usbin_ctlx(hfa384x_t *hw, hfa384x_usbin_t *usbin,
int urb_status);
static void hfa384x_usbctlxq_run(hfa384x_t *hw);
static void hfa384x_usbctlx_reqtimerfn(unsigned long data);
static void hfa384x_usbctlx_resptimerfn(unsigned long data);
static void hfa384x_usb_throttlefn(unsigned long data);
static void hfa384x_usbctlx_completion_task(unsigned long data);
static void hfa384x_usbctlx_reaper_task(unsigned long data);
static int hfa384x_usbctlx_submit(hfa384x_t *hw, hfa384x_usbctlx_t *ctlx);
static void unlocked_usbctlx_complete(hfa384x_t *hw, hfa384x_usbctlx_t *ctlx);
struct usbctlx_completor ;
static int
hfa384x_usbctlx_complete_sync(hfa384x_t *hw,
hfa384x_usbctlx_t *ctlx,
struct usbctlx_completor *completor);
static int
unlocked_usbctlx_cancel_async(hfa384x_t *hw, hfa384x_usbctlx_t *ctlx);
static void hfa384x_cb_status(hfa384x_t *hw, const hfa384x_usbctlx_t *ctlx);
static void hfa384x_cb_rrid(hfa384x_t *hw, const hfa384x_usbctlx_t *ctlx);
static int
usbctlx_get_status(const hfa384x_usb_cmdresp_t *cmdresp,
hfa384x_cmdresult_t *result);
static void
usbctlx_get_rridresult(const hfa384x_usb_rridresp_t *rridresp,
hfa384x_rridresult_t *result);
static int
hfa384x_docmd(hfa384x_t *hw,
enum cmd_mode mode,
hfa384x_metacmd_t *cmd,
ctlx_cmdcb_t cmdcb, ctlx_usercb_t usercb, void *usercb_data);
static int
hfa384x_dorrid(hfa384x_t *hw,
enum cmd_mode mode,
u16 rid,
void *riddata,
unsigned int riddatalen,
ctlx_cmdcb_t cmdcb, ctlx_usercb_t usercb, void *usercb_data);
static int
hfa384x_dowrid(hfa384x_t *hw,
enum cmd_mode mode,
u16 rid,
void *riddata,
unsigned int riddatalen,
ctlx_cmdcb_t cmdcb, ctlx_usercb_t usercb, void *usercb_data);
static int
hfa384x_dormem(hfa384x_t *hw,
enum cmd_mode mode,
u16 page,
u16 offset,
void *data,
unsigned int len,
ctlx_cmdcb_t cmdcb, ctlx_usercb_t usercb, void *usercb_data);
static int
hfa384x_dowmem(hfa384x_t *hw,
enum cmd_mode mode,
u16 page,
u16 offset,
void *data,
unsigned int len,
ctlx_cmdcb_t cmdcb, ctlx_usercb_t usercb, void *usercb_data);
static int hfa384x_isgood_pdrcode(u16 pdrcode);
static inline const char *ctlxstr(CTLX_STATE s)
;
static inline hfa384x_usbctlx_t *get_active_ctlx(hfa384x_t * hw)
void dbprint_urb(struct urb *urb)
static int submit_rx_urb(hfa384x_t *hw, gfp_t memflags)
static int submit_tx_urb(hfa384x_t *hw, struct urb *tx_urb, gfp_t memflags)
static void hfa384x_usb_defer(struct work_struct *data)
void hfa384x_create(hfa384x_t *hw, struct usb_device *usb)
void hfa384x_destroy(hfa384x_t *hw)
static hfa384x_usbctlx_t *usbctlx_alloc(void)
static int
usbctlx_get_status(const hfa384x_usb_cmdresp_t *cmdresp,
hfa384x_cmdresult_t *result)
static void
usbctlx_get_rridresult(const hfa384x_usb_rridresp_t *rridresp,
hfa384x_rridresult_t *result)
struct usbctlx_cmd_completor ;
static inline int usbctlx_cmd_completor_fn(struct usbctlx_completor *head)
static inline struct usbctlx_completor *init_cmd_completor(
struct usbctlx_cmd_completor
*completor,
const hfa384x_usb_cmdresp_t
*cmdresp,
hfa384x_cmdresult_t *result)
struct usbctlx_rrid_completor ;
static int usbctlx_rrid_completor_fn(struct usbctlx_completor *head)
static inline struct usbctlx_completor *init_rrid_completor(
struct usbctlx_rrid_completor
*completor,
const hfa384x_usb_rridresp_t
*rridresp,
void *riddata,
unsigned int riddatalen)
typedef struct usbctlx_cmd_completor usbctlx_wrid_completor_t;
#define init_wrid_completor  init_cmd_completor
typedef struct usbctlx_cmd_completor usbctlx_wmem_completor_t;
#define init_wmem_completor  init_cmd_completor
struct usbctlx_rmem_completor ;
typedef struct usbctlx_rmem_completor usbctlx_rmem_completor_t;
static int usbctlx_rmem_completor_fn(struct usbctlx_completor *head)
static inline struct usbctlx_completor *init_rmem_completor(
usbctlx_rmem_completor_t
*completor,
hfa384x_usb_rmemresp_t
*rmemresp,
void *data,
unsigned int len)
static void hfa384x_cb_status(hfa384x_t *hw, const hfa384x_usbctlx_t *ctlx)
static void hfa384x_cb_rrid(hfa384x_t *hw, const hfa384x_usbctlx_t *ctlx)
static inline int hfa384x_docmd_wait(hfa384x_t *hw, hfa384x_metacmd_t *cmd)
static inline int
hfa384x_docmd_async(hfa384x_t *hw,
hfa384x_metacmd_t *cmd,
ctlx_cmdcb_t cmdcb, ctlx_usercb_t usercb, void *usercb_data)
static inline int
hfa384x_dorrid_wait(hfa384x_t *hw, u16 rid, void *riddata,
unsigned int riddatalen)
static inline int
hfa384x_dorrid_async(hfa384x_t *hw,
u16 rid, void *riddata, unsigned int riddatalen,
ctlx_cmdcb_t cmdcb,
ctlx_usercb_t usercb, void *usercb_data)
static inline int
hfa384x_dowrid_wait(hfa384x_t *hw, u16 rid, void *riddata,
unsigned int riddatalen)
static inline int
hfa384x_dowrid_async(hfa384x_t *hw,
u16 rid, void *riddata, unsigned int riddatalen,
ctlx_cmdcb_t cmdcb,
ctlx_usercb_t usercb, void *usercb_data)
static inline int
hfa384x_dormem_wait(hfa384x_t *hw,
u16 page, u16 offset, void *data, unsigned int len)
static inline int
hfa384x_dormem_async(hfa384x_t *hw,
u16 page, u16 offset, void *data, unsigned int len,
ctlx_cmdcb_t cmdcb,
ctlx_usercb_t usercb, void *usercb_data)
static inline int
hfa384x_dowmem_wait(hfa384x_t *hw,
u16 page, u16 offset, void *data, unsigned int len)
static inline int
hfa384x_dowmem_async(hfa384x_t *hw,
u16 page,
u16 offset,
void *data,
unsigned int len,
ctlx_cmdcb_t cmdcb,
ctlx_usercb_t usercb, void *usercb_data)
int hfa384x_cmd_initialize(hfa384x_t *hw)
int hfa384x_cmd_disable(hfa384x_t *hw, u16 macport)
int hfa384x_cmd_enable(hfa384x_t *hw, u16 macport)
int hfa384x_cmd_monitor(hfa384x_t *hw, u16 enable)
int hfa384x_cmd_download(hfa384x_t *hw, u16 mode, u16 lowaddr,
u16 highaddr, u16 codelen)
int hfa384x_corereset(hfa384x_t *hw, int holdtime, int settletime, int genesis)
static int hfa384x_usbctlx_complete_sync(hfa384x_t *hw,
hfa384x_usbctlx_t *ctlx,
struct usbctlx_completor *completor)
static int
hfa384x_docmd(hfa384x_t *hw,
enum cmd_mode mode,
hfa384x_metacmd_t *cmd,
ctlx_cmdcb_t cmdcb, ctlx_usercb_t usercb, void *usercb_data)
static int
hfa384x_dorrid(hfa384x_t *hw,
enum cmd_mode mode,
u16 rid,
void *riddata,
unsigned int riddatalen,
ctlx_cmdcb_t cmdcb, ctlx_usercb_t usercb, void *usercb_data)
static int
hfa384x_dowrid(hfa384x_t *hw,
enum cmd_mode mode,
u16 rid,
void *riddata,
unsigned int riddatalen,
ctlx_cmdcb_t cmdcb, ctlx_usercb_t usercb, void *usercb_data)
static int
hfa384x_dormem(hfa384x_t *hw,
enum cmd_mode mode,
u16 page,
u16 offset,
void *data,
unsigned int len,
ctlx_cmdcb_t cmdcb, ctlx_usercb_t usercb, void *usercb_data)
static int
hfa384x_dowmem(hfa384x_t *hw,
enum cmd_mode mode,
u16 page,
u16 offset,
void *data,
unsigned int len,
ctlx_cmdcb_t cmdcb, ctlx_usercb_t usercb, void *usercb_data)
int hfa384x_drvr_commtallies(hfa384x_t *hw)
int hfa384x_drvr_disable(hfa384x_t *hw, u16 macport)
int hfa384x_drvr_enable(hfa384x_t *hw, u16 macport)
int hfa384x_drvr_flashdl_enable(hfa384x_t *hw)
int hfa384x_drvr_flashdl_disable(hfa384x_t *hw)
int hfa384x_drvr_flashdl_write(hfa384x_t *hw, u32 daddr, void *buf, u32 len)
int hfa384x_drvr_getconfig(hfa384x_t *hw, u16 rid, void *buf, u16 len)
int
hfa384x_drvr_getconfig_async(hfa384x_t *hw,
u16 rid, ctlx_usercb_t usercb, void *usercb_data)
int
hfa384x_drvr_setconfig_async(hfa384x_t *hw,
u16 rid,
void *buf,
u16 len, ctlx_usercb_t usercb, void *usercb_data)
int hfa384x_drvr_ramdl_disable(hfa384x_t *hw)
int hfa384x_drvr_ramdl_enable(hfa384x_t *hw, u32 exeaddr)
int hfa384x_drvr_ramdl_write(hfa384x_t *hw, u32 daddr, void *buf, u32 len)
int hfa384x_drvr_readpda(hfa384x_t *hw, void *buf, unsigned int len)
int hfa384x_drvr_setconfig(hfa384x_t *hw, u16 rid, void *buf, u16 len)
int hfa384x_drvr_start(hfa384x_t *hw)
int hfa384x_drvr_stop(hfa384x_t *hw)
int hfa384x_drvr_txframe(hfa384x_t *hw, struct sk_buff *skb,
union p80211_hdr *p80211_hdr,
struct p80211_metawep *p80211_wep)
void hfa384x_tx_timeout(wlandevice_t *wlandev)
static void hfa384x_usbctlx_reaper_task(unsigned long data)
static void hfa384x_usbctlx_completion_task(unsigned long data)
static int unlocked_usbctlx_cancel_async(hfa384x_t *hw,
hfa384x_usbctlx_t *ctlx)
static void unlocked_usbctlx_complete(hfa384x_t *hw, hfa384x_usbctlx_t *ctlx)
static void hfa384x_usbctlxq_run(hfa384x_t *hw)
static void hfa384x_usbin_callback(struct urb *urb)
static void hfa384x_usbin_ctlx(hfa384x_t *hw, hfa384x_usbin_t *usbin,
int urb_status)
static void hfa384x_usbin_txcompl(wlandevice_t *wlandev,
hfa384x_usbin_t *usbin)
static void hfa384x_usbin_rx(wlandevice_t *wlandev, struct sk_buff *skb)
static void hfa384x_int_rxmonitor(wlandevice_t *wlandev,
hfa384x_usb_rxfrm_t *rxfrm)
static void hfa384x_usbin_info(wlandevice_t *wlandev, hfa384x_usbin_t *usbin)
static void hfa384x_usbout_callback(struct urb *urb)
static void hfa384x_ctlxout_callback(struct urb *urb)
static void hfa384x_usbctlx_reqtimerfn(unsigned long data)
static void hfa384x_usbctlx_resptimerfn(unsigned long data)
static void hfa384x_usb_throttlefn(unsigned long data)
static int hfa384x_usbctlx_submit(hfa384x_t *hw, hfa384x_usbctlx_t *ctlx)
static void hfa384x_usbout_tx(wlandevice_t *wlandev, hfa384x_usbout_t *usbout)
static int hfa384x_isgood_pdrcode(u16 pdrcode)
