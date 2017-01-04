#define _INCLUDED_CYASMISC_H_
#define CY_AS_LEAVE_STANDBY_DELAY_CLOCK	(1)
#define CY_AS_RESET_DELAY_CLOCK	(1)
#define CY_AS_LEAVE_STANDBY_DELAY_CRYSTAL (5)
#define CY_AS_RESET_DELAY_CRYSTAL (5)
#define	CY_AS_MAX_BUSES	(2)
#define	CY_AS_MAX_STORAGE_DEVICES (1)
#define CY_AS_FUNCTCBTYPE_DATA_MASK (0x60000000U)
#define CY_AS_FUNCTCBTYPE_TYPE_MASK (0x1FFFFFFFU)
#define cy_as_funct_c_b_type_get_type(t) \
((cy_as_funct_c_b_type)((t) & CY_AS_FUNCTCBTYPE_TYPE_MASK))
#define cy_as_funct_c_b_type_contains_data(t) \
(((cy_as_funct_c_b_type)((t) & \
CY_AS_FUNCTCBTYPE_DATA_MASK)) == CY_FUNCT_CB_DATA)
typedef void *cy_as_device_handle;
typedef enum cy_as_device_dack_mode  cy_as_device_dack_mode;
typedef struct cy_as_device_config  cy_as_device_config;
typedef enum cy_as_resource_type  cy_as_resource_type;
typedef enum cy_as_reset_type  cy_as_reset_type;
typedef enum cy_as_misc_signal_polarity  cy_as_misc_signal_polarity;
typedef enum cy_as_funct_c_b_type  cy_as_funct_c_b_type;
typedef void (*cy_as_function_callback)(
cy_as_device_handle	handle,
cy_as_return_status_t	status,
uint32_t		client,
cy_as_funct_c_b_type	type,
void	*data);
typedef enum cy_as_misc_event_type  cy_as_misc_event_type;
typedef void (*cy_as_misc_event_callback)(
cy_as_device_handle		handle,
cy_as_misc_event_type		ev,
void *evdata
);
enum ;
typedef enum  cy_as_misc_gpio;
typedef enum cy_as_low_speed_sd_freq  cy_as_low_speed_sd_freq;
typedef enum cy_as_high_speed_sd_freq  cy_as_high_speed_sd_freq;
typedef struct cy_as_get_firmware_version_data  cy_as_get_firmware_version_data;
EXTERN cy_as_return_status_t
cy_as_misc_create_device(
cy_as_device_handle *handle_p,
cy_as_hal_device_tag		tag
);
EXTERN cy_as_return_status_t
cy_as_misc_destroy_device(
cy_as_device_handle		handle
);
EXTERN cy_as_return_status_t
cy_as_misc_configure_device(
cy_as_device_handle		handle,
cy_as_device_config		*config_p
);
EXTERN cy_as_return_status_t
cy_as_misc_in_standby(
cy_as_device_handle		handle,
cy_bool					*standby
);
EXTERN cy_as_return_status_t
cy_as_misc_download_firmware(
cy_as_device_handle	  handle,
const void			   *fw_p,
uint16_t			  size,
cy_as_function_callback  cb,
uint32_t			  client
);
EXTERN cy_as_return_status_t
cy_as_misc_get_firmware_version(
cy_as_device_handle	handle,
cy_as_get_firmware_version_data	*data,
cy_as_function_callback	cb,
uint32_t client
);
#if !defined(__doxygen__)
EXTERN cy_as_return_status_t
cy_as_misc_read_m_c_u_register(
cy_as_device_handle		handle,
uint16_t			address,
uint8_t				*value,
cy_as_function_callback		cb,
uint32_t			client
);
EXTERN cy_as_return_status_t
cy_as_misc_write_m_c_u_register(
cy_as_device_handle	handle,
uint16_t	address,
uint8_t		mask,
uint8_t		value,
cy_as_function_callback	cb,
uint32_t	client
);
EXTERN cy_as_return_status_t
cy_as_misc_reset(
cy_as_device_handle handle,
cy_as_reset_type type,
cy_bool flush,
cy_as_function_callback cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_misc_acquire_resource(
cy_as_device_handle	handle,
cy_as_resource_type	*resource,
cy_bool				force,
cy_as_function_callback cb,
uint32_t			client
);
EXTERN cy_as_return_status_t
cy_as_misc_release_resource(
cy_as_device_handle		handle,
cy_as_resource_type		resource
);
EXTERN cy_as_return_status_t
cy_as_misc_set_trace_level(
cy_as_device_handle	handle,
uint8_t	level,
cy_as_bus_number_t	bus,
uint32_t device,
uint32_t unit,
cy_as_function_callback		cb,
uint32_t			client
);
EXTERN cy_as_return_status_t
cy_as_misc_enter_standby_e_x_u(
cy_as_device_handle		handle,
cy_bool				pin,
cy_bool				uvalid_special,
cy_as_function_callback		cb,
uint32_t			client
);
EXTERN cy_as_return_status_t
cy_as_misc_enter_standby(cy_as_device_handle handle,
cy_bool pin,
cy_as_function_callback cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_misc_leave_standby(
cy_as_device_handle		handle,
cy_as_resource_type		resource
);
EXTERN cy_as_return_status_t
cy_as_misc_register_callback(
cy_as_device_handle		handle,
cy_as_misc_event_callback		callback
);
EXTERN void
cy_as_misc_set_log_level(
uint8_t	level
);
EXTERN cy_as_return_status_t
cy_as_misc_storage_changed(
cy_as_device_handle		handle,
cy_as_function_callback		cb,
uint32_t			client
);
EXTERN cy_as_return_status_t
cy_as_misc_heart_beat_control(
cy_as_device_handle	handle,
cy_bool	enable,
cy_as_function_callback		cb,
uint32_t			client
);
EXTERN cy_as_return_status_t
cy_as_misc_get_gpio_value(
cy_as_device_handle	handle,
cy_as_misc_gpio	pin,
uint8_t	*value,
cy_as_function_callback	cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_misc_set_gpio_value(
cy_as_device_handle	handle,
cy_as_misc_gpio	pin,
uint8_t	 value,
cy_as_function_callback	cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_misc_enter_suspend(
cy_as_device_handle	handle,
cy_bool	usb_wakeup_en,
cy_bool gpio_wakeup_en,
cy_as_function_callback	cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_misc_leave_suspend(
cy_as_device_handle	handle,
cy_as_function_callback	cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_misc_reserve_l_n_a_boot_area(
cy_as_device_handle	 handle,
uint8_t numzones,
cy_as_function_callback cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_misc_set_low_speed_sd_freq(
cy_as_device_handle	handle,
cy_as_low_speed_sd_freq	setting,
cy_as_function_callback	cb,
uint32_t	client
);
EXTERN cy_as_return_status_t
cy_as_misc_set_high_speed_sd_freq(
cy_as_device_handle	handle,
cy_as_high_speed_sd_freq setting,
cy_as_function_callback	cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_misc_set_sd_power_polarity(
cy_as_device_handle handle,
cy_as_misc_signal_polarity polarity,
cy_as_function_callback cb,
uint32_t client
);
