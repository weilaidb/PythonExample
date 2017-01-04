#define X1241REG_SR_BAT	0x80
#define X1241REG_SR_RWEL 0x04
#define X1241REG_SR_WEL 0x02
#define X1241REG_SR_RTCF 0x01
#define X1241REG_BL_BP2 0x80
#define X1241REG_BL_BP1 0x40
#define X1241REG_BL_BP0 0x20
#define X1241REG_BL_WD1	0x10
#define X1241REG_BL_WD0	0x08
#define X1241REG_HR_MIL 0x80
#define X1241REG_BL	0x10
#define X1241REG_INT	0x11
#define X1241REG_SC	0x30
#define X1241REG_MN	0x31
#define X1241REG_HR	0x32
#define X1241REG_DT	0x33
#define X1241REG_MO	0x34
#define X1241REG_YR	0x35
#define X1241REG_DW	0x36
#define X1241REG_Y2K	0x37
#define X1241REG_SR	0x3F
#define X1241_CCR_ADDRESS	0x6F
#define SMB_CSR(reg)	IOADDR(A_SMB_REGISTER(1, reg))
static int xicor_read(uint8_t addr)
static int xicor_write(uint8_t addr, int b)
int xicor_set_time(unsigned long t)
unsigned long xicor_get_time(void)
int xicor_probe(void)
