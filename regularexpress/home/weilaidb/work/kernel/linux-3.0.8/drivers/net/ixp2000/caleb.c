#define CALEB_IDLO		0x00
#define CALEB_IDHI		0x01
#define CALEB_RID		0x02
#define CALEB_RESET		0x03
#define CALEB_INTREN0		0x04
#define CALEB_INTREN1		0x05
#define CALEB_INTRSTAT0		0x06
#define CALEB_INTRSTAT1		0x07
#define CALEB_PORTEN		0x08
#define CALEB_BURST		0x09
#define CALEB_PORTPAUS		0x0A
#define CALEB_PORTPAUSD		0x0B
#define CALEB_PHY0RX		0x10
#define CALEB_PHY1RX		0x11
#define CALEB_PHY0TX		0x12
#define CALEB_PHY1TX		0x13
#define CALEB_IXPRX_HI_CNTR	0x15
#define CALEB_PHY0RX_HI_CNTR	0x16
#define CALEB_PHY1RX_HI_CNTR	0x17
#define CALEB_IXPRX_CNTR	0x18
#define CALEB_PHY0RX_CNTR	0x19
#define CALEB_PHY1RX_CNTR	0x1A
#define CALEB_IXPTX_CNTR	0x1B
#define CALEB_PHY0TX_CNTR	0x1C
#define CALEB_PHY1TX_CNTR	0x1D
#define CALEB_DEBUG0		0x1E
#define CALEB_DEBUG1		0x1F
static u8 caleb_reg_read(int reg)
static void caleb_reg_write(int reg, u8 value)
void caleb_reset(void)
void caleb_enable_rx(int port)
void caleb_disable_rx(int port)
void caleb_enable_tx(int port)
void caleb_disable_tx(int port)
