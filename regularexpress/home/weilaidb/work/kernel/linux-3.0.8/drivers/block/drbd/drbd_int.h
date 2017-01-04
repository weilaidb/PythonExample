#define _DRBD_INT_H
# define __protected_by(x)       __attribute__((require_context(x,1,999,"rdwr")))
# define __protected_read_by(x)  __attribute__((require_context(x,1,999,"read")))
# define __protected_write_by(x) __attribute__((require_context(x,1,999,"write")))
# define __must_hold(x)       __attribute__((context(x,1,1), require_context(x,1,999,"call")))
# define __protected_by(x)
# define __protected_read_by(x)
# define __protected_write_by(x)
# define __must_hold(x)
#define __no_warn(lock, stmt) do  while (0)
extern unsigned int minor_count;
extern int disable_sendpage;
extern int allow_oos;
extern unsigned int cn_idx;
extern int enable_faults;
extern int fault_rate;
extern int fault_devs;
extern char usermode_helper[];
#define DRBD_SIG SIGXCPU
#define DRBD_SIGKILL SIGHUP
#define ID_IN_SYNC      (4711ULL)
#define ID_OUT_OF_SYNC  (4712ULL)
#define ID_SYNCER (-1ULL)
#define ID_VACANT 0
#define is_syncer_block_id(id) ((id) == ID_SYNCER)
#define UUID_NEW_BM_OFFSET ((u64)0x0001000000000000ULL)
struct drbd_conf;
#define DEV (disk_to_dev(mdev->vdisk))
#define D_ASSERT(exp)	if (!(exp)) \
dev_err(DEV, "ASSERT( " #exp " ) in %s:%d\n", __FILE__, __LINE__)
#define ERR_IF(exp) if (())
enum ;
extern unsigned int
_drbd_insert_fault(struct drbd_conf *mdev, unsigned int type);
static inline int
drbd_insert_fault(struct drbd_conf *mdev, unsigned int type)
#define div_ceil(A, B) ((A)/(B) + ((A)%(B) ? 1 : 0))
#define div_floor(A, B) ((A)/(B))
#define DRBD_MD_MAGIC (DRBD_MAGIC+4)
extern struct drbd_conf **minor_table;
extern struct ratelimit_state drbd_ratelimit_state;
enum drbd_packets ;
static inline const char *cmdname(enum drbd_packets cmd)
struct bm_xfer_ctx ;
extern void INFO_bm_xfer_stats(struct drbd_conf *mdev,
const char *direction, struct bm_xfer_ctx *c);
static inline void bm_xfer_ctx_bit_to_word_offset(struct bm_xfer_ctx *c)
#define __packed __attribute__((packed))
struct p_header80  __packed;
struct p_header95  __packed;
union p_header ;
#define DP_HARDBARRIER	      1
#define DP_RW_SYNC	      2
#define DP_MAY_SET_IN_SYNC    4
#define DP_UNPLUG             8
#define DP_FUA               16
#define DP_FLUSH             32
#define DP_DISCARD           64
struct p_data  __packed;
struct p_block_ack  __packed;
struct p_block_req  __packed;
struct p_handshake  __packed;
struct p_barrier  __packed;
struct p_barrier_ack  __packed;
struct p_rs_param  __packed;
struct p_rs_param_89  __packed;
struct p_rs_param_95  __packed;
enum drbd_conn_flags ;
struct p_protocol  __packed;
struct p_uuids  __packed;
struct p_rs_uuid  __packed;
struct p_sizes  __packed;
struct p_state  __packed;
struct p_req_state  __packed;
struct p_req_state_reply  __packed;
struct p_drbd06_param  __packed;
struct p_discard  __packed;
struct p_block_desc  __packed;
enum drbd_bitmap_code ;
struct p_compressed_bm  __packed;
struct p_delay_probe93  __packed;
static inline enum drbd_bitmap_code
DCBP_get_code(struct p_compressed_bm *p)
static inline void
DCBP_set_code(struct p_compressed_bm *p, enum drbd_bitmap_code code)
static inline int
DCBP_get_start(struct p_compressed_bm *p)
static inline void
DCBP_set_start(struct p_compressed_bm *p, int set)
static inline int
DCBP_get_pad_bits(struct p_compressed_bm *p)
static inline void
DCBP_set_pad_bits(struct p_compressed_bm *p, int n)
#define BM_PACKET_PAYLOAD_BYTES (4096 - sizeof(struct p_header80))
#define BM_PACKET_WORDS (BM_PACKET_PAYLOAD_BYTES/sizeof(long))
#define BM_PACKET_VLI_BYTES_MAX (4096 - sizeof(struct p_compressed_bm))
#if (PAGE_SIZE < 4096)
#error "PAGE_SIZE too small"
union p_polymorph  __packed;
enum drbd_thread_state ;
struct drbd_thread ;
static inline enum drbd_thread_state get_t_state(struct drbd_thread *thi)
struct drbd_work;
typedef int (*drbd_work_cb)(struct drbd_conf *, struct drbd_work *, int cancel);
struct drbd_work ;
struct drbd_tl_epoch;
struct drbd_request ;
struct drbd_tl_epoch ;
struct drbd_request;
struct drbd_epoch ;
enum ;
enum epoch_event ;
struct drbd_wq_barrier ;
struct digest_info ;
struct drbd_epoch_entry ;
enum ;
#define EE_CALL_AL_COMPLETE_IO (1<<__EE_CALL_AL_COMPLETE_IO)
#define EE_MAY_SET_IN_SYNC     (1<<__EE_MAY_SET_IN_SYNC)
#define	EE_RESUBMITTED         (1<<__EE_RESUBMITTED)
#define EE_WAS_ERROR           (1<<__EE_WAS_ERROR)
#define EE_HAS_DIGEST          (1<<__EE_HAS_DIGEST)
enum ;
struct drbd_bitmap;
enum bm_flag ;
struct drbd_work_queue ;
struct drbd_socket ;
struct drbd_md ;
#define NL_PACKET(name, number, fields) struct name ;
#define NL_INTEGER(pn,pr,member) int member;
#define NL_INT64(pn,pr,member) __u64 member;
#define NL_BIT(pn,pr,member)   unsigned member:1;
#define NL_STRING(pn,pr,member,len) unsigned char member[len]; int member ## _len;
struct drbd_backing_dev ;
struct drbd_md_io ;
struct bm_io_work ;
enum write_ordering_e ;
struct fifo_buffer ;
struct drbd_conf ;
static inline struct drbd_conf *minor_to_mdev(unsigned int minor)
static inline unsigned int mdev_to_minor(struct drbd_conf *mdev)
static inline int drbd_get_data_sock(struct drbd_conf *mdev)
static inline void drbd_put_data_sock(struct drbd_conf *mdev)
enum chg_state_flags ;
enum dds_flags ;
extern void drbd_init_set_defaults(struct drbd_conf *mdev);
extern enum drbd_state_rv drbd_change_state(struct drbd_conf *mdev,
enum chg_state_flags f,
union drbd_state mask,
union drbd_state val);
extern void drbd_force_state(struct drbd_conf *, union drbd_state,
union drbd_state);
extern enum drbd_state_rv _drbd_request_state(struct drbd_conf *,
union drbd_state,
union drbd_state,
enum chg_state_flags);
extern enum drbd_state_rv __drbd_set_state(struct drbd_conf *, union drbd_state,
enum chg_state_flags,
struct completion *done);
extern void print_st_err(struct drbd_conf *, union drbd_state,
union drbd_state, int);
extern int  drbd_thread_start(struct drbd_thread *thi);
extern void _drbd_thread_stop(struct drbd_thread *thi, int restart, int wait);
extern void drbd_thread_current_set_cpu(struct drbd_conf *mdev);
extern void drbd_calc_cpu_mask(struct drbd_conf *mdev);
#define drbd_thread_current_set_cpu(A) ()
#define drbd_calc_cpu_mask(A) ()
extern void drbd_free_resources(struct drbd_conf *mdev);
extern void tl_release(struct drbd_conf *mdev, unsigned int barrier_nr,
unsigned int set_size);
extern void tl_clear(struct drbd_conf *mdev);
extern void _tl_add_barrier(struct drbd_conf *, struct drbd_tl_epoch *);
extern void drbd_free_sock(struct drbd_conf *mdev);
extern int drbd_send(struct drbd_conf *mdev, struct socket *sock,
void *buf, size_t size, unsigned msg_flags);
extern int drbd_send_protocol(struct drbd_conf *mdev);
extern int drbd_send_uuids(struct drbd_conf *mdev);
extern int drbd_send_uuids_skip_initial_sync(struct drbd_conf *mdev);
extern int drbd_gen_and_send_sync_uuid(struct drbd_conf *mdev);
extern int drbd_send_sizes(struct drbd_conf *mdev, int trigger_reply, enum dds_flags flags);
extern int _drbd_send_state(struct drbd_conf *mdev);
extern int drbd_send_state(struct drbd_conf *mdev);
extern int _drbd_send_cmd(struct drbd_conf *mdev, struct socket *sock,
enum drbd_packets cmd, struct p_header80 *h,
size_t size, unsigned msg_flags);
#define USE_DATA_SOCKET 1
#define USE_META_SOCKET 0
extern int drbd_send_cmd(struct drbd_conf *mdev, int use_data_socket,
enum drbd_packets cmd, struct p_header80 *h,
size_t size);
extern int drbd_send_cmd2(struct drbd_conf *mdev, enum drbd_packets cmd,
char *data, size_t size);
extern int drbd_send_sync_param(struct drbd_conf *mdev, struct syncer_conf *sc);
extern int drbd_send_b_ack(struct drbd_conf *mdev, u32 barrier_nr,
u32 set_size);
extern int drbd_send_ack(struct drbd_conf *mdev, enum drbd_packets cmd,
struct drbd_epoch_entry *e);
extern int drbd_send_ack_rp(struct drbd_conf *mdev, enum drbd_packets cmd,
struct p_block_req *rp);
extern int drbd_send_ack_dp(struct drbd_conf *mdev, enum drbd_packets cmd,
struct p_data *dp, int data_size);
extern int drbd_send_ack_ex(struct drbd_conf *mdev, enum drbd_packets cmd,
sector_t sector, int blksize, u64 block_id);
extern int drbd_send_oos(struct drbd_conf *mdev, struct drbd_request *req);
extern int drbd_send_block(struct drbd_conf *mdev, enum drbd_packets cmd,
struct drbd_epoch_entry *e);
extern int drbd_send_dblock(struct drbd_conf *mdev, struct drbd_request *req);
extern int drbd_send_drequest(struct drbd_conf *mdev, int cmd,
sector_t sector, int size, u64 block_id);
extern int drbd_send_drequest_csum(struct drbd_conf *mdev,
sector_t sector,int size,
void *digest, int digest_size,
enum drbd_packets cmd);
extern int drbd_send_ov_request(struct drbd_conf *mdev,sector_t sector,int size);
extern int drbd_send_bitmap(struct drbd_conf *mdev);
extern int _drbd_send_bitmap(struct drbd_conf *mdev);
extern int drbd_send_sr_reply(struct drbd_conf *mdev, enum drbd_state_rv retcode);
extern void drbd_free_bc(struct drbd_backing_dev *ldev);
extern void drbd_mdev_cleanup(struct drbd_conf *mdev);
void drbd_print_uuids(struct drbd_conf *mdev, const char *text);
extern void drbd_md_sync(struct drbd_conf *mdev);
extern int  drbd_md_read(struct drbd_conf *mdev, struct drbd_backing_dev *bdev);
extern void drbd_uuid_set(struct drbd_conf *mdev, int idx, u64 val) __must_hold(local);
extern void _drbd_uuid_set(struct drbd_conf *mdev, int idx, u64 val) __must_hold(local);
extern void drbd_uuid_new_current(struct drbd_conf *mdev) __must_hold(local);
extern void _drbd_uuid_new_current(struct drbd_conf *mdev) __must_hold(local);
extern void drbd_uuid_set_bm(struct drbd_conf *mdev, u64 val) __must_hold(local);
extern void drbd_md_set_flag(struct drbd_conf *mdev, int flags) __must_hold(local);
extern void drbd_md_clear_flag(struct drbd_conf *mdev, int flags)__must_hold(local);
extern int drbd_md_test_flag(struct drbd_backing_dev *, int);
extern void drbd_md_mark_dirty(struct drbd_conf *mdev);
#define drbd_md_mark_dirty(m)	drbd_md_mark_dirty_(m, __LINE__ , __func__ )
extern void drbd_md_mark_dirty_(struct drbd_conf *mdev,
unsigned int line, const char *func);
extern void drbd_queue_bitmap_io(struct drbd_conf *mdev,
int (*io_fn)(struct drbd_conf *),
void (*done)(struct drbd_conf *, int),
char *why, enum bm_flag flags);
extern int drbd_bitmap_io(struct drbd_conf *mdev,
int (*io_fn)(struct drbd_conf *),
char *why, enum bm_flag flags);
extern int drbd_bmio_set_n_write(struct drbd_conf *mdev);
extern int drbd_bmio_clear_n_write(struct drbd_conf *mdev);
extern void drbd_go_diskless(struct drbd_conf *mdev);
extern void drbd_ldev_destroy(struct drbd_conf *mdev);
#define MD_RESERVED_SECT (128LU << 11)
#define MD_AL_OFFSET 8
#define MD_AL_MAX_SIZE 64
#define MD_BM_OFFSET (MD_AL_OFFSET + MD_AL_MAX_SIZE)
#define MD_SECTOR_SHIFT	 9
#define MD_SECTOR_SIZE	 (1<<MD_SECTOR_SHIFT)
#define AL_EXTENTS_PT ((MD_SECTOR_SIZE-12)/8-1)
#define AL_EXTENT_SHIFT 22
#define AL_EXTENT_SIZE (1<<AL_EXTENT_SHIFT)
#if BITS_PER_LONG == 32
#define LN2_BPL 5
#define cpu_to_lel(A) cpu_to_le32(A)
#define lel_to_cpu(A) le32_to_cpu(A)
#elif BITS_PER_LONG == 64
#define LN2_BPL 6
#define cpu_to_lel(A) cpu_to_le64(A)
#define lel_to_cpu(A) le64_to_cpu(A)
#error "LN2 of BITS_PER_LONG unknown!"
struct bm_extent ;
#define BME_NO_WRITES  0
#define BME_LOCKED     1
#define BME_PRIORITY   2
#define SLEEP_TIME (HZ/10)
#define BM_BLOCK_SHIFT  12
#define BM_BLOCK_SIZE	 (1<<BM_BLOCK_SHIFT)
#define BM_EXT_SHIFT	 (BM_BLOCK_SHIFT + MD_SECTOR_SHIFT + 3)
#define BM_EXT_SIZE	 (1<<BM_EXT_SHIFT)
#if (BM_EXT_SHIFT != 24) || (BM_BLOCK_SHIFT != 12)
#error "HAVE YOU FIXED drbdmeta AS WELL??"
#define BM_SECT_TO_BIT(x)   ((x)>>(BM_BLOCK_SHIFT-9))
#define BM_BIT_TO_SECT(x)   ((sector_t)(x)<<(BM_BLOCK_SHIFT-9))
#define BM_SECT_PER_BIT     BM_BIT_TO_SECT(1)
#define Bit2KB(bits) ((bits)<<(BM_BLOCK_SHIFT-10))
#define BM_SECT_TO_EXT(x)   ((x)>>(BM_EXT_SHIFT-9))
#define BM_EXT_TO_SECT(x)   ((sector_t)(x) << (BM_EXT_SHIFT-9))
#define BM_SECT_PER_EXT     BM_EXT_TO_SECT(1)
#define AL_EXT_PER_BM_SECT  (1 << (BM_EXT_SHIFT - AL_EXTENT_SHIFT))
#define BM_WORDS_PER_AL_EXT (1 << (AL_EXTENT_SHIFT-BM_BLOCK_SHIFT-LN2_BPL))
#define BM_BLOCKS_PER_BM_EXT_B (BM_EXT_SHIFT - BM_BLOCK_SHIFT)
#define BM_BLOCKS_PER_BM_EXT_MASK  ((1<<BM_BLOCKS_PER_BM_EXT_B) - 1)
#define DRBD_MAX_SECTORS_32 (0xffffffffLU)
#define DRBD_MAX_SECTORS_BM \
((MD_RESERVED_SECT - MD_BM_OFFSET) * (1LL<<(BM_EXT_SHIFT-9)))
#if DRBD_MAX_SECTORS_BM < DRBD_MAX_SECTORS_32
#define DRBD_MAX_SECTORS      DRBD_MAX_SECTORS_BM
#define DRBD_MAX_SECTORS_FLEX DRBD_MAX_SECTORS_BM
#elif !defined(CONFIG_LBDAF) && BITS_PER_LONG == 32
#define DRBD_MAX_SECTORS      DRBD_MAX_SECTORS_32
#define DRBD_MAX_SECTORS_FLEX DRBD_MAX_SECTORS_32
#define DRBD_MAX_SECTORS      DRBD_MAX_SECTORS_BM
#if BITS_PER_LONG == 32
#define DRBD_MAX_SECTORS_FLEX BM_BIT_TO_SECT(0xffff7fff)
#define DRBD_MAX_SECTORS_FLEX (1UL << 51)
#define HT_SHIFT 8
#define DRBD_MAX_BIO_SIZE (1U<<(9+HT_SHIFT))
#define DRBD_MAX_BIO_SIZE_SAFE (1 << 12)
#define DRBD_MAX_SIZE_H80_PACKET (1 << 15)
#define APP_R_HSIZE 15
extern int  drbd_bm_init(struct drbd_conf *mdev);
extern int  drbd_bm_resize(struct drbd_conf *mdev, sector_t sectors, int set_new_bits);
extern void drbd_bm_cleanup(struct drbd_conf *mdev);
extern void drbd_bm_set_all(struct drbd_conf *mdev);
extern void drbd_bm_clear_all(struct drbd_conf *mdev);
extern int  drbd_bm_set_bits(
struct drbd_conf *mdev, unsigned long s, unsigned long e);
extern int  drbd_bm_clear_bits(
struct drbd_conf *mdev, unsigned long s, unsigned long e);
extern int drbd_bm_count_bits(
struct drbd_conf *mdev, const unsigned long s, const unsigned long e);
extern void _drbd_bm_set_bits(struct drbd_conf *mdev,
const unsigned long s, const unsigned long e);
extern int  drbd_bm_test_bit(struct drbd_conf *mdev, unsigned long bitnr);
extern int  drbd_bm_e_weight(struct drbd_conf *mdev, unsigned long enr);
extern int  drbd_bm_write_page(struct drbd_conf *mdev, unsigned int idx) __must_hold(local);
extern int  drbd_bm_read(struct drbd_conf *mdev) __must_hold(local);
extern int  drbd_bm_write(struct drbd_conf *mdev) __must_hold(local);
extern unsigned long drbd_bm_ALe_set_all(struct drbd_conf *mdev,
unsigned long al_enr);
extern size_t	     drbd_bm_words(struct drbd_conf *mdev);
extern unsigned long drbd_bm_bits(struct drbd_conf *mdev);
extern sector_t      drbd_bm_capacity(struct drbd_conf *mdev);
#define DRBD_END_OF_BITMAP	(~(unsigned long)0)
extern unsigned long drbd_bm_find_next(struct drbd_conf *mdev, unsigned long bm_fo);
extern unsigned long _drbd_bm_find_next(struct drbd_conf *mdev, unsigned long bm_fo);
extern unsigned long _drbd_bm_find_next_zero(struct drbd_conf *mdev, unsigned long bm_fo);
extern unsigned long _drbd_bm_total_weight(struct drbd_conf *mdev);
extern unsigned long drbd_bm_total_weight(struct drbd_conf *mdev);
extern int drbd_bm_rs_done(struct drbd_conf *mdev);
extern void drbd_bm_merge_lel(struct drbd_conf *mdev, size_t offset,
size_t number, unsigned long *buffer);
extern void drbd_bm_get_lel(struct drbd_conf *mdev, size_t offset,
size_t number, unsigned long *buffer);
extern void drbd_bm_lock(struct drbd_conf *mdev, char *why, enum bm_flag flags);
extern void drbd_bm_unlock(struct drbd_conf *mdev);
extern struct kmem_cache *drbd_request_cache;
extern struct kmem_cache *drbd_ee_cache;
extern struct kmem_cache *drbd_bm_ext_cache;
extern struct kmem_cache *drbd_al_ext_cache;
extern mempool_t *drbd_request_mempool;
extern mempool_t *drbd_ee_mempool;
extern struct page *drbd_pp_pool;
extern spinlock_t   drbd_pp_lock;
extern int	    drbd_pp_vacant;
extern wait_queue_head_t drbd_pp_wait;
extern rwlock_t global_state_lock;
extern struct drbd_conf *drbd_new_device(unsigned int minor);
extern void drbd_free_mdev(struct drbd_conf *mdev);
extern int proc_details;
extern int drbd_make_request(struct request_queue *q, struct bio *bio);
extern int drbd_read_remote(struct drbd_conf *mdev, struct drbd_request *req);
extern int drbd_merge_bvec(struct request_queue *q, struct bvec_merge_data *bvm, struct bio_vec *bvec);
extern int is_valid_ar_handle(struct drbd_request *, sector_t);
extern void drbd_suspend_io(struct drbd_conf *mdev);
extern void drbd_resume_io(struct drbd_conf *mdev);
extern char *ppsize(char *buf, unsigned long long size);
extern sector_t drbd_new_dev_size(struct drbd_conf *, struct drbd_backing_dev *, int);
enum determine_dev_size ;
extern enum determine_dev_size drbd_determine_dev_size(struct drbd_conf *, enum dds_flags) __must_hold(local);
extern void resync_after_online_grow(struct drbd_conf *);
extern void drbd_reconsider_max_bio_size(struct drbd_conf *mdev);
extern enum drbd_state_rv drbd_set_role(struct drbd_conf *mdev,
enum drbd_role new_role,
int force);
extern enum drbd_disk_state drbd_try_outdate_peer(struct drbd_conf *mdev);
extern void drbd_try_outdate_peer_async(struct drbd_conf *mdev);
extern int drbd_khelper(struct drbd_conf *mdev, char *cmd);
extern int drbd_worker(struct drbd_thread *thi);
extern int drbd_alter_sa(struct drbd_conf *mdev, int na);
extern void drbd_start_resync(struct drbd_conf *mdev, enum drbd_conns side);
extern void resume_next_sg(struct drbd_conf *mdev);
extern void suspend_other_sg(struct drbd_conf *mdev);
extern int drbd_resync_finished(struct drbd_conf *mdev);
extern int drbd_md_sync_page_io(struct drbd_conf *mdev,
struct drbd_backing_dev *bdev, sector_t sector, int rw);
extern void drbd_ov_oos_found(struct drbd_conf*, sector_t, int);
extern void drbd_rs_controller_reset(struct drbd_conf *mdev);
static inline void ov_oos_print(struct drbd_conf *mdev)
extern void drbd_csum_bio(struct drbd_conf *, struct crypto_hash *, struct bio *, void *);
extern void drbd_csum_ee(struct drbd_conf *, struct crypto_hash *, struct drbd_epoch_entry *, void *);
extern int w_req_cancel_conflict(struct drbd_conf *, struct drbd_work *, int);
extern int w_read_retry_remote(struct drbd_conf *, struct drbd_work *, int);
extern int w_e_end_data_req(struct drbd_conf *, struct drbd_work *, int);
extern int w_e_end_rsdata_req(struct drbd_conf *, struct drbd_work *, int);
extern int w_e_end_csum_rs_req(struct drbd_conf *, struct drbd_work *, int);
extern int w_e_end_ov_reply(struct drbd_conf *, struct drbd_work *, int);
extern int w_e_end_ov_req(struct drbd_conf *, struct drbd_work *, int);
extern int w_ov_finished(struct drbd_conf *, struct drbd_work *, int);
extern int w_resync_timer(struct drbd_conf *, struct drbd_work *, int);
extern int w_resume_next_sg(struct drbd_conf *, struct drbd_work *, int);
extern int w_send_write_hint(struct drbd_conf *, struct drbd_work *, int);
extern int w_send_dblock(struct drbd_conf *, struct drbd_work *, int);
extern int w_send_barrier(struct drbd_conf *, struct drbd_work *, int);
extern int w_send_read_req(struct drbd_conf *, struct drbd_work *, int);
extern int w_prev_work_done(struct drbd_conf *, struct drbd_work *, int);
extern int w_e_reissue(struct drbd_conf *, struct drbd_work *, int);
extern int w_restart_disk_io(struct drbd_conf *, struct drbd_work *, int);
extern int w_send_oos(struct drbd_conf *, struct drbd_work *, int);
extern int w_start_resync(struct drbd_conf *, struct drbd_work *, int);
extern void resync_timer_fn(unsigned long data);
extern void start_resync_timer_fn(unsigned long data);
extern int drbd_rs_should_slow_down(struct drbd_conf *mdev, sector_t sector);
extern int drbd_submit_ee(struct drbd_conf *mdev, struct drbd_epoch_entry *e,
const unsigned rw, const int fault_type);
extern int drbd_release_ee(struct drbd_conf *mdev, struct list_head *list);
extern struct drbd_epoch_entry *drbd_alloc_ee(struct drbd_conf *mdev,
u64 id,
sector_t sector,
unsigned int data_size,
gfp_t gfp_mask) __must_hold(local);
extern void drbd_free_some_ee(struct drbd_conf *mdev, struct drbd_epoch_entry *e,
int is_net);
#define drbd_free_ee(m,e)	drbd_free_some_ee(m, e, 0)
#define drbd_free_net_ee(m,e)	drbd_free_some_ee(m, e, 1)
extern void drbd_wait_ee_list_empty(struct drbd_conf *mdev,
struct list_head *head);
extern void _drbd_wait_ee_list_empty(struct drbd_conf *mdev,
struct list_head *head);
extern void drbd_set_recv_tcq(struct drbd_conf *mdev, int tcq_enabled);
extern void _drbd_clear_done_ee(struct drbd_conf *mdev, struct list_head *to_be_freed);
extern void drbd_flush_workqueue(struct drbd_conf *mdev);
extern void drbd_free_tl_hash(struct drbd_conf *mdev);
static inline int drbd_setsockopt(struct socket *sock, int level, int optname,
char __user *optval, int optlen)
static inline void drbd_tcp_cork(struct socket *sock)
static inline void drbd_tcp_uncork(struct socket *sock)
static inline void drbd_tcp_nodelay(struct socket *sock)
static inline void drbd_tcp_quickack(struct socket *sock)
void drbd_bump_write_ordering(struct drbd_conf *mdev, enum write_ordering_e wo);
extern struct proc_dir_entry *drbd_proc;
extern const struct file_operations drbd_proc_fops;
extern const char *drbd_conn_str(enum drbd_conns s);
extern const char *drbd_role_str(enum drbd_role s);
extern void drbd_al_begin_io(struct drbd_conf *mdev, sector_t sector);
extern void drbd_al_complete_io(struct drbd_conf *mdev, sector_t sector);
extern void drbd_rs_complete_io(struct drbd_conf *mdev, sector_t sector);
extern int drbd_rs_begin_io(struct drbd_conf *mdev, sector_t sector);
extern int drbd_try_rs_begin_io(struct drbd_conf *mdev, sector_t sector);
extern void drbd_rs_cancel_all(struct drbd_conf *mdev);
extern int drbd_rs_del_all(struct drbd_conf *mdev);
extern void drbd_rs_failed_io(struct drbd_conf *mdev,
sector_t sector, int size);
extern int drbd_al_read_log(struct drbd_conf *mdev, struct drbd_backing_dev *);
extern void drbd_advance_rs_marks(struct drbd_conf *mdev, unsigned long still_to_go);
extern void __drbd_set_in_sync(struct drbd_conf *mdev, sector_t sector,
int size, const char *file, const unsigned int line);
#define drbd_set_in_sync(mdev, sector, size) \
__drbd_set_in_sync(mdev, sector, size, __FILE__, __LINE__)
extern int __drbd_set_out_of_sync(struct drbd_conf *mdev, sector_t sector,
int size, const char *file, const unsigned int line);
#define drbd_set_out_of_sync(mdev, sector, size) \
__drbd_set_out_of_sync(mdev, sector, size, __FILE__, __LINE__)
extern void drbd_al_apply_to_bm(struct drbd_conf *mdev);
extern void drbd_al_shrink(struct drbd_conf *mdev);
void drbd_nl_cleanup(void);
int __init drbd_nl_init(void);
void drbd_bcast_state(struct drbd_conf *mdev, union drbd_state);
void drbd_bcast_sync_progress(struct drbd_conf *mdev);
void drbd_bcast_ee(struct drbd_conf *mdev,
const char *reason, const int dgs,
const char* seen_hash, const char* calc_hash,
const struct drbd_epoch_entry* e);
#define role_MASK R_MASK
#define peer_MASK R_MASK
#define disk_MASK D_MASK
#define pdsk_MASK D_MASK
#define conn_MASK C_MASK
#define susp_MASK 1
#define user_isp_MASK 1
#define aftr_isp_MASK 1
#define susp_nod_MASK 1
#define susp_fen_MASK 1
#define NS(T, S) \
(), \
()
#define NS2(T1, S1, T2, S2) \
(), \
()
#define NS3(T1, S1, T2, S2, T3, S3) \
(), \
()
#define _NS(D, T, S) \
D, ()
#define _NS2(D, T1, S1, T2, S2) \
D, ()
#define _NS3(D, T1, S1, T2, S2, T3, S3) \
D, ()
static inline struct page *page_chain_next(struct page *page)
#define page_chain_for_each(page) \
for (; page && (); \
page = page_chain_next(page))
#define page_chain_for_each_safe(page, n) \
for (; page && (); page = n)
static inline int drbd_bio_has_active_page(struct bio *bio)
static inline int drbd_ee_has_active_page(struct drbd_epoch_entry *e)
static inline void drbd_state_lock(struct drbd_conf *mdev)
static inline void drbd_state_unlock(struct drbd_conf *mdev)
static inline enum drbd_state_rv
_drbd_set_state(struct drbd_conf *mdev, union drbd_state ns,
enum chg_state_flags flags, struct completion *done)
static inline int drbd_request_state(struct drbd_conf *mdev,
union drbd_state mask,
union drbd_state val)
#define __drbd_chk_io_error(m,f) __drbd_chk_io_error_(m,f, __func__)
static inline void __drbd_chk_io_error_(struct drbd_conf *mdev, int forcedetach, const char *where)
#define drbd_chk_io_error(m,e,f) drbd_chk_io_error_(m,e,f, __func__)
static inline void drbd_chk_io_error_(struct drbd_conf *mdev,
int error, int forcedetach, const char *where)
static inline sector_t drbd_md_first_sector(struct drbd_backing_dev *bdev)
static inline sector_t drbd_md_last_sector(struct drbd_backing_dev *bdev)
static inline sector_t drbd_get_capacity(struct block_device *bdev)
static inline sector_t drbd_get_max_capacity(struct drbd_backing_dev *bdev)
static inline sector_t drbd_md_ss__(struct drbd_conf *mdev,
struct drbd_backing_dev *bdev)
static inline void
drbd_queue_work_front(struct drbd_work_queue *q, struct drbd_work *w)
static inline void
drbd_queue_work(struct drbd_work_queue *q, struct drbd_work *w)
static inline void wake_asender(struct drbd_conf *mdev)
static inline void request_ping(struct drbd_conf *mdev)
static inline int drbd_send_short_cmd(struct drbd_conf *mdev,
enum drbd_packets cmd)
static inline int drbd_send_ping(struct drbd_conf *mdev)
static inline int drbd_send_ping_ack(struct drbd_conf *mdev)
static inline void drbd_thread_stop(struct drbd_thread *thi)
static inline void drbd_thread_stop_nowait(struct drbd_thread *thi)
static inline void drbd_thread_restart_nowait(struct drbd_thread *thi)
static inline void inc_ap_pending(struct drbd_conf *mdev)
#define ERR_IF_CNT_IS_NEGATIVE(which)				\
if (atomic_read(&mdev->which) < 0)			\
dev_err(DEV, "in %s:%d: " #which " = %d < 0 !\n",	\
__func__ , __LINE__ ,			\
atomic_read(&mdev->which))
#define dec_ap_pending(mdev)	do  while (0)
static inline void inc_rs_pending(struct drbd_conf *mdev)
#define dec_rs_pending(mdev)	do  while (0)
static inline void inc_unacked(struct drbd_conf *mdev)
#define dec_unacked(mdev)	do  while (0)
#define sub_unacked(mdev, n)	do  while (0)
static inline void put_net_conf(struct drbd_conf *mdev)
static inline int get_net_conf(struct drbd_conf *mdev)
#define get_ldev(M) __cond_lock(local, _get_ldev_if_state(M,D_INCONSISTENT))
#define get_ldev_if_state(M,MINS) __cond_lock(local, _get_ldev_if_state(M,MINS))
static inline void put_ldev(struct drbd_conf *mdev)
static inline int _get_ldev_if_state(struct drbd_conf *mdev, enum drbd_disk_state mins)
extern int _get_ldev_if_state(struct drbd_conf *mdev, enum drbd_disk_state mins);
static inline void drbd_get_syncer_progress(struct drbd_conf *mdev,
unsigned long *bits_left, unsigned int *per_mil_done)
static inline int drbd_get_max_buffers(struct drbd_conf *mdev)
static inline int drbd_state_is_stable(struct drbd_conf *mdev)
static inline int is_susp(union drbd_state s)
static inline bool may_inc_ap_bio(struct drbd_conf *mdev)
static inline bool inc_ap_bio_cond(struct drbd_conf *mdev, int count)
static inline void inc_ap_bio(struct drbd_conf *mdev, int count)
static inline void dec_ap_bio(struct drbd_conf *mdev)
static inline int drbd_set_ed_uuid(struct drbd_conf *mdev, u64 val)
static inline int seq_cmp(u32 a, u32 b)
#define seq_lt(a, b) (seq_cmp((a), (b)) < 0)
#define seq_gt(a, b) (seq_cmp((a), (b)) > 0)
#define seq_ge(a, b) (seq_cmp((a), (b)) >= 0)
#define seq_le(a, b) (seq_cmp((a), (b)) <= 0)
#define seq_max(a, b) ((u32)(seq_gt((a), (b)) ? (a) : (b)))
static inline void update_peer_seq(struct drbd_conf *mdev, unsigned int new_seq)
static inline void drbd_update_congested(struct drbd_conf *mdev)
static inline int drbd_queue_order_type(struct drbd_conf *mdev)
static inline void drbd_md_flush(struct drbd_conf *mdev)
