static char *saphir_rev = "$Revision: 1.10.2.4 $";
#define byteout(addr,val) outb(val,addr)
#define bytein(addr) inb(addr)
#define ISAC_DATA	0
#define HSCX_DATA	1
#define ADDRESS_REG	2
#define IRQ_REG		3
#define SPARE_REG	4
#define RESET_REG	5
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
#define READHSCX(cs, nr, reg) readreg(cs->hw.saphir.ale, \
cs->hw.saphir.hscx, reg + (nr ? 0x40 : 0))
#define WRITEHSCX(cs, nr, reg, data) writereg(cs->hw.saphir.ale, \
cs->hw.saphir.hscx, reg + (nr ? 0x40 : 0), data)
#define READHSCXFIFO(cs, nr, ptr, cnt) readfifo(cs->hw.saphir.ale, \
cs->hw.saphir.hscx, (nr ? 0x40 : 0), ptr, cnt)
#define WRITEHSCXFIFO(cs, nr, ptr, cnt) writefifo(cs->hw.saphir.ale, \
cs->hw.saphir.hscx, (nr ? 0x40 : 0), ptr, cnt)
static irqreturn_t
saphir_interrupt(int intno, void *dev_id)
static void
SaphirWatchDog(struct IsdnCardState *cs)
static void
release_io_saphir(struct IsdnCardState *cs)
static int
saphir_reset(struct IsdnCardState *cs)
static int
saphir_card_msg(struct IsdnCardState *cs, int mt, void *arg)
int __devinit
setup_saphir(struct IsdnCard *card)
