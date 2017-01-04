static const char *avm_pci_rev = "$Revision: 1.29.2.4 $";
#define  AVM_FRITZ_PCI		1
#define  AVM_FRITZ_PNP		2
#define  HDLC_FIFO		0x0
#define  HDLC_STATUS		0x4
#define	 AVM_HDLC_1		0x00
#define	 AVM_HDLC_2		0x01
#define	 AVM_ISAC_FIFO		0x02
#define	 AVM_ISAC_REG_LOW	0x04
#define	 AVM_ISAC_REG_HIGH	0x06
#define  AVM_STATUS0_IRQ_ISAC	0x01
#define  AVM_STATUS0_IRQ_HDLC	0x02
#define  AVM_STATUS0_IRQ_TIMER	0x04
#define  AVM_STATUS0_IRQ_MASK	0x07
#define  AVM_STATUS0_RESET	0x01
#define  AVM_STATUS0_DIS_TIMER	0x02
#define  AVM_STATUS0_RES_TIMER	0x04
#define  AVM_STATUS0_ENA_IRQ	0x08
#define  AVM_STATUS0_TESTBIT	0x10
#define  AVM_STATUS1_INT_SEL	0x0f
#define  AVM_STATUS1_ENA_IOM	0x80
#define  HDLC_MODE_ITF_FLG	0x01
#define  HDLC_MODE_TRANS	0x02
#define  HDLC_MODE_CCR_7	0x04
#define  HDLC_MODE_CCR_16	0x08
#define  HDLC_MODE_TESTLOOP	0x80
#define  HDLC_INT_XPR		0x80
#define  HDLC_INT_XDU		0x40
#define  HDLC_INT_RPR		0x20
#define  HDLC_INT_MASK		0xE0
#define  HDLC_STAT_RME		0x01
#define  HDLC_STAT_RDO		0x10
#define  HDLC_STAT_CRCVFRRAB	0x0E
#define  HDLC_STAT_CRCVFR	0x06
#define  HDLC_STAT_RML_MASK	0x3f00
#define  HDLC_CMD_XRS		0x80
#define  HDLC_CMD_XME		0x01
#define  HDLC_CMD_RRS		0x20
#define  HDLC_CMD_XML_MASK	0x3f00
static u_char
ReadISAC(struct IsdnCardState *cs, u_char offset)
static void
WriteISAC(struct IsdnCardState *cs, u_char offset, u_char value)
static void
ReadISACfifo(struct IsdnCardState *cs, u_char * data, int size)
static void
WriteISACfifo(struct IsdnCardState *cs, u_char * data, int size)
static inline u_int
ReadHDLCPCI(struct IsdnCardState *cs, int chan, u_char offset)
static inline void
WriteHDLCPCI(struct IsdnCardState *cs, int chan, u_char offset, u_int value)
static inline u_char
ReadHDLCPnP(struct IsdnCardState *cs, int chan, u_char offset)
static inline void
WriteHDLCPnP(struct IsdnCardState *cs, int chan, u_char offset, u_char value)
static u_char
ReadHDLC_s(struct IsdnCardState *cs, int chan, u_char offset)
static void
WriteHDLC_s(struct IsdnCardState *cs, int chan, u_char offset, u_char value)
static inline
struct BCState *Sel_BCS(struct IsdnCardState *cs, int channel)
static void
write_ctrl(struct BCState *bcs, int which)
static void
modehdlc(struct BCState *bcs, int mode, int bc)
static inline void
hdlc_empty_fifo(struct BCState *bcs, int count)
static inline void
hdlc_fill_fifo(struct BCState *bcs)
static void
HDLC_irq(struct BCState *bcs, u_int stat)
static inline void
HDLC_irq_main(struct IsdnCardState *cs)
static void
hdlc_l2l1(struct PStack *st, int pr, void *arg)
static void
close_hdlcstate(struct BCState *bcs)
static int
open_hdlcstate(struct IsdnCardState *cs, struct BCState *bcs)
static int
setstack_hdlc(struct PStack *st, struct BCState *bcs)
static void
inithdlc(struct IsdnCardState *cs)
static irqreturn_t
avm_pcipnp_interrupt(int intno, void *dev_id)
static void
reset_avmpcipnp(struct IsdnCardState *cs)
static int
AVM_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static int __devinit avm_setup_rest(struct IsdnCardState *cs)
static int __devinit avm_pnp_setup(struct IsdnCardState *cs)
static struct pnp_card *pnp_avm_c __devinitdata = NULL;
static int __devinit avm_pnp_setup(struct IsdnCardState *cs)
static int __devinit avm_pci_setup(struct IsdnCardState *cs)
static struct pci_dev *dev_avm __devinitdata = NULL;
static int __devinit avm_pci_setup(struct IsdnCardState *cs)
int __devinit
setup_avm_pcipnp(struct IsdnCard *card)
