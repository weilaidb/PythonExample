#define _PRCM_MB_HEADER (tcdm_base + 0xFE8)
#define PRCM_REQ_MB0_HEADER (_PRCM_MB_HEADER + 0x0)
#define PRCM_REQ_MB1_HEADER (_PRCM_MB_HEADER + 0x1)
#define PRCM_REQ_MB2_HEADER (_PRCM_MB_HEADER + 0x2)
#define PRCM_REQ_MB3_HEADER (_PRCM_MB_HEADER + 0x3)
#define PRCM_REQ_MB4_HEADER (_PRCM_MB_HEADER + 0x4)
#define PRCM_REQ_MB5_HEADER (_PRCM_MB_HEADER + 0x5)
#define PRCM_REQ_MB6_HEADER (_PRCM_MB_HEADER + 0x6)
#define PRCM_REQ_MB7_HEADER (_PRCM_MB_HEADER + 0x7)
#define PRCM_ACK_MB0_HEADER (_PRCM_MB_HEADER + 0x8)
#define PRCM_ACK_MB1_HEADER (_PRCM_MB_HEADER + 0x9)
#define PRCM_ACK_MB2_HEADER (_PRCM_MB_HEADER + 0xa)
#define PRCM_ACK_MB3_HEADER (_PRCM_MB_HEADER + 0xb)
#define PRCM_ACK_MB4_HEADER (_PRCM_MB_HEADER + 0xc)
#define PRCM_ACK_MB5_HEADER (_PRCM_MB_HEADER + 0xd)
#define PRCM_ACK_MB6_HEADER (_PRCM_MB_HEADER + 0xe)
#define PRCM_ACK_MB7_HEADER (_PRCM_MB_HEADER + 0xf)
#define PRCM_REQ_MB0 (tcdm_base + 0xFD8)
#define PRCM_REQ_MB1 (tcdm_base + 0xFCC)
#define PRCM_REQ_MB2 (tcdm_base + 0xFC4)
#define PRCM_REQ_MB3 (tcdm_base + 0xFC0)
#define PRCM_REQ_MB4 (tcdm_base + 0xF98)
#define PRCM_REQ_MB5 (tcdm_base + 0xF90)
#define PRCM_REQ_MB6 (tcdm_base + 0xF8C)
#define PRCM_REQ_MB7 (tcdm_base + 0xF84)
#define PRCM_ACK_MB0 (tcdm_base + 0xF38)
#define PRCM_ACK_MB1 (tcdm_base + 0xF30)
#define PRCM_ACK_MB2 (tcdm_base + 0xF24)
#define PRCM_ACK_MB3 (tcdm_base + 0xF20)
#define PRCM_ACK_MB4 (tcdm_base + 0xF1C)
#define PRCM_ACK_MB5 (tcdm_base + 0xF14)
#define PRCM_ACK_MB6 (tcdm_base + 0xF0C)
#define PRCM_ACK_MB7 (tcdm_base + 0xF08)
enum mb_return_code ;
enum mb0_header ;
enum mb5_header ;
#define PRCM_REQ_MB5_I2C_SLAVE (PRCM_REQ_MB5 + 0)
#define PRCM_REQ_MB5_I2C_REG (PRCM_REQ_MB5 + 1)
#define PRCM_REQ_MB5_I2C_SIZE (PRCM_REQ_MB5 + 2)
#define PRCM_REQ_MB5_I2C_DATA (PRCM_REQ_MB5 + 4)
#define PRCM_ACK_MB5_RETURN_CODE (PRCM_ACK_MB5 + 0)
#define PRCM_ACK_MB5_I2C_DATA (PRCM_ACK_MB5 + 4)
#define NUM_MB 8
#define MBOX_BIT BIT
#define ALL_MBOX_BITS (MBOX_BIT(NUM_MB) - 1)
#define PRCMU_RESET_DSIPLL			0x00004000
#define PRCMU_UNCLAMP_DSIPLL			0x00400800
#define PRCMU_DSI_CLOCK_SETTING			0x00000128
#define PRCMU_DSI_LP_CLOCK_SETTING		0x00000135
#define PRCMU_PLLDSI_FREQ_SETTING		0x0004013C
#define PRCMU_DSI_PLLOUT_SEL_SETTING		0x00000002
#define PRCMU_ENABLE_ESCAPE_CLOCK_DIV		0x03000101
#define PRCMU_DISABLE_ESCAPE_CLOCK_DIV		0x00000101
#define PRCMU_ENABLE_PLLDSI			0x00000001
#define PRCMU_DISABLE_PLLDSI			0x00000000
#define PRCMU_DSI_RESET_SW			0x00000003
#define PRCMU_PLLDSI_LOCKP_LOCKED		0x3
static struct  mb0_transfer;
static struct  mb5_transfer;
static __iomem void *tcdm_base;
int db5500_prcmu_abb_read(u8 slave, u8 reg, u8 *value, u8 size)
int db5500_prcmu_abb_write(u8 slave, u8 reg, u8 *value, u8 size)
int db5500_prcmu_enable_dsipll(void)
int db5500_prcmu_disable_dsipll(void)
int db5500_prcmu_set_display_clocks(void)
static void ack_dbb_wakeup(void)
static inline void print_unknown_header_warning(u8 n, u8 header)
static bool read_mailbox_0(void)
static bool read_mailbox_1(void)
static bool read_mailbox_2(void)
static bool read_mailbox_3(void)
static bool read_mailbox_4(void)
static bool read_mailbox_5(void)
static bool read_mailbox_6(void)
static bool read_mailbox_7(void)
static bool (* const read_mailbox[NUM_MB])(void) = ;
static irqreturn_t prcmu_irq_handler(int irq, void *data)
static irqreturn_t prcmu_irq_thread_fn(int irq, void *data)
void __init db5500_prcmu_early_init(void)
int __init db5500_prcmu_init(void)
arch_initcall(db5500_prcmu_init);
