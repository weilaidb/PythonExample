#define _SCSI_IOCTL_H
#define SCSI_IOCTL_SEND_COMMAND 1
#define SCSI_IOCTL_TEST_UNIT_READY 2
#define SCSI_IOCTL_BENCHMARK_COMMAND 3
#define SCSI_IOCTL_SYNC 4
#define SCSI_IOCTL_START_UNIT 5
#define SCSI_IOCTL_STOP_UNIT 6
#define SCSI_IOCTL_DOORLOCK 0x5380
#define SCSI_IOCTL_DOORUNLOCK 0x5381
#define	SCSI_REMOVAL_PREVENT	1
#define	SCSI_REMOVAL_ALLOW	0
struct scsi_device;
typedef struct scsi_ioctl_command  Scsi_Ioctl_Command;
typedef struct scsi_idlun  Scsi_Idlun;
typedef struct scsi_fctargaddress  Scsi_FCTargAddress;
extern int scsi_ioctl(struct scsi_device *, int, void __user *);
extern int scsi_nonblockable_ioctl(struct scsi_device *sdev, int cmd,
void __user *arg, int ndelay);
