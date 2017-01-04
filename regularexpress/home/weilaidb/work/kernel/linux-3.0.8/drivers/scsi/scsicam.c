static int setsize(unsigned long capacity, unsigned int *cyls, unsigned int *hds,
unsigned int *secs);
unsigned char *scsi_bios_ptable(struct block_device *dev)
EXPORT_SYMBOL(scsi_bios_ptable);
int scsicam_bios_param(struct block_device *bdev, sector_t capacity, int *ip)
EXPORT_SYMBOL(scsicam_bios_param);
int scsi_partsize(unsigned char *buf, unsigned long capacity,
unsigned int *cyls, unsigned int *hds, unsigned int *secs)
EXPORT_SYMBOL(scsi_partsize);
static int setsize(unsigned long capacity, unsigned int *cyls, unsigned int *hds,
unsigned int *secs)
