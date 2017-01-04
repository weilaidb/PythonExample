static char *main_revision = "$Revision: 1.24 $";
static char *DRIVERNAME =
"Eicon DIVA - CAPI Interface driver (http:
static char *DRIVERLNAME = "divacapi";
MODULE_DESCRIPTION("CAPI driver for Eicon DIVA cards");
MODULE_AUTHOR("Cytronics & Melware, Eicon Networks");
MODULE_SUPPORTED_DEVICE("CAPI and DIVA card drivers");
MODULE_LICENSE("GPL");
static char *getrev(const char *revision)
diva_os_message_buffer_s *diva_os_alloc_message_buffer(unsigned long size,
void **data_buf)
void diva_os_free_message_buffer(diva_os_message_buffer_s * dmb)
static int diva_ctl_proc_show(struct seq_file *m, void *v)
static int diva_ctl_proc_open(struct inode *inode, struct file *file)
static const struct file_operations diva_ctl_proc_fops = ;
void diva_os_set_controller_struct(struct capi_ctr *ctrl)
static int DIVA_INIT_FUNCTION divacapi_init(void)
static void DIVA_EXIT_FUNCTION divacapi_exit(void)
module_init(divacapi_init);
module_exit(divacapi_exit);
