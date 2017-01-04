#define IMM_PROBE_SPP   0x0001
#define IMM_PROBE_PS2   0x0002
#define IMM_PROBE_ECR   0x0010
#define IMM_PROBE_EPP17 0x0100
#define IMM_PROBE_EPP19 0x0200
typedef struct  imm_struct;
static void imm_reset_pulse(unsigned int base);
static int device_check(imm_struct *dev);
static inline imm_struct *imm_dev(struct Scsi_Host *host)
static DEFINE_SPINLOCK(arbitration_lock);
static void got_it(imm_struct *dev)
static void imm_wakeup(void *ref)
static int imm_pb_claim(imm_struct *dev)
static void imm_pb_dismiss(imm_struct *dev)
static inline void imm_pb_release(imm_struct *dev)
static inline int imm_proc_write(imm_struct *dev, char *buffer, int length)
static int imm_proc_info(struct Scsi_Host *host, char *buffer, char **start,
off_t offset, int length, int inout)
#if IMM_DEBUG > 0
#define imm_fail(x,y) printk("imm: imm_fail(%i) from %s at line %d\n",\
y, __func__, __LINE__); imm_fail_func(x,y);
static inline void
imm_fail_func(imm_struct *dev, int error_code)
static inline void
imm_fail(imm_struct *dev, int error_code)
static unsigned char imm_wait(imm_struct *dev)
static int imm_negotiate(imm_struct * tmp)
static inline void epp_reset(unsigned short ppb)
static inline void ecp_sync(imm_struct *dev)
static int imm_byte_out(unsigned short base, const char *buffer, int len)
static int imm_nibble_in(unsigned short base, char *buffer, int len)
static int imm_byte_in(unsigned short base, char *buffer, int len)
static int imm_out(imm_struct *dev, char *buffer, int len)
static int imm_in(imm_struct *dev, char *buffer, int len)
static int imm_cpp(unsigned short ppb, unsigned char b)
static inline int imm_connect(imm_struct *dev, int flag)
static void imm_disconnect(imm_struct *dev)
static int imm_select(imm_struct *dev, int target)
static int imm_init(imm_struct *dev)
static inline int imm_send_command(struct scsi_cmnd *cmd)
static int imm_completion(struct scsi_cmnd *cmd)
static void imm_interrupt(struct work_struct *work)
static int imm_engine(imm_struct *dev, struct scsi_cmnd *cmd)
static int imm_queuecommand_lck(struct scsi_cmnd *cmd,
void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(imm_queuecommand)
static int imm_biosparam(struct scsi_device *sdev, struct block_device *dev,
sector_t capacity, int ip[])
static int imm_abort(struct scsi_cmnd *cmd)
static void imm_reset_pulse(unsigned int base)
static int imm_reset(struct scsi_cmnd *cmd)
static int device_check(imm_struct *dev)
static int imm_adjust_queue(struct scsi_device *device)
static struct scsi_host_template imm_template = ;
static LIST_HEAD(imm_hosts);
static int __imm_attach(struct parport *pb)
static void imm_attach(struct parport *pb)
static void imm_detach(struct parport *pb)
static struct parport_driver imm_driver = ;
static int __init imm_driver_init(void)
static void __exit imm_driver_exit(void)
module_init(imm_driver_init);
module_exit(imm_driver_exit);
MODULE_LICENSE("GPL");
