#define VENDOR_SCSI3           1
#define VENDOR_NEC             2
#define VENDOR_TOSHIBA         3
#define VENDOR_WRITER          4
#define VENDOR_TIMEOUT	30*HZ
void sr_vendor_init(Scsi_CD *cd)
int sr_set_blocklength(Scsi_CD *cd, int blocklength)
int sr_cd_check(struct cdrom_device_info *cdi)
