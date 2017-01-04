#define _SYM53C416_H
#define SYM53C416_SCSI_ID 7
static int sym53c416_detect(struct scsi_host_template *);
static const char *sym53c416_info(struct Scsi_Host *);
static int sym53c416_release(struct Scsi_Host *);
static int sym53c416_queuecommand(struct Scsi_Host *, struct scsi_cmnd *);
static int sym53c416_host_reset(Scsi_Cmnd *);
static int sym53c416_bios_param(struct scsi_device *, struct block_device *,
sector_t, int *);
static void sym53c416_setup(char *str, int *ints);
