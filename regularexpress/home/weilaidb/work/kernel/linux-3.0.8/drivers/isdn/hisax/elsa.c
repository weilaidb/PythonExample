static const char *Elsa_revision = "$Revision: 2.32.2.4 $";
static const char *Elsa_Types[] =
;
static const char *ITACVer[] =
;
#define byteout(addr,val) outb(val,addr)
#define bytein(addr) inb(addr)
#define ELSA_ISAC	0
#define ELSA_ISAC_PCM	1
#define ELSA_ITAC	1
#define ELSA_HSCX	2
#define ELSA_ALE	3
#define ELSA_ALE_PCM	4
#define ELSA_CONTROL	4
#define ELSA_CONFIG	5
#define ELSA_START_TIMER 6
#define ELSA_TRIG_IRQ	7
#define ELSA_PC      1
#define ELSA_PCC8    2
#define ELSA_PCC16   3
#define ELSA_PCF     4
#define ELSA_PCFPRO  5
#define ELSA_PCMCIA  6
#define ELSA_QS1000  7
#define ELSA_QS3000  8
#define ELSA_QS1000PCI 9
#define ELSA_QS3000PCI 10
#define ELSA_PCMCIA_IPAC 11
#define ELSA_PCI_IRQ_MASK	0x04
#define ITAC_SYS	0x34
#define ITAC_ISEN	0x48
#define ITAC_RFIE	0x4A
#define ITAC_XFIE	0x4C
#define ITAC_SCIE	0x4E
#define ITAC_STIE	0x46
#define ELIRQF_TIMER_RUN       0x02
#define ELIRQF_TIMER_RUN_PCC8  0x01
#define ELSA_IRQ_IDX       0x38
#define ELSA_IRQ_IDX_PCC8  0x30
#define ELSA_IRQ_IDX_PC    0x0c
#define ELSA_LINE_LED        0x02
#define ELSA_STAT_LED        0x08
#define ELSA_ISDN_RESET      0x20
#define ELSA_ENA_TIMER_INT   0x80
#define ELSA_HW_RELEASE      0x07
#define ELSA_S0_POWER_BAD    0x08
#define ELIRQF_TIMER_AKTIV 1
#define ELSA_BAD_PWR     2
#define ELSA_ASSIGN      4
#define RS_ISR_PASS_LIMIT 256
#define FLG_MODEM_ACTIVE 1
#define ELSA_IPAC_LINE_LED	0x40
#define ELSA_IPAC_STAT_LED	0x80
#if ARCOFI_USE
static struct arcofi_msg ARCOFI_XOP_F =
;
static struct arcofi_msg ARCOFI_XOP_1 =
;
static struct arcofi_msg ARCOFI_SOP_F =
;
static struct arcofi_msg ARCOFI_COP_9 =
;
static struct arcofi_msg ARCOFI_COP_8 =
;
static struct arcofi_msg ARCOFI_COP_7 =
;
static struct arcofi_msg ARCOFI_COP_6 =
;
static struct arcofi_msg ARCOFI_COP_5 =
;
static struct arcofi_msg ARCOFI_VERSION =
;
static struct arcofi_msg ARCOFI_XOP_0 =
;
static void set_arcofi(struct IsdnCardState *cs, int bc);
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
static inline u_char
readitac(struct IsdnCardState *cs, u_char off)
static inline void
writeitac(struct IsdnCardState *cs, u_char off, u_char data)
static inline int
TimerRun(struct IsdnCardState *cs)
#define READHSCX(cs, nr, reg) readreg(cs->hw.elsa.ale, \
cs->hw.elsa.hscx, reg + (nr ? 0x40 : 0))
#define WRITEHSCX(cs, nr, reg, data) writereg(cs->hw.elsa.ale, \
cs->hw.elsa.hscx, reg + (nr ? 0x40 : 0), data)
#define READHSCXFIFO(cs, nr, ptr, cnt) readfifo(cs->hw.elsa.ale, \
cs->hw.elsa.hscx, (nr ? 0x40 : 0), ptr, cnt)
#define WRITEHSCXFIFO(cs, nr, ptr, cnt) writefifo(cs->hw.elsa.ale, \
cs->hw.elsa.hscx, (nr ? 0x40 : 0), ptr, cnt)
static irqreturn_t
elsa_interrupt(int intno, void *dev_id)
static irqreturn_t
elsa_interrupt_ipac(int intno, void *dev_id)
static void
release_io_elsa(struct IsdnCardState *cs)
static void
reset_elsa(struct IsdnCardState *cs)
#if ARCOFI_USE
static void
set_arcofi(struct IsdnCardState *cs, int bc)
static int
check_arcofi(struct IsdnCardState *cs)
static void
elsa_led_handler(struct IsdnCardState *cs)
static int
Elsa_card_msg(struct IsdnCardState *cs, int mt, void *arg)
static unsigned char
probe_elsa_adr(unsigned int adr, int typ)
static unsigned int
probe_elsa(struct IsdnCardState *cs)
static int __devinit
setup_elsa_isa(struct IsdnCard *card)
static struct isapnp_device_id elsa_ids[] __devinitdata = ;
static struct isapnp_device_id *ipid __devinitdata = &elsa_ids[0];
static struct pnp_card *pnp_c __devinitdata = NULL;
static int __devinit
setup_elsa_isapnp(struct IsdnCard *card)
static void __devinit
setup_elsa_pcmcia(struct IsdnCard *card)
static 	struct pci_dev *dev_qs1000 __devinitdata = NULL;
static 	struct pci_dev *dev_qs3000 __devinitdata = NULL;
static int __devinit
setup_elsa_pci(struct IsdnCard *card)
static int __devinit
setup_elsa_pci(struct IsdnCard *card)
static int __devinit
setup_elsa_common(struct IsdnCard *card)
int __devinit
setup_elsa(struct IsdnCard *card)
