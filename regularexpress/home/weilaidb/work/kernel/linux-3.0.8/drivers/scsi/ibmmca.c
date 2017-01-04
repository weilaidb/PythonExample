static int ibmmca_queuecommand (struct Scsi_Host *, struct scsi_cmnd *);
static int ibmmca_abort (Scsi_Cmnd *);
static int ibmmca_host_reset (Scsi_Cmnd *);
static int ibmmca_biosparam (struct scsi_device *, struct block_device *, sector_t, int *);
static int ibmmca_proc_info(struct Scsi_Host *shpnt, char *buffer, char **start, off_t offset, int length, int inout);
#define IBMMCA_SCSI_DRIVER_VERSION "4.0b-ac"
#define IM_MAX_HOSTS     8
#define IM_RESET_DELAY	60
#undef	IM_DEBUG_TIMEOUT
#define TIMEOUT_PUN	0
#define TIMEOUT_LUN	0
#undef IM_DEBUG_INT
#undef IM_DEBUG_CMD
#undef IM_DEBUG_CMD_SPEC_DEV
#undef IM_DEBUG_PROBE
#define IM_DEBUG_CMD_DEVICE	TYPE_TAPE
#define IM_CMD_REG(h)	((h)->io_port)
#define IM_ATTN_REG(h)	((h)->io_port+4)
#define IM_CTR_REG(h)	((h)->io_port+5)
#define IM_INTR_REG(h)	((h)->io_port+6)
#define IM_STAT_REG(h)	((h)->io_port+7)
#define IM_IO_PORT	0x3540
#define IM_N_IO_PORT	8
#define IM_IMM_CMD	0x10
#define IM_SCB		0x30
#define IM_LONG_SCB	0x40
#define IM_EOI		0xe0
#define IM_HW_RESET	0x80
#define IM_ENABLE_DMA	0x02
#define IM_ENABLE_INTR	0x01
#define IM_SCB_CMD_COMPLETED			0x10
#define IM_SCB_CMD_COMPLETED_WITH_RETRIES	0x50
#define IM_LOOP_SCATTER_BUFFER_FULL		0x60
#define IM_ADAPTER_HW_FAILURE			0x70
#define IM_IMMEDIATE_CMD_COMPLETED		0xa0
#define IM_CMD_COMPLETED_WITH_FAILURE		0xc0
#define IM_CMD_ERROR				0xe0
#define IM_SOFTWARE_SEQUENCING_ERROR		0xf0
#define IM_CMD_REG_FULL		0x08
#define IM_CMD_REG_EMPTY	0x04
#define IM_INTR_REQUEST		0x02
#define IM_BUSY			0x01
#define IM_RESET_IMM_CMD	0x0400
#define IM_FEATURE_CTR_IMM_CMD	0x040c
#define IM_DMA_PACING_IMM_CMD	0x040d
#define IM_ASSIGN_IMM_CMD	0x040e
#define IM_ABORT_IMM_CMD	0x040f
#define IM_FORMAT_PREP_IMM_CMD	0x0417
struct im_scb ;
struct im_sge ;
struct im_pos_info ;
#define IM_NO_SYNCHRONOUS      0x0040
#define IM_NO_DISCONNECT       0x0080
#define IM_READ_DATA_CMD       0x1c01
#define IM_WRITE_DATA_CMD      0x1c02
#define IM_READ_VERIFY_CMD     0x1c03
#define IM_WRITE_VERIFY_CMD    0x1c04
#define IM_REQUEST_SENSE_CMD   0x1c08
#define IM_READ_CAPACITY_CMD   0x1c09
#define IM_DEVICE_INQUIRY_CMD  0x1c0b
#define IM_READ_LOGICAL_CMD    0x1c2a
#define IM_OTHER_SCSI_CMD_CMD  0x241f
#define IM_GET_COMMAND_COMPLETE_STATUS_CMD   0x1c07
#define IM_GET_POS_INFO_CMD                  0x1c0a
#define IM_READ_PREFETCH_CMD                 0x1c31
#define IM_FOMAT_UNIT_CMD                    0x1c16
#define IM_REASSIGN_BLOCK_CMD                0x1c18
#define IM_READ_CONTROL              0x8000
#define IM_REPORT_TSB_ONLY_ON_ERROR  0x4000
#define IM_RETRY_ENABLE              0x2000
#define IM_POINTER_TO_LIST           0x1000
#define IM_SUPRESS_EXCEPTION_SHORT   0x0400
#define IM_BYPASS_BUFFER             0x0200
#define IM_CHAIN_ON_NO_ERROR         0x0001
struct im_tsb ;
#define IM_IRQ     14
#define IM_IRQ_FW  11
#define MOD95_LED_PORT	   0x108
#define PS2_SYS_CTR        0x92
#define LED_DISP           1
#define LED_ADISP          2
#define LED_ACTIVITY       4
#define CMD_FAIL           255
static int display_mode = 0;
static unsigned int adapter_timeout = 45;
static unsigned int global_command_error_excuse = 0;
static int global_adapter_speed = 0;
#define PS2_DISK_LED_ON(ad,id)
#define PS2_DISK_LED_OFF()
#define IBM_SCSI2_FW     0
#define IBM_7568_WCACHE  1
#define IBM_EXP_UNIT     2
#define IBM_SCSI_WCACHE  3
#define IBM_SCSI         4
#define IBM_INTEGSCSI	 5
#define FORCED_DETECTION         100
#define INTEGRATED_SCSI          101
static short ibmmca_id_table[] = ;
static const char *ibmmca_description[] = ;
#define MAX_LOG_DEV  15
struct logical_device ;
struct Driver_Statistics ;
struct ibmmca_hostdata ;
#define subsystem_pun(h) ((h)->this_id)
#define subsystem_maxid(h) ((h)->max_id)
#define ld(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_ld)
#define get_ldn(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_get_ldn)
#define get_scsi(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_get_scsi)
#define local_checking_phase_flag(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_local_checking_phase_flag)
#define got_interrupt(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_got_interrupt)
#define stat_result(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_stat_result)
#define reset_status(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_reset_status)
#define last_scsi_command(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_last_scsi_command)
#define last_scsi_type(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_last_scsi_type)
#define last_scsi_blockcount(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_last_scsi_blockcount)
#define last_scsi_logical_block(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_last_scsi_logical_block)
#define last_scsi_type(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_last_scsi_type)
#define next_ldn(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_next_ldn)
#define IBM_DS(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_IBM_DS)
#define special(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_special)
#define subsystem_connector_size(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_connector_size)
#define adapter_speed(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_adapter_speed)
#define pos2(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_pos[2])
#define pos3(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_pos[3])
#define pos4(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_pos[4])
#define pos5(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_pos[5])
#define pos6(h) (((struct ibmmca_hostdata *) (h)->hostdata)->_pos[6])
#define TYPE_IBM_SCSI_ADAPTER   0x2F
#define TYPE_NO_DEVICE          0xFF
#define TYPE_MEDIUM_CHANGER     0x08
#define SET_LDN        0
#define REMOVE_LDN     1
#define PROBE_LDN      0
#define IM_RESET_NOT_IN_PROGRESS         0
#define IM_RESET_IN_PROGRESS             1
#define IM_RESET_FINISHED_OK             2
#define IM_RESET_FINISHED_FAIL           3
#define IM_RESET_NOT_IN_PROGRESS_NO_INT  4
#define IM_RESET_FINISHED_OK_NO_INT      5
#define NO_SCSI                  0xffff
static int io_port[IM_MAX_HOSTS] = ;
static int scsi_id[IM_MAX_HOSTS] = ;
#if defined(MODULE)
static char *boot_options = NULL;
module_param(boot_options, charp, 0);
module_param_array(io_port, int, NULL, 0);
module_param_array(scsi_id, int, NULL, 0);
MODULE_LICENSE("GPL");
static int disk_rw_in_progress = 0;
static unsigned int pos[8];
static char ibm_ansi_order = 1;
static char ibm_ansi_order = 0;
static void issue_cmd(struct Scsi_Host *, unsigned long, unsigned char);
static void internal_done(Scsi_Cmnd * cmd);
static void check_devices(struct Scsi_Host *, int);
static int immediate_assign(struct Scsi_Host *, unsigned int, unsigned int, unsigned int, unsigned int);
static int immediate_feature(struct Scsi_Host *, unsigned int, unsigned int);
static int immediate_reset(struct Scsi_Host *, unsigned int);
static int device_inquiry(struct Scsi_Host *, int);
static int read_capacity(struct Scsi_Host *, int);
static int get_pos_info(struct Scsi_Host *);
static char *ti_p(int);
static char *ti_l(int);
static char *ibmrate(unsigned int, int);
static int probe_display(int);
static int probe_bus_mode(struct Scsi_Host *);
static int device_exists(struct Scsi_Host *, int, int *, int *);
static int option_setup(char *);
static int ldn_access_load(struct Scsi_Host *, int);
static int ldn_access_total_read_write(struct Scsi_Host *);
static irqreturn_t interrupt_handler(int irq, void *dev_id)
static void issue_cmd(struct Scsi_Host *shpnt, unsigned long cmd_reg,
unsigned char attn_reg)
static void internal_done(Scsi_Cmnd * cmd)
static int device_inquiry(struct Scsi_Host *shpnt, int ldn)
static int read_capacity(struct Scsi_Host *shpnt, int ldn)
static int get_pos_info(struct Scsi_Host *shpnt)
static int immediate_assign(struct Scsi_Host *shpnt, unsigned int pun,
unsigned int lun, unsigned int ldn,
unsigned int operation)
static int immediate_feature(struct Scsi_Host *shpnt, unsigned int speed, unsigned int timeout)
static int immediate_reset(struct Scsi_Host *shpnt, unsigned int ldn)
static char *ti_p(int dev)
static char *ti_l(int val)
static char *ibmrate(unsigned int speed, int i)
static int probe_display(int what)
static int probe_bus_mode(struct Scsi_Host *shpnt)
static void check_devices(struct Scsi_Host *shpnt, int adaptertype)
static int device_exists(struct Scsi_Host *shpnt, int ldn, int *block_length, int *device_type)
static void internal_ibmmca_scsi_setup(char *str, int *ints)
static struct scsi_host_template ibmmca_driver_template = ;
static int ibmmca_probe(struct device *dev)
static int __devexit ibmmca_remove(struct device *dev)
static int ibmmca_queuecommand_lck(Scsi_Cmnd * cmd, void (*done) (Scsi_Cmnd *))
static DEF_SCSI_QCMD(ibmmca_queuecommand)
static int __ibmmca_abort(Scsi_Cmnd * cmd)
static int ibmmca_abort(Scsi_Cmnd * cmd)
static int __ibmmca_host_reset(Scsi_Cmnd * cmd)
static int ibmmca_host_reset(Scsi_Cmnd * cmd)
static int ibmmca_biosparam(struct scsi_device *sdev, struct block_device *bdev, sector_t capacity, int *info)
static int ldn_access_load(struct Scsi_Host *shpnt, int ldn)
static int ldn_access_total_read_write(struct Scsi_Host *shpnt)
static int ldn_access_total_inquiry(struct Scsi_Host *shpnt)
static int ldn_access_total_modeselect(struct Scsi_Host *shpnt)
static int ibmmca_proc_info(struct Scsi_Host *shpnt, char *buffer, char **start, off_t offset, int length, int inout)
static int option_setup(char *str)
__setup("ibmmcascsi=", option_setup);
static struct mca_driver ibmmca_driver = ;
static int __init ibmmca_init(void)
static void __exit ibmmca_exit(void)
module_init(ibmmca_init);
module_exit(ibmmca_exit);
