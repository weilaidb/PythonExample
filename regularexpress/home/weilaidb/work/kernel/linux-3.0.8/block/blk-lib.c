struct bio_batch ;
static void bio_batch_end_io(struct bio *bio, int err)
int blkdev_issue_discard(struct block_device *bdev, sector_t sector,
sector_t nr_sects, gfp_t gfp_mask, unsigned long flags)
EXPORT_SYMBOL(blkdev_issue_discard);
int blkdev_issue_zeroout(struct block_device *bdev, sector_t sector,
sector_t nr_sects, gfp_t gfp_mask)
EXPORT_SYMBOL(blkdev_issue_zeroout);
