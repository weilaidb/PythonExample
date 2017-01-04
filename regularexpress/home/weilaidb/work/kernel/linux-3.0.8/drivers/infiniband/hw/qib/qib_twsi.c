#define READ_CMD 1
#define WRITE_CMD 0
static void i2c_wait_for_writes(struct qib_devdata *dd)
#define SCL_WAIT_USEC 1000
#define TWSI_BUF_WAIT_USEC 60
static void scl_out(struct qib_devdata *dd, u8 bit)
static void sda_out(struct qib_devdata *dd, u8 bit)
static u8 sda_in(struct qib_devdata *dd, int wait)
static int i2c_ackrcv(struct qib_devdata *dd)
static void stop_cmd(struct qib_devdata *dd);
static int rd_byte(struct qib_devdata *dd, int last)
static int wr_byte(struct qib_devdata *dd, u8 data)
static void start_seq(struct qib_devdata *dd)
static void stop_seq(struct qib_devdata *dd)
static void stop_cmd(struct qib_devdata *dd)
int qib_twsi_reset(struct qib_devdata *dd)
#define QIB_TWSI_START 0x100
#define QIB_TWSI_STOP 0x200
static int qib_twsi_wr(struct qib_devdata *dd, int data, int flags)
#define QIB_TEMP_DEV 0x98
int qib_twsi_blk_rd(struct qib_devdata *dd, int dev, int addr,
void *buffer, int len)
int qib_twsi_blk_wr(struct qib_devdata *dd, int dev, int addr,
const void *buffer, int len)
