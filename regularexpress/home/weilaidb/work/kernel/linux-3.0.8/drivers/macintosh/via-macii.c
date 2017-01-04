static volatile unsigned char *via;
#define RS		0x200
#define B		0
#define A		RS
#define DIRB		(2*RS)
#define DIRA		(3*RS)
#define T1CL		(4*RS)
#define T1CH		(5*RS)
#define T1LL		(6*RS)
#define T1LH		(7*RS)
#define T2CL		(8*RS)
#define T2CH		(9*RS)
#define SR		(10*RS)
#define ACR		(11*RS)
#define PCR		(12*RS)
#define IFR		(13*RS)
#define IER		(14*RS)
#define ANH		(15*RS)
#define CTLR_IRQ	0x08
#define ST_MASK		0x30
#define SR_CTRL		0x1c
#define SR_EXT		0x0c
#define SR_OUT		0x10
#define IER_SET		0x80
#define IER_CLR		0
#define SR_INT		0x04
#define ST_CMD		0x00
#define ST_EVEN		0x10
#define ST_ODD		0x20
#define ST_IDLE		0x30
static int  macii_init_via(void);
static void macii_start(void);
static irqreturn_t macii_interrupt(int irq, void *arg);
static void macii_queue_poll(void);
static int macii_probe(void);
static int macii_init(void);
static int macii_send_request(struct adb_request *req, int sync);
static int macii_write(struct adb_request *req);
static int macii_autopoll(int devs);
static void macii_poll(void);
static int macii_reset_bus(void);
struct adb_driver via_macii_driver = ;
static enum macii_state  macii_state;
static struct adb_request *current_req;
static struct adb_request *last_req;
static unsigned char reply_buf[16];
static unsigned char *reply_ptr;
static int reading_reply;
static int data_index;
static int reply_len;
static int status;
static int last_status;
static int srq_asserted;
static int command_byte;
static int autopoll_devs;
static int request_is_queued(struct adb_request *req)
static int macii_probe(void)
int macii_init(void)
static int macii_init_via(void)
static void macii_queue_poll(void)
static int macii_send_request(struct adb_request *req, int sync)
static int macii_write(struct adb_request *req)
static int macii_autopoll(int devs)
static inline int need_autopoll(void)
static void macii_poll(void)
static int macii_reset_bus(void)
static void macii_start(void)
static irqreturn_t macii_interrupt(int irq, void *arg)
