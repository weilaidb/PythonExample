#define NCR_700_VERSION "2.8"
#define to32bit(x)	((__u32)((unsigned long)(x)))
#define STATIC
#define STATIC static
MODULE_AUTHOR("James Bottomley");
MODULE_DESCRIPTION("53c700 and 53c700-66 Driver");
MODULE_LICENSE("GPL");
STATIC int NCR_700_queuecommand(struct Scsi_Host *h, struct scsi_cmnd *);
STATIC int NCR_700_abort(struct scsi_cmnd * SCpnt);
STATIC int NCR_700_bus_reset(struct scsi_cmnd * SCpnt);
STATIC int NCR_700_host_reset(struct scsi_cmnd * SCpnt);
STATIC void NCR_700_chip_setup(struct Scsi_Host *host);
STATIC void NCR_700_chip_reset(struct Scsi_Host *host);
STATIC int NCR_700_slave_alloc(struct scsi_device *SDpnt);
STATIC int NCR_700_slave_configure(struct scsi_device *SDpnt);
STATIC void NCR_700_slave_destroy(struct scsi_device *SDpnt);
static int NCR_700_change_queue_depth(struct scsi_device *SDpnt, int depth, int reason);
static int NCR_700_change_queue_type(struct scsi_device *SDpnt, int depth);
STATIC struct device_attribute *NCR_700_dev_attrs[];
STATIC struct scsi_transport_template *NCR_700_transport_template = NULL;
static char *NCR_700_phase[] = ;
static char *NCR_700_condition[] = ;
static char *NCR_700_fatal_messages[] = ;
static char *NCR_700_SBCL_bits[] = ;
static char *NCR_700_SBCL_to_phase[] = ;
static inline __u8
NCR_700_offset_period_to_sxfer(struct NCR_700_Host_Parameters *hostdata,
__u8 offset, __u8 period)
static inline __u8
NCR_700_get_SXFER(struct scsi_device *SDp)
struct Scsi_Host *
NCR_700_detect(struct scsi_host_template *tpnt,
struct NCR_700_Host_Parameters *hostdata, struct device *dev)
int
NCR_700_release(struct Scsi_Host *host)
static inline __u8
NCR_700_identify(int can_disconnect, __u8 lun)
static inline int
NCR_700_data_residual (struct Scsi_Host *host)
static inline char *
sbcl_to_string(__u8 sbcl)
static inline __u8
bitmap_to_number(__u8 bitmap)
STATIC struct NCR_700_command_slot *
find_empty_slot(struct NCR_700_Host_Parameters *hostdata)
STATIC void
free_slot(struct NCR_700_command_slot *slot,
struct NCR_700_Host_Parameters *hostdata)
STATIC void
save_for_reselection(struct NCR_700_Host_Parameters *hostdata,
struct scsi_cmnd *SCp, __u32 dsp)
STATIC inline void
NCR_700_unmap(struct NCR_700_Host_Parameters *hostdata, struct scsi_cmnd *SCp,
struct NCR_700_command_slot *slot)
STATIC inline void
NCR_700_scsi_done(struct NCR_700_Host_Parameters *hostdata,
struct scsi_cmnd *SCp, int result)
STATIC void
NCR_700_internal_bus_reset(struct Scsi_Host *host)
STATIC void
NCR_700_chip_setup(struct Scsi_Host *host)
STATIC void
NCR_700_chip_reset(struct Scsi_Host *host)
STATIC __u32
process_extended_message(struct Scsi_Host *host,
struct NCR_700_Host_Parameters *hostdata,
struct scsi_cmnd *SCp, __u32 dsp, __u32 dsps)
STATIC __u32
process_message(struct Scsi_Host *host,	struct NCR_700_Host_Parameters *hostdata,
struct scsi_cmnd *SCp, __u32 dsp, __u32 dsps)
STATIC __u32
process_script_interrupt(__u32 dsps, __u32 dsp, struct scsi_cmnd *SCp,
struct Scsi_Host *host,
struct NCR_700_Host_Parameters *hostdata)
STATIC inline __u32
process_selection(struct Scsi_Host *host, __u32 dsp)
static inline void
NCR_700_clear_fifo(struct Scsi_Host *host)
static inline void
NCR_700_flush_fifo(struct Scsi_Host *host)
STATIC int
NCR_700_start_command(struct scsi_cmnd *SCp)
irqreturn_t
NCR_700_intr(int irq, void *dev_id)
static int
NCR_700_queuecommand_lck(struct scsi_cmnd *SCp, void (*done)(struct scsi_cmnd *))
STATIC DEF_SCSI_QCMD(NCR_700_queuecommand)
STATIC int
NCR_700_abort(struct scsi_cmnd * SCp)
STATIC int
NCR_700_bus_reset(struct scsi_cmnd * SCp)
STATIC int
NCR_700_host_reset(struct scsi_cmnd * SCp)
STATIC void
NCR_700_set_period(struct scsi_target *STp, int period)
STATIC void
NCR_700_set_offset(struct scsi_target *STp, int offset)
STATIC int
NCR_700_slave_alloc(struct scsi_device *SDp)
STATIC int
NCR_700_slave_configure(struct scsi_device *SDp)
STATIC void
NCR_700_slave_destroy(struct scsi_device *SDp)
static int
NCR_700_change_queue_depth(struct scsi_device *SDp, int depth, int reason)
static int NCR_700_change_queue_type(struct scsi_device *SDp, int tag_type)
static ssize_t
NCR_700_show_active_tags(struct device *dev, struct device_attribute *attr, char *buf)
static struct device_attribute NCR_700_active_tags_attr = ;
STATIC struct device_attribute *NCR_700_dev_attrs[] = ;
EXPORT_SYMBOL(NCR_700_detect);
EXPORT_SYMBOL(NCR_700_release);
EXPORT_SYMBOL(NCR_700_intr);
static struct spi_function_template NCR_700_transport_functions =  ;
static int __init NCR_700_init(void)
static void __exit NCR_700_exit(void)
module_init(NCR_700_init);
module_exit(NCR_700_exit);
