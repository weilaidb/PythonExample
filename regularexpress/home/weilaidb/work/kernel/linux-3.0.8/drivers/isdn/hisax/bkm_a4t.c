static const char *bkm_a4t_revision = "$Revision: 1.22.2.4 $";
static inline u_char
readreg(unsigned int ale, unsigned long adr, u_char off)
static inline void
readfifo(unsigned int ale, unsigned long adr, u_char off, u_char * data, int size)
static inline void
writereg(unsigned int ale, unsigned long adr, u_char off, u_char data)
static inline void
writefifo(unsigned int ale, unsigned long adr, u_char off, u_char * data, int size)
static u_char
ReadISAC(struct IsdnCardState *cs, u_char offset)
static void
WriteISAC(struct IsdnCardState *cs, u_char offset, u_char value)
static void
ReadISACfifo(struct IsdnCardState *cs, u_char * data, int size)
static void
WriteISACfifo(struct IsdnCardState *cs, u_char * data, int size)
static u_char
ReadJADE(struct IsdnCardState *cs, int jade, u_char offset)
static void
WriteJADE(struct IsdnCardState *cs, int jade, u_char offset, u_char value)
#define READJADE(cs, nr, reg) readreg(cs->hw.ax.jade_ale,\
cs->hw.ax.jade_adr, reg + (nr == -1 ? 0 : (nr ? 0xC0 : 0x80)))
#define WRITEJADE(cs, nr, reg, data) writereg(cs->hw.ax.jade_ale,\
cs->hw.ax.jade_adr, reg + (nr == -1 ? 0 : (nr ? 0xC0 : 0x80)), data)
#define READJADEFIFO(cs, nr, ptr, cnt) readfifo(cs->hw.ax.jade_ale,\
cs->hw.ax.jade_adr, (nr == -1 ? 0 : (nr ? 0xC0 : 0x80)), ptr, cnt)
#define WRITEJADEFIFO(cs, nr, ptr, cnt) writefifo( cs->hw.ax.jade_ale,\
cs->hw.ax.jade_adr, (nr == -1 ? 0 : (nr ? 0xC0 : 0x80)), ptr, cnt)
static irqreturn_t
bkm_interrupt(int intno, void *dev_id)
static void
release_io_bkm(struct IsdnCardState *cs)
static void
enable_bkm_int(struct IsdnCardState *cs, unsigned bEnable)
static void
reset_bkm(struct IsdnCardState *cs)
static int
BKM_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static int __devinit a4t_pci_probe(struct pci_dev *dev_a4t,
struct IsdnCardState *cs,
u_int *found,
u_int *pci_memaddr)
static int __devinit a4t_cs_init(struct IsdnCard *card,
struct IsdnCardState *cs,
u_int pci_memaddr)
static struct pci_dev *dev_a4t __devinitdata = NULL;
int __devinit
setup_bkm_a4t(struct IsdnCard *card)
