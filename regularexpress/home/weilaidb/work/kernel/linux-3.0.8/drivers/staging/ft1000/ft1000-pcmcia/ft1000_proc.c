#define FT1000_PROC "ft1000"
#define MAX_FILE_LEN 255
#define PUTM_TO_PAGE(len,page,args...) \
len += snprintf(page+len, PAGE_SIZE - len, args)
#define PUTX_TO_PAGE(len,page,message,size,var) \
len += snprintf(page+len, PAGE_SIZE - len, message); \
for(i = 0; i < (size - 1); i++) \
\
len += snprintf(page+len, PAGE_SIZE - len, "%02x\n", var[i])
#define PUTD_TO_PAGE(len,page,message,size,var) \
len += snprintf(page+len, PAGE_SIZE - len, message); \
for(i = 0; i < (size - 1); i++) \
\
len += snprintf(page+len, PAGE_SIZE - len, "%d\n", var[i])
int ft1000ReadProc(char *page, char **start, off_t off,
int count, int *eof, void *data)
static int ft1000NotifyProc(struct notifier_block *this, unsigned long event,
void *ptr)
static struct notifier_block ft1000_netdev_notifier = ;
void ft1000InitProc(struct net_device *dev)
void ft1000CleanupProc(struct net_device *dev)
