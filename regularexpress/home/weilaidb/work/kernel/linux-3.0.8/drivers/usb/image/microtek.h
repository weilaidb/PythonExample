typedef void (*mts_scsi_cmnd_callback)(struct scsi_cmnd *);
struct mts_transfer_context
;
struct mts_desc ;
#define MTS_EP_OUT	0x1
#define MTS_EP_RESPONSE	0x2
#define MTS_EP_IMAGE	0x3
#define MTS_EP_TOTAL	0x3
#define MTS_SCSI_ERR_MASK ~0x3fu
