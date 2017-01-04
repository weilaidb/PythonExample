#define DRIVER_NAME "orinoco_usb"
#define PFX DRIVER_NAME ": "
#define URB_ASYNC_UNLINK 0
static const u8 encaps_hdr[] = ;
#define ENCAPS_OVERHEAD		(sizeof(encaps_hdr) + 2)
struct header_struct  __packed;
struct ez_usb_fw ;
static struct ez_usb_fw firmware = ;
static int debug = 1;
static int debug;
#undef dbg
#define dbg(format, arg...) \
do  while (0)
#undef err
#define err(format, arg...) \
do  while (0)
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "Debug enabled or not");
MODULE_FIRMWARE("orinoco_ezusb_fw");
#define USB_COMPAQ_VENDOR_ID     0x049f
#define USB_COMPAQ_WL215_ID      0x001f
#define USB_COMPAQ_W200_ID       0x0076
#define USB_HP_WL215_ID          0x0082
#define USB_MELCO_VENDOR_ID      0x0411
#define USB_BUFFALO_L11_ID       0x0006
#define USB_BUFFALO_L11G_WR_ID   0x000B
#define USB_BUFFALO_L11G_ID      0x000D
#define USB_LUCENT_VENDOR_ID     0x047E
#define USB_LUCENT_ORINOCO_ID    0x0300
#define USB_AVAYA8_VENDOR_ID     0x0D98
#define USB_AVAYAE_VENDOR_ID     0x0D9E
#define USB_AVAYA_WIRELESS_ID    0x0300
#define USB_AGERE_VENDOR_ID      0x0D4E
#define USB_AGERE_MODEL0801_ID   0x1000
#define USB_AGERE_MODEL0802_ID   0x1001
#define USB_AGERE_REBRANDED_ID   0x047A
#define USB_ELSA_VENDOR_ID       0x05CC
#define USB_ELSA_AIRLANCER_ID    0x3100
#define USB_LEGEND_VENDOR_ID     0x0E7C
#define USB_LEGEND_JOYNET_ID     0x0300
#define USB_SAMSUNG_VENDOR_ID    0x04E8
#define USB_SAMSUNG_SEW2001U1_ID 0x5002
#define USB_SAMSUNG_SEW2001U2_ID 0x5B11
#define USB_SAMSUNG_SEW2003U_ID  0x7011
#define USB_IGATE_VENDOR_ID      0x0681
#define USB_IGATE_IGATE_11M_ID   0x0012
#define USB_FUJITSU_VENDOR_ID    0x0BF8
#define USB_FUJITSU_E1100_ID     0x1002
#define USB_2WIRE_VENDOR_ID      0x1630
#define USB_2WIRE_WIRELESS_ID    0xff81
#define EZUSB_REQUEST_FW_TRANS		0xA0
#define EZUSB_REQUEST_TRIGER		0xAA
#define EZUSB_REQUEST_TRIG_AC		0xAC
#define EZUSB_CPUCS_REG			0x7F92
#define EZUSB_RID_TX			0x0700
#define EZUSB_RID_RX			0x0701
#define EZUSB_RID_INIT1			0x0702
#define EZUSB_RID_ACK			0x0710
#define EZUSB_RID_READ_PDA		0x0800
#define EZUSB_RID_PROG_INIT		0x0852
#define EZUSB_RID_PROG_SET_ADDR		0x0853
#define EZUSB_RID_PROG_BYTES		0x0854
#define EZUSB_RID_PROG_END		0x0855
#define EZUSB_RID_DOCMD			0x0860
#define EZUSB_IS_INFO(id)		((id >= 0xF000) && (id <= 0xF2FF))
#define EZUSB_MAGIC			0x0210
#define EZUSB_FRAME_DATA		1
#define EZUSB_FRAME_CONTROL		2
#define DEF_TIMEOUT			(3*HZ)
#define BULK_BUF_SIZE			2048
#define MAX_DL_SIZE (BULK_BUF_SIZE - sizeof(struct ezusb_packet))
#define FW_BUF_SIZE			64
#define FW_VAR_OFFSET_PTR		0x359
#define FW_VAR_VALUE			0
#define FW_HOLE_START			0x100
#define FW_HOLE_END			0x300
struct ezusb_packet  __packed;
static struct usb_device_id ezusb_table[] = ;
MODULE_DEVICE_TABLE(usb, ezusb_table);
struct ezusb_priv ;
enum ezusb_state ;
struct request_context ;
static void ezusb_ctx_complete(struct request_context *ctx);
static void ezusb_req_queue_run(struct ezusb_priv *upriv);
static void ezusb_bulk_in_callback(struct urb *urb);
static inline u8 ezusb_reply_inc(u8 count)
static void ezusb_request_context_put(struct request_context *ctx)
static inline void ezusb_mod_timer(struct ezusb_priv *upriv,
struct timer_list *timer,
unsigned long expire)
static void ezusb_request_timerfn(u_long _ctx)
;
static struct request_context *ezusb_alloc_ctx(struct ezusb_priv *upriv,
u16 out_rid, u16 in_rid)
static inline void ezusb_complete_all(struct completion *comp)
static void ezusb_ctx_complete(struct request_context *ctx)
static void ezusb_req_queue_run(struct ezusb_priv *upriv)
static void ezusb_req_enqueue_run(struct ezusb_priv *upriv,
struct request_context *ctx)
static void ezusb_request_out_callback(struct urb *urb)
static void ezusb_request_in_callback(struct ezusb_priv *upriv,
struct urb *urb)
static void ezusb_req_ctx_wait(struct ezusb_priv *upriv,
struct request_context *ctx)
static inline u16 build_crc(struct ezusb_packet *data)
static int ezusb_fill_req(struct ezusb_packet *req, u16 length, u16 rid,
const void *data, u16 frame_type, u8 reply_count)
static int ezusb_submit_in_urb(struct ezusb_priv *upriv)
static inline int ezusb_8051_cpucs(struct ezusb_priv *upriv, int reset)
static int ezusb_firmware_download(struct ezusb_priv *upriv,
struct ez_usb_fw *fw)
static int ezusb_access_ltv(struct ezusb_priv *upriv,
struct request_context *ctx,
u16 length, const void *data, u16 frame_type,
void *ans_buff, int ans_size, u16 *ans_length)
static int ezusb_write_ltv(hermes_t *hw, int bap, u16 rid,
u16 length, const void *data)
static int ezusb_read_ltv(hermes_t *hw, int bap, u16 rid,
unsigned bufsize, u16 *length, void *buf)
static int ezusb_doicmd_wait(hermes_t *hw, u16 cmd, u16 parm0, u16 parm1,
u16 parm2, struct hermes_response *resp)
static int ezusb_docmd_wait(hermes_t *hw, u16 cmd, u16 parm0,
struct hermes_response *resp)
static int ezusb_bap_pread(struct hermes *hw, int bap,
void *buf, int len, u16 id, u16 offset)
static int ezusb_read_pda(struct hermes *hw, __le16 *pda,
u32 pda_addr, u16 pda_len)
static int ezusb_program_init(struct hermes *hw, u32 entry_point)
static int ezusb_program_end(struct hermes *hw)
static int ezusb_program_bytes(struct hermes *hw, const char *buf,
u32 addr, u32 len)
static int ezusb_program(struct hermes *hw, const char *buf,
u32 addr, u32 len)
static netdev_tx_t ezusb_xmit(struct sk_buff *skb, struct net_device *dev)
static int ezusb_allocate(struct hermes *hw, u16 size, u16 *fid)
static int ezusb_hard_reset(struct orinoco_private *priv)
static int ezusb_init(hermes_t *hw)
static void ezusb_bulk_in_callback(struct urb *urb)
static inline void ezusb_delete(struct ezusb_priv *upriv)
static void ezusb_lock_irqsave(spinlock_t *lock,
unsigned long *flags) __acquires(lock)
static void ezusb_unlock_irqrestore(spinlock_t *lock,
unsigned long *flags) __releases(lock)
static void ezusb_lock_irq(spinlock_t *lock) __acquires(lock)
static void ezusb_unlock_irq(spinlock_t *lock) __releases(lock)
static const struct hermes_ops ezusb_ops = ;
static const struct net_device_ops ezusb_netdev_ops = ;
static int ezusb_probe(struct usb_interface *interface,
const struct usb_device_id *id)
static void ezusb_disconnect(struct usb_interface *intf)
static struct usb_driver orinoco_driver = ;
static char version[] __initdata = DRIVER_NAME " " DRIVER_VERSION
" (Manuel Estrada Sainz)";
static int __init ezusb_module_init(void)
static void __exit ezusb_module_exit(void)
module_init(ezusb_module_init);
module_exit(ezusb_module_exit);
MODULE_AUTHOR("Manuel Estrada Sainz");
MODULE_DESCRIPTION
("Driver for Orinoco wireless LAN cards using EZUSB bridge");
MODULE_LICENSE("Dual MPL/GPL");
