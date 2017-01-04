#define MAX_NUM_SDB 511
#define MIN_NUM_SDB 1
#define ALERT_REQ_MASK   0x4000000000000000ul
#define BUFFER_FULL_MASK 0x8000000000000000ul
#define EI_IEA      (1 << 31)
#define EI_ISE      (1 << 30)
#define EI_PRA      (1 << 29)
#define EI_SACA     (1 << 23)
#define EI_LSDA     (1 << 22)
DECLARE_PER_CPU(struct hws_cpu_buffer, sampler_cpu_buffer);
struct hws_execute_parms ;
DEFINE_PER_CPU(struct hws_cpu_buffer, sampler_cpu_buffer);
EXPORT_PER_CPU_SYMBOL(sampler_cpu_buffer);
static DEFINE_MUTEX(hws_sem);
static DEFINE_MUTEX(hws_sem_oom);
static unsigned char hws_flush_all;
static unsigned int hws_oom;
static struct workqueue_struct *hws_wq;
static unsigned int hws_state;
enum ;
static unsigned char oom_killer_was_active;
static unsigned long num_sdbt = 100;
static unsigned long num_sdb = 511;
static unsigned long interval;
static unsigned long min_sampler_rate;
static unsigned long max_sampler_rate;
static int ssctl(void *buffer)
static int qsi(void *buffer)
static void execute_qsi(void *parms)
static void execute_ssctl(void *parms)
static int smp_ctl_ssctl_stop(int cpu)
static int smp_ctl_ssctl_deactivate(int cpu)
static int smp_ctl_ssctl_enable_activate(int cpu, unsigned long interval)
static int smp_ctl_qsi(int cpu)
static inline unsigned long *trailer_entry_ptr(unsigned long v)
static void hws_ext_handler(unsigned int ext_int_code,
unsigned int param32, unsigned long param64);
static void worker(struct work_struct *work);
static void add_samples_to_oprofile(unsigned cpu, unsigned long *,
unsigned long *dear);
static void init_all_cpu_buffers(void)
static int is_link_entry(unsigned long *s)
static unsigned long *get_next_sdbt(unsigned long *s)
static int prepare_cpu_buffers(void)
static int allocate_sdbt(int cpu)
static int deallocate_sdbt(void)
static int start_sampling(int cpu)
static int stop_sampling(int cpu)
static int check_hardware_prerequisites(void)
static int hws_oom_callback(struct notifier_block *nfb,
unsigned long dummy, void *parm)
static struct notifier_block hws_oom_notifier = ;
static int hws_cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static struct notifier_block hws_cpu_notifier = ;
int hwsampler_deactivate(unsigned int cpu)
int hwsampler_activate(unsigned int cpu)
static void hws_ext_handler(unsigned int ext_int_code,
unsigned int param32, unsigned long param64)
static int check_qsi_on_setup(void)
static int check_qsi_on_start(void)
static void worker_on_start(unsigned int cpu)
static int worker_check_error(unsigned int cpu, int ext_params)
static void worker_on_finish(unsigned int cpu)
static void worker_on_interrupt(unsigned int cpu)
static void add_samples_to_oprofile(unsigned int cpu, unsigned long *sdbt,
unsigned long *dear)
static void worker(struct work_struct *work)
int hwsampler_allocate(unsigned long sdbt, unsigned long sdb)
int hwsampler_deallocate()
unsigned long hwsampler_query_min_interval(void)
unsigned long hwsampler_query_max_interval(void)
unsigned long hwsampler_get_sample_overflow_count(unsigned int cpu)
int hwsampler_setup()
int hwsampler_shutdown()
int hwsampler_start_all(unsigned long rate)
int hwsampler_stop_all()
