static long do_spu_run(struct file *filp,
__u32 __user *unpc,
__u32 __user *ustatus)
static long do_spu_create(const char __user *pathname, unsigned int flags,
mode_t mode, struct file *neighbor)
struct spufs_calls spufs_calls = ;
