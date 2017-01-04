#define _isdn_v110_h_
extern struct sk_buff *isdn_v110_encode(isdn_v110_stream *, struct sk_buff *);
extern struct sk_buff *isdn_v110_decode(isdn_v110_stream *, struct sk_buff *);
extern int isdn_v110_stat_callback(int, isdn_ctrl *);
extern void isdn_v110_close(isdn_v110_stream * v);
