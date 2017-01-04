#define __LINUX_USB_CDC_H
#define USB_CDC_SUBCLASS_ACM			0x02
#define USB_CDC_SUBCLASS_ETHERNET		0x06
#define USB_CDC_SUBCLASS_WHCM			0x08
#define USB_CDC_SUBCLASS_DMM			0x09
#define USB_CDC_SUBCLASS_MDLM			0x0a
#define USB_CDC_SUBCLASS_OBEX			0x0b
#define USB_CDC_SUBCLASS_EEM			0x0c
#define USB_CDC_SUBCLASS_NCM			0x0d
#define USB_CDC_PROTO_NONE			0
#define USB_CDC_ACM_PROTO_AT_V25TER		1
#define USB_CDC_ACM_PROTO_AT_PCCA101		2
#define USB_CDC_ACM_PROTO_AT_PCCA101_WAKE	3
#define USB_CDC_ACM_PROTO_AT_GSM		4
#define USB_CDC_ACM_PROTO_AT_3G			5
#define USB_CDC_ACM_PROTO_AT_CDMA		6
#define USB_CDC_ACM_PROTO_VENDOR		0xff
#define USB_CDC_PROTO_EEM			7
#define USB_CDC_NCM_PROTO_NTB			1
#define USB_CDC_HEADER_TYPE		0x00
#define USB_CDC_CALL_MANAGEMENT_TYPE	0x01
#define USB_CDC_ACM_TYPE		0x02
#define USB_CDC_UNION_TYPE		0x06
#define USB_CDC_COUNTRY_TYPE		0x07
#define USB_CDC_NETWORK_TERMINAL_TYPE	0x0a
#define USB_CDC_ETHERNET_TYPE		0x0f
#define USB_CDC_WHCM_TYPE		0x11
#define USB_CDC_MDLM_TYPE		0x12
#define USB_CDC_MDLM_DETAIL_TYPE	0x13
#define USB_CDC_DMM_TYPE		0x14
#define USB_CDC_OBEX_TYPE		0x15
#define USB_CDC_NCM_TYPE		0x1a
struct usb_cdc_header_desc  __attribute__ ((packed));
struct usb_cdc_call_mgmt_descriptor  __attribute__ ((packed));
struct usb_cdc_acm_descriptor  __attribute__ ((packed));
#define USB_CDC_COMM_FEATURE	0x01
#define USB_CDC_CAP_LINE	0x02
#define USB_CDC_CAP_BRK		0x04
#define USB_CDC_CAP_NOTIFY	0x08
struct usb_cdc_union_desc  __attribute__ ((packed));
struct usb_cdc_country_functional_desc  __attribute__ ((packed));
struct usb_cdc_network_terminal_desc  __attribute__ ((packed));
struct usb_cdc_ether_desc  __attribute__ ((packed));
struct usb_cdc_dmm_desc  __attribute__ ((packed));
struct usb_cdc_mdlm_desc  __attribute__ ((packed));
struct usb_cdc_mdlm_detail_desc  __attribute__ ((packed));
struct usb_cdc_obex_desc  __attribute__ ((packed));
struct usb_cdc_ncm_desc  __attribute__ ((packed));
#define USB_CDC_SEND_ENCAPSULATED_COMMAND	0x00
#define USB_CDC_GET_ENCAPSULATED_RESPONSE	0x01
#define USB_CDC_REQ_SET_LINE_CODING		0x20
#define USB_CDC_REQ_GET_LINE_CODING		0x21
#define USB_CDC_REQ_SET_CONTROL_LINE_STATE	0x22
#define USB_CDC_REQ_SEND_BREAK			0x23
#define USB_CDC_SET_ETHERNET_MULTICAST_FILTERS	0x40
#define USB_CDC_SET_ETHERNET_PM_PATTERN_FILTER	0x41
#define USB_CDC_GET_ETHERNET_PM_PATTERN_FILTER	0x42
#define USB_CDC_SET_ETHERNET_PACKET_FILTER	0x43
#define USB_CDC_GET_ETHERNET_STATISTIC		0x44
#define USB_CDC_GET_NTB_PARAMETERS		0x80
#define USB_CDC_GET_NET_ADDRESS			0x81
#define USB_CDC_SET_NET_ADDRESS			0x82
#define USB_CDC_GET_NTB_FORMAT			0x83
#define USB_CDC_SET_NTB_FORMAT			0x84
#define USB_CDC_GET_NTB_INPUT_SIZE		0x85
#define USB_CDC_SET_NTB_INPUT_SIZE		0x86
#define USB_CDC_GET_MAX_DATAGRAM_SIZE		0x87
#define USB_CDC_SET_MAX_DATAGRAM_SIZE		0x88
#define USB_CDC_GET_CRC_MODE			0x89
#define USB_CDC_SET_CRC_MODE			0x8a
struct usb_cdc_line_coding  __attribute__ ((packed));
#define	USB_CDC_PACKET_TYPE_PROMISCUOUS		(1 << 0)
#define	USB_CDC_PACKET_TYPE_ALL_MULTICAST	(1 << 1)
#define	USB_CDC_PACKET_TYPE_DIRECTED		(1 << 2)
#define	USB_CDC_PACKET_TYPE_BROADCAST		(1 << 3)
#define	USB_CDC_PACKET_TYPE_MULTICAST		(1 << 4)
#define USB_CDC_NOTIFY_NETWORK_CONNECTION	0x00
#define USB_CDC_NOTIFY_RESPONSE_AVAILABLE	0x01
#define USB_CDC_NOTIFY_SERIAL_STATE		0x20
#define USB_CDC_NOTIFY_SPEED_CHANGE		0x2a
struct usb_cdc_notification  __attribute__ ((packed));
struct usb_cdc_speed_change  __attribute__ ((packed));
struct usb_cdc_ncm_ntb_parameters  __attribute__ ((packed));
#define USB_CDC_NCM_NTH16_SIGN		0x484D434E
#define USB_CDC_NCM_NTH32_SIGN		0x686D636E
struct usb_cdc_ncm_nth16  __attribute__ ((packed));
struct usb_cdc_ncm_nth32  __attribute__ ((packed));
#define USB_CDC_NCM_NDP16_CRC_SIGN	0x314D434E
#define USB_CDC_NCM_NDP16_NOCRC_SIGN	0x304D434E
#define USB_CDC_NCM_NDP32_CRC_SIGN	0x316D636E
#define USB_CDC_NCM_NDP32_NOCRC_SIGN	0x306D636E
struct usb_cdc_ncm_dpe16  __attribute__((__packed__));
struct usb_cdc_ncm_ndp16  __attribute__ ((packed));
struct usb_cdc_ncm_dpe32  __attribute__((__packed__));
struct usb_cdc_ncm_ndp32  __attribute__ ((packed));
#define USB_CDC_NCM_NDP16_INDEX_MIN			0x000C
#define USB_CDC_NCM_NDP32_INDEX_MIN			0x0010
#define USB_CDC_NCM_DATAGRAM_FORMAT_CRC			0x30
#define USB_CDC_NCM_DATAGRAM_FORMAT_NOCRC		0X31
#define USB_CDC_NCM_PROTO_CODE_NO_ENCAP_COMMANDS	0x00
#define USB_CDC_NCM_PROTO_CODE_EXTERN_PROTO		0xFE
#define USB_CDC_NCM_NCAP_ETH_FILTER			(1 << 0)
#define USB_CDC_NCM_NCAP_NET_ADDRESS			(1 << 1)
#define USB_CDC_NCM_NCAP_ENCAP_COMMAND			(1 << 2)
#define USB_CDC_NCM_NCAP_MAX_DATAGRAM_SIZE		(1 << 3)
#define USB_CDC_NCM_NCAP_CRC_MODE			(1 << 4)
#define	USB_CDC_NCM_NCAP_NTB_INPUT_SIZE			(1 << 5)
#define USB_CDC_NCM_NTB16_SUPPORTED			(1 << 0)
#define USB_CDC_NCM_NTB32_SUPPORTED			(1 << 1)
#define USB_CDC_NCM_NDP_ALIGN_MIN_SIZE			0x04
#define USB_CDC_NCM_NTB_MAX_LENGTH			0x1C
#define USB_CDC_NCM_NTB16_FORMAT			0x00
#define USB_CDC_NCM_NTB32_FORMAT			0x01
#define USB_CDC_NCM_NTB_MIN_IN_SIZE			2048
#define USB_CDC_NCM_NTB_MIN_OUT_SIZE			2048
struct usb_cdc_ncm_ndp_input_size  __attribute__ ((packed));
#define USB_CDC_NCM_CRC_NOT_APPENDED			0x00
#define USB_CDC_NCM_CRC_APPENDED			0x01
