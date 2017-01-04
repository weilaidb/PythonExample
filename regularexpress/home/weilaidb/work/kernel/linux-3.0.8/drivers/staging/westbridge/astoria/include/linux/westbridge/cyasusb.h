#define _INCLUDED_CYASUSB_H_
#if !defined(__doxygen__)
#define CY_AS_MAX_USB_DESCRIPTOR_SIZE	(128)
typedef struct cy_as_usb_inquiry_data  cy_as_usb_inquiry_data;
typedef struct cy_as_usb_unknown_command_data  cy_as_usb_unknown_command_data;
typedef struct cy_as_usb_start_stop_data  cy_as_usb_start_stop_data;
typedef enum cy_as_usb_mass_storage_enum  cy_as_usb_mass_storage_enum;
typedef enum cy_as_usb_desc_type  cy_as_usb_desc_type;
typedef enum cy_as_usb_end_point_dir  cy_as_usb_end_point_dir;
typedef enum cy_as_usb_end_point_type  cy_as_usb_end_point_type;
typedef struct cy_as_usb_enum_control  cy_as_usb_enum_control;
typedef struct cy_as_usb_end_point_config  cy_as_usb_end_point_config;
typedef enum cy_as_usb_m_s_type_t  cy_as_usb_m_s_type_t;
typedef enum cy_as_usb_event  cy_as_usb_event;
typedef void (*cy_as_usb_event_callback)(
cy_as_device_handle			handle,
cy_as_usb_event			ev,
void *evdata
);
typedef void (*cy_as_usb_io_callback)(
cy_as_device_handle	handle,
cy_as_end_point_number_t ep,
uint32_t count,
void *buffer,
cy_as_return_status_t status
);
typedef void (*cy_as_usb_function_callback)(
cy_as_device_handle			handle,
cy_as_return_status_t			status,
uint32_t				client
);
EXTERN cy_as_return_status_t
cy_as_usb_start(
cy_as_device_handle		handle,
cy_as_function_callback		cb,
uint32_t			client
);
EXTERN cy_as_return_status_t
cy_as_usb_stop(
cy_as_device_handle		handle,
cy_as_function_callback		cb,
uint32_t			client
);
EXTERN cy_as_return_status_t
cy_as_usb_register_callback(
cy_as_device_handle		handle,
cy_as_usb_event_callback callback
);
EXTERN cy_as_return_status_t
cy_as_usb_connect(
cy_as_device_handle		handle,
cy_as_function_callback	cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_usb_disconnect(
cy_as_device_handle		handle,
cy_as_function_callback	cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_usb_set_enum_config(
cy_as_device_handle		handle,
cy_as_usb_enum_control *config_p,
cy_as_function_callback	cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_usb_get_enum_config(
cy_as_device_handle		handle,
cy_as_usb_enum_control *config_p,
cy_as_function_callback	cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_usb_set_descriptor(
cy_as_device_handle		handle,
cy_as_usb_desc_type	type,
uint8_t	index,
void *desc_p,
uint16_t length,
cy_as_function_callback		cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_usb_clear_descriptors(
cy_as_device_handle		handle,
cy_as_function_callback	cb,
uint32_t client
);
typedef struct cy_as_get_descriptor_data  cy_as_get_descriptor_data;
EXTERN cy_as_return_status_t
cy_as_usb_get_descriptor(
cy_as_device_handle		handle,
cy_as_usb_desc_type	type,
uint8_t	index,
cy_as_get_descriptor_data *data,
cy_as_function_callback	cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_usb_set_physical_configuration(
cy_as_device_handle		handle,
uint8_t			config
);
EXTERN cy_as_return_status_t
cy_as_usb_set_end_point_config(
cy_as_device_handle	handle,
cy_as_end_point_number_t ep,
cy_as_usb_end_point_config *config_p
);
EXTERN cy_as_return_status_t
cy_as_usb_get_end_point_config(
cy_as_device_handle		handle,
cy_as_end_point_number_t ep,
cy_as_usb_end_point_config *config_p
);
EXTERN cy_as_return_status_t
cy_as_usb_commit_config(
cy_as_device_handle		handle,
cy_as_function_callback		cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_usb_read_data(
cy_as_device_handle		handle,
cy_as_end_point_number_t		ep,
cy_bool				pktread,
uint32_t			dsize,
uint32_t *dataread,
void *data
);
EXTERN cy_as_return_status_t
cy_as_usb_read_data_async(
cy_as_device_handle		handle,
cy_as_end_point_number_t		ep,
cy_bool		pktread,
uint32_t	dsize,
void *data,
cy_as_usb_io_callback		callback
);
EXTERN cy_as_return_status_t
cy_as_usb_write_data(
cy_as_device_handle		handle,
cy_as_end_point_number_t		ep,
uint32_t			dsize,
void *data
);
EXTERN cy_as_return_status_t
cy_as_usb_write_data_async(
cy_as_device_handle		handle,
cy_as_end_point_number_t ep,
uint32_t dsize,
void *data,
cy_bool	spacket,
cy_as_usb_io_callback		callback
);
EXTERN cy_as_return_status_t
cy_as_usb_cancel_async(
cy_as_device_handle		handle,
cy_as_end_point_number_t		ep
);
EXTERN cy_as_return_status_t
cy_as_usb_set_stall(
cy_as_device_handle		handle,
cy_as_end_point_number_t		ep,
cy_as_function_callback		cb,
uint32_t			client
);
EXTERN cy_as_return_status_t
cy_as_usb_clear_stall(
cy_as_device_handle		handle,
cy_as_end_point_number_t		ep,
cy_as_function_callback		cb,
uint32_t				client
);
EXTERN cy_as_return_status_t
cy_as_usb_get_stall(
cy_as_device_handle		handle,
cy_as_end_point_number_t		ep,
cy_bool *stall_p,
cy_as_function_callback		cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_usb_set_nak(
cy_as_device_handle		handle,
cy_as_end_point_number_t		ep,
cy_as_function_callback		cb,
uint32_t			client
);
EXTERN cy_as_return_status_t
cy_as_usb_clear_nak(
cy_as_device_handle	handle,
cy_as_end_point_number_t	ep,
cy_as_function_callback	cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_usb_get_nak(
cy_as_device_handle			handle,
cy_as_end_point_number_t		ep,
cy_bool *nak_p,
cy_as_function_callback		cb,
uint32_t					client
);
EXTERN cy_as_return_status_t
cy_as_usb_signal_remote_wakeup(
cy_as_device_handle			handle,
cy_as_function_callback		cb,
uint32_t					client
);
EXTERN cy_as_return_status_t
cy_as_usb_set_m_s_report_threshold(
cy_as_device_handle handle,
uint32_t wr_sectors,
uint32_t rd_sectors,
cy_as_function_callback		cb,
uint32_t					client
);
EXTERN cy_as_return_status_t
cy_as_usb_select_m_s_partitions(
cy_as_device_handle	handle,
cy_as_bus_number_t bus,
uint32_t device,
cy_as_usb_m_s_type_t type,
cy_as_function_callback	cb,
uint32_t client
);
extern cy_as_media_type
cy_as_storage_get_media_from_address(uint16_t v);
extern cy_as_bus_number_t
cy_as_storage_get_bus_from_address(uint16_t v);
extern uint32_t
cy_as_storage_get_device_from_address(uint16_t v);
