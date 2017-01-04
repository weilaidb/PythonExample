#define _PROTOCOL_H_
extern void usb_stor_pad12_command(struct scsi_cmnd*, struct us_data*);
extern void usb_stor_ufi_command(struct scsi_cmnd*, struct us_data*);
extern void usb_stor_transparent_scsi_command(struct scsi_cmnd*,
struct us_data*);
enum xfer_buf_dir	;
extern unsigned int usb_stor_access_xfer_buf(unsigned char *buffer,
unsigned int buflen, struct scsi_cmnd *srb, struct scatterlist **,
unsigned int *offset, enum xfer_buf_dir dir);
extern void usb_stor_set_xfer_buf(unsigned char *buffer,
unsigned int buflen, struct scsi_cmnd *srb);
