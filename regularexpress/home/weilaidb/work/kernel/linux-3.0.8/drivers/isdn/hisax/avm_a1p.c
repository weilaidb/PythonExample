#define ADDRREG_OFFSET		0x02
#define DATAREG_OFFSET		0x03
#define ASL0_OFFSET		0x04
#define ASL1_OFFSET		0x05
#define MODREG_OFFSET		0x06
#define VERREG_OFFSET		0x07
#define ISAC_FIFO_OFFSET	0x00
#define ISAC_REG_OFFSET		0x20
#define HSCX_CH_DIFF		0x40
#define HSCX_FIFO_OFFSET	0x80
#define HSCX_REG_OFFSET		0xa0
#define	 ASL0_R_TIMER		0x10
#define	 ASL0_R_ISAC		0x20
#define	 ASL0_R_HSCX		0x40
#define	 ASL0_R_TESTBIT		0x80
#define  ASL0_R_IRQPENDING	(ASL0_R_ISAC|ASL0_R_HSCX|ASL0_R_TIMER)
#define	 ASL0_W_RESET		0x01
#define	 ASL0_W_TDISABLE	0x02
#define	 ASL0_W_TRESET		0x04
#define	 ASL0_W_IRQENABLE	0x08
#define	 ASL0_W_TESTBIT		0x80
#define	 ASL1_W_LED0		0x10
#define	 ASL1_W_LED1		0x20
#define	 ASL1_W_ENABLE_S0	0xC0
#define byteout(addr,val) outb(val,addr)
#define bytein(addr) inb(addr)
static const char *avm_revision = "$Revision: 2.9.2.5 $";
static inline u_char
ReadISAC(struct IsdnCardState *cs, u_char offset)
static inline void
WriteISAC(struct IsdnCardState *cs, u_char offset, u_char value)
static inline void
ReadISACfifo(struct IsdnCardState *cs, u_char * data, int size)
static inline void
WriteISACfifo(struct IsdnCardState *cs, u_char * data, int size)
static inline u_char
ReadHSCX(struct IsdnCardState *cs, int hscx, u_char offset)
static inline void
WriteHSCX(struct IsdnCardState *cs, int hscx, u_char offset, u_char value)
static inline void
ReadHSCXfifo(struct IsdnCardState *cs, int hscx, u_char * data, int size)
static inline void
WriteHSCXfifo(struct IsdnCardState *cs, int hscx, u_char * data, int size)
#define READHSCX(cs, nr, reg) ReadHSCX(cs, nr, reg)
#define WRITEHSCX(cs, nr, reg, data) WriteHSCX(cs, nr, reg, data)
#define READHSCXFIFO(cs, nr, ptr, cnt) ReadHSCXfifo(cs, nr, ptr, cnt)
#define WRITEHSCXFIFO(cs, nr, ptr, cnt) WriteHSCXfifo(cs, nr, ptr, cnt)
static irqreturn_t
avm_a1p_interrupt(int intno, void *dev_id)
static int
AVM_card_msg(struct IsdnCardState *cs, int mt, void *arg)
int __devinit setup_avm_a1_pcmcia(struct IsdnCard *card)
