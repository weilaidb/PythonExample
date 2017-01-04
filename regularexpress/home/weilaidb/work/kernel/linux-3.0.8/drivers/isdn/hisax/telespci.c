static const char *telespci_revision = "$Revision: 2.23.2.3 $";
#define ZORAN_PO_RQ_PEN	0x02000000
#define ZORAN_PO_WR	0x00800000
#define ZORAN_PO_GID0	0x00000000
#define ZORAN_PO_GID1	0x00100000
#define ZORAN_PO_GREG0	0x00000000
#define ZORAN_PO_GREG1	0x00010000
#define ZORAN_PO_DMASK	0xFF
#define WRITE_ADDR_ISAC	(ZORAN_PO_WR | ZORAN_PO_GID0 | ZORAN_PO_GREG0)
#define READ_DATA_ISAC	(ZORAN_PO_GID0 | ZORAN_PO_GREG1)
#define WRITE_DATA_ISAC	(ZORAN_PO_WR | ZORAN_PO_GID0 | ZORAN_PO_GREG1)
#define WRITE_ADDR_HSCX	(ZORAN_PO_WR | ZORAN_PO_GID1 | ZORAN_PO_GREG0)
#define READ_DATA_HSCX	(ZORAN_PO_GID1 | ZORAN_PO_GREG1)
#define WRITE_DATA_HSCX	(ZORAN_PO_WR | ZORAN_PO_GID1 | ZORAN_PO_GREG1)
#define ZORAN_WAIT_NOBUSY	do  while (portdata & ZORAN_PO_RQ_PEN)
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
static void
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
telespci_interrupt(int intno, void *dev_id)
static void
release_io_telespci(struct IsdnCardState *cs)
static int
TelesPCI_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static struct pci_dev *dev_tel __devinitdata = NULL;
int __devinit
setup_telespci(struct IsdnCard *card)
