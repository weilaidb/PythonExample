#define MPT2SAS_CTL_H_INCLUDED
#define MPT2SAS_DEV_NAME	"mpt2ctl"
#define MPT2_MAGIC_NUMBER	'L'
#define MPT2_IOCTL_DEFAULT_TIMEOUT (10)
#define MPT2IOCINFO	_IOWR(MPT2_MAGIC_NUMBER, 17, \
struct mpt2_ioctl_iocinfo)
#define MPT2COMMAND	_IOWR(MPT2_MAGIC_NUMBER, 20, \
struct mpt2_ioctl_command)
#define MPT2COMMAND32	_IOWR(MPT2_MAGIC_NUMBER, 20, \
struct mpt2_ioctl_command32)
#define MPT2EVENTQUERY	_IOWR(MPT2_MAGIC_NUMBER, 21, \
struct mpt2_ioctl_eventquery)
#define MPT2EVENTENABLE	_IOWR(MPT2_MAGIC_NUMBER, 22, \
struct mpt2_ioctl_eventenable)
#define MPT2EVENTREPORT	_IOWR(MPT2_MAGIC_NUMBER, 23, \
struct mpt2_ioctl_eventreport)
#define MPT2HARDRESET	_IOWR(MPT2_MAGIC_NUMBER, 24, \
struct mpt2_ioctl_diag_reset)
#define MPT2BTDHMAPPING	_IOWR(MPT2_MAGIC_NUMBER, 31, \
struct mpt2_ioctl_btdh_mapping)
#define MPT2DIAGREGISTER _IOWR(MPT2_MAGIC_NUMBER, 26, \
struct mpt2_diag_register)
#define MPT2DIAGRELEASE	_IOWR(MPT2_MAGIC_NUMBER, 27, \
struct mpt2_diag_release)
#define MPT2DIAGUNREGISTER _IOWR(MPT2_MAGIC_NUMBER, 28, \
struct mpt2_diag_unregister)
#define MPT2DIAGQUERY	_IOWR(MPT2_MAGIC_NUMBER, 29, \
struct mpt2_diag_query)
#define MPT2DIAGREADBUFFER _IOWR(MPT2_MAGIC_NUMBER, 30, \
struct mpt2_diag_read_buffer)
struct mpt2_ioctl_header ;
struct mpt2_ioctl_diag_reset ;
struct mpt2_ioctl_pci_info ;
#define MPT2_IOCTL_INTERFACE_SCSI	(0x00)
#define MPT2_IOCTL_INTERFACE_FC		(0x01)
#define MPT2_IOCTL_INTERFACE_FC_IP	(0x02)
#define MPT2_IOCTL_INTERFACE_SAS	(0x03)
#define MPT2_IOCTL_INTERFACE_SAS2	(0x04)
#define MPT2_IOCTL_INTERFACE_SAS2_SSS6200	(0x05)
#define MPT2_IOCTL_VERSION_LENGTH	(32)
struct mpt2_ioctl_iocinfo ;
#define MPT2SAS_CTL_EVENT_LOG_SIZE (50)
struct mpt2_ioctl_eventquery ;
struct mpt2_ioctl_eventenable ;
#define MPT2_EVENT_DATA_SIZE (192)
struct MPT2_IOCTL_EVENTS ;
struct mpt2_ioctl_eventreport ;
struct mpt2_ioctl_command ;
struct mpt2_ioctl_command32 ;
struct mpt2_ioctl_btdh_mapping ;
#define MPT2_DIAG_BUFFER_IS_REGISTERED	(0x01)
#define MPT2_DIAG_BUFFER_IS_RELEASED	(0x02)
#define MPT2_DIAG_BUFFER_IS_DIAG_RESET	(0x04)
#define MPT2_APP_FLAGS_APP_OWNED	(0x0001)
#define MPT2_APP_FLAGS_BUFFER_VALID	(0x0002)
#define MPT2_APP_FLAGS_FW_BUFFER_ACCESS	(0x0004)
#define MPT2_FLAGS_REREGISTER		(0x0001)
#define MPT2_PRODUCT_SPECIFIC_DWORDS 		23
struct mpt2_diag_register ;
struct mpt2_diag_unregister ;
struct mpt2_diag_query ;
struct mpt2_diag_release ;
struct mpt2_diag_read_buffer ;
