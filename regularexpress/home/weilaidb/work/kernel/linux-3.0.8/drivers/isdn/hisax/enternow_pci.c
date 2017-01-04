static const char *enternow_pci_rev = "$Revision: 1.1.4.5 $";
#define TJ_AMD_IRQ                                              0x20
#define TJ_LED1                                                 0x40
#define TJ_LED2                                                 0x80
#define TJ_AMD_PORT                                             0xC0
static unsigned char
ReadByteAmd7930(struct IsdnCardState *cs, unsigned char offset)
static void
WriteByteAmd7930(struct IsdnCardState *cs, unsigned char offset, unsigned char value)
static void
enpci_setIrqMask(struct IsdnCardState *cs, unsigned char val)
static unsigned char dummyrr(struct IsdnCardState *cs, int chan, unsigned char off)
static void dummywr(struct IsdnCardState *cs, int chan, unsigned char off, unsigned char value)
static void
reset_enpci(struct IsdnCardState *cs)
static int
enpci_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static irqreturn_t
enpci_interrupt(int intno, void *dev_id)
static int __devinit en_pci_probe(struct pci_dev *dev_netjet,
struct IsdnCardState *cs)
static void __devinit en_cs_init(struct IsdnCard *card,
struct IsdnCardState *cs)
static int __devinit en_cs_init_rest(struct IsdnCard *card,
struct IsdnCardState *cs)
static struct pci_dev *dev_netjet __devinitdata = NULL;
int __devinit
setup_enternow_pci(struct IsdnCard *card)
