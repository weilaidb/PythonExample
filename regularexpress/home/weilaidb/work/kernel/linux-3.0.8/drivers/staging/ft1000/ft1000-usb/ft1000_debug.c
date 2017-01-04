static int ft1000_flarion_cnt = 0;
static int ft1000_open (struct inode *inode, struct file *file);
static unsigned int ft1000_poll_dev(struct file *file, poll_table *wait);
static long ft1000_ioctl(struct file *file, unsigned int command,
unsigned long argument);
static int ft1000_release (struct inode *inode, struct file *file);
struct list_head freercvpool;
spinlock_t free_buff_lock;
int numofmsgbuf = 0;
static struct file_operations ft1000fops =
;
struct dpram_blk *ft1000_get_buffer(struct list_head *bufflist)
void ft1000_free_buffer(struct dpram_blk *pdpram_blk, struct list_head *plist)
int ft1000_create_dev(struct ft1000_device *dev)
void ft1000_destroy_dev(struct net_device *dev)
static int ft1000_open (struct inode *inode, struct file *file)
static unsigned int ft1000_poll_dev(struct file *file, poll_table *wait)
static long ft1000_ioctl (struct file *file, unsigned int command,
unsigned long argument)
static int ft1000_release (struct inode *inode, struct file *file)
