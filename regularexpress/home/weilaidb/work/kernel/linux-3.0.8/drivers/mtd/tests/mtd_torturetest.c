#define PRINT_PREF KERN_INFO "mtd_torturetest: "
#define RETRIES 3
static int eb = 8;
module_param(eb, int, S_IRUGO);
MODULE_PARM_DESC(eb, "eraseblock number within the selected MTD device");
static int ebcnt = 32;
module_param(ebcnt, int, S_IRUGO);
MODULE_PARM_DESC(ebcnt, "number of consecutive eraseblocks to torture");
static int pgcnt;
module_param(pgcnt, int, S_IRUGO);
MODULE_PARM_DESC(pgcnt, "number of pages per eraseblock to torture (0 => all)");
static int dev;
module_param(dev, int, S_IRUGO);
MODULE_PARM_DESC(dev, "MTD device number to use");
static int gran = 512;
module_param(gran, int, S_IRUGO);
MODULE_PARM_DESC(gran, "how often the status information should be printed");
static int check = 1;
module_param(check, int, S_IRUGO);
MODULE_PARM_DESC(check, "if the written data should be checked");
static unsigned int cycles_count;
module_param(cycles_count, uint, S_IRUGO);
MODULE_PARM_DESC(cycles_count, "how many erase cycles to do "
"(infinite by default)");
static struct mtd_info *mtd;
static unsigned char *patt_5A5;
static unsigned char *patt_A5A;
static unsigned char *patt_FF;
static unsigned char *check_buf;
static unsigned int erase_cycles;
static int pgsize;
static struct timeval start, finish;
static void report_corrupt(unsigned char *read, unsigned char *written);
static inline void start_timing(void)
static inline void stop_timing(void)
static inline int erase_eraseblock(int ebnum)
static inline int check_eraseblock(int ebnum, unsigned char *buf)
static inline int write_pattern(int ebnum, void *buf)
static int __init tort_init(void)
module_init(tort_init);
static void __exit tort_exit(void)
module_exit(tort_exit);
static int countdiffs(unsigned char *buf, unsigned char *check_buf,
unsigned offset, unsigned len, unsigned *bytesp,
unsigned *bitsp);
static void print_bufs(unsigned char *read, unsigned char *written, int start,
int len);
static void report_corrupt(unsigned char *read, unsigned char *written)
static void print_bufs(unsigned char *read, unsigned char *written, int start,
int len)
static int countdiffs(unsigned char *buf, unsigned char *check_buf,
unsigned offset, unsigned len, unsigned *bytesp,
unsigned *bitsp)
MODULE_DESCRIPTION("Eraseblock torturing module");
MODULE_AUTHOR("Artem Bityutskiy, Jarkko Lavinen, Adrian Hunter");
MODULE_LICENSE("GPL");
