static const char *ix1_revision = "$Revision: 2.12.2.4 $";
#define byteout(addr,val) outb(val,addr)
#define bytein(addr) inb(addr)
#define SPECIAL_PORT_OFFSET 3
#define ISAC_COMMAND_OFFSET 2
#define ISAC_DATA_OFFSET 0
#define HSCX_COMMAND_OFFSET 2
#define HSCX_DATA_OFFSET 1
#define TIMEOUT 50
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
ReadHSCX(struct IsdnCardState *cs, int hscx, u_char offset)
static void
WriteHSCX(struct IsdnCardState *cs, int hscx, u_char offset, u_char value)
#define READHSCX(cs, nr, reg) readreg(cs->hw.ix1.hscx_ale, \
cs->hw.ix1.hscx, reg + (nr ? 0x40 : 0))
#define WRITEHSCX(cs, nr, reg, data) writereg(cs->hw.ix1.hscx_ale, \
cs->hw.ix1.hscx, reg + (nr ? 0x40 : 0), data)
#define READHSCXFIFO(cs, nr, ptr, cnt) readfifo(cs->hw.ix1.hscx_ale, \
cs->hw.ix1.hscx, (nr ? 0x40 : 0), ptr, cnt)
#define WRITEHSCXFIFO(cs, nr, ptr, cnt) writefifo(cs->hw.ix1.hscx_ale, \
cs->hw.ix1.hscx, (nr ? 0x40 : 0), ptr, cnt)
static irqreturn_t
ix1micro_interrupt(int intno, void *dev_id)
static void
release_io_ix1micro(struct IsdnCardState *cs)
static void
ix1_reset(struct IsdnCardState *cs)
static int
ix1_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static struct isapnp_device_id itk_ids[] __devinitdata = ;
static struct isapnp_device_id *ipid __devinitdata = &itk_ids[0];
static struct pnp_card *pnp_c __devinitdata = NULL;
int __devinit
setup_ix1micro(struct IsdnCard *card)
