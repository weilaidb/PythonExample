#define __LINUX_USB_VIDEO_H
#define UVC_SC_UNDEFINED				0x00
#define UVC_SC_VIDEOCONTROL				0x01
#define UVC_SC_VIDEOSTREAMING				0x02
#define UVC_SC_VIDEO_INTERFACE_COLLECTION		0x03
#define UVC_PC_PROTOCOL_UNDEFINED			0x00
#define UVC_VC_DESCRIPTOR_UNDEFINED			0x00
#define UVC_VC_HEADER					0x01
#define UVC_VC_INPUT_TERMINAL				0x02
#define UVC_VC_OUTPUT_TERMINAL				0x03
#define UVC_VC_SELECTOR_UNIT				0x04
#define UVC_VC_PROCESSING_UNIT				0x05
#define UVC_VC_EXTENSION_UNIT				0x06
#define UVC_VS_UNDEFINED				0x00
#define UVC_VS_INPUT_HEADER				0x01
#define UVC_VS_OUTPUT_HEADER				0x02
#define UVC_VS_STILL_IMAGE_FRAME			0x03
#define UVC_VS_FORMAT_UNCOMPRESSED			0x04
#define UVC_VS_FRAME_UNCOMPRESSED			0x05
#define UVC_VS_FORMAT_MJPEG				0x06
#define UVC_VS_FRAME_MJPEG				0x07
#define UVC_VS_FORMAT_MPEG2TS				0x0a
#define UVC_VS_FORMAT_DV				0x0c
#define UVC_VS_COLORFORMAT				0x0d
#define UVC_VS_FORMAT_FRAME_BASED			0x10
#define UVC_VS_FRAME_FRAME_BASED			0x11
#define UVC_VS_FORMAT_STREAM_BASED			0x12
#define UVC_EP_UNDEFINED				0x00
#define UVC_EP_GENERAL					0x01
#define UVC_EP_ENDPOINT					0x02
#define UVC_EP_INTERRUPT				0x03
#define UVC_RC_UNDEFINED				0x00
#define UVC_SET_CUR					0x01
#define UVC_GET_CUR					0x81
#define UVC_GET_MIN					0x82
#define UVC_GET_MAX					0x83
#define UVC_GET_RES					0x84
#define UVC_GET_LEN					0x85
#define UVC_GET_INFO					0x86
#define UVC_GET_DEF					0x87
#define UVC_VC_CONTROL_UNDEFINED			0x00
#define UVC_VC_VIDEO_POWER_MODE_CONTROL			0x01
#define UVC_VC_REQUEST_ERROR_CODE_CONTROL		0x02
#define UVC_TE_CONTROL_UNDEFINED			0x00
#define UVC_SU_CONTROL_UNDEFINED			0x00
#define UVC_SU_INPUT_SELECT_CONTROL			0x01
#define UVC_CT_CONTROL_UNDEFINED			0x00
#define UVC_CT_SCANNING_MODE_CONTROL			0x01
#define UVC_CT_AE_MODE_CONTROL				0x02
#define UVC_CT_AE_PRIORITY_CONTROL			0x03
#define UVC_CT_EXPOSURE_TIME_ABSOLUTE_CONTROL		0x04
#define UVC_CT_EXPOSURE_TIME_RELATIVE_CONTROL		0x05
#define UVC_CT_FOCUS_ABSOLUTE_CONTROL			0x06
#define UVC_CT_FOCUS_RELATIVE_CONTROL			0x07
#define UVC_CT_FOCUS_AUTO_CONTROL			0x08
#define UVC_CT_IRIS_ABSOLUTE_CONTROL			0x09
#define UVC_CT_IRIS_RELATIVE_CONTROL			0x0a
#define UVC_CT_ZOOM_ABSOLUTE_CONTROL			0x0b
#define UVC_CT_ZOOM_RELATIVE_CONTROL			0x0c
#define UVC_CT_PANTILT_ABSOLUTE_CONTROL			0x0d
#define UVC_CT_PANTILT_RELATIVE_CONTROL			0x0e
#define UVC_CT_ROLL_ABSOLUTE_CONTROL			0x0f
#define UVC_CT_ROLL_RELATIVE_CONTROL			0x10
#define UVC_CT_PRIVACY_CONTROL				0x11
#define UVC_PU_CONTROL_UNDEFINED			0x00
#define UVC_PU_BACKLIGHT_COMPENSATION_CONTROL		0x01
#define UVC_PU_BRIGHTNESS_CONTROL			0x02
#define UVC_PU_CONTRAST_CONTROL				0x03
#define UVC_PU_GAIN_CONTROL				0x04
#define UVC_PU_POWER_LINE_FREQUENCY_CONTROL		0x05
#define UVC_PU_HUE_CONTROL				0x06
#define UVC_PU_SATURATION_CONTROL			0x07
#define UVC_PU_SHARPNESS_CONTROL			0x08
#define UVC_PU_GAMMA_CONTROL				0x09
#define UVC_PU_WHITE_BALANCE_TEMPERATURE_CONTROL	0x0a
#define UVC_PU_WHITE_BALANCE_TEMPERATURE_AUTO_CONTROL	0x0b
#define UVC_PU_WHITE_BALANCE_COMPONENT_CONTROL		0x0c
#define UVC_PU_WHITE_BALANCE_COMPONENT_AUTO_CONTROL	0x0d
#define UVC_PU_DIGITAL_MULTIPLIER_CONTROL		0x0e
#define UVC_PU_DIGITAL_MULTIPLIER_LIMIT_CONTROL		0x0f
#define UVC_PU_HUE_AUTO_CONTROL				0x10
#define UVC_PU_ANALOG_VIDEO_STANDARD_CONTROL		0x11
#define UVC_PU_ANALOG_LOCK_STATUS_CONTROL		0x12
#define UVC_VS_CONTROL_UNDEFINED			0x00
#define UVC_VS_PROBE_CONTROL				0x01
#define UVC_VS_COMMIT_CONTROL				0x02
#define UVC_VS_STILL_PROBE_CONTROL			0x03
#define UVC_VS_STILL_COMMIT_CONTROL			0x04
#define UVC_VS_STILL_IMAGE_TRIGGER_CONTROL		0x05
#define UVC_VS_STREAM_ERROR_CODE_CONTROL		0x06
#define UVC_VS_GENERATE_KEY_FRAME_CONTROL		0x07
#define UVC_VS_UPDATE_FRAME_SEGMENT_CONTROL		0x08
#define UVC_VS_SYNC_DELAY_CONTROL			0x09
#define UVC_TT_VENDOR_SPECIFIC				0x0100
#define UVC_TT_STREAMING				0x0101
#define UVC_ITT_VENDOR_SPECIFIC				0x0200
#define UVC_ITT_CAMERA					0x0201
#define UVC_ITT_MEDIA_TRANSPORT_INPUT			0x0202
#define UVC_OTT_VENDOR_SPECIFIC				0x0300
#define UVC_OTT_DISPLAY					0x0301
#define UVC_OTT_MEDIA_TRANSPORT_OUTPUT			0x0302
#define UVC_EXTERNAL_VENDOR_SPECIFIC			0x0400
#define UVC_COMPOSITE_CONNECTOR				0x0401
#define UVC_SVIDEO_CONNECTOR				0x0402
#define UVC_COMPONENT_CONNECTOR				0x0403
#define UVC_STATUS_TYPE_CONTROL				1
#define UVC_STATUS_TYPE_STREAMING			2
#define UVC_STREAM_EOH					(1 << 7)
#define UVC_STREAM_ERR					(1 << 6)
#define UVC_STREAM_STI					(1 << 5)
#define UVC_STREAM_RES					(1 << 4)
#define UVC_STREAM_SCR					(1 << 3)
#define UVC_STREAM_PTS					(1 << 2)
#define UVC_STREAM_EOF					(1 << 1)
#define UVC_STREAM_FID					(1 << 0)
#define UVC_CONTROL_CAP_GET				(1 << 0)
#define UVC_CONTROL_CAP_SET				(1 << 1)
#define UVC_CONTROL_CAP_DISABLED			(1 << 2)
#define UVC_CONTROL_CAP_AUTOUPDATE			(1 << 3)
#define UVC_CONTROL_CAP_ASYNCHRONOUS			(1 << 4)
struct uvc_descriptor_header  __attribute__((packed));
struct uvc_header_descriptor  __attribute__((__packed__));
#define UVC_DT_HEADER_SIZE(n)				(12+(n))
#define UVC_HEADER_DESCRIPTOR(n) \
uvc_header_descriptor_##n
#define DECLARE_UVC_HEADER_DESCRIPTOR(n)		\
struct UVC_HEADER_DESCRIPTOR(n)  __attribute__ ((packed))
struct uvc_input_terminal_descriptor  __attribute__((__packed__));
#define UVC_DT_INPUT_TERMINAL_SIZE			8
struct uvc_output_terminal_descriptor  __attribute__((__packed__));
#define UVC_DT_OUTPUT_TERMINAL_SIZE			9
struct uvc_camera_terminal_descriptor  __attribute__((__packed__));
#define UVC_DT_CAMERA_TERMINAL_SIZE(n)			(15+(n))
struct uvc_selector_unit_descriptor  __attribute__((__packed__));
#define UVC_DT_SELECTOR_UNIT_SIZE(n)			(6+(n))
#define UVC_SELECTOR_UNIT_DESCRIPTOR(n)	\
uvc_selector_unit_descriptor_##n
#define DECLARE_UVC_SELECTOR_UNIT_DESCRIPTOR(n)	\
struct UVC_SELECTOR_UNIT_DESCRIPTOR(n)  __attribute__ ((packed))
struct uvc_processing_unit_descriptor  __attribute__((__packed__));
#define UVC_DT_PROCESSING_UNIT_SIZE(n)			(9+(n))
struct uvc_extension_unit_descriptor  __attribute__((__packed__));
#define UVC_DT_EXTENSION_UNIT_SIZE(p, n)		(24+(p)+(n))
#define UVC_EXTENSION_UNIT_DESCRIPTOR(p, n) \
uvc_extension_unit_descriptor_##p_##n
#define DECLARE_UVC_EXTENSION_UNIT_DESCRIPTOR(p, n)	\
struct UVC_EXTENSION_UNIT_DESCRIPTOR(p, n)  __attribute__ ((packed))
struct uvc_control_endpoint_descriptor  __attribute__((__packed__));
#define UVC_DT_CONTROL_ENDPOINT_SIZE			5
struct uvc_input_header_descriptor  __attribute__((__packed__));
#define UVC_DT_INPUT_HEADER_SIZE(n, p)			(13+(n*p))
#define UVC_INPUT_HEADER_DESCRIPTOR(n, p) \
uvc_input_header_descriptor_##n_##p
#define DECLARE_UVC_INPUT_HEADER_DESCRIPTOR(n, p)	\
struct UVC_INPUT_HEADER_DESCRIPTOR(n, p)  __attribute__ ((packed))
struct uvc_output_header_descriptor  __attribute__((__packed__));
#define UVC_DT_OUTPUT_HEADER_SIZE(n, p)			(9+(n*p))
#define UVC_OUTPUT_HEADER_DESCRIPTOR(n, p) \
uvc_output_header_descriptor_##n_##p
#define DECLARE_UVC_OUTPUT_HEADER_DESCRIPTOR(n, p)	\
struct UVC_OUTPUT_HEADER_DESCRIPTOR(n, p)  __attribute__ ((packed))
struct uvc_color_matching_descriptor  __attribute__((__packed__));
#define UVC_DT_COLOR_MATCHING_SIZE			6
struct uvc_streaming_control  __attribute__((__packed__));
struct uvc_format_uncompressed  __attribute__((__packed__));
#define UVC_DT_FORMAT_UNCOMPRESSED_SIZE			27
struct uvc_frame_uncompressed  __attribute__((__packed__));
#define UVC_DT_FRAME_UNCOMPRESSED_SIZE(n)		(26+4*(n))
#define UVC_FRAME_UNCOMPRESSED(n) \
uvc_frame_uncompressed_##n
#define DECLARE_UVC_FRAME_UNCOMPRESSED(n)		\
struct UVC_FRAME_UNCOMPRESSED(n)  __attribute__ ((packed))
struct uvc_format_mjpeg  __attribute__((__packed__));
#define UVC_DT_FORMAT_MJPEG_SIZE			11
struct uvc_frame_mjpeg  __attribute__((__packed__));
#define UVC_DT_FRAME_MJPEG_SIZE(n)			(26+4*(n))
#define UVC_FRAME_MJPEG(n) \
uvc_frame_mjpeg_##n
#define DECLARE_UVC_FRAME_MJPEG(n)			\
struct UVC_FRAME_MJPEG(n)  __attribute__ ((packed))
