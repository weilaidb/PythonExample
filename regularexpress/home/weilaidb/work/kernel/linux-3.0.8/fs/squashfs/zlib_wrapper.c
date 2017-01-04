static void *zlib_init(struct squashfs_sb_info *dummy, void *buff, int len)
static void zlib_free(void *strm)
static int zlib_uncompress(struct squashfs_sb_info *msblk, void **buffer,
struct buffer_head **bh, int b, int offset, int length, int srclength,
int pages)
const struct squashfs_decompressor squashfs_zlib_comp_ops = ;
