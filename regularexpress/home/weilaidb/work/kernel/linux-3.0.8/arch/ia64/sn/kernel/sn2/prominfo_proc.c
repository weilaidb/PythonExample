MODULE_DESCRIPTION("PROM version reporting for /proc");
MODULE_AUTHOR("Chad Talbott");
MODULE_LICENSE("GPL");
#define FIT_ENTRY_FIT_HEADER	0x00
#define FIT_ENTRY_PAL_B		0x01
#define FIT_ENTRY_PAL_A_PROC	0x0E
#define FIT_ENTRY_PAL_A		0x0F
#define FIT_ENTRY_PAL_A_GEN	0x0F
#define FIT_ENTRY_UNUSED	0x7F
#define FIT_ENTRY_SAL_A		0x10
#define FIT_ENTRY_SAL_B		0x11
#define FIT_ENTRY_SALRUNTIME	0x12
#define FIT_ENTRY_EFI		0x1F
#define FIT_ENTRY_FPSWA		0x20
#define FIT_ENTRY_VMLINUX	0x21
#define FIT_MAJOR_SHIFT	(32 + 8)
#define FIT_MAJOR_MASK	((1 << 8) - 1)
#define FIT_MINOR_SHIFT	32
#define FIT_MINOR_MASK	((1 << 8) - 1)
#define FIT_MAJOR(q)	\
((unsigned) ((q) >> FIT_MAJOR_SHIFT) & FIT_MAJOR_MASK)
#define FIT_MINOR(q)	\
((unsigned) ((q) >> FIT_MINOR_SHIFT) & FIT_MINOR_MASK)
#define FIT_TYPE_SHIFT	(32 + 16)
#define FIT_TYPE_MASK	((1 << 7) - 1)
#define FIT_TYPE(q)	\
((unsigned) ((q) >> FIT_TYPE_SHIFT) & FIT_TYPE_MASK)
struct fit_type_map_t ;
static const struct fit_type_map_t fit_entry_types[] = ;
static const char *fit_type_name(unsigned char type)
static int
get_fit_entry(unsigned long nasid, int index, unsigned long *fentry,
char *banner, int banlen)
static int dump_fit_entry(char *page, unsigned long *fentry)
static int
dump_fit(char *page, unsigned long nasid)
static int
dump_version(char *page, unsigned long nasid)
static int
proc_calc_metrics(char *page, char **start, off_t off, int count, int *eof,
int len)
static int
read_version_entry(char *page, char **start, off_t off, int count, int *eof,
void *data)
static int
read_fit_entry(char *page, char **start, off_t off, int count, int *eof,
void *data)
int __init prominfo_init(void);
void __exit prominfo_exit(void);
module_init(prominfo_init);
module_exit(prominfo_exit);
static struct proc_dir_entry **proc_entries;
static struct proc_dir_entry *sgi_prominfo_entry;
#define NODE_NAME_LEN 11
int __init prominfo_init(void)
void __exit prominfo_exit(void)
