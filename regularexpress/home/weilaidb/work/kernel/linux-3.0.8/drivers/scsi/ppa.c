static void ppa_reset_pulse(unsigned int base);
typedef struct  ppa_struct;
static inline ppa_struct *ppa_dev(struct Scsi_Host *host)
static DEFINE_SPINLOCK(arbitration_lock);
static void got_it(ppa_struct *dev)
static void ppa_wakeup(void *ref)
static int ppa_pb_claim(ppa_struct *dev)
static void ppa_pb_dismiss(ppa_struct *dev)
static inline void ppa_pb_release(ppa_struct *dev)
static inline int ppa_proc_write(ppa_struct *dev, char *buffer, int length)
static int ppa_proc_info(struct Scsi_Host *host, char *buffer, char **start, off_t offset, int length, int inout)
static int device_check(ppa_struct *dev);
#if PPA_DEBUG > 0
#define ppa_fail(x,y) printk("ppa: ppa_fail(%i) from %s at line %d\n",\
y, __func__, __LINE__); ppa_fail_func(x,y);
static inline void ppa_fail_func(ppa_struct *dev, int error_code)
static inline void ppa_fail(ppa_struct *dev, int error_code)
static unsigned char ppa_wait(ppa_struct *dev)
static inline void epp_reset(unsigned short ppb)
static inline void ecp_sync(ppa_struct *dev)
static int ppa_byte_out(unsigned short base, const char *buffer, int len)
static int ppa_byte_in(unsigned short base, char *buffer, int len)
static int ppa_nibble_in(unsigned short base, char *buffer, int len)
static int ppa_out(ppa_struct *dev, char *buffer, int len)
static int ppa_in(ppa_struct *dev, char *buffer, int len)
static inline void ppa_d_pulse(unsigned short ppb, unsigned char b)
static void ppa_disconnect(ppa_struct *dev)
static inline void ppa_c_pulse(unsigned short ppb, unsigned char b)
static inline void ppa_connect(ppa_struct *dev, int flag)
static int ppa_select(ppa_struct *dev, int target)
static int ppa_init(ppa_struct *dev)
static inline int ppa_send_command(struct scsi_cmnd *cmd)
static int ppa_completion(struct scsi_cmnd *cmd)
static void ppa_interrupt(struct work_struct *work)
static int ppa_engine(ppa_struct *dev, struct scsi_cmnd *cmd)
static int ppa_queuecommand_lck(struct scsi_cmnd *cmd,
void (*done) (struct scsi_cmnd *))
static DEF_SCSI_QCMD(ppa_queuecommand)
static int ppa_biosparam(struct scsi_device *sdev, struct block_device *dev,
sector_t capacity, int ip[])
static int ppa_abort(struct scsi_cmnd *cmd)
static void ppa_reset_pulse(unsigned int base)
static int ppa_reset(struct scsi_cmnd *cmd)
static int device_check(ppa_struct *dev)
static int ppa_adjust_queue(struct scsi_device *device)
static struct scsi_host_template ppa_template = ;
static LIST_HEAD(ppa_hosts);
static int __ppa_attach(struct parport *pb)
static void ppa_attach(struct parport *pb)
static void ppa_detach(struct parport *pb)
static struct parport_driver ppa_driver = ;
static int __init ppa_driver_init(void)
static void __exit ppa_driver_exit(void)
module_init(ppa_driver_init);
module_exit(ppa_driver_exit);
MODULE_LICENSE("GPL");
