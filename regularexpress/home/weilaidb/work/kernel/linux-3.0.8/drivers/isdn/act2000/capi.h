#define CAPI_H
typedef struct actcapi_msgcmd  actcapi_msgcmd;
typedef struct actcapi_msghdr  actcapi_msghdr;
typedef struct actcapi_msgdsc  actcapi_msgdsc;
typedef struct actcapi_addr  actcapi_addr;
typedef  union actcapi_infonr  actcapi_infonr;
typedef union  actcapi_infoel  actcapi_infoel;
typedef struct actcapi_msn   __attribute__((packed)) actcapi_msn;
typedef struct actcapi_dlpd  __attribute__((packed)) actcapi_dlpd;
typedef struct actcapi_ncpd  __attribute__((packed)) actcapi_ncpd;
#define actcapi_ncpi actcapi_ncpd
#define MAKE_NCCI(plci,contr,ncci) \
((plci & 0x1f) | ((contr & 0x7) << 5) | ((ncci & 0xff) << 8))
#define EVAL_NCCI(fakencci,plci,contr,ncci)
#define MAKE_PLCI(plci,contr) \
((plci & 0x1f) | ((contr & 0x7) << 5))
#define EVAL_PLCI(fakeplci,plci,contr)
typedef struct actcapi_msg  __attribute__ ((packed)) actcapi_msg;
static inline unsigned short
actcapi_nextsmsg(act2000_card *card)
#define DEBUG_MSG
#undef DEBUG_DATA_MSG
#undef DEBUG_DUMP_SKB
extern int actcapi_chkhdr(act2000_card *, actcapi_msghdr *);
extern int actcapi_listen_req(act2000_card *);
extern int actcapi_manufacturer_req_net(act2000_card *);
extern int actcapi_manufacturer_req_errh(act2000_card *);
extern int actcapi_manufacturer_req_msn(act2000_card *);
extern int actcapi_connect_req(act2000_card *, act2000_chan *, char *, char, int, int);
extern void actcapi_select_b2_protocol_req(act2000_card *, act2000_chan *);
extern void actcapi_disconnect_b3_req(act2000_card *, act2000_chan *);
extern void actcapi_connect_resp(act2000_card *, act2000_chan *, __u8);
extern void actcapi_dispatch(struct work_struct *);
extern void actcapi_debug_msg(struct sk_buff *skb, int);
#define actcapi_debug_msg(skb, len)
