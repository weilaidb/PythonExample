static const char *TeleInt_revision = "$Revision: 1.16.2.5 $";
#define byteout(addr,val) outb(val,addr)
#define bytein(addr) inb(addr)
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
ReadHFC(struct IsdnCardState *cs, int data, u_char reg)
static void
WriteHFC(struct IsdnCardState *cs, int data, u_char reg, u_char value)
static irqreturn_t
TeleInt_interrupt(int intno, void *dev_id)
static void
TeleInt_Timer(struct IsdnCardState *cs)
static void
release_io_TeleInt(struct IsdnCardState *cs)
static void
reset_TeleInt(struct IsdnCardState *cs)
static int
TeleInt_card_msg(struct IsdnCardState *cs, int mt, void *arg)
int __devinit
setup_TeleInt(struct IsdnCard *card)
