#define DECOMPRESSOR_H
struct squashfs_decompressor ;
static inline void squashfs_decompressor_free(struct squashfs_sb_info *msblk,
void *s)
static inline int squashfs_decompress(struct squashfs_sb_info *msblk,
void **buffer, struct buffer_head **bh, int b, int offset, int length,
int srclength, int pages)
extern const struct squashfs_decompressor squashfs_xz_comp_ops;
extern const struct squashfs_decompressor squashfs_lzo_comp_ops;
