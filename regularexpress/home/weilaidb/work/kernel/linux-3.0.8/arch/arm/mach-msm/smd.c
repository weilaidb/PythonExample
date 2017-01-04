#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#if defined(CONFIG_ARCH_QSD8X50)
#define CONFIG_QDSP6 1
void (*msm_hw_reset_hook)(void);
#define MODULE_NAME "msm_smd"
enum ;
static int msm_smd_debug_mask;
struct shared_info ;
static unsigned dummy_state[SMSM_STATE_COUNT];
static struct shared_info smd_info = ;
module_param_named(debug_mask, msm_smd_debug_mask,
int, S_IRUGO | S_IWUSR | S_IWGRP);
static unsigned last_heap_free = 0xffffffff;
static inline void notify_other_smsm(void)
static inline void notify_modem_smd(void)
static inline void notify_dsp_smd(void)
static void smd_diag(void)
static void handle_modem_crash(void)
uint32_t raw_smsm_get_state(enum smsm_state_item item)
static int check_for_modem_crash(void)
DEFINE_SPINLOCK(smd_lock);
DEFINE_SPINLOCK(smem_lock);
static DEFINE_MUTEX(smd_creation_mutex);
static int smd_initialized;
LIST_HEAD(smd_ch_closed_list);
LIST_HEAD(smd_ch_list_modem);
LIST_HEAD(smd_ch_list_dsp);
static unsigned char smd_ch_allocated[64];
static struct work_struct probe_work;
static int smd_stream_read_avail(struct smd_channel *ch)
static int smd_stream_write_avail(struct smd_channel *ch)
static int smd_packet_read_avail(struct smd_channel *ch)
static int smd_packet_write_avail(struct smd_channel *ch)
static int ch_is_open(struct smd_channel *ch)
static unsigned ch_read_buffer(struct smd_channel *ch, void **ptr)
static void ch_read_done(struct smd_channel *ch, unsigned count)
static int ch_read(struct smd_channel *ch, void *_data, int len)
static void update_stream_state(struct smd_channel *ch)
static void update_packet_state(struct smd_channel *ch)
static unsigned ch_write_buffer(struct smd_channel *ch, void **ptr)
static void ch_write_done(struct smd_channel *ch, unsigned count)
static void ch_set_state(struct smd_channel *ch, unsigned n)
static void do_smd_probe(void)
static void smd_state_change(struct smd_channel *ch,
unsigned last, unsigned next)
static void handle_smd_irq(struct list_head *list, void (*notify)(void))
static irqreturn_t smd_modem_irq_handler(int irq, void *data)
#if defined(CONFIG_QDSP6)
static irqreturn_t smd_dsp_irq_handler(int irq, void *data)
static void smd_fake_irq_handler(unsigned long arg)
static DECLARE_TASKLET(smd_fake_irq_tasklet, smd_fake_irq_handler, 0);
static inline int smd_need_int(struct smd_channel *ch)
void smd_sleep_exit(void)
void smd_kick(smd_channel_t *ch)
static int smd_is_packet(int chn, unsigned type)
static int smd_stream_write(smd_channel_t *ch, const void *_data, int len)
static int smd_packet_write(smd_channel_t *ch, const void *_data, int len)
static int smd_stream_read(smd_channel_t *ch, void *data, int len)
static int smd_packet_read(smd_channel_t *ch, void *data, int len)
static int smd_alloc_channel(const char *name, uint32_t cid, uint32_t type)
static void smd_channel_probe_worker(struct work_struct *work)
static void do_nothing_notify(void *priv, unsigned flags)
struct smd_channel *smd_get_channel(const char *name)
int smd_open(const char *name, smd_channel_t **_ch,
void *priv, void (*notify)(void *, unsigned))
int smd_close(smd_channel_t *ch)
int smd_read(smd_channel_t *ch, void *data, int len)
int smd_write(smd_channel_t *ch, const void *data, int len)
int smd_write_atomic(smd_channel_t *ch, const void *data, int len)
int smd_read_avail(smd_channel_t *ch)
int smd_write_avail(smd_channel_t *ch)
int smd_wait_until_readable(smd_channel_t *ch, int bytes)
int smd_wait_until_writable(smd_channel_t *ch, int bytes)
int smd_cur_packet_size(smd_channel_t *ch)
void *smem_alloc(unsigned id, unsigned size)
void *smem_item(unsigned id, unsigned *size)
void *smem_find(unsigned id, unsigned size_in)
static irqreturn_t smsm_irq_handler(int irq, void *data)
int smsm_change_state(enum smsm_state_item item,
uint32_t clear_mask, uint32_t set_mask)
uint32_t smsm_get_state(enum smsm_state_item item)
int smsm_set_sleep_duration(uint32_t delay)
int smsm_set_sleep_duration(uint32_t delay)
int smd_core_init(void)
static int __devinit msm_smd_probe(struct platform_device *pdev)
static struct platform_driver msm_smd_driver = ;
static int __init msm_smd_init(void)
module_init(msm_smd_init);
MODULE_DESCRIPTION("MSM Shared Memory Core");
MODULE_AUTHOR("Brian Swetland <swetland@google.com>");
MODULE_LICENSE("GPL");
