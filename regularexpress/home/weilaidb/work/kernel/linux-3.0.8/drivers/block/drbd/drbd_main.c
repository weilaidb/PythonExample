#define __KERNEL_SYSCALLS__
struct after_state_chg_work ;
static DEFINE_MUTEX(drbd_main_mutex);
int drbdd_init(struct drbd_thread *);
int drbd_worker(struct drbd_thread *);
int drbd_asender(struct drbd_thread *);
int drbd_init(void);
static int drbd_open(struct block_device *bdev, fmode_t mode);
static int drbd_release(struct gendisk *gd, fmode_t mode);
static int w_after_state_ch(struct drbd_conf *mdev, struct drbd_work *w, int unused);
static void after_state_ch(struct drbd_conf *mdev, union drbd_state os,
union drbd_state ns, enum chg_state_flags flags);
static int w_md_sync(struct drbd_conf *mdev, struct drbd_work *w, int unused);
static void md_sync_timer_fn(unsigned long data);
static int w_bitmap_io(struct drbd_conf *mdev, struct drbd_work *w, int unused);
static int w_go_diskless(struct drbd_conf *mdev, struct drbd_work *w, int unused);
MODULE_AUTHOR("Philipp Reisner <phil@linbit.com>, "
"Lars Ellenberg <lars@linbit.com>");
MODULE_DESCRIPTION("drbd - Distributed Replicated Block Device v" REL_VERSION);
MODULE_VERSION(REL_VERSION);
MODULE_LICENSE("GPL");
MODULE_PARM_DESC(minor_count, "Maximum number of drbd devices ("
__stringify(DRBD_MINOR_COUNT_MIN) "-" __stringify(DRBD_MINOR_COUNT_MAX) ")");
MODULE_ALIAS_BLOCKDEV_MAJOR(DRBD_MAJOR);
MODULE_PARM_DESC(allow_oos, "DONT USE!");
module_param(minor_count, uint, 0444);
module_param(disable_sendpage, bool, 0644);
module_param(allow_oos, bool, 0);
module_param(cn_idx, uint, 0444);
module_param(proc_details, int, 0644);
int enable_faults;
int fault_rate;
static int fault_count;
int fault_devs;
module_param(enable_faults, int, 0664);
module_param(fault_rate, int, 0664);
module_param(fault_count, int, 0664);
module_param(fault_devs, int, 0644);
unsigned int minor_count = DRBD_MINOR_COUNT_DEF;
int disable_sendpage;
int allow_oos;
unsigned int cn_idx = CN_IDX_DRBD;
int proc_details;
char usermode_helper[80] = "/sbin/drbdadm";
module_param_string(usermode_helper, usermode_helper, sizeof(usermode_helper), 0644);
struct drbd_conf **minor_table;
struct kmem_cache *drbd_request_cache;
struct kmem_cache *drbd_ee_cache;
struct kmem_cache *drbd_bm_ext_cache;
struct kmem_cache *drbd_al_ext_cache;
mempool_t *drbd_request_mempool;
mempool_t *drbd_ee_mempool;
struct page *drbd_pp_pool;
spinlock_t   drbd_pp_lock;
int          drbd_pp_vacant;
wait_queue_head_t drbd_pp_wait;
DEFINE_RATELIMIT_STATE(drbd_ratelimit_state, 5 * HZ, 5);
static const struct block_device_operations drbd_ops = ;
#define ARRY_SIZE(A) (sizeof(A)/sizeof(A[0]))
int _get_ldev_if_state(struct drbd_conf *mdev, enum drbd_disk_state mins)
static int tl_init(struct drbd_conf *mdev)
static void tl_cleanup(struct drbd_conf *mdev)
void _tl_add_barrier(struct drbd_conf *mdev, struct drbd_tl_epoch *new)
void tl_release(struct drbd_conf *mdev, unsigned int barrier_nr,
unsigned int set_size)
static void _tl_restart(struct drbd_conf *mdev, enum drbd_req_event what)
void tl_clear(struct drbd_conf *mdev)
void tl_restart(struct drbd_conf *mdev, enum drbd_req_event what)
static int cl_wide_st_chg(struct drbd_conf *mdev,
union drbd_state os, union drbd_state ns)
enum drbd_state_rv
drbd_change_state(struct drbd_conf *mdev, enum chg_state_flags f,
union drbd_state mask, union drbd_state val)
void drbd_force_state(struct drbd_conf *mdev,
union drbd_state mask, union drbd_state val)
static enum drbd_state_rv is_valid_state(struct drbd_conf *, union drbd_state);
static enum drbd_state_rv is_valid_state_transition(struct drbd_conf *,
union drbd_state,
union drbd_state);
static union drbd_state sanitize_state(struct drbd_conf *mdev, union drbd_state os,
union drbd_state ns, const char **warn_sync_abort);
int drbd_send_state_req(struct drbd_conf *,
union drbd_state, union drbd_state);
static enum drbd_state_rv
_req_st_cond(struct drbd_conf *mdev, union drbd_state mask,
union drbd_state val)
static enum drbd_state_rv
drbd_req_state(struct drbd_conf *mdev, union drbd_state mask,
union drbd_state val, enum chg_state_flags f)
enum drbd_state_rv
_drbd_request_state(struct drbd_conf *mdev, union drbd_state mask,
union drbd_state val, enum chg_state_flags f)
static void print_st(struct drbd_conf *mdev, char *name, union drbd_state ns)
void print_st_err(struct drbd_conf *mdev, union drbd_state os,
union drbd_state ns, enum drbd_state_rv err)
static enum drbd_state_rv
is_valid_state(struct drbd_conf *mdev, union drbd_state ns)
static enum drbd_state_rv
is_valid_state_transition(struct drbd_conf *mdev, union drbd_state ns,
union drbd_state os)
static union drbd_state sanitize_state(struct drbd_conf *mdev, union drbd_state os,
union drbd_state ns, const char **warn_sync_abort)
static void set_ov_position(struct drbd_conf *mdev, enum drbd_conns cs)
static void drbd_resume_al(struct drbd_conf *mdev)
enum drbd_state_rv
__drbd_set_state(struct drbd_conf *mdev, union drbd_state ns,
enum chg_state_flags flags, struct completion *done)
static int w_after_state_ch(struct drbd_conf *mdev, struct drbd_work *w, int unused)
static void abw_start_sync(struct drbd_conf *mdev, int rv)
int drbd_bitmap_io_from_worker(struct drbd_conf *mdev,
int (*io_fn)(struct drbd_conf *),
char *why, enum bm_flag flags)
static void after_state_ch(struct drbd_conf *mdev, union drbd_state os,
union drbd_state ns, enum chg_state_flags flags)
static int drbd_thread_setup(void *arg)
static void drbd_thread_init(struct drbd_conf *mdev, struct drbd_thread *thi,
int (*func) (struct drbd_thread *))
int drbd_thread_start(struct drbd_thread *thi)
void _drbd_thread_stop(struct drbd_thread *thi, int restart, int wait)
void drbd_calc_cpu_mask(struct drbd_conf *mdev)
void drbd_thread_current_set_cpu(struct drbd_conf *mdev)
int _drbd_send_cmd(struct drbd_conf *mdev, struct socket *sock,
enum drbd_packets cmd, struct p_header80 *h,
size_t size, unsigned msg_flags)
int drbd_send_cmd(struct drbd_conf *mdev, int use_data_socket,
enum drbd_packets cmd, struct p_header80 *h, size_t size)
int drbd_send_cmd2(struct drbd_conf *mdev, enum drbd_packets cmd, char *data,
size_t size)
int drbd_send_sync_param(struct drbd_conf *mdev, struct syncer_conf *sc)
int drbd_send_protocol(struct drbd_conf *mdev)
int _drbd_send_uuids(struct drbd_conf *mdev, u64 uuid_flags)
int drbd_send_uuids(struct drbd_conf *mdev)
int drbd_send_uuids_skip_initial_sync(struct drbd_conf *mdev)
void drbd_print_uuids(struct drbd_conf *mdev, const char *text)
int drbd_gen_and_send_sync_uuid(struct drbd_conf *mdev)
int drbd_send_sizes(struct drbd_conf *mdev, int trigger_reply, enum dds_flags flags)
int drbd_send_state(struct drbd_conf *mdev)
int drbd_send_state_req(struct drbd_conf *mdev,
union drbd_state mask, union drbd_state val)
int drbd_send_sr_reply(struct drbd_conf *mdev, enum drbd_state_rv retcode)
int fill_bitmap_rle_bits(struct drbd_conf *mdev,
struct p_compressed_bm *p,
struct bm_xfer_ctx *c)
static int
send_bitmap_rle_or_plain(struct drbd_conf *mdev,
struct p_header80 *h, struct bm_xfer_ctx *c)
int _drbd_send_bitmap(struct drbd_conf *mdev)
int drbd_send_bitmap(struct drbd_conf *mdev)
int drbd_send_b_ack(struct drbd_conf *mdev, u32 barrier_nr, u32 set_size)
static int _drbd_send_ack(struct drbd_conf *mdev, enum drbd_packets cmd,
u64 sector,
u32 blksize,
u64 block_id)
int drbd_send_ack_dp(struct drbd_conf *mdev, enum drbd_packets cmd,
struct p_data *dp, int data_size)
int drbd_send_ack_rp(struct drbd_conf *mdev, enum drbd_packets cmd,
struct p_block_req *rp)
int drbd_send_ack(struct drbd_conf *mdev,
enum drbd_packets cmd, struct drbd_epoch_entry *e)
int drbd_send_ack_ex(struct drbd_conf *mdev, enum drbd_packets cmd,
sector_t sector, int blksize, u64 block_id)
int drbd_send_drequest(struct drbd_conf *mdev, int cmd,
sector_t sector, int size, u64 block_id)
int drbd_send_drequest_csum(struct drbd_conf *mdev,
sector_t sector, int size,
void *digest, int digest_size,
enum drbd_packets cmd)
int drbd_send_ov_request(struct drbd_conf *mdev, sector_t sector, int size)
static int we_should_drop_the_connection(struct drbd_conf *mdev, struct socket *sock)
static int _drbd_no_send_page(struct drbd_conf *mdev, struct page *page,
int offset, size_t size, unsigned msg_flags)
static int _drbd_send_page(struct drbd_conf *mdev, struct page *page,
int offset, size_t size, unsigned msg_flags)
static int _drbd_send_bio(struct drbd_conf *mdev, struct bio *bio)
static int _drbd_send_zc_bio(struct drbd_conf *mdev, struct bio *bio)
static int _drbd_send_zc_ee(struct drbd_conf *mdev, struct drbd_epoch_entry *e)
static u32 bio_flags_to_wire(struct drbd_conf *mdev, unsigned long bi_rw)
int drbd_send_dblock(struct drbd_conf *mdev, struct drbd_request *req)
int drbd_send_block(struct drbd_conf *mdev, enum drbd_packets cmd,
struct drbd_epoch_entry *e)
int drbd_send_oos(struct drbd_conf *mdev, struct drbd_request *req)
int drbd_send(struct drbd_conf *mdev, struct socket *sock,
void *buf, size_t size, unsigned msg_flags)
static int drbd_open(struct block_device *bdev, fmode_t mode)
static int drbd_release(struct gendisk *gd, fmode_t mode)
static void drbd_set_defaults(struct drbd_conf *mdev)
void drbd_init_set_defaults(struct drbd_conf *mdev)
void drbd_mdev_cleanup(struct drbd_conf *mdev)
static void drbd_destroy_mempools(void)
static int drbd_create_mempools(void)
static int drbd_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static struct notifier_block drbd_notifier = ;
static void drbd_release_ee_lists(struct drbd_conf *mdev)
static void drbd_delete_device(unsigned int minor)
static void drbd_cleanup(void)
static int drbd_congested(void *congested_data, int bdi_bits)
struct drbd_conf *drbd_new_device(unsigned int minor)
void drbd_free_mdev(struct drbd_conf *mdev)
int __init drbd_init(void)
void drbd_free_bc(struct drbd_backing_dev *ldev)
void drbd_free_sock(struct drbd_conf *mdev)
void drbd_free_resources(struct drbd_conf *mdev)
struct meta_data_on_disk  __packed;
void drbd_md_sync(struct drbd_conf *mdev)
int drbd_md_read(struct drbd_conf *mdev, struct drbd_backing_dev *bdev)
void drbd_md_mark_dirty_(struct drbd_conf *mdev, unsigned int line, const char *func)
void drbd_md_mark_dirty(struct drbd_conf *mdev)
static void drbd_uuid_move_history(struct drbd_conf *mdev) __must_hold(local)
void _drbd_uuid_set(struct drbd_conf *mdev, int idx, u64 val) __must_hold(local)
void drbd_uuid_set(struct drbd_conf *mdev, int idx, u64 val) __must_hold(local)
void drbd_uuid_new_current(struct drbd_conf *mdev) __must_hold(local)
void drbd_uuid_set_bm(struct drbd_conf *mdev, u64 val) __must_hold(local)
int drbd_bmio_set_n_write(struct drbd_conf *mdev)
int drbd_bmio_clear_n_write(struct drbd_conf *mdev)
static int w_bitmap_io(struct drbd_conf *mdev, struct drbd_work *w, int unused)
void drbd_ldev_destroy(struct drbd_conf *mdev)
static int w_go_diskless(struct drbd_conf *mdev, struct drbd_work *w, int unused)
void drbd_go_diskless(struct drbd_conf *mdev)
void drbd_queue_bitmap_io(struct drbd_conf *mdev,
int (*io_fn)(struct drbd_conf *),
void (*done)(struct drbd_conf *, int),
char *why, enum bm_flag flags)
int drbd_bitmap_io(struct drbd_conf *mdev, int (*io_fn)(struct drbd_conf *),
char *why, enum bm_flag flags)
void drbd_md_set_flag(struct drbd_conf *mdev, int flag) __must_hold(local)
void drbd_md_clear_flag(struct drbd_conf *mdev, int flag) __must_hold(local)
int drbd_md_test_flag(struct drbd_backing_dev *bdev, int flag)
static void md_sync_timer_fn(unsigned long data)
static int w_md_sync(struct drbd_conf *mdev, struct drbd_work *w, int unused)
struct fault_random_state ;
#define FAULT_RANDOM_MULT 39916801
#define FAULT_RANDOM_ADD	479001701
#define FAULT_RANDOM_REFRESH 10000
static unsigned long
_drbd_fault_random(struct fault_random_state *rsp)
static char *
_drbd_fault_str(unsigned int type)
unsigned int
_drbd_insert_fault(struct drbd_conf *mdev, unsigned int type)
const char *drbd_buildtag(void)
module_init(drbd_init)
module_exit(drbd_cleanup)
EXPORT_SYMBOL(drbd_conn_str);
EXPORT_SYMBOL(drbd_role_str);
EXPORT_SYMBOL(drbd_disk_str);
EXPORT_SYMBOL(drbd_set_st_err_str);
