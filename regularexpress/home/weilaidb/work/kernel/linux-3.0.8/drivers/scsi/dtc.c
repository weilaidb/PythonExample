#define AUTOSENSE
#define PSEUDO_DMA
#define DONT_USE_INTR
#define UNSAFE
#define xNDEBUG (NDEBUG_INTR+NDEBUG_RESELECTION+\
NDEBUG_SELECTION+NDEBUG_ARBITRATION)
#define DMA_WORKS_RIGHT
#define AUTOPROBE_IRQ
#define DTC_PUBLIC_RELEASE 2
#define DTC_CONTROL_REG		0x100
#define D_CR_ACCESS		0x80
#define CSR_DIR_READ		0x40
#define CSR_RESET              0x80
#define CSR_5380_REG           0x80
#define CSR_TRANS_DIR          0x40
#define CSR_SCSI_BUFF_INTR     0x20
#define CSR_5380_INTR          0x10
#define CSR_SHARED_INTR        0x08
#define CSR_HOST_BUF_NOT_RDY   0x04
#define CSR_SCSI_BUF_RDY       0x02
#define CSR_GATED_5380_IRQ     0x01
#define CSR_INT_BASE (CSR_SCSI_BUFF_INTR | CSR_5380_INTR)
#define DTC_BLK_CNT		0x101
#define D_CR_ACCESS             0x80
#define DTC_SWITCH_REG		0x3982
#define DTC_RESUME_XFER		0x3982
#define DTC_5380_OFFSET		0x3880
#define DTC_DATA_BUF		0x3900
static struct override  overrides
[] __initdata = OVERRIDE;
[4] __initdata = ;
#define NO_OVERRIDES ARRAY_SIZE(overrides)
static struct base  bases[] __initdata = ;
#define NO_BASES ARRAY_SIZE(bases)
static const struct signature  signatures[] = ;
#define NO_SIGNATURES ARRAY_SIZE(signatures)
static void __init dtc_setup(char *str, int *ints)
static int __init dtc_detect(struct scsi_host_template * tpnt)
static int dtc_biosparam(struct scsi_device *sdev, struct block_device *dev,
sector_t capacity, int *ip)
static int dtc_maxi = 0;
static int dtc_wmaxi = 0;
static inline int NCR5380_pread(struct Scsi_Host *instance, unsigned char *dst, int len)
static inline int NCR5380_pwrite(struct Scsi_Host *instance, unsigned char *src, int len)
MODULE_LICENSE("GPL");
static int dtc_release(struct Scsi_Host *shost)
static struct scsi_host_template driver_template = ;
