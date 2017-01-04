static const char *gazel_revision = "$Revision: 2.19.2.4 $";
#define R647      1
#define R685      2
#define R753      3
#define R742      4
#define PLX_CNTRL    0x50
#define RESET_GAZEL  0x4
#define RESET_9050   0x40000000
#define PLX_INCSR    0x4C
#define INT_ISAC_EN  0x8
#define INT_ISAC     0x20
#define INT_HSCX_EN  0x1
#define INT_HSCX     0x4
#define INT_PCI_EN   0x40
#define INT_IPAC_EN  0x3
#define byteout(addr,val) outb(val,addr)
#define bytein(addr) inb(addr)
static inline u_char
readreg(unsigned int adr, u_short off)
static inline void
writereg(unsigned int adr, u_short off, u_char data)
static inline void
read_fifo(unsigned int adr, u_char * data, int size)
static void
write_fifo(unsigned int adr, u_char * data, int size)
static inline u_char
readreg_ipac(unsigned int adr, u_short off)
static inline void
writereg_ipac(unsigned int adr, u_short off, u_char data)
static inline void
read_fifo_ipac(unsigned int adr, u_short off, u_char * data, int size)
static void
write_fifo_ipac(unsigned int adr, u_short off, u_char * data, int size)
static u_char
ReadISAC(struct IsdnCardState *cs, u_char offset)
static void
WriteISAC(struct IsdnCardState *cs, u_char offset, u_char value)
static void
ReadISACfifo(struct IsdnCardState *cs, u_char * data, int size)
static void
WriteISACfifo(struct IsdnCardState *cs, u_char * data, int size)
static void
ReadHSCXfifo(struct IsdnCardState *cs, int hscx, u_char * data, int size)
static void
WriteHSCXfifo(struct IsdnCardState *cs, int hscx, u_char * data, int size)
static u_char
ReadHSCX(struct IsdnCardState *cs, int hscx, u_char offset)
static void
WriteHSCX(struct IsdnCardState *cs, int hscx, u_char offset, u_char value)
#define READHSCX(cs, nr, reg) ReadHSCX(cs, nr, reg)
#define WRITEHSCX(cs, nr, reg, data) WriteHSCX(cs, nr, reg, data)
#define READHSCXFIFO(cs, nr, ptr, cnt) ReadHSCXfifo(cs, nr, ptr, cnt)
#define WRITEHSCXFIFO(cs, nr, ptr, cnt) WriteHSCXfifo(cs, nr, ptr, cnt)
static irqreturn_t
gazel_interrupt(int intno, void *dev_id)
static irqreturn_t
gazel_interrupt_ipac(int intno, void *dev_id)
static void
release_io_gazel(struct IsdnCardState *cs)
static int
reset_gazel(struct IsdnCardState *cs)
static int
Gazel_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static int
reserve_regions(struct IsdnCard *card, struct IsdnCardState *cs)
static int __devinit
setup_gazelisa(struct IsdnCard *card, struct IsdnCardState *cs)
static struct pci_dev *dev_tel __devinitdata = NULL;
static int __devinit
setup_gazelpci(struct IsdnCardState *cs)
int __devinit
setup_gazel(struct IsdnCard *card)
