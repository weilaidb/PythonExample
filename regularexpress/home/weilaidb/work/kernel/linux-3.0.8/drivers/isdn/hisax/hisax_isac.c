#define __debug_variable debug
static int debug = 1;
module_param(debug, int, 0);
static char *ISACVer[] = ;
MODULE_AUTHOR("Kai Germaschewski <kai.germaschewski@gmx.de>/Karsten Keil <kkeil@suse.de>");
MODULE_DESCRIPTION("ISAC/ISAC-SX driver");
MODULE_LICENSE("GPL");
#define DBG_WARN      0x0001
#define DBG_IRQ       0x0002
#define DBG_L1M       0x0004
#define DBG_PR        0x0008
#define DBG_RFIFO     0x0100
#define DBG_RPACKET   0x0200
#define DBG_XFIFO     0x1000
#define DBG_XPACKET   0x2000
#define TYPE_ISAC        0x00
#define TYPE_ISACSX      0x01
#define ISAC_MASK        0x20
#define ISAC_ISTA        0x20
#define ISAC_ISTA_EXI    0x01
#define ISAC_ISTA_SIN    0x02
#define ISAC_ISTA_CISQ   0x04
#define ISAC_ISTA_XPR    0x10
#define ISAC_ISTA_RSC    0x20
#define ISAC_ISTA_RPF    0x40
#define ISAC_ISTA_RME    0x80
#define ISAC_STAR        0x21
#define ISAC_CMDR        0x21
#define ISAC_CMDR_XRES   0x01
#define ISAC_CMDR_XME    0x02
#define ISAC_CMDR_XTF    0x08
#define ISAC_CMDR_RRES   0x40
#define ISAC_CMDR_RMC    0x80
#define ISAC_EXIR        0x24
#define ISAC_EXIR_MOS    0x04
#define ISAC_EXIR_XDU    0x40
#define ISAC_EXIR_XMR    0x80
#define ISAC_ADF2        0x39
#define ISAC_SPCR        0x30
#define ISAC_ADF1        0x38
#define ISAC_CIR0        0x31
#define ISAC_CIX0        0x31
#define ISAC_CIR0_CIC0   0x02
#define ISAC_CIR0_CIC1   0x01
#define ISAC_CIR1        0x33
#define ISAC_CIX1        0x33
#define ISAC_STCR        0x37
#define ISAC_MODE        0x22
#define ISAC_RSTA        0x27
#define ISAC_RSTA_RDO    0x40
#define ISAC_RSTA_CRC    0x20
#define ISAC_RSTA_RAB    0x10
#define ISAC_RBCL 0x25
#define ISAC_RBCH 0x2A
#define ISAC_TIMR 0x23
#define ISAC_SQXR 0x3b
#define ISAC_MOSR 0x3a
#define ISAC_MOCR 0x3a
#define ISAC_MOR0 0x32
#define ISAC_MOX0 0x32
#define ISAC_MOR1 0x34
#define ISAC_MOX1 0x34
#define ISAC_RBCH_XAC 0x80
#define ISAC_CMD_TIM    0x0
#define ISAC_CMD_RES    0x1
#define ISAC_CMD_SSP    0x2
#define ISAC_CMD_SCP    0x3
#define ISAC_CMD_AR8    0x8
#define ISAC_CMD_AR10   0x9
#define ISAC_CMD_ARL    0xa
#define ISAC_CMD_DI     0xf
#define ISACSX_MASK       0x60
#define ISACSX_ISTA       0x60
#define ISACSX_ISTA_ICD   0x01
#define ISACSX_ISTA_CIC   0x10
#define ISACSX_MASKD      0x20
#define ISACSX_ISTAD      0x20
#define ISACSX_ISTAD_XDU  0x04
#define ISACSX_ISTAD_XMR  0x08
#define ISACSX_ISTAD_XPR  0x10
#define ISACSX_ISTAD_RFO  0x20
#define ISACSX_ISTAD_RPF  0x40
#define ISACSX_ISTAD_RME  0x80
#define ISACSX_CMDRD      0x21
#define ISACSX_CMDRD_XRES 0x01
#define ISACSX_CMDRD_XME  0x02
#define ISACSX_CMDRD_XTF  0x08
#define ISACSX_CMDRD_RRES 0x40
#define ISACSX_CMDRD_RMC  0x80
#define ISACSX_MODED      0x22
#define ISACSX_RBCLD      0x26
#define ISACSX_RSTAD      0x28
#define ISACSX_RSTAD_RAB  0x10
#define ISACSX_RSTAD_CRC  0x20
#define ISACSX_RSTAD_RDO  0x40
#define ISACSX_RSTAD_VFR  0x80
#define ISACSX_CIR0       0x2e
#define ISACSX_CIR0_CIC0  0x08
#define ISACSX_CIX0       0x2e
#define ISACSX_TR_CONF0   0x30
#define ISACSX_TR_CONF2   0x32
static struct Fsm l1fsm;
enum ;
#define L1_STATE_COUNT (ST_L1_F8+1)
static char *strL1State[] =
;
enum ;
#define L1_EVENT_COUNT (EV_TIMER3 + 1)
static char *strL1Event[] =
;
static inline void D_L1L2(struct isac *isac, int pr, void *arg)
static void ph_command(struct isac *isac, unsigned int command)
static void l1_di(struct FsmInst *fi, int event, void *arg)
static void l1_di_deact_ind(struct FsmInst *fi, int event, void *arg)
static void l1_go_f3pdown(struct FsmInst *fi, int event, void *arg)
static void l1_go_f3pend_deact_ind(struct FsmInst *fi, int event, void *arg)
static void l1_go_f3pend(struct FsmInst *fi, int event, void *arg)
static void l1_go_f4(struct FsmInst *fi, int event, void *arg)
static void l1_go_f5(struct FsmInst *fi, int event, void *arg)
static void l1_go_f6(struct FsmInst *fi, int event, void *arg)
static void l1_go_f6_deact_ind(struct FsmInst *fi, int event, void *arg)
static void l1_go_f7_act_ind(struct FsmInst *fi, int event, void *arg)
static void l1_go_f8(struct FsmInst *fi, int event, void *arg)
static void l1_go_f8_deact_ind(struct FsmInst *fi, int event, void *arg)
static void l1_ar8(struct FsmInst *fi, int event, void *arg)
static void l1_timer3(struct FsmInst *fi, int event, void *arg)
static struct FsmNode L1FnList[] __initdata =
;
static void l1m_debug(struct FsmInst *fi, char *fmt, ...)
static void isac_version(struct isac *cs)
static void isac_empty_fifo(struct isac *isac, int count)
static void isac_fill_fifo(struct isac *isac)
static void isac_retransmit(struct isac *isac)
static inline void isac_cisq_interrupt(struct isac *isac)
static inline void isac_rme_interrupt(struct isac *isac)
static inline void isac_xpr_interrupt(struct isac *isac)
static inline void isac_exi_interrupt(struct isac *isac)
void isac_irq(struct isac *isac)
static inline void isacsx_cic_interrupt(struct isac *isac)
static inline void isacsx_rme_interrupt(struct isac *isac)
static inline void isacsx_xpr_interrupt(struct isac *isac)
static inline void isacsx_icd_interrupt(struct isac *isac)
void isacsx_irq(struct isac *isac)
void isac_init(struct isac *isac)
void isac_setup(struct isac *isac)
void isacsx_setup(struct isac *isac)
void isac_d_l2l1(struct hisax_if *hisax_d_if, int pr, void *arg)
static int __init hisax_isac_init(void)
static void __exit hisax_isac_exit(void)
EXPORT_SYMBOL(isac_init);
EXPORT_SYMBOL(isac_d_l2l1);
EXPORT_SYMBOL(isacsx_setup);
EXPORT_SYMBOL(isacsx_irq);
EXPORT_SYMBOL(isac_setup);
EXPORT_SYMBOL(isac_irq);
module_init(hisax_isac_init);
module_exit(hisax_isac_exit);
