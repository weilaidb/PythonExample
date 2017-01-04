#define PMU_MINOR	154
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
#define TACK		0x02
#define TREQ		0x04
#define SR_CTRL		0x1c
#define SR_EXT		0x0c
#define SR_OUT		0x10
#define SR_INT		0x04
#define CB1_INT		0x10
static enum pmu_state  pmu_state;
static struct adb_request *current_req;
static struct adb_request *last_req;
static struct adb_request *req_awaiting_reply;
static unsigned char interrupt_data[32];
static unsigned char *reply_ptr;
static int data_index;
static int data_len;
static int adb_int_pending;
static int pmu_adb_flags;
static int adb_dev_map;
static struct adb_request bright_req_1, bright_req_2, bright_req_3;
static int pmu_kind = PMU_UNKNOWN;
static int pmu_fully_inited;
int asleep;
static int pmu_probe(void);
static int pmu_init(void);
static void pmu_start(void);
static irqreturn_t pmu_interrupt(int irq, void *arg);
static int pmu_send_request(struct adb_request *req, int sync);
static int pmu_autopoll(int devs);
void pmu_poll(void);
static int pmu_reset_bus(void);
static void pmu_start(void);
static void send_byte(int x);
static void recv_byte(void);
static void pmu_done(struct adb_request *req);
static void pmu_handle_data(unsigned char *data, int len);
static void set_volume(int level);
static void pmu_enable_backlight(int on);
static void pmu_set_brightness(int level);
struct adb_driver via_pmu_driver = ;
static s8 pmu_data_len[256][2] = ;
int pmu_probe(void)
static int
pmu_init(void)
int
pmu_get_model(void)
static int
pmu_send_request(struct adb_request *req, int sync)
static int
pmu_autopoll(int devs)
static int
pmu_reset_bus(void)
int
pmu_request(struct adb_request *req, void (*done)(struct adb_request *),
int nbytes, ...)
int
pmu_queue_request(struct adb_request *req)
static void
send_byte(int x)
static void
recv_byte(void)
static void
pmu_start(void)
void
pmu_poll(void)
static irqreturn_t
pmu_interrupt(int irq, void *dev_id)
static void
pmu_done(struct adb_request *req)
static void
pmu_handle_data(unsigned char *data, int len)
static int backlight_level = -1;
static int backlight_enabled = 0;
#define LEVEL_TO_BRIGHT(lev)	((lev) < 1? 0x7f: 0x4a - ((lev) << 1))
static void
pmu_enable_backlight(int on)
static void
pmu_set_brightness(int level)
void
pmu_enable_irled(int on)
static void
set_volume(int level)
int
pmu_present(void)
