static const char *NETjet_U_revision = "$Revision: 2.14.2.3 $";
static u_char dummyrr(struct IsdnCardState *cs, int chan, u_char off)
static void dummywr(struct IsdnCardState *cs, int chan, u_char off, u_char value)
static irqreturn_t
netjet_u_interrupt(int intno, void *dev_id)
static void
reset_netjet_u(struct IsdnCardState *cs)
static int
NETjet_U_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static int __devinit nju_pci_probe(struct pci_dev *dev_netjet,
struct IsdnCardState *cs)
static int __devinit nju_cs_init(struct IsdnCard *card,
struct IsdnCardState *cs)
static int __devinit nju_cs_init_rest(struct IsdnCard *card,
struct IsdnCardState *cs)
static struct pci_dev *dev_netjet __devinitdata = NULL;
int __devinit
setup_netjet_u(struct IsdnCard *card)
