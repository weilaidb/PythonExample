#define FT1000_PROC_DIR "ft1000"
#define PUTM_TO_PAGE(len,page,args...) \
len += snprintf(page+len, PAGE_SIZE - len, args)
#define PUTX_TO_PAGE(len,page,message,size,var) \
len += snprintf(page+len, PAGE_SIZE - len, message); \
for (i = 0; i < (size - 1); i++)  \
len += snprintf(page+len, PAGE_SIZE - len, "%02x\n", var[i])
#define PUTD_TO_PAGE(len,page,message,size,var) \
len += snprintf(page+len, PAGE_SIZE - len, message); \
for (i = 0; i < (size - 1); i++)  \
len += snprintf(page+len, PAGE_SIZE - len, "%d\n", var[i])
#define FTNET_PROC init_net.proc_net
int ft1000_read_dpram16 (struct ft1000_device *ft1000dev, u16 indx,
u8 *buffer, u8 highlow);
static int
ft1000ReadProc(char *page, char **start, off_t off, int count, int *eof,
void *data)
static int
ft1000NotifyProc(struct notifier_block *this, unsigned long event, void *ptr)
static struct notifier_block ft1000_netdev_notifier = ;
int ft1000_init_proc(struct net_device *dev)
void ft1000_cleanup_proc(struct ft1000_info *info)
