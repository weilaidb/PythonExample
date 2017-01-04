static char *main_revision = "$Revision: 1.13.6.4 $";
static char *DRIVERNAME =
"Eicon DIVA - DIDD table (http:
static char *DRIVERLNAME = "divadidd";
char *DRIVERRELEASE_DIDD = "2.0";
MODULE_DESCRIPTION("DIDD table driver for diva drivers");
MODULE_AUTHOR("Cytronics & Melware, Eicon Networks");
MODULE_SUPPORTED_DEVICE("Eicon diva drivers");
MODULE_LICENSE("GPL");
#define DBG_MINIMUM  (DL_LOG + DL_FTL + DL_ERR)
#define DBG_DEFAULT  (DBG_MINIMUM + DL_XLOG + DL_REG)
extern int diddfunc_init(void);
extern void diddfunc_finit(void);
extern void DIVA_DIDD_Read(void *, int);
static struct proc_dir_entry *proc_didd;
struct proc_dir_entry *proc_net_eicon = NULL;
EXPORT_SYMBOL(DIVA_DIDD_Read);
EXPORT_SYMBOL(proc_net_eicon);
static char *getrev(const char *revision)
static int divadidd_proc_show(struct seq_file *m, void *v)
static int divadidd_proc_open(struct inode *inode, struct file *file)
static const struct file_operations divadidd_proc_fops = ;
static int DIVA_INIT_FUNCTION create_proc(void)
static void remove_proc(void)
static int DIVA_INIT_FUNCTION divadidd_init(void)
static void DIVA_EXIT_FUNCTION divadidd_exit(void)
module_init(divadidd_init);
module_exit(divadidd_exit);
