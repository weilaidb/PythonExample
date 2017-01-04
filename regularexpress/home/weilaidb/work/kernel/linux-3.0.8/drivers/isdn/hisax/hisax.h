#define ERROR_STATISTIC
#define REQUEST		0
#define CONFIRM		1
#define INDICATION	2
#define RESPONSE	3
#define HW_ENABLE	0x0000
#define HW_RESET	0x0004
#define HW_POWERUP	0x0008
#define HW_ACTIVATE	0x0010
#define HW_DEACTIVATE	0x0018
#define HW_INFO1	0x0010
#define HW_INFO2	0x0020
#define HW_INFO3	0x0030
#define HW_INFO4	0x0040
#define HW_INFO4_P8	0x0040
#define HW_INFO4_P10	0x0048
#define HW_RSYNC	0x0060
#define HW_TESTLOOP	0x0070
#define CARD_RESET	0x00F0
#define CARD_INIT	0x00F2
#define CARD_RELEASE	0x00F3
#define CARD_TEST	0x00F4
#define CARD_AUX_IND	0x00F5
#define PH_ACTIVATE	0x0100
#define PH_DEACTIVATE	0x0110
#define PH_DATA		0x0120
#define PH_PULL		0x0130
#define PH_TESTLOOP	0x0140
#define PH_PAUSE	0x0150
#define MPH_ACTIVATE	0x0180
#define MPH_DEACTIVATE	0x0190
#define MPH_INFORMATION	0x01A0
#define DL_ESTABLISH	0x0200
#define DL_RELEASE	0x0210
#define DL_DATA		0x0220
#define DL_FLUSH	0x0224
#define DL_UNIT_DATA	0x0230
#define MDL_BC_RELEASE  0x0278
#define MDL_BC_ASSIGN   0x027C
#define MDL_ASSIGN	0x0280
#define MDL_REMOVE	0x0284
#define MDL_ERROR	0x0288
#define MDL_INFO_SETUP	0x02E0
#define MDL_INFO_CONN	0x02E4
#define MDL_INFO_REL	0x02E8
#define CC_SETUP	0x0300
#define CC_RESUME	0x0304
#define CC_MORE_INFO	0x0310
#define CC_IGNORE	0x0320
#define CC_REJECT	0x0324
#define CC_SETUP_COMPL	0x0330
#define CC_PROCEEDING	0x0340
#define CC_ALERTING	0x0344
#define CC_PROGRESS	0x0348
#define CC_CONNECT	0x0350
#define CC_CHARGE	0x0354
#define CC_NOTIFY	0x0358
#define CC_DISCONNECT	0x0360
#define CC_RELEASE	0x0368
#define CC_SUSPEND	0x0370
#define CC_PROCEED_SEND 0x0374
#define CC_REDIR        0x0378
#define CC_T302		0x0382
#define CC_T303		0x0383
#define CC_T304		0x0384
#define CC_T305		0x0385
#define CC_T308_1	0x0388
#define CC_T308_2	0x038A
#define CC_T309         0x0309
#define CC_T310		0x0390
#define CC_T313		0x0393
#define CC_T318		0x0398
#define CC_T319		0x0399
#define CC_TSPID	0x03A0
#define CC_NOSETUP_RSP	0x03E0
#define CC_SETUP_ERR	0x03E1
#define CC_SUSPEND_ERR	0x03E2
#define CC_RESUME_ERR	0x03E3
#define CC_CONNECT_ERR	0x03E4
#define CC_RELEASE_ERR	0x03E5
#define CC_RESTART	0x03F4
#define CC_TDSS1_IO     0x13F4
#define CC_TNI1_IO      0x13F5
#define MAX_WAITING_CALLS 2
extern const char *CardType[];
extern int nrcards;
extern const char *l1_revision;
extern const char *l2_revision;
extern const char *l3_revision;
extern const char *lli_revision;
extern const char *tei_revision;
#define l3dss1_process
#undef  l3dss1_process
#define l3ni1_process
#undef  l3ni1_process
#define MAX_DFRAME_LEN	260
#define MAX_DFRAME_LEN_L1	300
#define HSCX_BUFMAX	4096
#define MAX_DATA_SIZE	(HSCX_BUFMAX - 4)
#define MAX_DATA_MEM	(HSCX_BUFMAX + 64)
#define RAW_BUFMAX	(((HSCX_BUFMAX*6)/5) + 5)
#define MAX_HEADER_LEN	4
#define MAX_WINDOW	8
#define MAX_MON_FRAME	32
#define MAX_DLOG_SPACE	2048
#define MAX_BLOG_SPACE	256
#define I4L_IRQ_FLAG    0
struct FsmInst;
typedef void (* FSMFNPTR)(struct FsmInst *, int, void *);
struct Fsm ;
struct FsmInst ;
struct FsmNode ;
struct FsmTimer ;
struct L3Timer ;
#define FLG_L1_ACTIVATING	1
#define FLG_L1_ACTIVATED	2
#define FLG_L1_DEACTTIMER	3
#define FLG_L1_ACTTIMER		4
#define FLG_L1_T3RUN		5
#define FLG_L1_PULL_REQ		6
#define FLG_L1_UINT		7
struct Layer1 ;
#define GROUP_TEI	127
#define TEI_SAPI	63
#define CTRL_SAPI	0
#define PACKET_NOACK	7
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
struct Layer2 ;
struct Layer3 ;
struct LLInterface ;
#define	FLG_LLI_L1WAKEUP	1
#define	FLG_LLI_L2WAKEUP	2
struct Management ;
#define NO_CAUSE 254
struct Param ;
struct PStack ;
struct l3_process ;
struct hscx_hw ;
struct w6692B_hw ;
struct isar_reg ;
struct isar_hw ;
struct hdlc_stat_reg  __attribute__((packed));
struct hdlc_hw ;
struct hfcB_hw ;
struct tiger_hw ;
struct amd7930_hw ;
#define BC_FLG_INIT	1
#define BC_FLG_ACTIV	2
#define BC_FLG_BUSY	3
#define BC_FLG_NOFRAME	4
#define BC_FLG_HALF	5
#define BC_FLG_EMPTY	6
#define BC_FLG_ORIG	7
#define BC_FLG_DLEETX	8
#define BC_FLG_LASTDLE	9
#define BC_FLG_FIRST	10
#define BC_FLG_LASTDATA	11
#define BC_FLG_NMD_DATA	12
#define BC_FLG_FTI_RUN	13
#define BC_FLG_LL_OK	14
#define BC_FLG_LL_CONN	15
#define BC_FLG_FTI_FTS	16
#define BC_FLG_FRH_WAIT	17
#define L1_MODE_NULL	0
#define L1_MODE_TRANS	1
#define L1_MODE_HDLC	2
#define L1_MODE_EXTRN	3
#define L1_MODE_HDLC_56K 4
#define L1_MODE_MODEM	7
#define L1_MODE_V32	8
#define L1_MODE_FAX	9
struct BCState ;
struct Channel ;
struct elsa_hw ;
struct teles3_hw ;
struct teles0_hw ;
struct avm_hw ;
struct ix1_hw ;
struct diva_hw ;
struct asus_hw ;
struct hfc_hw ;
struct sedl_hw ;
struct spt_hw ;
struct mic_hw ;
struct njet_hw ;
struct hfcPCI_hw ;
struct hfcSX_hw ;
struct hfcD_hw ;
struct isurf_hw ;
struct saphir_hw ;
struct bkm_hw ;
struct gazel_hw ;
struct w6692_hw ;
struct arcofi_msg ;
struct isac_chip ;
struct hfcd_chip ;
struct hfcpci_chip ;
struct hfcsx_chip ;
struct w6692_chip ;
struct amd7930_chip ;
struct icc_chip ;
#define HW_IOM1			0
#define HW_IPAC			1
#define HW_ISAR			2
#define HW_ARCOFI		3
#define FLG_TWO_DCHAN		4
#define FLG_L1_DBUSY		5
#define FLG_DBUSY_TIMER 	6
#define FLG_LOCK_ATOMIC 	7
#define FLG_ARCOFI_TIMER	8
#define FLG_ARCOFI_ERROR	9
#define FLG_HW_L1_UINT		10
struct IsdnCardState ;
#define  schedule_event(s, ev)	do  while(0)
#define  MON0_RX	1
#define  MON1_RX	2
#define  MON0_TX	4
#define  MON1_TX	8
#undef ISDN_CHIP_ISAC
#define  CARD_TELES0 1
#define ISDN_CHIP_ISAC 1
#define  CARD_TELES0  0
#define  CARD_TELES3 1
#define ISDN_CHIP_ISAC 1
#define  CARD_TELES3  0
#define  CARD_TELESPCI 1
#define ISDN_CHIP_ISAC 1
#define  CARD_TELESPCI  0
#define  CARD_AVM_A1 1
#define ISDN_CHIP_ISAC 1
#define  CARD_AVM_A1  0
#define  CARD_AVM_A1_PCMCIA 1
#define ISDN_CHIP_ISAC 1
#define  CARD_AVM_A1_PCMCIA  0
#define  CARD_FRITZPCI 1
#define ISDN_CHIP_ISAC 1
#define  CARD_FRITZPCI  0
#define  CARD_ELSA 1
#define ISDN_CHIP_ISAC 1
#define  CARD_ELSA  0
#define	CARD_IX1MICROR2 1
#define ISDN_CHIP_ISAC 1
#define CARD_IX1MICROR2 0
#define CARD_DIEHLDIVA 1
#define ISDN_CHIP_ISAC 1
#define CARD_DIEHLDIVA 0
#define CARD_ASUSCOM 1
#define ISDN_CHIP_ISAC 1
#define CARD_ASUSCOM 0
#define CARD_TELEINT 1
#define ISDN_CHIP_ISAC 1
#define CARD_TELEINT 0
#define CARD_SEDLBAUER 1
#define ISDN_CHIP_ISAC 1
#define CARD_SEDLBAUER 0
#define CARD_SPORTSTER 1
#define ISDN_CHIP_ISAC 1
#define CARD_SPORTSTER 0
#define CARD_MIC 1
#define ISDN_CHIP_ISAC 1
#define CARD_MIC 0
#define CARD_NETJET_S 1
#define ISDN_CHIP_ISAC 1
#define CARD_NETJET_S 0
#define  CARD_HFCS 1
#define  CARD_HFCS 0
#define  CARD_HFC_PCI 1
#define  CARD_HFC_PCI 0
#define  CARD_HFC_SX 1
#define  CARD_HFC_SX 0
#define	CARD_NICCY 1
#define ISDN_CHIP_ISAC 1
#define CARD_NICCY 0
#define	CARD_ISURF 1
#define ISDN_CHIP_ISAC 1
#define CARD_ISURF 0
#define	CARD_S0BOX 1
#define ISDN_CHIP_ISAC 1
#define CARD_S0BOX 0
#define	CARD_HSTSAPHIR 1
#define ISDN_CHIP_ISAC 1
#define CARD_HSTSAPHIR 0
#define	CARD_BKM_A4T 1
#define ISDN_CHIP_ISAC 1
#define CARD_BKM_A4T 0
#define	CARD_SCT_QUADRO 1
#define ISDN_CHIP_ISAC 1
#define CARD_SCT_QUADRO 0
#define  CARD_GAZEL 1
#define ISDN_CHIP_ISAC 1
#define  CARD_GAZEL  0
#define	CARD_W6692	1
#define	ISDN_CHIP_W6692	1
#define	CARD_W6692	0
#define CARD_NETJET_U 1
#define ISDN_CHIP_ICC 1
#define HISAX_UINTERFACE 1
#define CARD_NETJET_U 0
#define CARD_FN_ENTERNOW_PCI 1
#define CARD_FN_ENTERNOW_PCI 0
#define TEI_PER_CARD 1
#define	L1_DEB_WARN		0x01
#define	L1_DEB_INTSTAT		0x02
#define	L1_DEB_ISAC		0x04
#define	L1_DEB_ISAC_FIFO	0x08
#define	L1_DEB_HSCX		0x10
#define	L1_DEB_HSCX_FIFO	0x20
#define	L1_DEB_LAPD	        0x40
#define	L1_DEB_IPAC	        0x80
#define	L1_DEB_RECEIVE_FRAME    0x100
#define L1_DEB_MONITOR		0x200
#define DEB_DLOG_HEX		0x400
#define DEB_DLOG_VERBOSE	0x800
#define L2FRAME_DEBUG
extern void Logl2Frame(struct IsdnCardState *cs, struct sk_buff *skb, char *buf, int dir);
void init_bcstate(struct IsdnCardState *cs, int bc);
void setstack_HiSax(struct PStack *st, struct IsdnCardState *cs);
void HiSax_addlist(struct IsdnCardState *sp, struct PStack *st);
void HiSax_rmlist(struct IsdnCardState *sp, struct PStack *st);
void setstack_l1_B(struct PStack *st);
void setstack_tei(struct PStack *st);
void setstack_manager(struct PStack *st);
void setstack_isdnl2(struct PStack *st, char *debug_id);
void releasestack_isdnl2(struct PStack *st);
void setstack_transl2(struct PStack *st);
void releasestack_transl2(struct PStack *st);
void lli_writewakeup(struct PStack *st, int len);
void setstack_l3dc(struct PStack *st, struct Channel *chanp);
void setstack_l3bc(struct PStack *st, struct Channel *chanp);
void releasestack_isdnl3(struct PStack *st);
u_char *findie(u_char * p, int size, u_char ie, int wanted_set);
int getcallref(u_char * p);
int newcallref(void);
int FsmNew(struct Fsm *fsm, struct FsmNode *fnlist, int fncount);
void FsmFree(struct Fsm *fsm);
int FsmEvent(struct FsmInst *fi, int event, void *arg);
void FsmChangeState(struct FsmInst *fi, int newstate);
void FsmInitTimer(struct FsmInst *fi, struct FsmTimer *ft);
int FsmAddTimer(struct FsmTimer *ft, int millisec, int event,
void *arg, int where);
void FsmRestartTimer(struct FsmTimer *ft, int millisec, int event,
void *arg, int where);
void FsmDelTimer(struct FsmTimer *ft, int where);
int jiftime(char *s, long mark);
int HiSax_command(isdn_ctrl * ic);
int HiSax_writebuf_skb(int id, int chan, int ack, struct sk_buff *skb);
__attribute__((format(printf, 3, 4)))
void HiSax_putstatus(struct IsdnCardState *cs, char *head, char *fmt, ...);
__attribute__((format(printf, 3, 0)))
void VHiSax_putstatus(struct IsdnCardState *cs, char *head, char *fmt, va_list args);
void HiSax_reportcard(int cardnr, int sel);
int QuickHex(char *txt, u_char * p, int cnt);
void LogFrame(struct IsdnCardState *cs, u_char * p, int size);
void dlogframe(struct IsdnCardState *cs, struct sk_buff *skb, int dir);
void iecpy(u_char * dest, u_char * iestart, int ieoffset);
#define HZDELAY(jiffs) do  while (0)
int ll_run(struct IsdnCardState *cs, int addfeatures);
int CallcNew(void);
void CallcFree(void);
int CallcNewChan(struct IsdnCardState *cs);
void CallcFreeChan(struct IsdnCardState *cs);
int Isdnl1New(void);
void Isdnl1Free(void);
int Isdnl2New(void);
void Isdnl2Free(void);
int Isdnl3New(void);
void Isdnl3Free(void);
void init_tei(struct IsdnCardState *cs, int protocol);
void release_tei(struct IsdnCardState *cs);
char *HiSax_getrev(const char *revision);
int TeiNew(void);
void TeiFree(void);
static inline struct pci_dev *hisax_find_pci_device(unsigned int vendor,
unsigned int device,
struct pci_dev *from)
