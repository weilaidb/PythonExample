static const struct squashfs_decompressor squashfs_lzma_unsupported_comp_ops = ;
static const struct squashfs_decompressor squashfs_lzo_comp_ops = ;
static const struct squashfs_decompressor squashfs_xz_comp_ops = ;
static const struct squashfs_decompressor squashfs_unknown_comp_ops = ;
static const struct squashfs_decompressor *decompressor[] = ;
const struct squashfs_decompressor *squashfs_lookup_decompressor(int id)
void *squashfs_decompressor_init(struct super_block *sb, unsigned short flags)
