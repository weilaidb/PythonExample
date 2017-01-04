#define S390_CMB_H
struct cmbdata ;
#define BIODASDCMFENABLE	_IO(DASD_IOCTL_LETTER, 32)
#define BIODASDCMFDISABLE	_IO(DASD_IOCTL_LETTER, 33)
#define BIODASDREADALLCMB	_IOWR(DASD_IOCTL_LETTER, 33, struct cmbdata)
struct ccw_device;
extern int enable_cmf(struct ccw_device *cdev);
extern int disable_cmf(struct ccw_device *cdev);
extern u64 cmf_read(struct ccw_device *cdev, int index);
extern int cmf_readall(struct ccw_device *cdev, struct cmbdata *data);
