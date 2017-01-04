#define _FC_ENCAPS_H_
#define FC_ENCAPS_MIN_FRAME_LEN 64
#define FC_ENCAPS_MAX_FRAME_LEN (FC_ENCAPS_MIN_FRAME_LEN + FC_MAX_PAYLOAD)
#define FC_ENCAPS_VER       1
struct fc_encaps_hdr ;
#define FCIP_ENCAPS_HDR_LEN 0x20
#define FC_XY(x, y)		((((x) & 0xff) << 8) | ((y) & 0xff))
#define FC_XYXY(x, y)		((FCIP_XY(x, y) << 16) | FCIP_XY(x, y))
#define FC_XYNN(x, y)		(FCIP_XYXY(x, y) ^ 0xffff)
#define FC_SOF_ENCODE(n)	FC_XYNN(n, n)
#define FC_EOF_ENCODE(n)	FC_XYNN(n, n)
enum fc_sof  __attribute__((packed));
enum fc_eof  __attribute__((packed));
#define FC_SOF_CLASS_MASK 0x06
enum fc_class ;
static inline int fc_sof_needs_ack(enum fc_sof sof)
static inline enum fc_sof fc_sof_normal(enum fc_class class)
static inline enum fc_class fc_sof_class(enum fc_sof sof)
static inline int fc_sof_is_init(enum fc_sof sof)
