#define __INCLUDED_CYASUSB_DEP_H__
typedef struct cy_as_usb_inquiry_data_dep  cy_as_usb_inquiry_data_dep;
typedef struct cy_as_usb_unknown_command_data_dep  cy_as_usb_unknown_command_data_dep;
typedef struct cy_as_usb_start_stop_data_dep  cy_as_usb_start_stop_data_dep;
typedef struct cy_as_usb_enum_control_dep  cy_as_usb_enum_control_dep;
typedef void (*cy_as_usb_event_callback_dep)(
cy_as_device_handle			handle,
cy_as_usb_event			ev,
void *evdata
);
EXTERN cy_as_return_status_t
cy_as_usb_register_callback_dep(
cy_as_device_handle				handle,
cy_as_usb_event_callback_dep		callback
);
extern cy_as_return_status_t
cy_as_usb_set_enum_config_dep(
cy_as_device_handle			handle,
cy_as_usb_enum_control_dep *config_p,
cy_as_function_callback		cb,
uint32_t client
);
extern cy_as_return_status_t
cy_as_usb_get_enum_config_dep(
cy_as_device_handle			handle,
cy_as_usb_enum_control_dep *config_p,
cy_as_function_callback		cb,
uint32_t					client
);
extern cy_as_return_status_t
cy_as_usb_get_descriptor_dep(
cy_as_device_handle	handle,
cy_as_usb_desc_type		type,
uint8_t				index,
void *desc_p,
uint32_t *length_p
);
extern cy_as_return_status_t
cy_as_usb_set_stall_dep(
cy_as_device_handle		handle,
cy_as_end_point_number_t		ep,
cy_as_usb_function_callback		cb,
uint32_t			client
);
EXTERN cy_as_return_status_t
cy_as_usb_clear_stall_dep(
cy_as_device_handle		handle,
cy_as_end_point_number_t		ep,
cy_as_usb_function_callback		cb,
uint32_t			client
);
EXTERN cy_as_return_status_t
cy_as_usb_set_nak_dep(
cy_as_device_handle		handle,
cy_as_end_point_number_t		ep,
cy_as_usb_function_callback		cb,
uint32_t			client
);
EXTERN cy_as_return_status_t
cy_as_usb_clear_nak_dep(
cy_as_device_handle		handle,
cy_as_end_point_number_t		ep,
cy_as_usb_function_callback		cb,
uint32_t			client
);
EXTERN cy_as_return_status_t
cy_as_usb_select_m_s_partitions_dep(
cy_as_device_handle	handle,
cy_as_media_type	media,
uint32_t device,
cy_as_usb_m_s_type_t type,
cy_as_function_callback	 cb,
uint32_t client
);
