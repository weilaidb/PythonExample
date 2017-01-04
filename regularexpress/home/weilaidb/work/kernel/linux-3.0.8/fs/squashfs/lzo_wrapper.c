struct squashfs_lzo ;
static void *lzo_init(struct squashfs_sb_info *msblk, void *buff, int len)
static void lzo_free(void *strm)
static int lzo_uncompress(struct squashfs_sb_info *msblk, void **buffer,
struct buffer_head **bh, int b, int offset, int length, int srclength,
int pages)
const struct squashfs_decompressor squashfs_lzo_comp_ops = ;
