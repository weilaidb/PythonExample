struct rx_header ;
#define PAR_DATA	0
#define PAR_STATUS	1
#define PAR_CONTROL 2
enum chip_type ;
#define Ctrl_LNibRead	0x08
#define Ctrl_HNibRead	0
#define Ctrl_LNibWrite	0x08
#define Ctrl_HNibWrite	0
#define Ctrl_SelData	0x04
#define Ctrl_IRQEN	0x10
#define EOW	0xE0
#define EOC	0xE0
#define WrAddr	0x40
#define RdAddr	0xC0
#define HNib	0x10
enum page0_regs
;
enum eepage_regs
;
#define ISR_TxOK	0x01
#define ISR_RxOK	0x04
#define ISR_TxErr	0x02
#define ISRh_RxErr	0x11
#define CMR1h_MUX	0x08
#define CMR1h_RESET	0x04
#define CMR1h_RxENABLE	0x02
#define CMR1h_TxENABLE	0x01
#define CMR1h_TxRxOFF	0x00
#define CMR1_ReXmit	0x08
#define CMR1_Xmit	0x04
#define	CMR1_IRQ	0x02
#define	CMR1_BufEnb	0x01
#define	CMR1_NextPkt	0x01
#define CMR2_NULL	8
#define CMR2_IRQOUT	9
#define CMR2_RAMTEST	10
#define CMR2_EEPROM	12
#define CMR2h_OFF	0
#define CMR2h_Physical	1
#define CMR2h_Normal	2
#define CMR2h_PROMISC	3
static inline unsigned char inbyte(unsigned short port)
static inline unsigned char read_nibble(short port, unsigned char offset)
static inline unsigned char read_byte_mode0(short ioaddr)
static inline unsigned char read_byte_mode2(short ioaddr)
static inline unsigned char read_byte_mode4(short ioaddr)
static inline unsigned char read_byte_mode6(short ioaddr)
static inline void
write_reg(short port, unsigned char reg, unsigned char value)
static inline void
write_reg_high(short port, unsigned char reg, unsigned char value)
static inline void
write_reg_byte(short port, unsigned char reg, unsigned char value)
static inline void write_byte_mode0(short ioaddr, unsigned char value)
static inline void write_byte_mode1(short ioaddr, unsigned char value)
static inline void write_word_mode0(short ioaddr, unsigned short value)
#define EE_SHIFT_CLK	0x04
#define EE_CS		0x02
#define EE_CLK_HIGH	0x12
#define EE_CLK_LOW	0x16
#define EE_DATA_WRITE	0x01
#define EE_DATA_READ	0x08
#define eeprom_delay(ticks) \
do  while (0)
#define EE_WRITE_CMD(offset)	(((5 << 6) + (offset)) << 17)
#define EE_READ(offset) 	(((6 << 6) + (offset)) << 17)
#define EE_ERASE(offset)	(((7 << 6) + (offset)) << 17)
#define EE_CMD_SIZE	27
