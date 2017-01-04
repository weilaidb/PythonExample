#define _LINUX_AUTO_DEV_IOCTL_H
#define AUTOFS_DEVICE_NAME		"autofs"
#define AUTOFS_DEV_IOCTL_VERSION_MAJOR	1
#define AUTOFS_DEV_IOCTL_VERSION_MINOR	0
#define AUTOFS_DEVID_LEN		16
#define AUTOFS_DEV_IOCTL_SIZE		sizeof(struct autofs_dev_ioctl)
struct args_protover ;
struct args_protosubver ;
struct args_openmount ;
struct args_ready ;
struct args_fail ;
struct args_setpipefd ;
struct args_timeout ;
struct args_requester ;
struct args_expire ;
struct args_askumount ;
struct args_ismountpoint ;
struct autofs_dev_ioctl ;
static inline void init_autofs_dev_ioctl(struct autofs_dev_ioctl *in)
enum ;
#define AUTOFS_IOCTL 0x93
#define AUTOFS_DEV_IOCTL_VERSION \
_IOWR(AUTOFS_IOCTL, \
AUTOFS_DEV_IOCTL_VERSION_CMD, struct autofs_dev_ioctl)
#define AUTOFS_DEV_IOCTL_PROTOVER \
_IOWR(AUTOFS_IOCTL, \
AUTOFS_DEV_IOCTL_PROTOVER_CMD, struct autofs_dev_ioctl)
#define AUTOFS_DEV_IOCTL_PROTOSUBVER \
_IOWR(AUTOFS_IOCTL, \
AUTOFS_DEV_IOCTL_PROTOSUBVER_CMD, struct autofs_dev_ioctl)
#define AUTOFS_DEV_IOCTL_OPENMOUNT \
_IOWR(AUTOFS_IOCTL, \
AUTOFS_DEV_IOCTL_OPENMOUNT_CMD, struct autofs_dev_ioctl)
#define AUTOFS_DEV_IOCTL_CLOSEMOUNT \
_IOWR(AUTOFS_IOCTL, \
AUTOFS_DEV_IOCTL_CLOSEMOUNT_CMD, struct autofs_dev_ioctl)
#define AUTOFS_DEV_IOCTL_READY \
_IOWR(AUTOFS_IOCTL, \
AUTOFS_DEV_IOCTL_READY_CMD, struct autofs_dev_ioctl)
#define AUTOFS_DEV_IOCTL_FAIL \
_IOWR(AUTOFS_IOCTL, \
AUTOFS_DEV_IOCTL_FAIL_CMD, struct autofs_dev_ioctl)
#define AUTOFS_DEV_IOCTL_SETPIPEFD \
_IOWR(AUTOFS_IOCTL, \
AUTOFS_DEV_IOCTL_SETPIPEFD_CMD, struct autofs_dev_ioctl)
#define AUTOFS_DEV_IOCTL_CATATONIC \
_IOWR(AUTOFS_IOCTL, \
AUTOFS_DEV_IOCTL_CATATONIC_CMD, struct autofs_dev_ioctl)
#define AUTOFS_DEV_IOCTL_TIMEOUT \
_IOWR(AUTOFS_IOCTL, \
AUTOFS_DEV_IOCTL_TIMEOUT_CMD, struct autofs_dev_ioctl)
#define AUTOFS_DEV_IOCTL_REQUESTER \
_IOWR(AUTOFS_IOCTL, \
AUTOFS_DEV_IOCTL_REQUESTER_CMD, struct autofs_dev_ioctl)
#define AUTOFS_DEV_IOCTL_EXPIRE \
_IOWR(AUTOFS_IOCTL, \
AUTOFS_DEV_IOCTL_EXPIRE_CMD, struct autofs_dev_ioctl)
#define AUTOFS_DEV_IOCTL_ASKUMOUNT \
_IOWR(AUTOFS_IOCTL, \
AUTOFS_DEV_IOCTL_ASKUMOUNT_CMD, struct autofs_dev_ioctl)
#define AUTOFS_DEV_IOCTL_ISMOUNTPOINT \
_IOWR(AUTOFS_IOCTL, \
AUTOFS_DEV_IOCTL_ISMOUNTPOINT_CMD, struct autofs_dev_ioctl)
