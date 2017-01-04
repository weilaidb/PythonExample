#if TGT_RING_SIZE < PAGE_SIZE
#  define TGT_RING_SIZE PAGE_SIZE
#define TGT_RING_PAGES (TGT_RING_SIZE >> PAGE_SHIFT)
#define TGT_EVENT_PER_PAGE (PAGE_SIZE / sizeof(struct tgt_event))
#define TGT_MAX_EVENTS (TGT_EVENT_PER_PAGE * TGT_RING_PAGES)
struct tgt_ring ;
static struct tgt_ring tx_ring, rx_ring;
static DECLARE_WAIT_QUEUE_HEAD(tgt_poll_wait);
static inline void tgt_ring_idx_inc(struct tgt_ring *ring)
static struct tgt_event *tgt_head_event(struct tgt_ring *ring, u32 idx)
static int tgt_uspace_send_event(u32 type, struct tgt_event *p)
int scsi_tgt_uspace_send_cmd(struct scsi_cmnd *cmd, u64 itn_id,
struct scsi_lun *lun, u64 tag)
int scsi_tgt_uspace_send_status(struct scsi_cmnd *cmd, u64 itn_id, u64 tag)
int scsi_tgt_uspace_send_tsk_mgmt(int host_no, u64 itn_id, int function,
u64 tag, struct scsi_lun *scsilun, void *data)
int scsi_tgt_uspace_send_it_nexus_request(int host_no, u64 itn_id,
int function, char *initiator_id)
static int event_recv_msg(struct tgt_event *ev)
static ssize_t tgt_write(struct file *file, const char __user * buffer,
size_t count, loff_t * ppos)
static unsigned int tgt_poll(struct file * file, struct poll_table_struct *wait)
static int uspace_ring_map(struct vm_area_struct *vma, unsigned long addr,
struct tgt_ring *ring)
static int tgt_mmap(struct file *filp, struct vm_area_struct *vma)
static int tgt_open(struct inode *inode, struct file *file)
static const struct file_operations tgt_fops = ;
static struct miscdevice tgt_miscdev = ;
static void tgt_ring_exit(struct tgt_ring *ring)
static int tgt_ring_init(struct tgt_ring *ring)
void scsi_tgt_if_exit(void)
int scsi_tgt_if_init(void)
