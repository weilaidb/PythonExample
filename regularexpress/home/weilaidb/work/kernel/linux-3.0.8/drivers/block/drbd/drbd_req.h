#define _DRBD_REQ_H
enum drbd_req_event ;
enum drbd_req_state_bits ;
#define RQ_LOCAL_PENDING   (1UL << __RQ_LOCAL_PENDING)
#define RQ_LOCAL_COMPLETED (1UL << __RQ_LOCAL_COMPLETED)
#define RQ_LOCAL_OK        (1UL << __RQ_LOCAL_OK)
#define RQ_LOCAL_MASK      ((RQ_LOCAL_OK << 1)-1)
#define RQ_NET_PENDING     (1UL << __RQ_NET_PENDING)
#define RQ_NET_QUEUED      (1UL << __RQ_NET_QUEUED)
#define RQ_NET_SENT        (1UL << __RQ_NET_SENT)
#define RQ_NET_DONE        (1UL << __RQ_NET_DONE)
#define RQ_NET_OK          (1UL << __RQ_NET_OK)
#define RQ_NET_SIS         (1UL << __RQ_NET_SIS)
#define RQ_NET_MASK        (((1UL << __RQ_NET_MAX)-1) & ~RQ_LOCAL_MASK)
#define RQ_WRITE           (1UL << __RQ_WRITE)
#define RQ_IN_ACT_LOG      (1UL << __RQ_IN_ACT_LOG)
#define MR_WRITE_SHIFT 0
#define MR_WRITE       (1 << MR_WRITE_SHIFT)
#define MR_READ_SHIFT  1
#define MR_READ        (1 << MR_READ_SHIFT)
static inline
struct hlist_head *ee_hash_slot(struct drbd_conf *mdev, sector_t sector)
static inline
struct hlist_head *tl_hash_slot(struct drbd_conf *mdev, sector_t sector)
static struct hlist_head *ar_hash_slot(struct drbd_conf *mdev, sector_t sector)
static inline struct drbd_request *_ar_id_to_req(struct drbd_conf *mdev,
u64 id, sector_t sector)
static inline void drbd_req_make_private_bio(struct drbd_request *req, struct bio *bio_src)
static inline struct drbd_request *drbd_req_new(struct drbd_conf *mdev,
struct bio *bio_src)
static inline void drbd_req_free(struct drbd_request *req)
static inline int overlaps(sector_t s1, int l1, sector_t s2, int l2)
struct bio_and_error ;
extern void _req_may_be_done(struct drbd_request *req,
struct bio_and_error *m);
extern int __req_mod(struct drbd_request *req, enum drbd_req_event what,
struct bio_and_error *m);
extern void complete_master_bio(struct drbd_conf *mdev,
struct bio_and_error *m);
extern void request_timer_fn(unsigned long data);
extern void tl_restart(struct drbd_conf *mdev, enum drbd_req_event what);
static inline int _req_mod(struct drbd_request *req, enum drbd_req_event what)
static inline int req_mod(struct drbd_request *req,
enum drbd_req_event what)
static inline bool drbd_should_do_remote(union drbd_state s)
static inline bool drbd_should_send_oos(union drbd_state s)
