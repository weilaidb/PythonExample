static void ufs_read_cylinder (struct super_block * sb,
unsigned cgno, unsigned bitmap_nr)
void ufs_put_cylinder (struct super_block * sb, unsigned bitmap_nr)
struct ufs_cg_private_info * ufs_load_cylinder (
struct super_block * sb, unsigned cgno)
