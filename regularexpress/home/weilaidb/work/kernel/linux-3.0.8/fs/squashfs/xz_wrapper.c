struct squashfs_xz ;
struct comp_opts ;
static void *squashfs_xz_init(struct squashfs_sb_info *msblk, void *buff,
int len)
static void squashfs_xz_free(void *strm)
static int squashfs_xz_uncompress(struct squashfs_sb_info *msblk, void **buffer,
struct buffer_head **bh, int b, int offset, int length, int srclength,
int pages)
const struct squashfs_decompressor squashfs_xz_comp_ops = ;
