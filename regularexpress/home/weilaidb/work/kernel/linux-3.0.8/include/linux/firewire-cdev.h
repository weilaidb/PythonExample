#define _LINUX_FIREWIRE_CDEV_H
#define FW_CDEV_EVENT_BUS_RESET				0x00
#define FW_CDEV_EVENT_RESPONSE				0x01
#define FW_CDEV_EVENT_REQUEST				0x02
#define FW_CDEV_EVENT_ISO_INTERRUPT			0x03
#define FW_CDEV_EVENT_ISO_RESOURCE_ALLOCATED		0x04
#define FW_CDEV_EVENT_ISO_RESOURCE_DEALLOCATED		0x05
#define FW_CDEV_EVENT_REQUEST2				0x06
#define FW_CDEV_EVENT_PHY_PACKET_SENT			0x07
#define FW_CDEV_EVENT_PHY_PACKET_RECEIVED		0x08
#define FW_CDEV_EVENT_ISO_INTERRUPT_MULTICHANNEL	0x09
struct fw_cdev_event_common ;
struct fw_cdev_event_bus_reset ;
struct fw_cdev_event_response ;
struct fw_cdev_event_request ;
struct fw_cdev_event_request2 ;
struct fw_cdev_event_iso_interrupt ;
struct fw_cdev_event_iso_interrupt_mc ;
struct fw_cdev_event_iso_resource ;
struct fw_cdev_event_phy_packet ;
union fw_cdev_event ;
#define FW_CDEV_IOC_GET_INFO           _IOWR('#', 0x00, struct fw_cdev_get_info)
#define FW_CDEV_IOC_SEND_REQUEST        _IOW('#', 0x01, struct fw_cdev_send_request)
#define FW_CDEV_IOC_ALLOCATE           _IOWR('#', 0x02, struct fw_cdev_allocate)
#define FW_CDEV_IOC_DEALLOCATE          _IOW('#', 0x03, struct fw_cdev_deallocate)
#define FW_CDEV_IOC_SEND_RESPONSE       _IOW('#', 0x04, struct fw_cdev_send_response)
#define FW_CDEV_IOC_INITIATE_BUS_RESET  _IOW('#', 0x05, struct fw_cdev_initiate_bus_reset)
#define FW_CDEV_IOC_ADD_DESCRIPTOR     _IOWR('#', 0x06, struct fw_cdev_add_descriptor)
#define FW_CDEV_IOC_REMOVE_DESCRIPTOR   _IOW('#', 0x07, struct fw_cdev_remove_descriptor)
#define FW_CDEV_IOC_CREATE_ISO_CONTEXT _IOWR('#', 0x08, struct fw_cdev_create_iso_context)
#define FW_CDEV_IOC_QUEUE_ISO          _IOWR('#', 0x09, struct fw_cdev_queue_iso)
#define FW_CDEV_IOC_START_ISO           _IOW('#', 0x0a, struct fw_cdev_start_iso)
#define FW_CDEV_IOC_STOP_ISO            _IOW('#', 0x0b, struct fw_cdev_stop_iso)
#define FW_CDEV_IOC_GET_CYCLE_TIMER     _IOR('#', 0x0c, struct fw_cdev_get_cycle_timer)
#define FW_CDEV_IOC_ALLOCATE_ISO_RESOURCE       _IOWR('#', 0x0d, struct fw_cdev_allocate_iso_resource)
#define FW_CDEV_IOC_DEALLOCATE_ISO_RESOURCE      _IOW('#', 0x0e, struct fw_cdev_deallocate)
#define FW_CDEV_IOC_ALLOCATE_ISO_RESOURCE_ONCE   _IOW('#', 0x0f, struct fw_cdev_allocate_iso_resource)
#define FW_CDEV_IOC_DEALLOCATE_ISO_RESOURCE_ONCE _IOW('#', 0x10, struct fw_cdev_allocate_iso_resource)
#define FW_CDEV_IOC_GET_SPEED                     _IO('#', 0x11)
#define FW_CDEV_IOC_SEND_BROADCAST_REQUEST       _IOW('#', 0x12, struct fw_cdev_send_request)
#define FW_CDEV_IOC_SEND_STREAM_PACKET           _IOW('#', 0x13, struct fw_cdev_send_stream_packet)
#define FW_CDEV_IOC_GET_CYCLE_TIMER2   _IOWR('#', 0x14, struct fw_cdev_get_cycle_timer2)
#define FW_CDEV_IOC_SEND_PHY_PACKET    _IOWR('#', 0x15, struct fw_cdev_send_phy_packet)
#define FW_CDEV_IOC_RECEIVE_PHY_PACKETS _IOW('#', 0x16, struct fw_cdev_receive_phy_packets)
#define FW_CDEV_IOC_SET_ISO_CHANNELS    _IOW('#', 0x17, struct fw_cdev_set_iso_channels)
#define FW_CDEV_VERSION 3
struct fw_cdev_get_info ;
struct fw_cdev_send_request ;
struct fw_cdev_send_response ;
struct fw_cdev_allocate ;
struct fw_cdev_deallocate ;
#define FW_CDEV_LONG_RESET	0
#define FW_CDEV_SHORT_RESET	1
struct fw_cdev_initiate_bus_reset ;
struct fw_cdev_add_descriptor ;
struct fw_cdev_remove_descriptor ;
#define FW_CDEV_ISO_CONTEXT_TRANSMIT			0
#define FW_CDEV_ISO_CONTEXT_RECEIVE			1
#define FW_CDEV_ISO_CONTEXT_RECEIVE_MULTICHANNEL	2
struct fw_cdev_create_iso_context ;
struct fw_cdev_set_iso_channels ;
#define FW_CDEV_ISO_PAYLOAD_LENGTH(v)	(v)
#define FW_CDEV_ISO_INTERRUPT		(1 << 16)
#define FW_CDEV_ISO_SKIP		(1 << 17)
#define FW_CDEV_ISO_SYNC		(1 << 17)
#define FW_CDEV_ISO_TAG(v)		((v) << 18)
#define FW_CDEV_ISO_SY(v)		((v) << 20)
#define FW_CDEV_ISO_HEADER_LENGTH(v)	((v) << 24)
struct fw_cdev_iso_packet ;
struct fw_cdev_queue_iso ;
#define FW_CDEV_ISO_CONTEXT_MATCH_TAG0		 1
#define FW_CDEV_ISO_CONTEXT_MATCH_TAG1		 2
#define FW_CDEV_ISO_CONTEXT_MATCH_TAG2		 4
#define FW_CDEV_ISO_CONTEXT_MATCH_TAG3		 8
#define FW_CDEV_ISO_CONTEXT_MATCH_ALL_TAGS	15
struct fw_cdev_start_iso ;
struct fw_cdev_stop_iso ;
struct fw_cdev_get_cycle_timer ;
struct fw_cdev_get_cycle_timer2 ;
struct fw_cdev_allocate_iso_resource ;
struct fw_cdev_send_stream_packet ;
struct fw_cdev_send_phy_packet ;
struct fw_cdev_receive_phy_packets ;
