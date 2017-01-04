#define USERHASH (16)
#define FILEHASH (997)
#define DEVHASH (1009)
#define DEVSEED (7919)
static unsigned int dev_hash_value;
static int set_magic_time(unsigned int user, unsigned int file, unsigned int device)
static unsigned int read_magic_time(void)
static unsigned int hash_string(unsigned int seed, const char *data, unsigned int mod)
void set_trace_device(struct device *dev)
EXPORT_SYMBOL(set_trace_device);
void generate_resume_trace(const void *tracedata, unsigned int user)
EXPORT_SYMBOL(generate_resume_trace);
extern char __tracedata_start, __tracedata_end;
static int show_file_hash(unsigned int value)
static int show_dev_hash(unsigned int value)
static unsigned int hash_value_early_read;
int show_trace_dev_match(char *buf, size_t size)
static int early_resume_init(void)
static int late_resume_init(void)
core_initcall(early_resume_init);
late_initcall(late_resume_init);
