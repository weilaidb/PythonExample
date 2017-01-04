#define	ATTEMPT_PCI_REMAPPING
static const char sct_quadro_revision[] = "$Revision: 1.22.2.4 $";
static const char *sct_quadro_subtypes[] =
;
#define wordout(addr,val) outw(val,addr)
#define wordin(addr) inw(addr)
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
static void
set_ipac_active(struct IsdnCardState *cs, u_int active)
#define READHSCX(cs, nr, reg) readreg(cs->hw.ax.base, \
cs->hw.ax.data_adr, reg + (nr ? 0x40 : 0))
#define WRITEHSCX(cs, nr, reg, data) writereg(cs->hw.ax.base, \
cs->hw.ax.data_adr, reg + (nr ? 0x40 : 0), data)
#define READHSCXFIFO(cs, nr, ptr, cnt) readfifo(cs->hw.ax.base, \
cs->hw.ax.data_adr, (nr ? 0x40 : 0), ptr, cnt)
#define WRITEHSCXFIFO(cs, nr, ptr, cnt) writefifo(cs->hw.ax.base, \
cs->hw.ax.data_adr, (nr ? 0x40 : 0), ptr, cnt)
static irqreturn_t
bkm_interrupt_ipac(int intno, void *dev_id)
static void
release_io_sct_quadro(struct IsdnCardState *cs)
static void
enable_bkm_int(struct IsdnCardState *cs, unsigned bEnable)
static void
reset_bkm(struct IsdnCardState *cs)
static int
BKM_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static int __devinit
sct_alloc_io(u_int adr, u_int len)
static struct pci_dev *dev_a8 __devinitdata = NULL;
static u16  sub_vendor_id __devinitdata = 0;
static u16  sub_sys_id __devinitdata = 0;
static u_char pci_bus __devinitdata = 0;
static u_char pci_device_fn __devinitdata = 0;
static u_char pci_irq __devinitdata = 0;
int __devinit
setup_sct_quadro(struct IsdnCard *card)
