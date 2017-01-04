static const char *avm_revision = "$Revision: 2.15.2.4 $";
#define	 AVM_A1_STAT_ISAC	0x01
#define	 AVM_A1_STAT_HSCX	0x02
#define	 AVM_A1_STAT_TIMER	0x04
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
#define READHSCX(cs, nr, reg) readreg(cs->hw.avm.hscx[nr], reg)
#define WRITEHSCX(cs, nr, reg, data) writereg(cs->hw.avm.hscx[nr], reg, data)
#define READHSCXFIFO(cs, nr, ptr, cnt) read_fifo(cs->hw.avm.hscxfifo[nr], ptr, cnt)
#define WRITEHSCXFIFO(cs, nr, ptr, cnt) write_fifo(cs->hw.avm.hscxfifo[nr], ptr, cnt)
static irqreturn_t
avm_a1_interrupt(int intno, void *dev_id)
static inline void
release_ioregs(struct IsdnCardState *cs, int mask)
static int
AVM_card_msg(struct IsdnCardState *cs, int mt, void *arg)
int __devinit
setup_avm_a1(struct IsdnCard *card)
