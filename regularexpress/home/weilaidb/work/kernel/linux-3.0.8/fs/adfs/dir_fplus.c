static int
adfs_fplus_read(struct super_block *sb, unsigned int id, unsigned int sz, struct adfs_dir *dir)
static int
adfs_fplus_setpos(struct adfs_dir *dir, unsigned int fpos)
static void
dir_memcpy(struct adfs_dir *dir, unsigned int offset, void *to, int len)
static int
adfs_fplus_getnext(struct adfs_dir *dir, struct object_info *obj)
static int
adfs_fplus_sync(struct adfs_dir *dir)
static void
adfs_fplus_free(struct adfs_dir *dir)
struct adfs_dir_ops adfs_fplus_dir_ops = ;
