static const char *teles0_revision = "$Revision: 2.15.2.4 $";
#define TELES_IOMEM_SIZE	0x400
#define byteout(addr,val) outb(val,addr)
#define bytein(addr) inb(addr)
static inline u_char
readisac(void __iomem *adr, u_char off)
static inline void
writeisac(void __iomem *adr, u_char off, u_char data)
static inline u_char
readhscx(void __iomem *adr, int hscx, u_char off)
static inline void
writehscx(void __iomem *adr, int hscx, u_char off, u_char data)
static inline void
read_fifo_isac(void __iomem *adr, u_char * data, int size)
static inline void
write_fifo_isac(void __iomem *adr, u_char * data, int size)
static inline void
read_fifo_hscx(void __iomem *adr, int hscx, u_char * data, int size)
static inline void
write_fifo_hscx(void __iomem *adr, int hscx, u_char * data, int size)
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
#define READHSCX(cs, nr, reg) readhscx(cs->hw.teles0.membase, nr, reg)
#define WRITEHSCX(cs, nr, reg, data) writehscx(cs->hw.teles0.membase, nr, reg, data)
#define READHSCXFIFO(cs, nr, ptr, cnt) read_fifo_hscx(cs->hw.teles0.membase, nr, ptr, cnt)
#define WRITEHSCXFIFO(cs, nr, ptr, cnt) write_fifo_hscx(cs->hw.teles0.membase, nr, ptr, cnt)
static irqreturn_t
teles0_interrupt(int intno, void *dev_id)
static void
release_io_teles0(struct IsdnCardState *cs)
static int
reset_teles0(struct IsdnCardState *cs)
static int
Teles_card_msg(struct IsdnCardState *cs, int mt, void *arg)
int __devinit
setup_teles0(struct IsdnCard *card)
