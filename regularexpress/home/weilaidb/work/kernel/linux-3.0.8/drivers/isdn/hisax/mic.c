static const char *mic_revision = "$Revision: 1.12.2.4 $";
#define byteout(addr,val) outb(val,addr)
#define bytein(addr) inb(addr)
#define MIC_ISAC	2
#define MIC_HSCX	1
#define MIC_ADR		7
#define MIC_RESET      0x3
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
#define READHSCX(cs, nr, reg) readreg(cs->hw.mic.adr, \
cs->hw.mic.hscx, reg + (nr ? 0x40 : 0))
#define WRITEHSCX(cs, nr, reg, data) writereg(cs->hw.mic.adr, \
cs->hw.mic.hscx, reg + (nr ? 0x40 : 0), data)
#define READHSCXFIFO(cs, nr, ptr, cnt) readfifo(cs->hw.mic.adr, \
cs->hw.mic.hscx, (nr ? 0x40 : 0), ptr, cnt)
#define WRITEHSCXFIFO(cs, nr, ptr, cnt) writefifo(cs->hw.mic.adr, \
cs->hw.mic.hscx, (nr ? 0x40 : 0), ptr, cnt)
static irqreturn_t
mic_interrupt(int intno, void *dev_id)
static void
release_io_mic(struct IsdnCardState *cs)
static int
mic_card_msg(struct IsdnCardState *cs, int mt, void *arg)
int __devinit
setup_mic(struct IsdnCard *card)
