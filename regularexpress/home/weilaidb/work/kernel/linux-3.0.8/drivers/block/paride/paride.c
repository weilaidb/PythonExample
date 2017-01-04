#define PI_VERSION      "1.06"
MODULE_LICENSE("GPL");
#define MAX_PROTOS	32
static struct pi_protocol *protocols[MAX_PROTOS];
static DEFINE_SPINLOCK(pi_spinlock);
void pi_write_regr(PIA * pi, int cont, int regr, int val)
EXPORT_SYMBOL(pi_write_regr);
int pi_read_regr(PIA * pi, int cont, int regr)
EXPORT_SYMBOL(pi_read_regr);
void pi_write_block(PIA * pi, char *buf, int count)
EXPORT_SYMBOL(pi_write_block);
void pi_read_block(PIA * pi, char *buf, int count)
EXPORT_SYMBOL(pi_read_block);
static void pi_wake_up(void *p)
int pi_schedule_claimed(PIA * pi, void (*cont) (void))
EXPORT_SYMBOL(pi_schedule_claimed);
void pi_do_claimed(PIA * pi, void (*cont) (void))
EXPORT_SYMBOL(pi_do_claimed);
static void pi_claim(PIA * pi)
static void pi_unclaim(PIA * pi)
void pi_connect(PIA * pi)
EXPORT_SYMBOL(pi_connect);
void pi_disconnect(PIA * pi)
EXPORT_SYMBOL(pi_disconnect);
static void pi_unregister_parport(PIA * pi)
void pi_release(PIA * pi)
EXPORT_SYMBOL(pi_release);
static int default_test_proto(PIA * pi, char *scratch, int verbose)
static int pi_test_proto(PIA * pi, char *scratch, int verbose)
int paride_register(PIP * pr)
EXPORT_SYMBOL(paride_register);
void paride_unregister(PIP * pr)
EXPORT_SYMBOL(paride_unregister);
static int pi_register_parport(PIA * pi, int verbose)
static int pi_probe_mode(PIA * pi, int max, char *scratch, int verbose)
static int pi_probe_unit(PIA * pi, int unit, char *scratch, int verbose)
int pi_init(PIA * pi, int autoprobe, int port, int mode,
int unit, int protocol, int delay, char *scratch,
int devtype, int verbose, char *device)
EXPORT_SYMBOL(pi_init);
