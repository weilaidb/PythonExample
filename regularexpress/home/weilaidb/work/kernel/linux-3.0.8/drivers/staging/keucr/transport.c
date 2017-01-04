#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static void usb_stor_blocking_completion(struct urb *urb)
static int usb_stor_msg_common(struct us_data *us, int timeout)
int usb_stor_control_msg(struct us_data *us, unsigned int pipe,
u8 request, u8 requesttype, u16 value, u16 index,
void *data, u16 size, int timeout)
int usb_stor_clear_halt(struct us_data *us, unsigned int pipe)
static int interpret_urb_result(struct us_data *us, unsigned int pipe,
unsigned int length, int result, unsigned int partial)
int usb_stor_bulk_transfer_buf(struct us_data *us, unsigned int pipe,
void *buf, unsigned int length, unsigned int *act_len)
static int usb_stor_bulk_transfer_sglist(struct us_data *us, unsigned int pipe,
struct scatterlist *sg, int num_sg, unsigned int length,
unsigned int *act_len)
int usb_stor_bulk_srb(struct us_data *us, unsigned int pipe,
struct scsi_cmnd *srb)
int usb_stor_bulk_transfer_sg(struct us_data *us, unsigned int pipe,
void *buf, unsigned int length_left, int use_sg, int *residual)
void usb_stor_invoke_transport(struct scsi_cmnd *srb, struct us_data *us)
void ENE_stor_invoke_transport(struct scsi_cmnd *srb, struct us_data *us)
void BuildSenseBuffer(struct scsi_cmnd *srb, int SrbStatus)
void usb_stor_stop_transport(struct us_data *us)
int usb_stor_Bulk_max_lun(struct us_data *us)
int usb_stor_Bulk_transport(struct scsi_cmnd *srb, struct us_data *us)
static int usb_stor_reset_common(struct us_data *us,
u8 request, u8 requesttype,
u16 value, u16 index, void *data, u16 size)
int usb_stor_Bulk_reset(struct us_data *us)
int usb_stor_port_reset(struct us_data *us)
