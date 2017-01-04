#define UBD_SHIFT 4
enum ubd_req ;
struct io_thread_req ;
static inline int ubd_test_bit(__u64 bit, unsigned char *data)
static inline void ubd_set_bit(__u64 bit, unsigned char *data)
#define DRIVER_NAME "uml-blkdev"
static DEFINE_MUTEX(ubd_lock);
static DEFINE_MUTEX(ubd_mutex);
static int ubd_open(struct block_device *bdev, fmode_t mode);
static int ubd_release(struct gendisk *disk, fmode_t mode);
static int ubd_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg);
static int ubd_getgeo(struct block_device *bdev, struct hd_geometry *geo);
#define MAX_DEV (16)
static const struct block_device_operations ubd_blops = ;
static int fake_major = UBD_MAJOR;
static struct gendisk *ubd_gendisk[MAX_DEV];
static struct gendisk *fake_gendisk[MAX_DEV];
#define OPEN_FLAGS ((struct openflags) )
#define OPEN_FLAGS ((struct openflags) )
static struct openflags global_openflags = OPEN_FLAGS;
struct cow ;
#define MAX_SG 64
struct ubd ;
#define DEFAULT_COW
#define DEFAULT_UBD
static struct ubd ubd_devs[MAX_DEV] = ;
static int fake_ide = 0;
static struct proc_dir_entry *proc_ide_root = NULL;
static struct proc_dir_entry *proc_ide = NULL;
static void make_proc_ide(void)
static int fake_ide_media_proc_show(struct seq_file *m, void *v)
static int fake_ide_media_proc_open(struct inode *inode, struct file *file)
static const struct file_operations fake_ide_media_proc_fops = ;
static void make_ide_entries(const char *dev_name)
static int fake_ide_setup(char *str)
__setup("fake_ide", fake_ide_setup);
__uml_help(fake_ide_setup,
"fake_ide\n"
"    Create ide0 entries that map onto ubd devices.\n\n"
);
static int parse_unit(char **ptr)
static int ubd_setup_common(char *str, int *index_out, char **error_out)
static int ubd_setup(char *str)
__setup("ubd", ubd_setup);
__uml_help(ubd_setup,
"ubd<n><flags>=<filename>[(:|,)<filename2>]\n"
"    This is used to associate a device with a file in the underlying\n"
"    filesystem. When specifying two filenames, the first one is the\n"
"    COW name and the second is the backing file name. As separator you can\n"
"    use either a ':' or a ',': the first one allows writing things like;\n"
"	ubd0=~/Uml/root_cow:~/Uml/root_backing_file\n"
"    while with a ',' the shell would not expand the 2nd '~'.\n"
"    When using only one filename, UML will detect whether to treat it like\n"
"    a COW file or a backing file. To override this detection, add the 'd'\n"
"    flag:\n"
"	ubd0d=BackingFile\n"
"    Usually, there is a filesystem in the file, but \n"
"    that's not required. Swap devices containing swap files can be\n"
"    specified like this. Also, a file which doesn't contain a\n"
"    filesystem can have its contents read in the virtual \n"
"    machine by running 'dd' on the device. <n> must be in the range\n"
"    0 to 7. Appending an 'r' to the number will cause that device\n"
"    to be mounted read-only. For example ubd1r=./ext_fs. Appending\n"
"    an 's' will cause data to be written to disk on the host immediately.\n"
"    'c' will cause the device to be treated as being shared between multiple\n"
"    UMLs and file locking will be turned off - this is appropriate for a\n"
"    cluster filesystem and inappropriate at almost all other times.\n\n"
);
static int udb_setup(char *str)
__setup("udb", udb_setup);
__uml_help(udb_setup,
"udb\n"
"    This option is here solely to catch ubd -> udb typos, which can be\n"
"    to impossible to catch visually unless you specifically look for\n"
"    them.  The only result of any option starting with 'udb' is an error\n"
"    in the boot output.\n\n"
);
static void do_ubd_request(struct request_queue * q);
static int thread_fd = -1;
static LIST_HEAD(restart);
static void ubd_handler(void)
static irqreturn_t ubd_intr(int irq, void *dev)
static int io_pid = -1;
static void kill_io_thread(void)
__uml_exitcall(kill_io_thread);
static inline int ubd_file_size(struct ubd *ubd_dev, __u64 *size_out)
static int read_cow_bitmap(int fd, void *buf, int offset, int len)
static int backing_file_mismatch(char *file, __u64 size, time_t mtime)
static int path_requires_switch(char *from_cmdline, char *from_cow, char *cow)
static int open_ubd_file(char *file, struct openflags *openflags, int shared,
char **backing_file_out, int *bitmap_offset_out,
unsigned long *bitmap_len_out, int *data_offset_out,
int *create_cow_out)
static int create_cow_file(char *cow_file, char *backing_file,
struct openflags flags,
int sectorsize, int alignment, int *bitmap_offset_out,
unsigned long *bitmap_len_out, int *data_offset_out)
static void ubd_close_dev(struct ubd *ubd_dev)
static int ubd_open_dev(struct ubd *ubd_dev)
static void ubd_device_release(struct device *dev)
static int ubd_disk_register(int major, u64 size, int unit,
struct gendisk **disk_out)
#define ROUND_BLOCK(n) ((n + ((1 << 9) - 1)) & (-1 << 9))
static int ubd_add(int n, char **error_out)
static int ubd_config(char *str, char **error_out)
static int ubd_get_config(char *name, char *str, int size, char **error_out)
static int ubd_id(char **str, int *start_out, int *end_out)
static int ubd_remove(int n, char **error_out)
static struct mc_device ubd_mc = ;
static int __init ubd_mc_init(void)
__initcall(ubd_mc_init);
static int __init ubd0_init(void)
__initcall(ubd0_init);
static struct platform_driver ubd_driver = ;
static int __init ubd_init(void)
late_initcall(ubd_init);
static int __init ubd_driver_init(void)
device_initcall(ubd_driver_init);
static int ubd_open(struct block_device *bdev, fmode_t mode)
static int ubd_release(struct gendisk *disk, fmode_t mode)
static void cowify_bitmap(__u64 io_offset, int length, unsigned long *cow_mask,
__u64 *cow_offset, unsigned long *bitmap,
__u64 bitmap_offset, unsigned long *bitmap_words,
__u64 bitmap_len)
static void cowify_req(struct io_thread_req *req, unsigned long *bitmap,
__u64 bitmap_offset, __u64 bitmap_len)
static void prepare_request(struct request *req, struct io_thread_req *io_req,
unsigned long long offset, int page_offset,
int len, struct page *page)
static void do_ubd_request(struct request_queue *q)
static int ubd_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static int ubd_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static int update_bitmap(struct io_thread_req *req)
static void do_io(struct io_thread_req *req)
int kernel_fd = -1;
static int io_count = 0;
int io_thread(void *arg)
