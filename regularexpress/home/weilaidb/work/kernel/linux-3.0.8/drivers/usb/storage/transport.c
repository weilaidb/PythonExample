static void usb_stor_blocking_completion(struct urb *urb)
static int usb_stor_msg_common(struct us_data *us, int timeout)
int usb_stor_control_msg(struct us_data *us, unsigned int pipe,
u8 request, u8 requesttype, u16 value, u16 index,
void *data, u16 size, int timeout)
EXPORT_SYMBOL_GPL(usb_stor_control_msg);
int usb_stor_clear_halt(struct us_data *us, unsigned int pipe)
EXPORT_SYMBOL_GPL(usb_stor_clear_halt);
static int interpret_urb_result(struct us_data *us, unsigned int pipe,
unsigned int length, int result, unsigned int partial)
int usb_stor_ctrl_transfer(struct us_data *us, unsigned int pipe,
u8 request, u8 requesttype, u16 value, u16 index,
void *data, u16 size)
EXPORT_SYMBOL_GPL(usb_stor_ctrl_transfer);
static int usb_stor_intr_transfer(struct us_data *us, void *buf,
unsigned int length)
int usb_stor_bulk_transfer_buf(struct us_data *us, unsigned int pipe,
void *buf, unsigned int length, unsigned int *act_len)
EXPORT_SYMBOL_GPL(usb_stor_bulk_transfer_buf);
static int usb_stor_bulk_transfer_sglist(struct us_data *us, unsigned int pipe,
struct scatterlist *sg, int num_sg, unsigned int length,
unsigned int *act_len)
int usb_stor_bulk_srb(struct us_data* us, unsigned int pipe,
struct scsi_cmnd* srb)
EXPORT_SYMBOL_GPL(usb_stor_bulk_srb);
int usb_stor_bulk_transfer_sg(struct us_data* us, unsigned int pipe,
void *buf, unsigned int length_left, int use_sg, int *residual)
EXPORT_SYMBOL_GPL(usb_stor_bulk_transfer_sg);
static void last_sector_hacks(struct us_data *us, struct scsi_cmnd *srb)
void usb_stor_invoke_transport(struct scsi_cmnd *srb, struct us_data *us)
void usb_stor_stop_transport(struct us_data *us)
int usb_stor_CB_transport(struct scsi_cmnd *srb, struct us_data *us)
EXPORT_SYMBOL_GPL(usb_stor_CB_transport);
int usb_stor_Bulk_max_lun(struct us_data *us)
int usb_stor_Bulk_transport(struct scsi_cmnd *srb, struct us_data *us)
EXPORT_SYMBOL_GPL(usb_stor_Bulk_transport);
static int usb_stor_reset_common(struct us_data *us,
u8 request, u8 requesttype,
u16 value, u16 index, void *data, u16 size)
#define CB_RESET_CMD_SIZE	12
int usb_stor_CB_reset(struct us_data *us)
EXPORT_SYMBOL_GPL(usb_stor_CB_reset);
int usb_stor_Bulk_reset(struct us_data *us)
EXPORT_SYMBOL_GPL(usb_stor_Bulk_reset);
int usb_stor_port_reset(struct us_data *us)
