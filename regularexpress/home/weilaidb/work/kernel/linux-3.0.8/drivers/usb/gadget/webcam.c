#define WEBCAM_VENDOR_ID		0x1d6b
#define WEBCAM_PRODUCT_ID		0x0102
#define WEBCAM_DEVICE_BCD		0x0010
static char webcam_vendor_label[] = "Linux Foundation";
static char webcam_product_label[] = "Webcam gadget";
static char webcam_config_label[] = "Video";
#define STRING_MANUFACTURER_IDX		0
#define STRING_PRODUCT_IDX		1
#define STRING_DESCRIPTION_IDX		2
static struct usb_string webcam_strings[] = ;
static struct usb_gadget_strings webcam_stringtab = ;
static struct usb_gadget_strings *webcam_device_strings[] = ;
static struct usb_device_descriptor webcam_device_descriptor = ;
DECLARE_UVC_HEADER_DESCRIPTOR(1);
static const struct UVC_HEADER_DESCRIPTOR(1) uvc_control_header = ;
static const struct uvc_camera_terminal_descriptor uvc_camera_terminal = ;
static const struct uvc_processing_unit_descriptor uvc_processing = ;
static const struct uvc_output_terminal_descriptor uvc_output_terminal = ;
DECLARE_UVC_INPUT_HEADER_DESCRIPTOR(1, 2);
static const struct UVC_INPUT_HEADER_DESCRIPTOR(1, 2) uvc_input_header = ;
static const struct uvc_format_uncompressed uvc_format_yuv = ;
DECLARE_UVC_FRAME_UNCOMPRESSED(1);
DECLARE_UVC_FRAME_UNCOMPRESSED(3);
static const struct UVC_FRAME_UNCOMPRESSED(3) uvc_frame_yuv_360p = ;
static const struct UVC_FRAME_UNCOMPRESSED(1) uvc_frame_yuv_720p = ;
static const struct uvc_format_mjpeg uvc_format_mjpg = ;
DECLARE_UVC_FRAME_MJPEG(1);
DECLARE_UVC_FRAME_MJPEG(3);
static const struct UVC_FRAME_MJPEG(3) uvc_frame_mjpg_360p = ;
static const struct UVC_FRAME_MJPEG(1) uvc_frame_mjpg_720p = ;
static const struct uvc_color_matching_descriptor uvc_color_matching = ;
static const struct uvc_descriptor_header * const uvc_control_cls[] = ;
static const struct uvc_descriptor_header * const uvc_fs_streaming_cls[] = ;
static const struct uvc_descriptor_header * const uvc_hs_streaming_cls[] = ;
static int __init
webcam_config_bind(struct usb_configuration *c)
static struct usb_configuration webcam_config_driver = ;
static int
webcam_unbind(struct usb_composite_dev *cdev)
static int __init
webcam_bind(struct usb_composite_dev *cdev)
static struct usb_composite_driver webcam_driver = ;
static int __init
webcam_init(void)
static void __exit
webcam_cleanup(void)
module_init(webcam_init);
module_exit(webcam_cleanup);
MODULE_AUTHOR("Laurent Pinchart");
MODULE_DESCRIPTION("Webcam Video Gadget");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.1.0");
