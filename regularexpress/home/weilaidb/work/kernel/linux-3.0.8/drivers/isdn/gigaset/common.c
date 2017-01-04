#define DRIVER_AUTHOR "Hansjoerg Lipp <hjlipp@web.de>, Tilman Schmidt <tilman@imap.cc>, Stefan Eilers"
#define DRIVER_DESC "Driver for Gigaset 307x"
#define DRIVER_DESC_DEBUG " (debug build)"
#define DRIVER_DESC_DEBUG ""
int gigaset_debuglevel;
EXPORT_SYMBOL_GPL(gigaset_debuglevel);
module_param_named(debug, gigaset_debuglevel, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(debug, "debug level");
#define VALID_MINOR	0x01
#define VALID_ID	0x02
void gigaset_dbg_buffer(enum debuglevel level, const unsigned char *msg,
size_t len, const unsigned char *buf)
EXPORT_SYMBOL_GPL(gigaset_dbg_buffer);
static int setflags(struct cardstate *cs, unsigned flags, unsigned delay)
int gigaset_enterconfigmode(struct cardstate *cs)
static int test_timeout(struct at_state_t *at_state)
static void timer_tick(unsigned long data)
int gigaset_get_channel(struct bc_state *bcs)
struct bc_state *gigaset_get_free_channel(struct cardstate *cs)
void gigaset_free_channel(struct bc_state *bcs)
int gigaset_get_channels(struct cardstate *cs)
void gigaset_free_channels(struct cardstate *cs)
void gigaset_block_channels(struct cardstate *cs)
static void clear_events(struct cardstate *cs)
struct event_t *gigaset_add_event(struct cardstate *cs,
struct at_state_t *at_state, int type,
void *ptr, int parameter, void *arg)
EXPORT_SYMBOL_GPL(gigaset_add_event);
static void free_strings(struct at_state_t *at_state)
static void clear_at_state(struct at_state_t *at_state)
static void dealloc_at_states(struct cardstate *cs)
static void gigaset_freebcs(struct bc_state *bcs)
static struct cardstate *alloc_cs(struct gigaset_driver *drv)
static void free_cs(struct cardstate *cs)
static void make_valid(struct cardstate *cs, unsigned mask)
static void make_invalid(struct cardstate *cs, unsigned mask)
void gigaset_freecs(struct cardstate *cs)
EXPORT_SYMBOL_GPL(gigaset_freecs);
void gigaset_at_init(struct at_state_t *at_state, struct bc_state *bcs,
struct cardstate *cs, int cid)
static void gigaset_inbuf_init(struct inbuf_t *inbuf, struct cardstate *cs)
int gigaset_fill_inbuf(struct inbuf_t *inbuf, const unsigned char *src,
unsigned numbytes)
EXPORT_SYMBOL_GPL(gigaset_fill_inbuf);
static struct bc_state *gigaset_initbcs(struct bc_state *bcs,
struct cardstate *cs, int channel)
struct cardstate *gigaset_initcs(struct gigaset_driver *drv, int channels,
int onechannel, int ignoreframes,
int cidmode, const char *modulename)
EXPORT_SYMBOL_GPL(gigaset_initcs);
void gigaset_bcs_reinit(struct bc_state *bcs)
static void cleanup_cs(struct cardstate *cs)
int gigaset_start(struct cardstate *cs)
EXPORT_SYMBOL_GPL(gigaset_start);
int gigaset_shutdown(struct cardstate *cs)
EXPORT_SYMBOL_GPL(gigaset_shutdown);
void gigaset_stop(struct cardstate *cs)
EXPORT_SYMBOL_GPL(gigaset_stop);
static LIST_HEAD(drivers);
static DEFINE_SPINLOCK(driver_lock);
struct cardstate *gigaset_get_cs_by_id(int id)
static struct cardstate *gigaset_get_cs_by_minor(unsigned minor)
struct cardstate *gigaset_get_cs_by_tty(struct tty_struct *tty)
void gigaset_freedriver(struct gigaset_driver *drv)
EXPORT_SYMBOL_GPL(gigaset_freedriver);
struct gigaset_driver *gigaset_initdriver(unsigned minor, unsigned minors,
const char *procname,
const char *devname,
const struct gigaset_ops *ops,
struct module *owner)
EXPORT_SYMBOL_GPL(gigaset_initdriver);
void gigaset_blockdriver(struct gigaset_driver *drv)
EXPORT_SYMBOL_GPL(gigaset_blockdriver);
static int __init gigaset_init_module(void)
static void __exit gigaset_exit_module(void)
module_init(gigaset_init_module);
module_exit(gigaset_exit_module);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
