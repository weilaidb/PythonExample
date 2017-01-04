static const char *Diva_revision = "$Revision: 1.33.2.6 $";
#define byteout(addr,val) outb(val,addr)
#define bytein(addr) inb(addr)
#define DIVA_HSCX_DATA		0
#define DIVA_HSCX_ADR		4
#define DIVA_ISA_ISAC_DATA	2
#define DIVA_ISA_ISAC_ADR	6
#define DIVA_ISA_CTRL		7
#define DIVA_IPAC_ADR		0
#define DIVA_IPAC_DATA		1
#define DIVA_PCI_ISAC_DATA	8
#define DIVA_PCI_ISAC_ADR	0xc
#define DIVA_PCI_CTRL		0x10
#define DIVA_ISA	1
#define DIVA_PCI	2
#define DIVA_IPAC_ISA	3
#define DIVA_IPAC_PCI	4
#define DIVA_IPACX_PCI	5
#define DIVA_IRQ_STAT	0x01
#define DIVA_EEPROM_SDA	0x02
#define DIVA_IRQ_REQ	0x01
#define DIVA_RESET	0x08
#define DIVA_EEPROM_CLK	0x40
#define DIVA_PCI_LED_A	0x10
#define DIVA_PCI_LED_B	0x20
#define DIVA_ISA_LED_A	0x20
#define DIVA_ISA_LED_B	0x40
#define DIVA_IRQ_CLR	0x80
#define PITA_MISC_REG		0x1c
#define PITA_PARA_SOFTRESET	0x00000001
#define PITA_SER_SOFTRESET	0x00000002
#define PITA_PARA_MPX_MODE	0x00000004
#define PITA_INT0_ENABLE	0x00000200
#define PITA_PARA_SOFTRESET	0x01000000
#define PITA_SER_SOFTRESET	0x02000000
#define PITA_PARA_MPX_MODE	0x04000000
#define PITA_INT0_ENABLE	0x00020000
#define PITA_INT0_STATUS	0x02
static inline u_char
readreg(unsigned int ale, unsigned int adr, u_char off)
static inline void
readfifo(unsigned int ale, unsigned int adr, u_char off, u_char * data, int size)
static inline void
writereg(unsigned int ale, unsigned int adr, u_char off, u_char data)
static inline void
writefifo(unsigned int ale, unsigned int adr, u_char off, u_char *data, int size)
static inline u_char
memreadreg(unsigned long adr, u_char off)
static inline void
memwritereg(unsigned long adr, u_char off, u_char data)
static u_char
ReadISAC(struct IsdnCardState *cs, u_char offset)
static void
WriteISAC(struct IsdnCardState *cs, u_char offset, u_char value)
static void
ReadISACfifo(struct IsdnCardState *cs, u_char *data, int size)
static void
WriteISACfifo(struct IsdnCardState *cs, u_char *data, int size)
static u_char
ReadISAC_IPAC(struct IsdnCardState *cs, u_char offset)
static void
WriteISAC_IPAC(struct IsdnCardState *cs, u_char offset, u_char value)
static void
ReadISACfifo_IPAC(struct IsdnCardState *cs, u_char * data, int size)
static void
WriteISACfifo_IPAC(struct IsdnCardState *cs, u_char * data, int size)
static u_char
ReadHSCX(struct IsdnCardState *cs, int hscx, u_char offset)
static void
WriteHSCX(struct IsdnCardState *cs, int hscx, u_char offset, u_char value)
static u_char
MemReadISAC_IPAC(struct IsdnCardState *cs, u_char offset)
static void
MemWriteISAC_IPAC(struct IsdnCardState *cs, u_char offset, u_char value)
static void
MemReadISACfifo_IPAC(struct IsdnCardState *cs, u_char * data, int size)
static void
MemWriteISACfifo_IPAC(struct IsdnCardState *cs, u_char * data, int size)
static u_char
MemReadHSCX(struct IsdnCardState *cs, int hscx, u_char offset)
static void
MemWriteHSCX(struct IsdnCardState *cs, int hscx, u_char offset, u_char value)
static u_char
MemReadISAC_IPACX(struct IsdnCardState *cs, u_char offset)
static void
MemWriteISAC_IPACX(struct IsdnCardState *cs, u_char offset, u_char value)
static void
MemReadISACfifo_IPACX(struct IsdnCardState *cs, u_char * data, int size)
static void
MemWriteISACfifo_IPACX(struct IsdnCardState *cs, u_char * data, int size)
static u_char
MemReadHSCX_IPACX(struct IsdnCardState *cs, int hscx, u_char offset)
static void
MemWriteHSCX_IPACX(struct IsdnCardState *cs, int hscx, u_char offset, u_char value)
#define READHSCX(cs, nr, reg) readreg(cs->hw.diva.hscx_adr, \
cs->hw.diva.hscx, reg + (nr ? 0x40 : 0))
#define WRITEHSCX(cs, nr, reg, data) writereg(cs->hw.diva.hscx_adr, \
cs->hw.diva.hscx, reg + (nr ? 0x40 : 0), data)
#define READHSCXFIFO(cs, nr, ptr, cnt) readfifo(cs->hw.diva.hscx_adr, \
cs->hw.diva.hscx, (nr ? 0x40 : 0), ptr, cnt)
#define WRITEHSCXFIFO(cs, nr, ptr, cnt) writefifo(cs->hw.diva.hscx_adr, \
cs->hw.diva.hscx, (nr ? 0x40 : 0), ptr, cnt)
static irqreturn_t
diva_interrupt(int intno, void *dev_id)
static irqreturn_t
diva_irq_ipac_isa(int intno, void *dev_id)
static inline void
MemwaitforCEC(struct IsdnCardState *cs, int hscx)
static inline void
MemwaitforXFW(struct IsdnCardState *cs, int hscx)
static inline void
MemWriteHSCXCMDR(struct IsdnCardState *cs, int hscx, u_char data)
static void
Memhscx_empty_fifo(struct BCState *bcs, int count)
static void
Memhscx_fill_fifo(struct BCState *bcs)
static void
Memhscx_interrupt(struct IsdnCardState *cs, u_char val, u_char hscx)
static inline void
Memhscx_int_main(struct IsdnCardState *cs, u_char val)
static irqreturn_t
diva_irq_ipac_pci(int intno, void *dev_id)
static irqreturn_t
diva_irq_ipacx_pci(int intno, void *dev_id)
static void
release_io_diva(struct IsdnCardState *cs)
static void
iounmap_diva(struct IsdnCardState *cs)
static void
reset_diva(struct IsdnCardState *cs)
#define DIVA_ASSIGN 1
static void
diva_led_handler(struct IsdnCardState *cs)
static int
Diva_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static int __devinit setup_diva_common(struct IsdnCardState *cs)
static int __devinit setup_diva_isa(struct IsdnCard *card)
static int __devinit setup_diva_isa(struct IsdnCard *card)
static struct isapnp_device_id diva_ids[] __devinitdata = ;
static struct isapnp_device_id *ipid __devinitdata = &diva_ids[0];
static struct pnp_card *pnp_c __devinitdata = NULL;
static int __devinit setup_diva_isapnp(struct IsdnCard *card)
static int __devinit setup_diva_isapnp(struct IsdnCard *card)
static struct pci_dev *dev_diva __devinitdata = NULL;
static struct pci_dev *dev_diva_u __devinitdata = NULL;
static struct pci_dev *dev_diva201 __devinitdata = NULL;
static struct pci_dev *dev_diva202 __devinitdata = NULL;
static int __devinit setup_diva_pci(struct IsdnCard *card)
static int __devinit setup_diva_pci(struct IsdnCard *card)
int __devinit
setup_diva(struct IsdnCard *card)
