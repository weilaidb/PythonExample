#define BUFFER_SIZE_DEFAULT		131072
#define CPU_BUFFER_SIZE_DEFAULT		8192
#define BUFFER_WATERSHED_DEFAULT	32768
#define TIME_SLICE_DEFAULT		1
unsigned long oprofile_buffer_size;
unsigned long oprofile_cpu_buffer_size;
unsigned long oprofile_buffer_watershed;
unsigned long oprofile_time_slice;
static ssize_t timeout_read(struct file *file, char __user *buf,
size_t count, loff_t *offset)
static ssize_t timeout_write(struct file *file, char const __user *buf,
size_t count, loff_t *offset)
static const struct file_operations timeout_fops = ;
static ssize_t depth_read(struct file *file, char __user *buf, size_t count, loff_t *offset)
static ssize_t depth_write(struct file *file, char const __user *buf, size_t count, loff_t *offset)
static const struct file_operations depth_fops = ;
static ssize_t pointer_size_read(struct file *file, char __user *buf, size_t count, loff_t *offset)
static const struct file_operations pointer_size_fops = ;
static ssize_t cpu_type_read(struct file *file, char __user *buf, size_t count, loff_t *offset)
static const struct file_operations cpu_type_fops = ;
static ssize_t enable_read(struct file *file, char __user *buf, size_t count, loff_t *offset)
static ssize_t enable_write(struct file *file, char const __user *buf, size_t count, loff_t *offset)
static const struct file_operations enable_fops = ;
static ssize_t dump_write(struct file *file, char const __user *buf, size_t count, loff_t *offset)
static const struct file_operations dump_fops = ;
void oprofile_create_files(struct super_block *sb, struct dentry *root)
