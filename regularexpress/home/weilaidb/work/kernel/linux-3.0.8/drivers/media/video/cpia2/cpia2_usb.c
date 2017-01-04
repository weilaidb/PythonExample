static int frame_sizes[] = ;
#define FRAMES_PER_DESC    10
#define FRAME_SIZE_PER_DESC   frame_sizes[cam->cur_alt]
static void process_frame(struct camera_data *cam);
static void cpia2_usb_complete(struct urb *urb);
static int cpia2_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id);
static void cpia2_usb_disconnect(struct usb_interface *intf);
static void free_sbufs(struct camera_data *cam);
static void add_APPn(struct camera_data *cam);
static void add_COM(struct camera_data *cam);
static int submit_urbs(struct camera_data *cam);
static int set_alternate(struct camera_data *cam, unsigned int alt);
static int configure_transfer_mode(struct camera_data *cam, unsigned int alt);
static struct usb_device_id cpia2_id_table[] = ;
MODULE_DEVICE_TABLE(usb, cpia2_id_table);
static struct usb_driver cpia2_driver = ;
static void process_frame(struct camera_data *cam)
static void add_APPn(struct camera_data *cam)
static void add_COM(struct camera_data *cam)
static void cpia2_usb_complete(struct urb *urb)
static int configure_transfer_mode(struct camera_data *cam, unsigned int alt)
int cpia2_usb_change_streaming_alternate(struct camera_data *cam,
unsigned int alt)
static int set_alternate(struct camera_data *cam, unsigned int alt)
static void free_sbufs(struct camera_data *cam)
static int write_packet(struct usb_device *udev,
u8 request, u8 * registers, u16 start, size_t size)
static int read_packet(struct usb_device *udev,
u8 request, u8 * registers, u16 start, size_t size)
int cpia2_usb_transfer_cmd(struct camera_data *cam,
void *registers,
u8 request, u8 start, u8 count, u8 direction)
static int submit_urbs(struct camera_data *cam)
int cpia2_usb_stream_start(struct camera_data *cam, unsigned int alternate)
int cpia2_usb_stream_pause(struct camera_data *cam)
int cpia2_usb_stream_resume(struct camera_data *cam)
int cpia2_usb_stream_stop(struct camera_data *cam)
static int cpia2_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id)
static void cpia2_usb_disconnect(struct usb_interface *intf)
int cpia2_usb_init(void)
void cpia2_usb_cleanup(void)
