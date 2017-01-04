#define _LINUX_ISDN_PPP_H
#define CALLTYPE_INCOMING 0x1
#define CALLTYPE_OUTGOING 0x2
#define CALLTYPE_CALLBACK 0x4
#define IPPP_VERSION    "2.2.0"
struct pppcallinfo
;
#define PPPIOCGCALLINFO _IOWR('t',128,struct pppcallinfo)
#define PPPIOCBUNDLE   _IOW('t',129,int)
#define PPPIOCGMPFLAGS _IOR('t',130,int)
#define PPPIOCSMPFLAGS _IOW('t',131,int)
#define PPPIOCSMPMTU   _IOW('t',132,int)
#define PPPIOCSMPMRU   _IOW('t',133,int)
#define PPPIOCGCOMPRESSORS _IOR('t',134,unsigned long [8])
#define PPPIOCSCOMPRESSOR _IOW('t',135,int)
#define PPPIOCGIFNAME      _IOR('t',136, char [IFNAMSIZ] )
#define SC_MP_PROT       0x00000200
#define SC_REJ_MP_PROT   0x00000400
#define SC_OUT_SHORT_SEQ 0x00000800
#define SC_IN_SHORT_SEQ  0x00004000
#define SC_DECOMP_ON		0x01
#define SC_COMP_ON		0x02
#define SC_DECOMP_DISCARD	0x04
#define SC_COMP_DISCARD		0x08
#define SC_LINK_DECOMP_ON	0x10
#define SC_LINK_COMP_ON		0x20
#define SC_LINK_DECOMP_DISCARD	0x40
#define SC_LINK_COMP_DISCARD	0x80
#define ISDN_PPP_COMP_MAX_OPTIONS 16
#define IPPP_COMP_FLAG_XMIT 0x1
#define IPPP_COMP_FLAG_LINK 0x2
struct isdn_ppp_comp_data ;
#define DECOMP_ERR_NOMEM	(-10)
#define MP_END_FRAG    0x40
#define MP_BEGIN_FRAG  0x80
#define MP_MAX_QUEUE_LEN	16
#define IPPP_RESET_MAXDATABYTES	32
struct isdn_ppp_resetparams ;
struct isdn_ppp_compressor ;
extern int isdn_ppp_register_compressor(struct isdn_ppp_compressor *);
extern int isdn_ppp_unregister_compressor(struct isdn_ppp_compressor *);
extern int isdn_ppp_dial_slave(char *);
extern int isdn_ppp_hangup_slave(char *);
typedef struct  isdn_mppp_stats;
typedef struct  ippp_bundle;
#define NUM_RCV_BUFFS     64
struct ippp_buf_queue ;
enum ippp_ccp_reset_states ;
struct ippp_ccp_reset_state ;
struct ippp_ccp_reset ;
struct ippp_struct ;
