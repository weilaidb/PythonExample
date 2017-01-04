#define SAMPLE_BUFFER_SIZE 8192
static char *sample_buffer;
static char *sample_buffer_pos;
static int prof_running = 0;
void cris_profile_sample(struct pt_regs *regs)
static ssize_t
read_cris_profile(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t
write_cris_profile(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations cris_proc_profile_operations = ;
static int __init init_cris_profile(void)
__initcall(init_cris_profile);
