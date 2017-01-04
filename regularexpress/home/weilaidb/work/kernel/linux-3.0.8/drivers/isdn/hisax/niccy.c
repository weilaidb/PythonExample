static const char *niccy_revision = "$Revision: 1.21.2.4 $";
#define byteout(addr,val) outb(val,addr)
#define bytein(addr) inb(addr)
#define ISAC_PCI_DATA	0
#define HSCX_PCI_DATA	1
#define ISAC_PCI_ADDR	2
#define HSCX_PCI_ADDR	3
#define ISAC_PNP	0
#define HSCX_PNP	1
#define NICCY_PNP	1
#define NICCY_PCI	2
#define PCI_IRQ_CTRL_REG	0x38
#define PCI_IRQ_ENABLE		0x1f00
#define PCI_IRQ_DISABLE		0xff0000
#define PCI_IRQ_ASSERT		0x800000
static inline u_char readreg(unsigned int ale, unsigned int adr, u_char off)
static inline void readfifo(unsigned int ale, unsigned int adr, u_char off,
u_char *data, int size)
static inline void writereg(unsigned int ale, unsigned int adr, u_char off,
u_char data)
static inline void writefifo(unsigned int ale, unsigned int adr, u_char off,
u_char *data, int size)
static u_char ReadISAC(struct IsdnCardState *cs, u_char offset)
static void WriteISAC(struct IsdnCardState *cs, u_char offset, u_char value)
static void ReadISACfifo(struct IsdnCardState *cs, u_char * data, int size)
static void WriteISACfifo(struct IsdnCardState *cs, u_char * data, int size)
static u_char ReadHSCX(struct IsdnCardState *cs, int hscx, u_char offset)
static void WriteHSCX(struct IsdnCardState *cs, int hscx, u_char offset,
u_char value)
#define READHSCX(cs, nr, reg) readreg(cs->hw.niccy.hscx_ale, \
cs->hw.niccy.hscx, reg + (nr ? 0x40 : 0))
#define WRITEHSCX(cs, nr, reg, data) writereg(cs->hw.niccy.hscx_ale, \
cs->hw.niccy.hscx, reg + (nr ? 0x40 : 0), data)
#define READHSCXFIFO(cs, nr, ptr, cnt) readfifo(cs->hw.niccy.hscx_ale, \
cs->hw.niccy.hscx, (nr ? 0x40 : 0), ptr, cnt)
#define WRITEHSCXFIFO(cs, nr, ptr, cnt) writefifo(cs->hw.niccy.hscx_ale, \
cs->hw.niccy.hscx, (nr ? 0x40 : 0), ptr, cnt)
static irqreturn_t niccy_interrupt(int intno, void *dev_id)
static void release_io_niccy(struct IsdnCardState *cs)
static void niccy_reset(struct IsdnCardState *cs)
static int niccy_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static struct pnp_card *pnp_c __devinitdata = NULL;
int __devinit setup_niccy(struct IsdnCard *card)
