static void _drbd_start_io_acct(struct drbd_conf *mdev, struct drbd_request *req, struct bio *bio)
static void _drbd_end_io_acct(struct drbd_conf *mdev, struct drbd_request *req)
static void _req_is_done(struct drbd_conf *mdev, struct drbd_request *req, const int rw)
static void queue_barrier(struct drbd_conf *mdev)
static void _about_to_complete_local_write(struct drbd_conf *mdev,
struct drbd_request *req)
void complete_master_bio(struct drbd_conf *mdev,
struct bio_and_error *m)
void _req_may_be_done(struct drbd_request *req, struct bio_and_error *m)
static void _req_may_be_done_not_susp(struct drbd_request *req, struct bio_and_error *m)
static int _req_conflicts(struct drbd_request *req)
int __req_mod(struct drbd_request *req, enum drbd_req_event what,
struct bio_and_error *m)
static int drbd_may_do_local_read(struct drbd_conf *mdev, sector_t sector, int size)
static int drbd_make_request_common(struct drbd_conf *mdev, struct bio *bio, unsigned long start_time)
static int drbd_fail_request_early(struct drbd_conf *mdev, int is_write)
int drbd_make_request(struct request_queue *q, struct bio *bio)
int drbd_merge_bvec(struct request_queue *q, struct bvec_merge_data *bvm, struct bio_vec *bvec)
void request_timer_fn(unsigned long data)
