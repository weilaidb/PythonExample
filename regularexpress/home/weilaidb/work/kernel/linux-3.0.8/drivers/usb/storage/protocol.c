void usb_stor_pad12_command(struct scsi_cmnd *srb, struct us_data *us)
void usb_stor_ufi_command(struct scsi_cmnd *srb, struct us_data *us)
void usb_stor_transparent_scsi_command(struct scsi_cmnd *srb,
struct us_data *us)
EXPORT_SYMBOL_GPL(usb_stor_transparent_scsi_command);
unsigned int usb_stor_access_xfer_buf(unsigned char *buffer,
unsigned int buflen, struct scsi_cmnd *srb, struct scatterlist **sgptr,
unsigned int *offset, enum xfer_buf_dir dir)
EXPORT_SYMBOL_GPL(usb_stor_access_xfer_buf);
void usb_stor_set_xfer_buf(unsigned char *buffer,
unsigned int buflen, struct scsi_cmnd *srb)
EXPORT_SYMBOL_GPL(usb_stor_set_xfer_buf);
