#define PS_VERSION	"1.02"
static void ps_tq_int(struct work_struct *work);
static void (* ps_continuation)(void);
static int (* ps_ready)(void);
static unsigned long ps_timeout;
static int ps_tq_active = 0;
static int ps_nice = 0;
static DEFINE_SPINLOCK(ps_spinlock __attribute__((unused)));
static DECLARE_DELAYED_WORK(ps_tq, ps_tq_int);
static void ps_set_intr(void (*continuation)(void),
int (*ready)(void),
int timeout, int nice)
static void ps_tq_int(struct work_struct *work)
