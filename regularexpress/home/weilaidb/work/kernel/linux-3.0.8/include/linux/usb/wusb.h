#define __WUSB_H__
struct wuie_hdr  __attribute__((packed));
enum ;
#define WUIE_ELT_MAX 4
struct wusb_ckhdid  __attribute__((packed));
static const struct wusb_ckhdid wusb_ckhdid_zero = ;
#define WUSB_CKHDID_STRSIZE (3 * sizeof(struct wusb_ckhdid) + 1)
struct wuie_host_info  __attribute__((packed));
struct wuie_connect_ack  __attribute__((packed));
enum ;
struct wuie_channel_stop  __attribute__((packed));
struct wuie_keep_alive  __attribute__((packed));
struct wuie_reset  __attribute__((packed));
struct wuie_disconnect  __attribute__((packed));
struct wuie_host_disconnect  __attribute__((packed));
struct wusb_dn_hdr  __attribute__((packed));
enum WUSB_DN ;
struct wusb_dn_connect  __attribute__((packed));
static inline int wusb_dn_connect_prev_dev_addr(const struct wusb_dn_connect *dn)
static inline int wusb_dn_connect_new_connection(const struct wusb_dn_connect *dn)
static inline int wusb_dn_connect_beacon_behavior(const struct wusb_dn_connect *dn)
struct wusb_dn_alive  __attribute__((packed));
struct wusb_dn_disconnect  __attribute__((packed));
enum ;
static inline size_t ckhdid_printf(char *pr_ckhdid, size_t size,
const struct wusb_ckhdid *ckhdid)
extern const char *wusb_et_name(u8);
static inline u8 wusb_key_index(int index, int type, int originator)
#define WUSB_KEY_INDEX_TYPE_PTK			0
#define WUSB_KEY_INDEX_TYPE_ASSOC		1
#define WUSB_KEY_INDEX_TYPE_GTK			2
#define WUSB_KEY_INDEX_ORIGINATOR_HOST		0
#define WUSB_KEY_INDEX_ORIGINATOR_DEVICE	1
struct aes_ccm_nonce  __attribute__((packed));
struct aes_ccm_label  __attribute__((packed));
struct wusb_keydvt_in  __attribute__((packed));
struct wusb_keydvt_out  __attribute__((packed));
extern int wusb_crypto_init(void);
extern void wusb_crypto_exit(void);
extern ssize_t wusb_prf(void *out, size_t out_size,
const u8 key[16], const struct aes_ccm_nonce *_n,
const struct aes_ccm_label *a,
const void *b, size_t blen, size_t len);
static inline int wusb_prf_64(void *out, size_t out_size, const u8 key[16],
const struct aes_ccm_nonce *n,
const struct aes_ccm_label *a,
const void *b, size_t blen)
static inline int wusb_prf_128(void *out, size_t out_size, const u8 key[16],
const struct aes_ccm_nonce *n,
const struct aes_ccm_label *a,
const void *b, size_t blen)
static inline int wusb_prf_256(void *out, size_t out_size, const u8 key[16],
const struct aes_ccm_nonce *n,
const struct aes_ccm_label *a,
const void *b, size_t blen)
static inline int wusb_key_derive(struct wusb_keydvt_out *keydvt_out,
const u8 key[16],
const struct aes_ccm_nonce *n,
const struct wusb_keydvt_in *keydvt_in)
static inline int wusb_oob_mic(u8 mic_out[8], const u8 key[16],
const struct aes_ccm_nonce *n,
const struct usb_handshake *hs)
