void snd_pcm_playback_silence(struct snd_pcm_substream *substream, snd_pcm_uframes_t new_hw_ptr)
static void pcm_debug_name(struct snd_pcm_substream *substream,
char *name, size_t len)
#define XRUN_DEBUG_BASIC	(1<<0)
#define XRUN_DEBUG_STACK	(1<<1)
#define XRUN_DEBUG_JIFFIESCHECK	(1<<2)
#define XRUN_DEBUG_PERIODUPDATE	(1<<3)
#define XRUN_DEBUG_HWPTRUPDATE	(1<<4)
#define XRUN_DEBUG_LOG		(1<<5)
#define XRUN_DEBUG_LOGONCE	(1<<6)
#define xrun_debug(substream, mask) \
((substream)->pstr->xrun_debug & (mask))
#define xrun_debug(substream, mask)	0
#define dump_stack_on_xrun(substream) do  while (0)
static void xrun(struct snd_pcm_substream *substream)
#define hw_ptr_error(substream, fmt, args...)				\
do  while (0)
#define XRUN_LOG_CNT	10
struct hwptr_log_entry ;
struct snd_pcm_hwptr_log ;
static void xrun_log(struct snd_pcm_substream *substream,
snd_pcm_uframes_t pos, int in_interrupt)
static void xrun_log_show(struct snd_pcm_substream *substream)
#define hw_ptr_error(substream, fmt, args...) do  while (0)
#define xrun_log(substream, pos, in_interrupt)	do  while (0)
#define xrun_log_show(substream)	do  while (0)
int snd_pcm_update_state(struct snd_pcm_substream *substream,
struct snd_pcm_runtime *runtime)
static int snd_pcm_update_hw_ptr0(struct snd_pcm_substream *substream,
unsigned int in_interrupt)
int snd_pcm_update_hw_ptr(struct snd_pcm_substream *substream)
void snd_pcm_set_ops(struct snd_pcm *pcm, int direction, struct snd_pcm_ops *ops)
EXPORT_SYMBOL(snd_pcm_set_ops);
void snd_pcm_set_sync(struct snd_pcm_substream *substream)
EXPORT_SYMBOL(snd_pcm_set_sync);
static inline unsigned int div32(unsigned int a, unsigned int b,
unsigned int *r)
static inline unsigned int div_down(unsigned int a, unsigned int b)
static inline unsigned int div_up(unsigned int a, unsigned int b)
static inline unsigned int mul(unsigned int a, unsigned int b)
static inline unsigned int muldiv32(unsigned int a, unsigned int b,
unsigned int c, unsigned int *r)
int snd_interval_refine(struct snd_interval *i, const struct snd_interval *v)
EXPORT_SYMBOL(snd_interval_refine);
static int snd_interval_refine_first(struct snd_interval *i)
static int snd_interval_refine_last(struct snd_interval *i)
void snd_interval_mul(const struct snd_interval *a, const struct snd_interval *b, struct snd_interval *c)
void snd_interval_div(const struct snd_interval *a, const struct snd_interval *b, struct snd_interval *c)
void snd_interval_muldivk(const struct snd_interval *a, const struct snd_interval *b,
unsigned int k, struct snd_interval *c)
void snd_interval_mulkdiv(const struct snd_interval *a, unsigned int k,
const struct snd_interval *b, struct snd_interval *c)
int snd_interval_ratnum(struct snd_interval *i,
unsigned int rats_count, struct snd_ratnum *rats,
unsigned int *nump, unsigned int *denp)
EXPORT_SYMBOL(snd_interval_ratnum);
static int snd_interval_ratden(struct snd_interval *i,
unsigned int rats_count, struct snd_ratden *rats,
unsigned int *nump, unsigned int *denp)
int snd_interval_list(struct snd_interval *i, unsigned int count, unsigned int *list, unsigned int mask)
EXPORT_SYMBOL(snd_interval_list);
static int snd_interval_step(struct snd_interval *i, unsigned int min, unsigned int step)
int snd_pcm_hw_rule_add(struct snd_pcm_runtime *runtime, unsigned int cond,
int var,
snd_pcm_hw_rule_func_t func, void *private,
int dep, ...)
EXPORT_SYMBOL(snd_pcm_hw_rule_add);
int snd_pcm_hw_constraint_mask(struct snd_pcm_runtime *runtime, snd_pcm_hw_param_t var,
u_int32_t mask)
int snd_pcm_hw_constraint_mask64(struct snd_pcm_runtime *runtime, snd_pcm_hw_param_t var,
u_int64_t mask)
int snd_pcm_hw_constraint_integer(struct snd_pcm_runtime *runtime, snd_pcm_hw_param_t var)
EXPORT_SYMBOL(snd_pcm_hw_constraint_integer);
int snd_pcm_hw_constraint_minmax(struct snd_pcm_runtime *runtime, snd_pcm_hw_param_t var,
unsigned int min, unsigned int max)
EXPORT_SYMBOL(snd_pcm_hw_constraint_minmax);
static int snd_pcm_hw_rule_list(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
int snd_pcm_hw_constraint_list(struct snd_pcm_runtime *runtime,
unsigned int cond,
snd_pcm_hw_param_t var,
struct snd_pcm_hw_constraint_list *l)
EXPORT_SYMBOL(snd_pcm_hw_constraint_list);
static int snd_pcm_hw_rule_ratnums(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
int snd_pcm_hw_constraint_ratnums(struct snd_pcm_runtime *runtime,
unsigned int cond,
snd_pcm_hw_param_t var,
struct snd_pcm_hw_constraint_ratnums *r)
EXPORT_SYMBOL(snd_pcm_hw_constraint_ratnums);
static int snd_pcm_hw_rule_ratdens(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
int snd_pcm_hw_constraint_ratdens(struct snd_pcm_runtime *runtime,
unsigned int cond,
snd_pcm_hw_param_t var,
struct snd_pcm_hw_constraint_ratdens *r)
EXPORT_SYMBOL(snd_pcm_hw_constraint_ratdens);
static int snd_pcm_hw_rule_msbits(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
int snd_pcm_hw_constraint_msbits(struct snd_pcm_runtime *runtime,
unsigned int cond,
unsigned int width,
unsigned int msbits)
EXPORT_SYMBOL(snd_pcm_hw_constraint_msbits);
static int snd_pcm_hw_rule_step(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
int snd_pcm_hw_constraint_step(struct snd_pcm_runtime *runtime,
unsigned int cond,
snd_pcm_hw_param_t var,
unsigned long step)
EXPORT_SYMBOL(snd_pcm_hw_constraint_step);
static int snd_pcm_hw_rule_pow2(struct snd_pcm_hw_params *params, struct snd_pcm_hw_rule *rule)
int snd_pcm_hw_constraint_pow2(struct snd_pcm_runtime *runtime,
unsigned int cond,
snd_pcm_hw_param_t var)
EXPORT_SYMBOL(snd_pcm_hw_constraint_pow2);
static void _snd_pcm_hw_param_any(struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var)
void _snd_pcm_hw_params_any(struct snd_pcm_hw_params *params)
EXPORT_SYMBOL(_snd_pcm_hw_params_any);
int snd_pcm_hw_param_value(const struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var, int *dir)
EXPORT_SYMBOL(snd_pcm_hw_param_value);
void _snd_pcm_hw_param_setempty(struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var)
EXPORT_SYMBOL(_snd_pcm_hw_param_setempty);
static int _snd_pcm_hw_param_first(struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var)
int snd_pcm_hw_param_first(struct snd_pcm_substream *pcm,
struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var, int *dir)
EXPORT_SYMBOL(snd_pcm_hw_param_first);
static int _snd_pcm_hw_param_last(struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var)
int snd_pcm_hw_param_last(struct snd_pcm_substream *pcm,
struct snd_pcm_hw_params *params,
snd_pcm_hw_param_t var, int *dir)
EXPORT_SYMBOL(snd_pcm_hw_param_last);
int snd_pcm_hw_params_choose(struct snd_pcm_substream *pcm,
struct snd_pcm_hw_params *params)
static int snd_pcm_lib_ioctl_reset(struct snd_pcm_substream *substream,
void *arg)
static int snd_pcm_lib_ioctl_channel_info(struct snd_pcm_substream *substream,
void *arg)
static int snd_pcm_lib_ioctl_fifo_size(struct snd_pcm_substream *substream,
void *arg)
int snd_pcm_lib_ioctl(struct snd_pcm_substream *substream,
unsigned int cmd, void *arg)
EXPORT_SYMBOL(snd_pcm_lib_ioctl);
void snd_pcm_period_elapsed(struct snd_pcm_substream *substream)
EXPORT_SYMBOL(snd_pcm_period_elapsed);
static int wait_for_avail(struct snd_pcm_substream *substream,
snd_pcm_uframes_t *availp)
static int snd_pcm_lib_write_transfer(struct snd_pcm_substream *substream,
unsigned int hwoff,
unsigned long data, unsigned int off,
snd_pcm_uframes_t frames)
typedef int (*transfer_f)(struct snd_pcm_substream *substream, unsigned int hwoff,
unsigned long data, unsigned int off,
snd_pcm_uframes_t size);
static snd_pcm_sframes_t snd_pcm_lib_write1(struct snd_pcm_substream *substream,
unsigned long data,
snd_pcm_uframes_t size,
int nonblock,
transfer_f transfer)
static int pcm_sanity_check(struct snd_pcm_substream *substream)
snd_pcm_sframes_t snd_pcm_lib_write(struct snd_pcm_substream *substream, const void __user *buf, snd_pcm_uframes_t size)
EXPORT_SYMBOL(snd_pcm_lib_write);
static int snd_pcm_lib_writev_transfer(struct snd_pcm_substream *substream,
unsigned int hwoff,
unsigned long data, unsigned int off,
snd_pcm_uframes_t frames)
snd_pcm_sframes_t snd_pcm_lib_writev(struct snd_pcm_substream *substream,
void __user **bufs,
snd_pcm_uframes_t frames)
EXPORT_SYMBOL(snd_pcm_lib_writev);
static int snd_pcm_lib_read_transfer(struct snd_pcm_substream *substream,
unsigned int hwoff,
unsigned long data, unsigned int off,
snd_pcm_uframes_t frames)
static snd_pcm_sframes_t snd_pcm_lib_read1(struct snd_pcm_substream *substream,
unsigned long data,
snd_pcm_uframes_t size,
int nonblock,
transfer_f transfer)
snd_pcm_sframes_t snd_pcm_lib_read(struct snd_pcm_substream *substream, void __user *buf, snd_pcm_uframes_t size)
EXPORT_SYMBOL(snd_pcm_lib_read);
static int snd_pcm_lib_readv_transfer(struct snd_pcm_substream *substream,
unsigned int hwoff,
unsigned long data, unsigned int off,
snd_pcm_uframes_t frames)
snd_pcm_sframes_t snd_pcm_lib_readv(struct snd_pcm_substream *substream,
void __user **bufs,
snd_pcm_uframes_t frames)
EXPORT_SYMBOL(snd_pcm_lib_readv);
