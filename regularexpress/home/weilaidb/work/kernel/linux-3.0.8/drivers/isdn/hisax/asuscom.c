static const char *Asuscom_revision = "$Revision: 1.14.2.4 $";
#define byteout(addr,val) outb(val,addr)
#define bytein(addr) inb(addr)
#define ASUS_ISAC	0
#define ASUS_HSCX	1
#define ASUS_ADR	2
#define ASUS_CTRL_U7	3
#define ASUS_CTRL_POTS	5
#define ASUS_IPAC_ALE	0
#define ASUS_IPAC_DATA	1
#define ASUS_ISACHSCX	1
#define ASUS_IPAC	2
#define ASUS_RESET      0x80
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
#define READHSCX(cs, nr, reg) readreg(cs->hw.asus.adr, \
cs->hw.asus.hscx, reg + (nr ? 0x40 : 0))
#define WRITEHSCX(cs, nr, reg, data) writereg(cs->hw.asus.adr, \
cs->hw.asus.hscx, reg + (nr ? 0x40 : 0), data)
#define READHSCXFIFO(cs, nr, ptr, cnt) readfifo(cs->hw.asus.adr, \
cs->hw.asus.hscx, (nr ? 0x40 : 0), ptr, cnt)
#define WRITEHSCXFIFO(cs, nr, ptr, cnt) writefifo(cs->hw.asus.adr, \
cs->hw.asus.hscx, (nr ? 0x40 : 0), ptr, cnt)
static irqreturn_t
asuscom_interrupt(int intno, void *dev_id)
static irqreturn_t
asuscom_interrupt_ipac(int intno, void *dev_id)
static void
release_io_asuscom(struct IsdnCardState *cs)
static void
reset_asuscom(struct IsdnCardState *cs)
static int
Asus_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static struct isapnp_device_id asus_ids[] __devinitdata = ;
static struct isapnp_device_id *ipid __devinitdata = &asus_ids[0];
static struct pnp_card *pnp_c __devinitdata = NULL;
int __devinit
setup_asuscom(struct IsdnCard *card)
