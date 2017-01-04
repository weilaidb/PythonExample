#define __ISDNHDLC_H__
struct isdnhdlc_vars ;
#define HDLC_56KBIT	0x01
#define HDLC_DCHANNEL	0x02
#define HDLC_BITREVERSE	0x04
#define HDLC_FRAMING_ERROR     1
#define HDLC_CRC_ERROR         2
#define HDLC_LENGTH_ERROR      3
extern void	isdnhdlc_rcv_init(struct isdnhdlc_vars *hdlc, u32 features);
extern int	isdnhdlc_decode(struct isdnhdlc_vars *hdlc, const u8 *src,
int slen, int *count, u8 *dst, int dsize);
extern void	isdnhdlc_out_init(struct isdnhdlc_vars *hdlc, u32 features);
extern int	isdnhdlc_encode(struct isdnhdlc_vars *hdlc, const u8 *src,
u16 slen, int *count, u8 *dst, int dsize);
