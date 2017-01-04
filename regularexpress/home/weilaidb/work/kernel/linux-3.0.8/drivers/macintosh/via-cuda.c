static volatile unsigned char __iomem *via;
static DEFINE_SPINLOCK(cuda_lock);
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
#define TREQ		0x08
#define TACK		0x10
#define TIP		0x20
#define SR_CTRL		0x1c
#define SR_EXT		0x0c
#define SR_OUT		0x10
#define IER_SET		0x80
#define IER_CLR		0
#define SR_INT		0x04
static enum cuda_state  cuda_state;
static struct adb_request *current_req;
static struct adb_request *last_req;
static unsigned char cuda_rbuf[16];
static unsigned char *reply_ptr;
static int reading_reply;
static int data_index;
static int cuda_irq;
static struct device_node *vias;
static int cuda_fully_inited;
static int cuda_probe(void);
static int cuda_send_request(struct adb_request *req, int sync);
static int cuda_adb_autopoll(int devs);
static int cuda_reset_adb_bus(void);
static int cuda_init_via(void);
static void cuda_start(void);
static irqreturn_t cuda_interrupt(int irq, void *arg);
static void cuda_input(unsigned char *buf, int nb);
void cuda_poll(void);
static int cuda_write(struct adb_request *req);
int cuda_request(struct adb_request *req,
void (*done)(struct adb_request *), int nbytes, ...);
struct adb_driver via_cuda_driver = ;
int __init find_via_cuda(void)
int __init find_via_cuda(void)
static int __init via_cuda_start(void)
device_initcall(via_cuda_start);
static int
cuda_probe(void)
#define WAIT_FOR(cond, what)					\
do  while (0)
static int
cuda_init_via(void)
static int
cuda_send_request(struct adb_request *req, int sync)
static int
cuda_adb_autopoll(int devs)
static int
cuda_reset_adb_bus(void)
int
cuda_request(struct adb_request *req, void (*done)(struct adb_request *),
int nbytes, ...)
static int
cuda_write(struct adb_request *req)
static void
cuda_start(void)
void
cuda_poll(void)
static irqreturn_t
cuda_interrupt(int irq, void *arg)
static void
cuda_input(unsigned char *buf, int nb)
