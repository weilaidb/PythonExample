static volatile unsigned char *via;
#define RS		0x200
#define B		0
#define A		RS
#define DIRB		(2*RS)
#define DIRA		(3*RS)
#define SR		(10*RS)
#define ACR		(11*RS)
#define IFR		(13*RS)
#define IER		(14*RS)
#define TREQ		0x08
#define TACK		0x10
#define TIP		0x20
#define ST_MASK		0x30
#define SR_CTRL		0x1c
#define SR_EXT		0x0c
#define SR_OUT		0x10
#define IER_SET		0x80
#define IER_CLR		0
#define SR_INT		0x04
#define SR_DATA		0x08
#define SR_CLOCK	0x10
#define ADB_DELAY 150
#undef DEBUG_MACIISI_ADB
static struct adb_request* current_req;
static struct adb_request* last_req;
static unsigned char maciisi_rbuf[16];
static unsigned char *reply_ptr;
static int data_index;
static int reading_reply;
static int reply_len;
static int tmp;
static int need_sync;
static enum maciisi_state  maciisi_state;
static int maciisi_probe(void);
static int maciisi_init(void);
static int maciisi_send_request(struct adb_request* req, int sync);
static void maciisi_sync(struct adb_request *req);
static int maciisi_write(struct adb_request* req);
static irqreturn_t maciisi_interrupt(int irq, void* arg);
static void maciisi_input(unsigned char *buf, int nb);
static int maciisi_init_via(void);
static void maciisi_poll(void);
static int maciisi_start(void);
struct adb_driver via_maciisi_driver = ;
static int
maciisi_probe(void)
static int
maciisi_init(void)
static void
maciisi_stfu(void)
static int
maciisi_init_via(void)
static int
maciisi_send_request(struct adb_request* req, int sync)
static void maciisi_sync(struct adb_request *req)
int
maciisi_request(struct adb_request *req, void (*done)(struct adb_request *),
int nbytes, ...)
static int
maciisi_write(struct adb_request* req)
static int
maciisi_start(void)
void
maciisi_poll(void)
static irqreturn_t
maciisi_interrupt(int irq, void* arg)
static void
maciisi_input(unsigned char *buf, int nb)
