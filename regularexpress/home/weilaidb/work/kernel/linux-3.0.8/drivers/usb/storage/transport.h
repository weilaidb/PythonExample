#define _TRANSPORT_H_
struct bulk_cb_wrap ;
#define US_BULK_CB_WRAP_LEN	31
#define US_BULK_CB_SIGN		0x43425355
#define US_BULK_FLAG_IN		1
#define US_BULK_FLAG_OUT	0
struct bulk_cs_wrap ;
#define US_BULK_CS_WRAP_LEN	13
#define US_BULK_CS_SIGN		0x53425355
#define US_BULK_STAT_OK		0
#define US_BULK_STAT_FAIL	1
#define US_BULK_STAT_PHASE	2
#define US_BULK_RESET_REQUEST	0xff
#define US_BULK_GET_MAX_LUN	0xfe
#define USB_STOR_XFER_GOOD	0
#define USB_STOR_XFER_SHORT	1
#define USB_STOR_XFER_STALLED	2
#define USB_STOR_XFER_LONG	3
#define USB_STOR_XFER_ERROR	4
#define USB_STOR_TRANSPORT_GOOD	   0
#define USB_STOR_TRANSPORT_FAILED  1
#define USB_STOR_TRANSPORT_NO_SENSE 2
#define USB_STOR_TRANSPORT_ERROR   3
#define US_CBI_ADSC		0
extern int usb_stor_CB_transport(struct scsi_cmnd *, struct us_data*);
extern int usb_stor_CB_reset(struct us_data*);
extern int usb_stor_Bulk_transport(struct scsi_cmnd *, struct us_data*);
extern int usb_stor_Bulk_max_lun(struct us_data*);
extern int usb_stor_Bulk_reset(struct us_data*);
extern void usb_stor_invoke_transport(struct scsi_cmnd *, struct us_data*);
extern void usb_stor_stop_transport(struct us_data*);
extern int usb_stor_control_msg(struct us_data *us, unsigned int pipe,
u8 request, u8 requesttype, u16 value, u16 index,
void *data, u16 size, int timeout);
extern int usb_stor_clear_halt(struct us_data *us, unsigned int pipe);
extern int usb_stor_ctrl_transfer(struct us_data *us, unsigned int pipe,
u8 request, u8 requesttype, u16 value, u16 index,
void *data, u16 size);
extern int usb_stor_bulk_transfer_buf(struct us_data *us, unsigned int pipe,
void *buf, unsigned int length, unsigned int *act_len);
extern int usb_stor_bulk_transfer_sg(struct us_data *us, unsigned int pipe,
void *buf, unsigned int length, int use_sg, int *residual);
extern int usb_stor_bulk_srb(struct us_data* us, unsigned int pipe,
struct scsi_cmnd* srb);
extern int usb_stor_port_reset(struct us_data *us);
