#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
extern void ctrl_alt_del(void);
#define KBD_DEFMODE ((1 << VC_REPEAT) | (1 << VC_META))
#if defined(CONFIG_PARISC) && (defined(CONFIG_KEYBOARD_HIL) || defined(CONFIG_KEYBOARD_HIL_OLD))
#define KBD_DEFLEDS (1 << VC_NUMLOCK)
#define KBD_DEFLEDS 0
#define KBD_DEFLOCK 0
void compute_shiftstate(void);
#define K_HANDLERS\
k_self,		k_fn,		k_spec,		k_pad,\
k_dead,		k_cons,		k_cur,		k_shift,\
k_meta,		k_ascii,	k_lock,		k_lowercase,\
k_slock,	k_dead2,	k_brl,		k_ignore
typedef void (k_handler_fn)(struct vc_data *vc, unsigned char value,
char up_flag);
static k_handler_fn K_HANDLERS;
static k_handler_fn *k_handler[16] = ;
#define FN_HANDLERS\
fn_null,	fn_enter,	fn_show_ptregs,	fn_show_mem,\
fn_show_state,	fn_send_intr,	fn_lastcons,	fn_caps_toggle,\
fn_num,		fn_hold,	fn_scroll_forw,	fn_scroll_back,\
fn_boot_it,	fn_caps_on,	fn_compose,	fn_SAK,\
fn_dec_console, fn_inc_console, fn_spawn_con,	fn_bare_num
typedef void (fn_handler_fn)(struct vc_data *vc);
static fn_handler_fn FN_HANDLERS;
static fn_handler_fn *fn_handler[] = ;
const int max_vals[] = ;
const int NR_TYPES = ARRAY_SIZE(max_vals);
struct kbd_struct kbd_table[MAX_NR_CONSOLES];
EXPORT_SYMBOL_GPL(kbd_table);
static struct kbd_struct *kbd = kbd_table;
struct vt_spawn_console vt_spawn_con = ;
int shift_state = 0;
static struct input_handler kbd_handler;
static DEFINE_SPINLOCK(kbd_event_lock);
static unsigned long key_down[BITS_TO_LONGS(KEY_CNT)];
static unsigned char shift_down[NR_SHIFT];
static bool dead_key_next;
static int npadch = -1;
static unsigned int diacr;
static char rep;
static unsigned char ledstate = 0xff;
static unsigned char ledioctl;
static struct ledptr  ledptrs[3];
static ATOMIC_NOTIFIER_HEAD(keyboard_notifier_list);
int register_keyboard_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(register_keyboard_notifier);
int unregister_keyboard_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(unregister_keyboard_notifier);
struct getset_keycode_data ;
static int getkeycode_helper(struct input_handle *handle, void *data)
int getkeycode(unsigned int scancode)
static int setkeycode_helper(struct input_handle *handle, void *data)
int setkeycode(unsigned int scancode, unsigned int keycode)
static int kd_sound_helper(struct input_handle *handle, void *data)
static void kd_nosound(unsigned long ignored)
static DEFINE_TIMER(kd_mksound_timer, kd_nosound, 0, 0);
void kd_mksound(unsigned int hz, unsigned int ticks)
EXPORT_SYMBOL(kd_mksound);
static int kbd_rate_helper(struct input_handle *handle, void *data)
int kbd_rate(struct kbd_repeat *rep)
static void put_queue(struct vc_data *vc, int ch)
static void puts_queue(struct vc_data *vc, char *cp)
static void applkey(struct vc_data *vc, int key, char mode)
static void to_utf8(struct vc_data *vc, uint c)
void compute_shiftstate(void)
static unsigned int handle_diacr(struct vc_data *vc, unsigned int ch)
static void fn_enter(struct vc_data *vc)
static void fn_caps_toggle(struct vc_data *vc)
static void fn_caps_on(struct vc_data *vc)
static void fn_show_ptregs(struct vc_data *vc)
static void fn_hold(struct vc_data *vc)
static void fn_num(struct vc_data *vc)
static void fn_bare_num(struct vc_data *vc)
static void fn_lastcons(struct vc_data *vc)
static void fn_dec_console(struct vc_data *vc)
static void fn_inc_console(struct vc_data *vc)
static void fn_send_intr(struct vc_data *vc)
static void fn_scroll_forw(struct vc_data *vc)
static void fn_scroll_back(struct vc_data *vc)
static void fn_show_mem(struct vc_data *vc)
static void fn_show_state(struct vc_data *vc)
static void fn_boot_it(struct vc_data *vc)
static void fn_compose(struct vc_data *vc)
static void fn_spawn_con(struct vc_data *vc)
static void fn_SAK(struct vc_data *vc)
static void fn_null(struct vc_data *vc)
static void k_ignore(struct vc_data *vc, unsigned char value, char up_flag)
static void k_spec(struct vc_data *vc, unsigned char value, char up_flag)
static void k_lowercase(struct vc_data *vc, unsigned char value, char up_flag)
static void k_unicode(struct vc_data *vc, unsigned int value, char up_flag)
static void k_deadunicode(struct vc_data *vc, unsigned int value, char up_flag)
static void k_self(struct vc_data *vc, unsigned char value, char up_flag)
static void k_dead2(struct vc_data *vc, unsigned char value, char up_flag)
static void k_dead(struct vc_data *vc, unsigned char value, char up_flag)
static void k_cons(struct vc_data *vc, unsigned char value, char up_flag)
static void k_fn(struct vc_data *vc, unsigned char value, char up_flag)
static void k_cur(struct vc_data *vc, unsigned char value, char up_flag)
static void k_pad(struct vc_data *vc, unsigned char value, char up_flag)
static void k_shift(struct vc_data *vc, unsigned char value, char up_flag)
static void k_meta(struct vc_data *vc, unsigned char value, char up_flag)
static void k_ascii(struct vc_data *vc, unsigned char value, char up_flag)
static void k_lock(struct vc_data *vc, unsigned char value, char up_flag)
static void k_slock(struct vc_data *vc, unsigned char value, char up_flag)
static unsigned brl_timeout = 300;
MODULE_PARM_DESC(brl_timeout, "Braille keys release delay in ms (0 for commit on first key release)");
module_param(brl_timeout, uint, 0644);
static unsigned brl_nbchords = 1;
MODULE_PARM_DESC(brl_nbchords, "Number of chords that produce a braille pattern (0 for dead chords)");
module_param(brl_nbchords, uint, 0644);
static void k_brlcommit(struct vc_data *vc, unsigned int pattern, char up_flag)
static void k_brl(struct vc_data *vc, unsigned char value, char up_flag)
unsigned char getledstate(void)
void setledstate(struct kbd_struct *kbd, unsigned int led)
static inline unsigned char getleds(void)
static int kbd_update_leds_helper(struct input_handle *handle, void *data)
static void kbd_bh(unsigned long dummy)
DECLARE_TASKLET_DISABLED(keyboard_tasklet, kbd_bh, 0);
#if defined(CONFIG_X86) || defined(CONFIG_IA64) || defined(CONFIG_ALPHA) ||\
defined(CONFIG_MIPS) || defined(CONFIG_PPC) || defined(CONFIG_SPARC) ||\
defined(CONFIG_PARISC) || defined(CONFIG_SUPERH) ||\
(defined(CONFIG_ARM) && defined(CONFIG_KEYBOARD_ATKBD) && !defined(CONFIG_ARCH_RPC)) ||\
defined(CONFIG_AVR32)
#define HW_RAW(dev) (test_bit(EV_MSC, dev->evbit) && test_bit(MSC_RAW, dev->mscbit) &&\
((dev)->id.bustype == BUS_I8042) && ((dev)->id.vendor == 0x0001) && ((dev)->id.product == 0x0001))
static const unsigned short x86_keycodes[256] =
;
static int sparc_l1_a_state;
extern void sun_do_break(void);
static int emulate_raw(struct vc_data *vc, unsigned int keycode,
unsigned char up_flag)
#define HW_RAW(dev)	0
static int emulate_raw(struct vc_data *vc, unsigned int keycode, unsigned char up_flag)
static void kbd_rawcode(unsigned char data)
static void kbd_keycode(unsigned int keycode, int down, int hw_raw)
static void kbd_event(struct input_handle *handle, unsigned int event_type,
unsigned int event_code, int value)
static bool kbd_match(struct input_handler *handler, struct input_dev *dev)
static int kbd_connect(struct input_handler *handler, struct input_dev *dev,
const struct input_device_id *id)
static void kbd_disconnect(struct input_handle *handle)
static void kbd_start(struct input_handle *handle)
static const struct input_device_id kbd_ids[] = ;
MODULE_DEVICE_TABLE(input, kbd_ids);
static struct input_handler kbd_handler = ;
int __init kbd_init(void)
