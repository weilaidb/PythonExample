#define _USB_H_
struct us_data;
struct scsi_cmnd;
struct us_unusual_dev ;
#define REG_CARD_STATUS     0xFF83
#define REG_HW_TRAP1        0xFF89
#define SS_SUCCESS                  0x00
#define SS_NOT_READY                0x02
#define SS_MEDIUM_ERR               0x03
#define SS_HW_ERR                   0x04
#define SS_ILLEGAL_REQUEST          0x05
#define SS_UNIT_ATTENTION           0x06
#define SD_INIT1_PATTERN   1
#define SD_INIT2_PATTERN   2
#define SD_RW_PATTERN      3
#define MS_INIT_PATTERN    4
#define MSP_RW_PATTERN     5
#define MS_RW_PATTERN      6
#define SM_INIT_PATTERN    7
#define SM_RW_PATTERN      8
#define FDIR_WRITE        0
#define FDIR_READ         1
typedef struct _SD_STATUS  SD_STATUS, *PSD_STATUS;
typedef struct _MS_STATUS  MS_STATUS, *PMS_STATUS;
typedef struct _SM_STATUS  SM_STATUS, *PSM_STATUS;
#define SD_BLOCK_LEN                            9
#define US_FLIDX_URB_ACTIVE	0
#define US_FLIDX_SG_ACTIVE	1
#define US_FLIDX_ABORTING	2
#define US_FLIDX_DISCONNECTING	3
#define US_FLIDX_RESETTING	4
#define US_FLIDX_TIMED_OUT	5
#define US_FLIDX_DONT_SCAN	6
#define USB_STOR_STRING_LEN 32
#define US_IOBUF_SIZE		64
#define US_SENSE_SIZE		18
typedef int (*trans_cmnd)(struct scsi_cmnd *, struct us_data*);
typedef int (*trans_reset)(struct us_data*);
typedef void (*proto_cmnd)(struct scsi_cmnd*, struct us_data*);
typedef void (*extra_data_destructor)(void *);
typedef void (*pm_hook)(struct us_data *, int);
#define US_SUSPEND	0
#define US_RESUME	1
struct us_data ;
static inline struct Scsi_Host *us_to_host(struct us_data *us)
static inline struct us_data *host_to_us(struct Scsi_Host *host)
extern void fill_inquiry_response(struct us_data *us,
unsigned char *data, unsigned int data_len);
#define scsi_unlock(host)	spin_unlock_irq(host->host_lock)
#define scsi_lock(host)		spin_lock_irq(host->host_lock)
