#define RELEASE_ALL 9999
static DEFINE_SPINLOCK(buffer_lock);
static DEFINE_SPINLOCK(cache_lock);
static int num_spu_nodes;
int spu_prof_num_nodes;
struct spu_buffer spu_buff[MAX_NUMNODES * SPUS_PER_NODE];
struct delayed_work spu_work;
static unsigned max_spu_buff;
static void spu_buff_add(unsigned long int value, int spu)
void sync_spu_buff(void)
static void wq_sync_spu_buff(struct work_struct *work)
struct cached_info ;
static struct cached_info *spu_info[MAX_NUMNODES * 8];
static void destroy_cached_info(struct kref *kref)
static struct cached_info *get_cached_info(struct spu *the_spu, int spu_num)
static int
prepare_cached_spu_info(struct spu *spu, unsigned long objectId)
static int release_cached_info(int spu_index)
static inline unsigned long fast_get_dcookie(struct path *path)
static unsigned long
get_exec_dcookie_and_offset(struct spu *spu, unsigned int *offsetp,
unsigned long *spu_bin_dcookie,
unsigned long spu_ref)
static int process_context_switch(struct spu *spu, unsigned long objectId)
static int spu_active_notify(struct notifier_block *self, unsigned long val,
void *data)
static struct notifier_block spu_active = ;
static int number_of_online_nodes(void)
static int oprofile_spu_buff_create(void)
int spu_sync_start(void)
void spu_sync_buffer(int spu_num, unsigned int *samples,
int num_samples)
int spu_sync_stop(void)
