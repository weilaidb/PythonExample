#define _LINUX_BACKING_DEV_H
struct page;
struct device;
struct dentry;
enum bdi_state ;
typedef int (congested_fn)(void *, int);
enum bdi_stat_item ;
#define BDI_STAT_BATCH (8*(1+ilog2(nr_cpu_ids)))
struct bdi_writeback ;
struct backing_dev_info ;
int bdi_init(struct backing_dev_info *bdi);
void bdi_destroy(struct backing_dev_info *bdi);
int bdi_register(struct backing_dev_info *bdi, struct device *parent,
const char *fmt, ...);
int bdi_register_dev(struct backing_dev_info *bdi, dev_t dev);
void bdi_unregister(struct backing_dev_info *bdi);
int bdi_setup_and_register(struct backing_dev_info *, char *, unsigned int);
void bdi_start_writeback(struct backing_dev_info *bdi, long nr_pages);
void bdi_start_background_writeback(struct backing_dev_info *bdi);
int bdi_writeback_thread(void *data);
int bdi_has_dirty_io(struct backing_dev_info *bdi);
void bdi_arm_supers_timer(void);
void bdi_wakeup_thread_delayed(struct backing_dev_info *bdi);
extern spinlock_t bdi_lock;
extern struct list_head bdi_list;
extern struct list_head bdi_pending_list;
static inline int wb_has_dirty_io(struct bdi_writeback *wb)
static inline void __add_bdi_stat(struct backing_dev_info *bdi,
enum bdi_stat_item item, s64 amount)
static inline void __inc_bdi_stat(struct backing_dev_info *bdi,
enum bdi_stat_item item)
static inline void inc_bdi_stat(struct backing_dev_info *bdi,
enum bdi_stat_item item)
static inline void __dec_bdi_stat(struct backing_dev_info *bdi,
enum bdi_stat_item item)
static inline void dec_bdi_stat(struct backing_dev_info *bdi,
enum bdi_stat_item item)
static inline s64 bdi_stat(struct backing_dev_info *bdi,
enum bdi_stat_item item)
static inline s64 __bdi_stat_sum(struct backing_dev_info *bdi,
enum bdi_stat_item item)
static inline s64 bdi_stat_sum(struct backing_dev_info *bdi,
enum bdi_stat_item item)
extern void bdi_writeout_inc(struct backing_dev_info *bdi);
static inline unsigned long bdi_stat_error(struct backing_dev_info *bdi)
int bdi_set_min_ratio(struct backing_dev_info *bdi, unsigned int min_ratio);
int bdi_set_max_ratio(struct backing_dev_info *bdi, unsigned int max_ratio);
#define BDI_CAP_NO_ACCT_DIRTY	0x00000001
#define BDI_CAP_NO_WRITEBACK	0x00000002
#define BDI_CAP_MAP_COPY	0x00000004
#define BDI_CAP_MAP_DIRECT	0x00000008
#define BDI_CAP_READ_MAP	0x00000010
#define BDI_CAP_WRITE_MAP	0x00000020
#define BDI_CAP_EXEC_MAP	0x00000040
#define BDI_CAP_NO_ACCT_WB	0x00000080
#define BDI_CAP_SWAP_BACKED	0x00000100
#define BDI_CAP_VMFLAGS \
(BDI_CAP_READ_MAP | BDI_CAP_WRITE_MAP | BDI_CAP_EXEC_MAP)
#define BDI_CAP_NO_ACCT_AND_WRITEBACK \
(BDI_CAP_NO_WRITEBACK | BDI_CAP_NO_ACCT_DIRTY | BDI_CAP_NO_ACCT_WB)
#if defined(VM_MAYREAD) && \
(BDI_CAP_READ_MAP != VM_MAYREAD || \
BDI_CAP_WRITE_MAP != VM_MAYWRITE || \
BDI_CAP_EXEC_MAP != VM_MAYEXEC)
#error please change backing_dev_info::capabilities flags
extern struct backing_dev_info default_backing_dev_info;
extern struct backing_dev_info noop_backing_dev_info;
int writeback_in_progress(struct backing_dev_info *bdi);
static inline int bdi_congested(struct backing_dev_info *bdi, int bdi_bits)
static inline int bdi_read_congested(struct backing_dev_info *bdi)
static inline int bdi_write_congested(struct backing_dev_info *bdi)
static inline int bdi_rw_congested(struct backing_dev_info *bdi)
enum ;
void clear_bdi_congested(struct backing_dev_info *bdi, int sync);
void set_bdi_congested(struct backing_dev_info *bdi, int sync);
long congestion_wait(int sync, long timeout);
long wait_iff_congested(struct zone *zone, int sync, long timeout);
static inline bool bdi_cap_writeback_dirty(struct backing_dev_info *bdi)
static inline bool bdi_cap_account_dirty(struct backing_dev_info *bdi)
static inline bool bdi_cap_account_writeback(struct backing_dev_info *bdi)
static inline bool bdi_cap_swap_backed(struct backing_dev_info *bdi)
static inline bool bdi_cap_flush_forker(struct backing_dev_info *bdi)
static inline bool mapping_cap_writeback_dirty(struct address_space *mapping)
static inline bool mapping_cap_account_dirty(struct address_space *mapping)
static inline bool mapping_cap_swap_backed(struct address_space *mapping)
static inline int bdi_sched_wait(void *word)
