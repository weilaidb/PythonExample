static const char *hfcpci_revision = "$Revision: 1.48.2.4 $";
typedef struct  PCI_ENTRY;
#define NT_T1_COUNT	20
#define CLKDEL_TE	0x0e
#define CLKDEL_NT	0x6c
static const PCI_ENTRY id_list[] =
;
static void
release_io_hfcpci(struct IsdnCardState *cs)
static void
reset_hfcpci(struct IsdnCardState *cs)
static void
hfcpci_Timer(struct IsdnCardState *cs)
static void
sched_event_D_pci(struct IsdnCardState *cs, int event)
static void
hfcpci_sched_event(struct BCState *bcs, int event)
static
struct BCState *
Sel_BCS(struct IsdnCardState *cs, int channel)
static void hfcpci_clear_fifo_rx(struct IsdnCardState *cs, int fifo)
static void hfcpci_clear_fifo_tx(struct IsdnCardState *cs, int fifo)
static struct sk_buff
*
hfcpci_empty_fifo(struct BCState *bcs, bzfifo_type * bz, u_char * bdata, int count)
static
int
receive_dmsg(struct IsdnCardState *cs)
static int
hfcpci_empty_fifo_trans(struct BCState *bcs, bzfifo_type * bz, u_char * bdata)
static void
main_rec_hfcpci(struct BCState *bcs)
static void
hfcpci_fill_dfifo(struct IsdnCardState *cs)
static void
hfcpci_fill_fifo(struct BCState *bcs)
static void
dch_nt_l2l1(struct PStack *st, int pr, void *arg)
static int
hfcpci_auxcmd(struct IsdnCardState *cs, isdn_ctrl * ic)
static void
receive_emsg(struct IsdnCardState *cs)
static irqreturn_t
hfcpci_interrupt(int intno, void *dev_id)
static void
hfcpci_dbusy_timer(struct IsdnCardState *cs)
static void
HFCPCI_l1hw(struct PStack *st, int pr, void *arg)
static void
setstack_hfcpci(struct PStack *st, struct IsdnCardState *cs)
static void
hfcpci_send_data(struct BCState *bcs)
static void
mode_hfcpci(struct BCState *bcs, int mode, int bc)
static void
hfcpci_l2l1(struct PStack *st, int pr, void *arg)
static void
close_hfcpci(struct BCState *bcs)
static int
open_hfcpcistate(struct IsdnCardState *cs, struct BCState *bcs)
static int
setstack_2b(struct PStack *st, struct BCState *bcs)
static void
hfcpci_bh(struct work_struct *work)
static void
inithfcpci(struct IsdnCardState *cs)
static int
hfcpci_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static struct pci_dev *dev_hfcpci __devinitdata = NULL;
int __devinit
setup_hfcpci(struct IsdnCard *card)
