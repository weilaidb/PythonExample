static const char *s0box_revision = "$Revision: 2.6.2.4 $";
static inline void
writereg(unsigned int padr, signed int addr, u_char off, u_char val)
static u_char nibtab[] =  ;
static inline u_char
readreg(unsigned int padr, signed int addr, u_char off)
static inline void
read_fifo(unsigned int padr, signed int adr, u_char * data, int size)
static inline void
write_fifo(unsigned int padr, signed int adr, u_char * data, int size)
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
#define READHSCX(cs, nr, reg) readreg(cs->hw.teles3.cfg_reg, cs->hw.teles3.hscx[nr], reg)
#define WRITEHSCX(cs, nr, reg, data) writereg(cs->hw.teles3.cfg_reg, cs->hw.teles3.hscx[nr], reg, data)
#define READHSCXFIFO(cs, nr, ptr, cnt) read_fifo(cs->hw.teles3.cfg_reg, cs->hw.teles3.hscxfifo[nr], ptr, cnt)
#define WRITEHSCXFIFO(cs, nr, ptr, cnt) write_fifo(cs->hw.teles3.cfg_reg, cs->hw.teles3.hscxfifo[nr], ptr, cnt)
static irqreturn_t
s0box_interrupt(int intno, void *dev_id)
static void
release_io_s0box(struct IsdnCardState *cs)
static int
S0Box_card_msg(struct IsdnCardState *cs, int mt, void *arg)
int __devinit
setup_s0box(struct IsdnCard *card)
