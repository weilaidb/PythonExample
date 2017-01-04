#define _DRBD_WRAPPERS_H
extern char *drbd_sec_holder;
static inline void drbd_set_my_capacity(struct drbd_conf *mdev,
sector_t size)
#define drbd_bio_uptodate(bio) bio_flagged(bio, BIO_UPTODATE)
extern void drbd_md_io_complete(struct bio *bio, int error);
extern void drbd_endio_sec(struct bio *bio, int error);
extern void drbd_endio_pri(struct bio *bio, int error);
static inline void drbd_generic_make_request(struct drbd_conf *mdev,
int fault_type, struct bio *bio)
static inline int drbd_crypto_is_hash(struct crypto_tfm *tfm)
# undef __cond_lock
# define __cond_lock(x,c) (c)
