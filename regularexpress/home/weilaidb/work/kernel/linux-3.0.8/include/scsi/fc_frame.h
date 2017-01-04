#define _FC_FRAME_H_
#define ntohll(x) be64_to_cpu(x)
#define htonll(x) cpu_to_be64(x)
static inline u32 ntoh24(const u8 *p)
static inline void hton24(u8 *p, u32 v)
#define	FC_FRAME_HEADROOM	32
#define	FC_FRAME_TAILROOM	8
#define FC_FRAME_SG_LEN		(MAX_SKB_FRAGS - 1)
#define fp_skb(fp)	(&((fp)->skb))
#define fr_hdr(fp)	((fp)->skb.data)
#define fr_len(fp)	((fp)->skb.len)
#define fr_cb(fp)	((struct fcoe_rcv_info *)&((fp)->skb.cb[0]))
#define fr_dev(fp)	(fr_cb(fp)->fr_dev)
#define fr_seq(fp)	(fr_cb(fp)->fr_seq)
#define fr_sof(fp)	(fr_cb(fp)->fr_sof)
#define fr_eof(fp)	(fr_cb(fp)->fr_eof)
#define fr_flags(fp)	(fr_cb(fp)->fr_flags)
#define fr_encaps(fp)	(fr_cb(fp)->fr_encaps)
#define fr_max_payload(fp)	(fr_cb(fp)->fr_max_payload)
#define fr_fsp(fp)	(fr_cb(fp)->fr_fsp)
#define fr_crc(fp)	(fr_cb(fp)->fr_crc)
struct fc_frame ;
struct fcoe_rcv_info ;
static inline struct fcoe_rcv_info *fcoe_dev_from_skb(const struct sk_buff *skb)
#define	FCPHF_CRC_UNCHECKED	0x01
static inline void fc_frame_init(struct fc_frame *fp)
struct fc_frame *fc_frame_alloc_fill(struct fc_lport *, size_t payload_len);
struct fc_frame *_fc_frame_alloc(size_t payload_len);
static inline struct fc_frame *fc_frame_alloc(struct fc_lport *dev, size_t len)
static inline void fc_frame_free(struct fc_frame *fp)
static inline int fc_frame_is_linear(struct fc_frame *fp)
static inline
struct fc_frame_header *__fc_frame_header_get(const struct fc_frame *fp)
static inline
struct fc_frame_header *fc_frame_header_get(const struct fc_frame *fp)
static inline u32 fc_frame_sid(const struct fc_frame *fp)
static inline u32 fc_frame_did(const struct fc_frame *fp)
static inline void *fc_frame_payload_get(const struct fc_frame *fp,
size_t len)
static inline u8 fc_frame_payload_op(const struct fc_frame *fp)
static inline enum fc_class fc_frame_class(const struct fc_frame *fp)
u32 fc_frame_crc_check(struct fc_frame *);
static inline u8 fc_frame_rctl(const struct fc_frame *fp)
static inline bool fc_frame_is_cmd(const struct fc_frame *fp)
void fc_frame_leak_check(void);
