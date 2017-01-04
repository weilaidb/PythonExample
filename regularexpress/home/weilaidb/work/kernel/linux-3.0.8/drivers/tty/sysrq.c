#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static int __read_mostly sysrq_enabled = SYSRQ_DEFAULT_ENABLE;
static bool __read_mostly sysrq_always_enabled;
static bool sysrq_on(void)
static bool sysrq_on_mask(int mask)
static int __init sysrq_always_enabled_setup(char *str)
__setup("sysrq_always_enabled", sysrq_always_enabled_setup);
static void sysrq_handle_loglevel(int key)
static struct sysrq_key_op sysrq_loglevel_op = ;
static void sysrq_handle_SAK(int key)
static struct sysrq_key_op sysrq_SAK_op = ;
#define sysrq_SAK_op (*(struct sysrq_key_op *)NULL)
static void sysrq_handle_unraw(int key)
static struct sysrq_key_op sysrq_unraw_op = ;
#define sysrq_unraw_op (*(struct sysrq_key_op *)NULL)
static void sysrq_handle_crash(int key)
static struct sysrq_key_op sysrq_crash_op = ;
static void sysrq_handle_reboot(int key)
static struct sysrq_key_op sysrq_reboot_op = ;
static void sysrq_handle_sync(int key)
static struct sysrq_key_op sysrq_sync_op = ;
static void sysrq_handle_show_timers(int key)
static struct sysrq_key_op sysrq_show_timers_op = ;
static void sysrq_handle_mountro(int key)
static struct sysrq_key_op sysrq_mountro_op = ;
static void sysrq_handle_showlocks(int key)
static struct sysrq_key_op sysrq_showlocks_op = ;
#define sysrq_showlocks_op (*(struct sysrq_key_op *)NULL)
static DEFINE_SPINLOCK(show_lock);
static void showacpu(void *dummy)
static void sysrq_showregs_othercpus(struct work_struct *dummy)
static DECLARE_WORK(sysrq_showallcpus, sysrq_showregs_othercpus);
static void sysrq_handle_showallcpus(int key)
static struct sysrq_key_op sysrq_showallcpus_op = ;
static void sysrq_handle_showregs(int key)
static struct sysrq_key_op sysrq_showregs_op = ;
static void sysrq_handle_showstate(int key)
static struct sysrq_key_op sysrq_showstate_op = ;
static void sysrq_handle_showstate_blocked(int key)
static struct sysrq_key_op sysrq_showstate_blocked_op = ;
static void sysrq_ftrace_dump(int key)
static struct sysrq_key_op sysrq_ftrace_dump_op = ;
#define sysrq_ftrace_dump_op (*(struct sysrq_key_op *)NULL)
static void sysrq_handle_showmem(int key)
static struct sysrq_key_op sysrq_showmem_op = ;
static void send_sig_all(int sig)
static void sysrq_handle_term(int key)
static struct sysrq_key_op sysrq_term_op = ;
static void moom_callback(struct work_struct *ignored)
static DECLARE_WORK(moom_work, moom_callback);
static void sysrq_handle_moom(int key)
static struct sysrq_key_op sysrq_moom_op = ;
static void sysrq_handle_thaw(int key)
static struct sysrq_key_op sysrq_thaw_op = ;
static void sysrq_handle_kill(int key)
static struct sysrq_key_op sysrq_kill_op = ;
static void sysrq_handle_unrt(int key)
static struct sysrq_key_op sysrq_unrt_op = ;
static DEFINE_SPINLOCK(sysrq_key_table_lock);
static struct sysrq_key_op *sysrq_key_table[36] = ;
static int sysrq_key_table_key2index(int key)
struct sysrq_key_op *__sysrq_get_key_op(int key)
static void __sysrq_put_key_op(int key, struct sysrq_key_op *op_p)
void __handle_sysrq(int key, bool check_mask)
void handle_sysrq(int key)
EXPORT_SYMBOL(handle_sysrq);
static const unsigned char sysrq_xlate[KEY_CNT] =
"\000\0331234567890-=\177\t"
"qwertyuiop[]\r\000as"
"dfghjkl;'`\000\\zxcv"
"bnm,./\000*\000 \000\201\202\203\204\205"
"\206\207\210\211\212\000\000789-456+1"
"230\177\000\000\213\214\000\000\000\000\000\000\000\000\000\000"
"\r\000/";
struct sysrq_state ;
static void sysrq_reinject_alt_sysrq(struct work_struct *work)
static bool sysrq_filter(struct input_handle *handle,
unsigned int type, unsigned int code, int value)
static int sysrq_connect(struct input_handler *handler,
struct input_dev *dev,
const struct input_device_id *id)
static void sysrq_disconnect(struct input_handle *handle)
static const struct input_device_id sysrq_ids[] = ;
static struct input_handler sysrq_handler = ;
static bool sysrq_handler_registered;
static inline void sysrq_register_handler(void)
static inline void sysrq_unregister_handler(void)
static inline void sysrq_register_handler(void)
static inline void sysrq_unregister_handler(void)
int sysrq_toggle_support(int enable_mask)
static int __sysrq_swap_key_ops(int key, struct sysrq_key_op *insert_op_p,
struct sysrq_key_op *remove_op_p)
int register_sysrq_key(int key, struct sysrq_key_op *op_p)
EXPORT_SYMBOL(register_sysrq_key);
int unregister_sysrq_key(int key, struct sysrq_key_op *op_p)
EXPORT_SYMBOL(unregister_sysrq_key);
static ssize_t write_sysrq_trigger(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations proc_sysrq_trigger_operations = ;
static void sysrq_init_procfs(void)
static inline void sysrq_init_procfs(void)
static int __init sysrq_init(void)
module_init(sysrq_init);
