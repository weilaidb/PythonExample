static unsigned int core_debug;
module_param(core_debug, int, 0644);
MODULE_PARM_DESC(core_debug, "enable debug messages [core]");
static int adjust_compression = 1;
module_param(adjust_compression, int, 0444);
MODULE_PARM_DESC(adjust_compression, " Set the ADPCM compression for the device.  Default: 1 (On)");
static int switch_svideo_input;
module_param(switch_svideo_input, int, 0444);
MODULE_PARM_DESC(switch_svideo_input, " Set the S-Video input.  Some cables and input device are wired differently. Default: 0 (Off)");
static unsigned int adjust_x_offset = -1;
module_param(adjust_x_offset, int, 0644);
MODULE_PARM_DESC(adjust_x_offset, "adjust X offset display [core]");
static unsigned int adjust_y_offset = -1;
module_param(adjust_y_offset, int, 0644);
MODULE_PARM_DESC(adjust_y_offset, "adjust Y offset display [core]");
#define	ENABLE_HEXDUMP	0
#define PDEBUG(level, fmt, args...)
#define PDEBUG(level, fmt, args...) do  while (0)
#define DBG_HEADER	(1 << 0)
#define DBG_IRQ		(1 << 1)
#define DBG_ISOC	(1 << 2)
#define DBG_PARSE	(1 << 3)
#define DBG_SCRATCH	(1 << 4)
#define DBG_FUNC	(1 << 5)
static const int max_imgwidth = MAX_FRAME_WIDTH;
static const int max_imgheight = MAX_FRAME_HEIGHT;
static const int min_imgwidth = MIN_FRAME_WIDTH;
static const int min_imgheight = MIN_FRAME_HEIGHT;
#define DEFAULT_SCRATCH_BUF_SIZE	(0x20000)
static const int scratch_buf_size = DEFAULT_SCRATCH_BUF_SIZE;
static int usbvision_request_intra(struct usb_usbvision *usbvision);
static int usbvision_unrequest_intra(struct usb_usbvision *usbvision);
static int usbvision_adjust_compression(struct usb_usbvision *usbvision);
static int usbvision_measure_bandwidth(struct usb_usbvision *usbvision);
static void *usbvision_rvmalloc(unsigned long size)
static void usbvision_rvfree(void *mem, unsigned long size)
#if ENABLE_HEXDUMP
static void usbvision_hexdump(const unsigned char *data, int len)
static int scratch_len(struct usb_usbvision *usbvision)
static int scratch_free(struct usb_usbvision *usbvision)
static int scratch_put(struct usb_usbvision *usbvision, unsigned char *data,
int len)
static void scratch_mark_header(struct usb_usbvision *usbvision)
static int scratch_get_extra(struct usb_usbvision *usbvision,
unsigned char *data, int *ptr, int len)
static void scratch_set_extra_ptr(struct usb_usbvision *usbvision, int *ptr,
int len)
static void scratch_inc_extra_ptr(int *ptr, int len)
static int scratch_get(struct usb_usbvision *usbvision, unsigned char *data,
int len)
static int scratch_get_header(struct usb_usbvision *usbvision,
struct usbvision_frame_header *header)
static void scratch_rm_old(struct usb_usbvision *usbvision, int len)
static void scratch_reset(struct usb_usbvision *usbvision)
int usbvision_scratch_alloc(struct usb_usbvision *usbvision)
void usbvision_scratch_free(struct usb_usbvision *usbvision)
int usbvision_decompress_alloc(struct usb_usbvision *usbvision)
void usbvision_decompress_free(struct usb_usbvision *usbvision)
static enum parse_state usbvision_find_header(struct usb_usbvision *usbvision)
static enum parse_state usbvision_parse_lines_422(struct usb_usbvision *usbvision,
long *pcopylen)
static int usbvision_decompress(struct usb_usbvision *usbvision, unsigned char *compressed,
unsigned char *decompressed, int *start_pos,
int *block_typestart_pos, int len)
static enum parse_state usbvision_parse_compress(struct usb_usbvision *usbvision,
long *pcopylen)
static enum parse_state usbvision_parse_lines_420(struct usb_usbvision *usbvision,
long *pcopylen)
static void usbvision_parse_data(struct usb_usbvision *usbvision)
static int usbvision_compress_isochronous(struct usb_usbvision *usbvision,
struct urb *urb)
static void usbvision_isoc_irq(struct urb *urb)
int usbvision_read_reg(struct usb_usbvision *usbvision, unsigned char reg)
int usbvision_write_reg(struct usb_usbvision *usbvision, unsigned char reg,
unsigned char value)
static void usbvision_ctrl_urb_complete(struct urb *urb)
static int usbvision_write_reg_irq(struct usb_usbvision *usbvision, int address,
unsigned char *data, int len)
static int usbvision_init_compression(struct usb_usbvision *usbvision)
static int usbvision_measure_bandwidth(struct usb_usbvision *usbvision)
static int usbvision_adjust_compression(struct usb_usbvision *usbvision)
static int usbvision_request_intra(struct usb_usbvision *usbvision)
static int usbvision_unrequest_intra(struct usb_usbvision *usbvision)
int usbvision_power_off(struct usb_usbvision *usbvision)
static int usbvision_init_webcam(struct usb_usbvision *usbvision)
static int usbvision_set_video_format(struct usb_usbvision *usbvision, int format)
int usbvision_set_output(struct usb_usbvision *usbvision, int width,
int height)
int usbvision_frames_alloc(struct usb_usbvision *usbvision, int number_of_frames)
void usbvision_frames_free(struct usb_usbvision *usbvision)
void usbvision_empty_framequeues(struct usb_usbvision *usbvision)
int usbvision_stream_interrupt(struct usb_usbvision *usbvision)
static int usbvision_set_compress_params(struct usb_usbvision *usbvision)
int usbvision_set_input(struct usb_usbvision *usbvision)
static int usbvision_set_dram_settings(struct usb_usbvision *usbvision)
int usbvision_power_on(struct usb_usbvision *usbvision)
static void call_usbvision_power_off(struct work_struct *work)
static void usbvision_power_off_timer(unsigned long data)
void usbvision_init_power_off_timer(struct usb_usbvision *usbvision)
void usbvision_set_power_off_timer(struct usb_usbvision *usbvision)
void usbvision_reset_power_off_timer(struct usb_usbvision *usbvision)
int usbvision_begin_streaming(struct usb_usbvision *usbvision)
int usbvision_restart_isoc(struct usb_usbvision *usbvision)
int usbvision_audio_off(struct usb_usbvision *usbvision)
int usbvision_set_audio(struct usb_usbvision *usbvision, int audio_channel)
int usbvision_setup(struct usb_usbvision *usbvision, int format)
int usbvision_set_alternate(struct usb_usbvision *dev)
int usbvision_init_isoc(struct usb_usbvision *usbvision)
void usbvision_stop_isoc(struct usb_usbvision *usbvision)
int usbvision_muxsel(struct usb_usbvision *usbvision, int channel)
