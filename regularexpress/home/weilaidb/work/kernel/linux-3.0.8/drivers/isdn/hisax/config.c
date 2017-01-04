#define HISAX_STATUS_BUFSIZE 4096
const char *CardType[] = ;
#define DEFAULT_CARD ISDN_CTYPE_ELSA
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_A1
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_A1_PCMCIA
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_FRITZPCI
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_16_3
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_S0BOX
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_16_0
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_TELESPCI
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_IX1MICROR2
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_DIEHLDIVA
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_ASUSCOM
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_TELEINT
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_SEDLBAUER
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_SPORTSTER
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_MIC
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_NETJET_S
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_TELES3C
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_HFC_PCI
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_HFC_SX
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_NICCY
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_ISURF
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_HSTSAPHIR
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_BKM_A4T
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_SCT_QUADRO
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_GAZEL
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_W6692
#define DEFAULT_CFG
#undef DEFAULT_CARD
#undef DEFAULT_CFG
#define DEFAULT_CARD ISDN_CTYPE_NETJET_U
#define DEFAULT_CFG
#define DEFAULT_PROTO ISDN_PTYPE_1TR6
#define DEFAULT_PROTO_NAME "1TR6"
#undef DEFAULT_PROTO
#define DEFAULT_PROTO ISDN_PTYPE_NI1
#undef DEFAULT_PROTO_NAME
#define DEFAULT_PROTO_NAME "NI1"
#undef DEFAULT_PROTO
#define DEFAULT_PROTO ISDN_PTYPE_EURO
#undef DEFAULT_PROTO_NAME
#define DEFAULT_PROTO_NAME "EURO"
#define DEFAULT_PROTO ISDN_PTYPE_UNKNOWN
#define DEFAULT_PROTO_NAME "UNKNOWN"
#define DEFAULT_CARD 0
#define DEFAULT_CFG
#define FIRST_CARD
struct IsdnCard cards[HISAX_MAX_CARDS] = ;
#define HISAX_IDSIZE (HISAX_MAX_CARDS*8)
static char HiSaxID[HISAX_IDSIZE] = ;
static char *HiSax_id = HiSaxID;
static int type[HISAX_MAX_CARDS] = ;
static int protocol[HISAX_MAX_CARDS] = ;
static int io[HISAX_MAX_CARDS] = ;
#undef IO0_IO1
#define IO0_IO1
#undef IO0_IO1
#define IO0_IO1
static int io0[HISAX_MAX_CARDS] __devinitdata = ;
static int io1[HISAX_MAX_CARDS] __devinitdata = ;
static int irq[HISAX_MAX_CARDS] __devinitdata = ;
static int mem[HISAX_MAX_CARDS] __devinitdata = ;
static char *id = HiSaxID;
MODULE_DESCRIPTION("ISDN4Linux: Driver for passive ISDN cards");
MODULE_AUTHOR("Karsten Keil");
MODULE_LICENSE("GPL");
module_param_array(type, int, NULL, 0);
module_param_array(protocol, int, NULL, 0);
module_param_array(io, int, NULL, 0);
module_param_array(irq, int, NULL, 0);
module_param_array(mem, int, NULL, 0);
module_param(id, charp, 0);
module_param_array(io0, int, NULL, 0);
module_param_array(io1, int, NULL, 0);
int nrcards;
char *HiSax_getrev(const char *revision)
static void __init HiSaxVersion(void)
#define MAX_ARG	(HISAX_MAX_CARDS*5)
static int __init HiSax_setup(char *line)
__setup("hisax=", HiSax_setup);
#if CARD_TELES0
extern int setup_teles0(struct IsdnCard *card);
#if CARD_TELES3
extern int setup_teles3(struct IsdnCard *card);
#if CARD_S0BOX
extern int setup_s0box(struct IsdnCard *card);
#if CARD_TELESPCI
extern int setup_telespci(struct IsdnCard *card);
#if CARD_AVM_A1
extern int setup_avm_a1(struct IsdnCard *card);
#if CARD_AVM_A1_PCMCIA
extern int setup_avm_a1_pcmcia(struct IsdnCard *card);
#if CARD_FRITZPCI
extern int setup_avm_pcipnp(struct IsdnCard *card);
#if CARD_ELSA
extern int setup_elsa(struct IsdnCard *card);
#if CARD_IX1MICROR2
extern int setup_ix1micro(struct IsdnCard *card);
#if CARD_DIEHLDIVA
extern int setup_diva(struct IsdnCard *card);
#if CARD_ASUSCOM
extern int setup_asuscom(struct IsdnCard *card);
#if CARD_TELEINT
extern int setup_TeleInt(struct IsdnCard *card);
#if CARD_SEDLBAUER
extern int setup_sedlbauer(struct IsdnCard *card);
#if CARD_SPORTSTER
extern int setup_sportster(struct IsdnCard *card);
#if CARD_MIC
extern int setup_mic(struct IsdnCard *card);
#if CARD_NETJET_S
extern int setup_netjet_s(struct IsdnCard *card);
#if CARD_HFCS
extern int setup_hfcs(struct IsdnCard *card);
#if CARD_HFC_PCI
extern int setup_hfcpci(struct IsdnCard *card);
#if CARD_HFC_SX
extern int setup_hfcsx(struct IsdnCard *card);
#if CARD_NICCY
extern int setup_niccy(struct IsdnCard *card);
#if CARD_ISURF
extern int setup_isurf(struct IsdnCard *card);
#if CARD_HSTSAPHIR
extern int setup_saphir(struct IsdnCard *card);
#if CARD_BKM_A4T
extern int setup_bkm_a4t(struct IsdnCard *card);
#if CARD_SCT_QUADRO
extern int setup_sct_quadro(struct IsdnCard *card);
#if CARD_GAZEL
extern int setup_gazel(struct IsdnCard *card);
#if CARD_W6692
extern int setup_w6692(struct IsdnCard *card);
#if CARD_NETJET_U
extern int setup_netjet_u(struct IsdnCard *card);
#if CARD_FN_ENTERNOW_PCI
extern int setup_enternow_pci(struct IsdnCard *card);
static inline struct IsdnCardState *hisax_findcard(int driverid)
static int HiSax_readstatus(u_char __user *buf, int len, int id, int channel)
int jiftime(char *s, long mark)
static u_char tmpbuf[HISAX_STATUS_BUFSIZE];
void VHiSax_putstatus(struct IsdnCardState *cs, char *head, char *fmt,
va_list args)
void HiSax_putstatus(struct IsdnCardState *cs, char *head, char *fmt, ...)
int ll_run(struct IsdnCardState *cs, int addfeatures)
static void ll_stop(struct IsdnCardState *cs)
static void ll_unload(struct IsdnCardState *cs)
static void closecard(int cardnr)
static irqreturn_t card_irq(int intno, void *dev_id)
static int init_card(struct IsdnCardState *cs)
static int __devinit hisax_cs_setup_card(struct IsdnCard *card)
static int hisax_cs_new(int cardnr, char *id, struct IsdnCard *card,
struct IsdnCardState **cs_out, int *busy_flag,
struct module *lockowner)
static int hisax_cs_setup(int cardnr, struct IsdnCard *card,
struct IsdnCardState *cs)
static int __ref checkcard(int cardnr, char *id, int *busy_flag,
struct module *lockowner,
hisax_setup_func_t card_setup)
static void HiSax_shiftcards(int idx)
static int __init HiSax_inithardware(int *busy_flag)
void HiSax_closecard(int cardnr)
void HiSax_reportcard(int cardnr, int sel)
static int __init HiSax_init(void)
static void __exit HiSax_exit(void)
int __devinit hisax_init_pcmcia(void *pcm_iob, int *busy_flag, struct IsdnCard *card)
EXPORT_SYMBOL(hisax_init_pcmcia);
EXPORT_SYMBOL(HiSax_closecard);
EXPORT_SYMBOL(hisax_register);
EXPORT_SYMBOL(hisax_unregister);
static void hisax_d_l1l2(struct hisax_if *ifc, int pr, void *arg);
static void hisax_b_l1l2(struct hisax_if *ifc, int pr, void *arg);
static void hisax_d_l2l1(struct PStack *st, int pr, void *arg);
static void hisax_b_l2l1(struct PStack *st, int pr, void *arg);
static int hisax_cardmsg(struct IsdnCardState *cs, int mt, void *arg);
static int hisax_bc_setstack(struct PStack *st, struct BCState *bcs);
static void hisax_bc_close(struct BCState *bcs);
static void hisax_bh(struct work_struct *work);
static void EChannel_proc_rcv(struct hisax_d_if *d_if);
static int hisax_setup_card_dynamic(struct IsdnCard *card)
int hisax_register(struct hisax_d_if *hisax_d_if, struct hisax_b_if *b_if[],
char *name, int protocol)
void hisax_unregister(struct hisax_d_if *hisax_d_if)
static void hisax_sched_event(struct IsdnCardState *cs, int event)
static void hisax_bh(struct work_struct *work)
static void hisax_b_sched_event(struct BCState *bcs, int event)
static inline void D_L2L1(struct hisax_d_if *d_if, int pr, void *arg)
static inline void B_L2L1(struct hisax_b_if *b_if, int pr, void *arg)
static void hisax_d_l1l2(struct hisax_if *ifc, int pr, void *arg)
static void hisax_b_l1l2(struct hisax_if *ifc, int pr, void *arg)
static void hisax_d_l2l1(struct PStack *st, int pr, void *arg)
static int hisax_cardmsg(struct IsdnCardState *cs, int mt, void *arg)
static void hisax_b_l2l1(struct PStack *st, int pr, void *arg)
static int hisax_bc_setstack(struct PStack *st, struct BCState *bcs)
static void hisax_bc_close(struct BCState *bcs)
static void EChannel_proc_rcv(struct hisax_d_if *d_if)
static struct pci_device_id hisax_pci_tbl[] __devinitdata __used = ;
MODULE_DEVICE_TABLE(pci, hisax_pci_tbl);
module_init(HiSax_init);
module_exit(HiSax_exit);
EXPORT_SYMBOL(FsmNew);
EXPORT_SYMBOL(FsmFree);
EXPORT_SYMBOL(FsmEvent);
EXPORT_SYMBOL(FsmChangeState);
EXPORT_SYMBOL(FsmInitTimer);
EXPORT_SYMBOL(FsmDelTimer);
EXPORT_SYMBOL(FsmRestartTimer);
