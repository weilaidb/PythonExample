typedef struct  PCI_ENTRY;
static const PCI_ENTRY id_list[] =
;
#define W6692_SV_USR   0x16ec
#define W6692_SD_USR   0x3409
#define W6692_WINBOND  0
#define W6692_DYNALINK 1
#define W6692_USR      2
static const char *w6692_revision = "$Revision: 1.18.2.4 $";
#define DBUSY_TIMER_VALUE 80
static char *W6692Ver[] =
;
static void
W6692Version(struct IsdnCardState *cs, char *s)
static void
ph_command(struct IsdnCardState *cs, unsigned int command)
static void
W6692_new_ph(struct IsdnCardState *cs)
static void
W6692_bh(struct work_struct *work)
static void
W6692_empty_fifo(struct IsdnCardState *cs, int count)
static void
W6692_fill_fifo(struct IsdnCardState *cs)
static void
W6692B_empty_fifo(struct BCState *bcs, int count)
static void
W6692B_fill_fifo(struct BCState *bcs)
static void
W6692B_interrupt(struct IsdnCardState *cs, u_char bchan)
static irqreturn_t
W6692_interrupt(int intno, void *dev_id)
static void
W6692_l1hw(struct PStack *st, int pr, void *arg)
static void
setstack_W6692(struct PStack *st, struct IsdnCardState *cs)
static void
DC_Close_W6692(struct IsdnCardState *cs)
static void
dbusy_timer_handler(struct IsdnCardState *cs)
static void
W6692Bmode(struct BCState *bcs, int mode, int bchan)
static void
W6692_l2l1(struct PStack *st, int pr, void *arg)
static void
close_w6692state(struct BCState *bcs)
static int
open_w6692state(struct IsdnCardState *cs, struct BCState *bcs)
static int
setstack_w6692(struct PStack *st, struct BCState *bcs)
static void resetW6692(struct IsdnCardState *cs)
static void initW6692(struct IsdnCardState *cs, int part)
static u_char
ReadW6692(struct IsdnCardState *cs, u_char offset)
static void
WriteW6692(struct IsdnCardState *cs, u_char offset, u_char value)
static void
ReadISACfifo(struct IsdnCardState *cs, u_char * data, int size)
static void
WriteISACfifo(struct IsdnCardState *cs, u_char * data, int size)
static u_char
ReadW6692B(struct IsdnCardState *cs, int bchan, u_char offset)
static void
WriteW6692B(struct IsdnCardState *cs, int bchan, u_char offset, u_char value)
static int
w6692_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static int id_idx ;
static struct pci_dev *dev_w6692 __devinitdata = NULL;
int __devinit
setup_w6692(struct IsdnCard *card)
