static const char *teles3_revision = "$Revision: 2.19.2.4 $";
#define byteout(addr,val) outb(val,addr)
#define bytein(addr) inb(addr)
static inline u_char
readreg(unsigned int adr, u_char off)
static inline void
writereg(unsigned int adr, u_char off, u_char data)
static inline void
read_fifo(unsigned int adr, u_char * data, int size)
static void
write_fifo(unsigned int adr, u_char * data, int size)
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
#define READHSCX(cs, nr, reg) readreg(cs->hw.teles3.hscx[nr], reg)
#define WRITEHSCX(cs, nr, reg, data) writereg(cs->hw.teles3.hscx[nr], reg, data)
#define READHSCXFIFO(cs, nr, ptr, cnt) read_fifo(cs->hw.teles3.hscxfifo[nr], ptr, cnt)
#define WRITEHSCXFIFO(cs, nr, ptr, cnt) write_fifo(cs->hw.teles3.hscxfifo[nr], ptr, cnt)
static irqreturn_t
teles3_interrupt(int intno, void *dev_id)
static inline void
release_ioregs(struct IsdnCardState *cs, int mask)
static void
release_io_teles3(struct IsdnCardState *cs)
static int
reset_teles3(struct IsdnCardState *cs)
static int
Teles_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static struct isapnp_device_id teles_ids[] __devinitdata = ;
static struct isapnp_device_id *ipid __devinitdata = &teles_ids[0];
static struct pnp_card *pnp_c __devinitdata = NULL;
int __devinit
setup_teles3(struct IsdnCard *card)
