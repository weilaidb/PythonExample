#define _LINUX_LIRC_DEV_H
#define MAX_IRCTL_DEVICES 8
#define BUFLEN            16
#define mod(n, div) ((n) % (div))
struct lirc_buffer ;
static inline void lirc_buffer_clear(struct lirc_buffer *buf)
static inline int lirc_buffer_init(struct lirc_buffer *buf,
unsigned int chunk_size,
unsigned int size)
static inline void lirc_buffer_free(struct lirc_buffer *buf)
static inline int lirc_buffer_len(struct lirc_buffer *buf)
static inline int lirc_buffer_full(struct lirc_buffer *buf)
static inline int lirc_buffer_empty(struct lirc_buffer *buf)
static inline int lirc_buffer_available(struct lirc_buffer *buf)
static inline unsigned int lirc_buffer_read(struct lirc_buffer *buf,
unsigned char *dest)
static inline unsigned int lirc_buffer_write(struct lirc_buffer *buf,
unsigned char *orig)
struct lirc_driver ;
extern int lirc_register_driver(struct lirc_driver *d);
extern int lirc_unregister_driver(int minor);
void *lirc_get_pdata(struct file *file);
int lirc_dev_fop_open(struct inode *inode, struct file *file);
int lirc_dev_fop_close(struct inode *inode, struct file *file);
unsigned int lirc_dev_fop_poll(struct file *file, poll_table *wait);
long lirc_dev_fop_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
ssize_t lirc_dev_fop_read(struct file *file, char __user *buffer, size_t length,
loff_t *ppos);
ssize_t lirc_dev_fop_write(struct file *file, const char __user *buffer,
size_t length, loff_t *ppos);
