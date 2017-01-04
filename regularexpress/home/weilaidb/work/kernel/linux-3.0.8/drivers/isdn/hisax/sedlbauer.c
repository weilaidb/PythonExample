static const char *Sedlbauer_revision = "$Revision: 1.34.2.6 $";
static const char *Sedlbauer_Types[] =
;
#define PCI_SUBVENDOR_SPEEDFAX_PYRAMID	0x51
#define PCI_SUBVENDOR_HST_SAPHIR3	0x52
#define PCI_SUBVENDOR_SEDLBAUER_PCI	0x53
#define PCI_SUBVENDOR_SPEEDFAX_PCI	0x54
#define PCI_SUB_ID_SEDLBAUER		0x01
#define SEDL_SPEED_CARD_WIN	1
#define SEDL_SPEED_STAR 	2
#define SEDL_SPEED_FAX		3
#define SEDL_SPEED_WIN2_PC104 	4
#define SEDL_SPEED_STAR2 	5
#define SEDL_SPEED_PCI   	6
#define SEDL_SPEEDFAX_PYRAMID	7
#define SEDL_SPEEDFAX_PCI	8
#define HST_SAPHIR3		9
#define SEDL_CHIP_TEST		0
#define SEDL_CHIP_ISAC_HSCX	1
#define SEDL_CHIP_ISAC_ISAR	2
#define SEDL_CHIP_IPAC		3
#define SEDL_BUS_ISA		1
#define SEDL_BUS_PCI		2
#define	SEDL_BUS_PCMCIA		3
#define byteout(addr,val) outb(val,addr)
#define bytein(addr) inb(addr)
#define SEDL_HSCX_ISA_RESET_ON	0
#define SEDL_HSCX_ISA_RESET_OFF	1
#define SEDL_HSCX_ISA_ISAC	2
#define SEDL_HSCX_ISA_HSCX	3
#define SEDL_HSCX_ISA_ADR	4
#define SEDL_HSCX_PCMCIA_RESET	0
#define SEDL_HSCX_PCMCIA_ISAC	1
#define SEDL_HSCX_PCMCIA_HSCX	2
#define SEDL_HSCX_PCMCIA_ADR	4
#define SEDL_ISAR_ISA_ISAC		4
#define SEDL_ISAR_ISA_ISAR		6
#define SEDL_ISAR_ISA_ADR		8
#define SEDL_ISAR_ISA_ISAR_RESET_ON	10
#define SEDL_ISAR_ISA_ISAR_RESET_OFF	12
#define SEDL_IPAC_ANY_ADR		0
#define SEDL_IPAC_ANY_IPAC		2
#define SEDL_IPAC_PCI_BASE		0
#define SEDL_IPAC_PCI_ADR		0xc0
#define SEDL_IPAC_PCI_IPAC		0xc8
#define SEDL_ISAR_PCI_ADR		0xc8
#define SEDL_ISAR_PCI_ISAC		0xd0
#define SEDL_ISAR_PCI_ISAR		0xe0
#define SEDL_ISAR_PCI_ISAR_RESET_ON	0x01
#define SEDL_ISAR_PCI_ISAR_RESET_OFF	0x18
#define SEDL_ISAR_PCI_LED1		0x08
#define SEDL_ISAR_PCI_LED2		0x10
#define SEDL_RESET      0x3
static inline u_char
readreg(unsigned int ale, unsigned int adr, u_char off)
static inline void
readfifo(unsigned int ale, unsigned int adr, u_char off, u_char * data, int size)
static inline void
writereg(unsigned int ale, unsigned int adr, u_char off, u_char data)
static inline void
writefifo(unsigned int ale, unsigned int adr, u_char off, u_char * data, int size)
static u_char
ReadISAC(struct IsdnCardState *cs, u_char offset)
static void
WriteISAC(struct IsdnCardState *cs, u_char offset, u_char value)
static void
ReadISACfifo(struct IsdnCardState *cs, u_char * data, int size)
static void
WriteISACfifo(struct IsdnCardState *cs, u_char * data, int size)
static u_char
ReadISAC_IPAC(struct IsdnCardState *cs, u_char offset)
static void
WriteISAC_IPAC(struct IsdnCardState *cs, u_char offset, u_char value)
static void
ReadISACfifo_IPAC(struct IsdnCardState *cs, u_char * data, int size)
static void
WriteISACfifo_IPAC(struct IsdnCardState *cs, u_char * data, int size)
static u_char
ReadHSCX(struct IsdnCardState *cs, int hscx, u_char offset)
static void
WriteHSCX(struct IsdnCardState *cs, int hscx, u_char offset, u_char value)
static u_char
ReadISAR(struct IsdnCardState *cs, int mode, u_char offset)
static void
WriteISAR(struct IsdnCardState *cs, int mode, u_char offset, u_char value)
#define READHSCX(cs, nr, reg) readreg(cs->hw.sedl.adr, \
cs->hw.sedl.hscx, reg + (nr ? 0x40 : 0))
#define WRITEHSCX(cs, nr, reg, data) writereg(cs->hw.sedl.adr, \
cs->hw.sedl.hscx, reg + (nr ? 0x40 : 0), data)
#define READHSCXFIFO(cs, nr, ptr, cnt) readfifo(cs->hw.sedl.adr, \
cs->hw.sedl.hscx, (nr ? 0x40 : 0), ptr, cnt)
#define WRITEHSCXFIFO(cs, nr, ptr, cnt) writefifo(cs->hw.sedl.adr, \
cs->hw.sedl.hscx, (nr ? 0x40 : 0), ptr, cnt)
static irqreturn_t
sedlbauer_interrupt(int intno, void *dev_id)
static irqreturn_t
sedlbauer_interrupt_ipac(int intno, void *dev_id)
static irqreturn_t
sedlbauer_interrupt_isar(int intno, void *dev_id)
static void
release_io_sedlbauer(struct IsdnCardState *cs)
static void
reset_sedlbauer(struct IsdnCardState *cs)
static int
Sedl_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static struct isapnp_device_id sedl_ids[] __devinitdata = ;
static struct isapnp_device_id *ipid __devinitdata = &sedl_ids[0];
static struct pnp_card *pnp_c __devinitdata = NULL;
static int __devinit
setup_sedlbauer_isapnp(struct IsdnCard *card, int *bytecnt)
static int __devinit
setup_sedlbauer_isapnp(struct IsdnCard *card, int *bytecnt)
static struct pci_dev *dev_sedl __devinitdata = NULL;
static int __devinit
setup_sedlbauer_pci(struct IsdnCard *card)
static int __devinit
setup_sedlbauer_pci(struct IsdnCard *card)
int __devinit
setup_sedlbauer(struct IsdnCard *card)
