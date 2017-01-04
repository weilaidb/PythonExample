static struct shrinker qd_shrinker = ;
static void gfs2_init_inode_once(void *foo)
static void gfs2_init_glock_once(void *foo)
static void gfs2_init_gl_aspace_once(void *foo)
static int __init init_gfs2_fs(void)
static void __exit exit_gfs2_fs(void)
MODULE_DESCRIPTION("Global File System");
MODULE_AUTHOR("Red Hat, Inc.");
MODULE_LICENSE("GPL");
module_init(init_gfs2_fs);
module_exit(exit_gfs2_fs);
