#define MAX_WINDOW	8
struct manager ;
struct teimgr ;
struct laddr ;
struct layer2 ;
enum ;
#define L2_STATE_COUNT (ST_L2_8+1)
extern struct layer2	*create_l2(struct mISDNchannel *, u_int,
u_long, int, int);
extern int		tei_l2(struct layer2 *, u_int, u_long arg);
extern int 		l2_tei(struct layer2 *, u_int, u_long arg);
extern void 		TEIrelease(struct layer2 *);
extern int 		TEIInit(u_int *);
extern void 		TEIFree(void);
#define MAX_L2HEADER_LEN 4
#define RR	0x01
#define RNR	0x05
#define REJ	0x09
#define SABME	0x6f
#define SABM	0x2f
#define DM	0x0f
#define UI	0x03
#define DISC	0x43
#define UA	0x63
#define FRMR	0x87
#define XID	0xaf
#define CMD	0
#define RSP	1
#define LC_FLUSH_WAIT 1
#define FLG_LAPB	0
#define FLG_LAPD	1
#define FLG_ORIG	2
#define FLG_MOD128	3
#define FLG_PEND_REL	4
#define FLG_L3_INIT	5
#define FLG_T200_RUN	6
#define FLG_ACK_PEND	7
#define FLG_REJEXC	8
#define FLG_OWN_BUSY	9
#define FLG_PEER_BUSY	10
#define FLG_DCHAN_BUSY	11
#define FLG_L1_ACTIV	12
#define FLG_ESTAB_PEND	13
#define FLG_PTP		14
#define FLG_FIXED_TEI	15
#define FLG_L2BLOCK	16
#define FLG_L1_NOTREADY	17
#define FLG_LAPD_NET	18
