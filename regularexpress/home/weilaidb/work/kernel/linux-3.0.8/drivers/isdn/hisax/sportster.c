static const char *sportster_revision = "$Revision: 1.16.2.4 $";
#define byteout(addr,val) outb(val,addr)
#define bytein(addr) inb(addr)
#define	 SPORTSTER_ISAC		0xC000
#define	 SPORTSTER_HSCXA	0x0000
#define	 SPORTSTER_HSCXB	0x4000
#define	 SPORTSTER_RES_IRQ	0x8000
#define	 SPORTSTER_RESET	0x80
#define	 SPORTSTER_INTE		0x40
static inline int
calc_off(unsigned int base, unsigned int off)
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
#define READHSCX(cs, nr, reg) bytein(calc_off(cs->hw.spt.hscx[nr], reg))
#define WRITEHSCX(cs, nr, reg, data) byteout(calc_off(cs->hw.spt.hscx[nr], reg), data)
#define READHSCXFIFO(cs, nr, ptr, cnt) read_fifo(cs->hw.spt.hscx[nr], ptr, cnt)
#define WRITEHSCXFIFO(cs, nr, ptr, cnt) write_fifo(cs->hw.spt.hscx[nr], ptr, cnt)
static irqreturn_t
sportster_interrupt(int intno, void *dev_id)
static void
release_io_sportster(struct IsdnCardState *cs)
static void
reset_sportster(struct IsdnCardState *cs)
static int
Sportster_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static int __devinit
get_io_range(struct IsdnCardState *cs)
int __devinit
setup_sportster(struct IsdnCard *card)
