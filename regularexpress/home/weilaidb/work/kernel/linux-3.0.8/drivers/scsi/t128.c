#define AUTOSENSE
#define PSEUDO_DMA
#define AUTOPROBE_IRQ
static struct override  overrides
[] __initdata = T128_OVERRIDE;
[4] __initdata = ;
#define NO_OVERRIDES ARRAY_SIZE(overrides)
static struct base  bases[] __initdata = ;
#define NO_BASES ARRAY_SIZE(bases)
static struct signature  signatures[] __initdata = ;
#define NO_SIGNATURES ARRAY_SIZE(signatures)
void __init t128_setup(char *str, int *ints)
int __init t128_detect(struct scsi_host_template * tpnt)
static int t128_release(struct Scsi_Host *shost)
int t128_biosparam(struct scsi_device *sdev, struct block_device *bdev,
sector_t capacity, int * ip)
static inline int NCR5380_pread (struct Scsi_Host *instance, unsigned char *dst,
int len)
if (readb(base + T_STATUS_REG_OFFSET) & T_ST_TIM)  else
return 0;
}
static inline int NCR5380_pwrite (struct Scsi_Host *instance, unsigned char *src,
int len)
if (readb(base + T_STATUS_REG_OFFSET) & T_ST_TIM)  else
return 0;
}
MODULE_LICENSE("GPL");
static struct scsi_host_template driver_template = ;
