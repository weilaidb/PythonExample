struct preg ;
struct adb_regs ;
#define DFB	1
#define TAG	2
#define HMB	0x0f
#define APD	0x10
#define NRE	1
#define DLE	2
#define TAR	1
#define DTB	2
#define CRE	4
#define ADB_RST	8
#define APE	1
static volatile struct adb_regs __iomem *adb;
static struct adb_request *current_req, *last_req;
static DEFINE_SPINLOCK(macio_lock);
static int macio_probe(void);
static int macio_init(void);
static irqreturn_t macio_adb_interrupt(int irq, void *arg);
static int macio_send_request(struct adb_request *req, int sync);
static int macio_adb_autopoll(int devs);
static void macio_adb_poll(void);
static int macio_adb_reset_bus(void);
struct adb_driver macio_adb_driver = ;
int macio_probe(void)
int macio_init(void)
static int macio_adb_autopoll(int devs)
static int macio_adb_reset_bus(void)
static int macio_send_request(struct adb_request *req, int sync)
static irqreturn_t macio_adb_interrupt(int irq, void *arg)
static void macio_adb_poll(void)
