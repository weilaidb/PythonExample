#define _PTP_PRIVATE_H_
#define PTP_MAX_TIMESTAMPS 128
#define PTP_BUF_TIMESTAMPS 30
struct timestamp_event_queue ;
struct ptp_clock ;
static inline int queue_cnt(struct timestamp_event_queue *q)
long ptp_ioctl(struct posix_clock *pc,
unsigned int cmd, unsigned long arg);
int ptp_open(struct posix_clock *pc, fmode_t fmode);
ssize_t ptp_read(struct posix_clock *pc,
uint flags, char __user *buf, size_t cnt);
uint ptp_poll(struct posix_clock *pc,
struct file *fp, poll_table *wait);
extern struct device_attribute ptp_dev_attrs[];
int ptp_cleanup_sysfs(struct ptp_clock *ptp);
int ptp_populate_sysfs(struct ptp_clock *ptp);
