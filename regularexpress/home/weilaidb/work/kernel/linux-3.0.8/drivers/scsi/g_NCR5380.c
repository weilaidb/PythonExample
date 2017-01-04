#define USLEEP
#define USLEEP_POLL	1
#define USLEEP_SLEEP	20
#define USLEEP_WAITLONG	500
#define AUTOPROBE_IRQ
#define AUTOSENSE
#define NCR53C400_PSEUDO_DMA 1
#define PSEUDO_DMA
#define NCR53C400
#define NCR5380_STATS
#undef NCR5380_STAT_LIMIT
#define NCR_NOT_SET 0
static int ncr_irq = NCR_NOT_SET;
static int ncr_dma = NCR_NOT_SET;
static int ncr_addr = NCR_NOT_SET;
static int ncr_5380 = NCR_NOT_SET;
static int ncr_53c400 = NCR_NOT_SET;
static int ncr_53c400a = NCR_NOT_SET;
static int dtc_3181e = NCR_NOT_SET;
static struct override  overrides
[] __initdata = GENERIC_NCR5380_OVERRIDE;
[1] __initdata = ;
#define NO_OVERRIDES ARRAY_SIZE(overrides)
static void __init internal_setup(int board, char *str, int *ints)
static int __init do_NCR5380_setup(char *str)
static int __init do_NCR53C400_setup(char *str)
static int __init do_NCR53C400A_setup(char *str)
static int __init do_DTC3181E_setup(char *str)
int __init generic_NCR5380_detect(struct scsi_host_template * tpnt)
const char *generic_NCR5380_info(struct Scsi_Host *host)
int generic_NCR5380_release_resources(struct Scsi_Host *instance)
static int
generic_NCR5380_biosparam(struct scsi_device *sdev, struct block_device *bdev,
sector_t capacity, int *ip)
static inline int NCR5380_pread(struct Scsi_Host *instance, unsigned char *dst, int len)
static inline int NCR5380_pwrite(struct Scsi_Host *instance, unsigned char *src, int len)
#define PRINTP(x) len += sprintf(buffer+len, x)
#define ANDP ,
static int sprint_opcode(char *buffer, int len, int opcode)
static int sprint_command(char *buffer, int len, unsigned char *command)
static int sprint_Scsi_Cmnd(char *buffer, int len, Scsi_Cmnd * cmd)
static int generic_NCR5380_proc_info(struct Scsi_Host *scsi_ptr, char *buffer, char **start, off_t offset, int length, int inout)
#undef PRINTP
#undef ANDP
static struct scsi_host_template driver_template = ;
module_param(ncr_irq, int, 0);
module_param(ncr_dma, int, 0);
module_param(ncr_addr, int, 0);
module_param(ncr_5380, int, 0);
module_param(ncr_53c400, int, 0);
module_param(ncr_53c400a, int, 0);
module_param(dtc_3181e, int, 0);
MODULE_LICENSE("GPL");
static struct isapnp_device_id id_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(isapnp, id_table);
__setup("ncr5380=", do_NCR5380_setup);
__setup("ncr53c400=", do_NCR53C400_setup);
__setup("ncr53c400a=", do_NCR53C400A_setup);
__setup("dtc3181e=", do_DTC3181E_setup);
