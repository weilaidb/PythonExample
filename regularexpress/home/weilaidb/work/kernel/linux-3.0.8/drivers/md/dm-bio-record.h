#define DM_BIO_RECORD_H
struct dm_bio_vec_details ;
struct dm_bio_details ;
static inline void dm_bio_record(struct dm_bio_details *bd, struct bio *bio)
static inline void dm_bio_restore(struct dm_bio_details *bd, struct bio *bio)
