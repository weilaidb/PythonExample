static __initdata char *message;
static void __init error(char *x)
#define N_ALIGN(len) ((((len) + 1) & ~3) + 2)
static __initdata struct hash  *head[32];
static inline int hash(int major, int minor, int ino)
static char __init *find_link(int major, int minor, int ino,
mode_t mode, char *name)
static void __init free_hash(void)
static long __init do_utime(char __user *filename, time_t mtime)
static __initdata LIST_HEAD(dir_list);
struct dir_entry ;
static void __init dir_add(const char *name, time_t mtime)
static void __init dir_utime(void)
static __initdata time_t mtime;
static __initdata unsigned long ino, major, minor, nlink;
static __initdata mode_t mode;
static __initdata unsigned long body_len, name_len;
static __initdata uid_t uid;
static __initdata gid_t gid;
static __initdata unsigned rdev;
static void __init parse_header(char *s)
static __initdata enum state  state, next_state;
static __initdata char *victim;
static __initdata unsigned count;
static __initdata loff_t this_header, next_header;
static inline void __init eat(unsigned n)
static __initdata char *vcollected;
static __initdata char *collected;
static __initdata int remains;
static __initdata char *collect;
static void __init read_into(char *buf, unsigned size, enum state next)
static __initdata char *header_buf, *symlink_buf, *name_buf;
static int __init do_start(void)
static int __init do_collect(void)
static int __init do_header(void)
static int __init do_skip(void)
static int __init do_reset(void)
static int __init maybe_link(void)
static void __init clean_path(char *path, mode_t mode)
static __initdata int wfd;
static int __init do_name(void)
static int __init do_copy(void)
static int __init do_symlink(void)
static __initdata int (*actions[])(void) = ;
static int __init write_buffer(char *buf, unsigned len)
static int __init flush_buffer(void *bufv, unsigned len)
static unsigned my_inptr;
static char * __init unpack_to_rootfs(char *buf, unsigned len)
static int __initdata do_retain_initrd;
static int __init retain_initrd_param(char *str)
__setup("retain_initrd", retain_initrd_param);
extern char __initramfs_start[];
extern unsigned long __initramfs_size;
static void __init free_initrd(void)
#define BUF_SIZE 1024
static void __init clean_rootfs(void)
static int __init populate_rootfs(void)
rootfs_initcall(populate_rootfs);
