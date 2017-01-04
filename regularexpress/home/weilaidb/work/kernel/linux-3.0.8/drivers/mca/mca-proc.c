static int get_mca_info_helper(struct mca_device *mca_dev, char *page, int len)
static int get_mca_info(char *page, char **start, off_t off,
int count, int *eof, void *data)
static int mca_default_procfn(char* buf, struct mca_device *mca_dev)
static int get_mca_machine_info(char* page, char **start, off_t off,
int count, int *eof, void *data)
static int mca_read_proc(char *page, char **start, off_t off,
int count, int *eof, void *data)
void __init mca_do_proc_init(void)
void mca_set_adapter_procfn(int slot, MCA_ProcFn procfn, void* proc_dev)
EXPORT_SYMBOL(mca_set_adapter_procfn);
