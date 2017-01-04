#define MAX_TARGETS	16
#define MAX_LUNS	8
#define DEFAULT_LOOP_COUNT	10000
static struct qlogicpti *qptichain = NULL;
static DEFINE_SPINLOCK(qptichain_lock);
#define PACKB(a, b)			(((a)<<4)|(b))
static const u_char mbox_param[] = ;
#define MAX_MBOX_COMMAND	ARRAY_SIZE(mbox_param)
#define QUEUE_DEPTH(in, out, ql)	((in - out) & (ql))
#define REQ_QUEUE_DEPTH(in, out)	QUEUE_DEPTH(in, out, 		     \
QLOGICPTI_REQ_QUEUE_LEN)
#define RES_QUEUE_DEPTH(in, out)	QUEUE_DEPTH(in, out, RES_QUEUE_LEN)
static inline void qlogicpti_enable_irqs(struct qlogicpti *qpti)
static inline void qlogicpti_disable_irqs(struct qlogicpti *qpti)
static inline void set_sbus_cfg1(struct qlogicpti *qpti)
static int qlogicpti_mbox_command(struct qlogicpti *qpti, u_short param[], int force)
static inline void qlogicpti_set_hostdev_defaults(struct qlogicpti *qpti)
static int qlogicpti_reset_hardware(struct Scsi_Host *host)
#define PTI_RESET_LIMIT 400
static int __devinit qlogicpti_load_firmware(struct qlogicpti *qpti)
static int qlogicpti_verify_tmon(struct qlogicpti *qpti)
static irqreturn_t qpti_intr(int irq, void *dev_id);
static void __devinit qpti_chain_add(struct qlogicpti *qpti)
static void __devexit qpti_chain_del(struct qlogicpti *qpti)
static int __devinit qpti_map_regs(struct qlogicpti *qpti)
static int __devinit qpti_register_irq(struct qlogicpti *qpti)
static void __devinit qpti_get_scsi_id(struct qlogicpti *qpti)
static void qpti_get_bursts(struct qlogicpti *qpti)
static void qpti_get_clock(struct qlogicpti *qpti)
static int __devinit qpti_map_queues(struct qlogicpti *qpti)
const char *qlogicpti_info(struct Scsi_Host *host)
static inline void marker_frob(struct Command_Entry *cmd)
static inline void cmd_frob(struct Command_Entry *cmd, struct scsi_cmnd *Cmnd,
struct qlogicpti *qpti)
static inline int load_cmd(struct scsi_cmnd *Cmnd, struct Command_Entry *cmd,
struct qlogicpti *qpti, u_int in_ptr, u_int out_ptr)
static inline void update_can_queue(struct Scsi_Host *host, u_int in_ptr, u_int out_ptr)
static int qlogicpti_slave_configure(struct scsi_device *sdev)
static int qlogicpti_queuecommand_lck(struct scsi_cmnd *Cmnd, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(qlogicpti_queuecommand)
static int qlogicpti_return_status(struct Status_Entry *sts, int id)
static struct scsi_cmnd *qlogicpti_intr_handler(struct qlogicpti *qpti)
static irqreturn_t qpti_intr(int irq, void *dev_id)
static int qlogicpti_abort(struct scsi_cmnd *Cmnd)
static int qlogicpti_reset(struct scsi_cmnd *Cmnd)
static struct scsi_host_template qpti_template = ;
static const struct of_device_id qpti_match[];
static int __devinit qpti_sbus_probe(struct platform_device *op)
static int __devexit qpti_sbus_remove(struct platform_device *op)
static const struct of_device_id qpti_match[] = ;
MODULE_DEVICE_TABLE(of, qpti_match);
static struct platform_driver qpti_sbus_driver = ;
static int __init qpti_init(void)
static void __exit qpti_exit(void)
MODULE_DESCRIPTION("QlogicISP SBUS driver");
MODULE_AUTHOR("David S. Miller (davem@davemloft.net)");
MODULE_LICENSE("GPL");
MODULE_VERSION("2.1");
MODULE_FIRMWARE("qlogic/isp1000.bin");
module_init(qpti_init);
module_exit(qpti_exit);
