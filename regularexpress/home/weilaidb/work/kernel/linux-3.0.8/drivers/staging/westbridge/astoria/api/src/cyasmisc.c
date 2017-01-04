static cy_as_device *g_device_list;
static uint8_t debug_level;
void
cy_as_misc_set_log_level(uint8_t level)
void
cy_as_log_debug_message(int level, const char *str)
#define cy_as_check_device_ready(dev_p)			\
cy_as_device *
cy_as_device_find_from_tag(cy_as_hal_device_tag tag)
static void
cy_as_bus_from_media_type(cy_as_media_type type,
cy_as_bus_number_t *bus)
static cy_as_return_status_t
my_handle_response_no_data(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p)
cy_as_return_status_t
cy_as_misc_create_device(cy_as_device_handle *handle_p,
cy_as_hal_device_tag tag)
cy_as_return_status_t
cy_as_misc_destroy_device(cy_as_device_handle handle)
static void
cy_as_setup_endian_mode(cy_as_device *dev_p)
cy_as_return_status_t
cy_as_misc_in_standby(cy_as_device_handle handle, cy_bool *standby)
static void
cy_as_misc_func_callback(cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t ret);
static void
my_misc_callback(cy_as_device *dev_p, uint8_t context,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *resp_p,
cy_as_return_status_t ret)
static cy_bool
is_valid_silicon_id(uint16_t v)
cy_as_return_status_t
cy_as_misc_configure_device(cy_as_device_handle handle,
cy_as_device_config *config_p)
static void
my_dma_callback(cy_as_device *dev_p,
cy_as_end_point_number_t ep,
void *mem_p,
uint32_t			  size,
cy_as_return_status_t	ret
)
cy_as_return_status_t
cy_as_misc_download_firmware(cy_as_device_handle handle,
const void *mem_p,
uint16_t size,
cy_as_function_callback cb,
uint32_t client)
static cy_as_return_status_t
my_handle_response_get_firmware_version(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_as_get_firmware_version_data *data_p)
cy_as_return_status_t
cy_as_misc_get_firmware_version(cy_as_device_handle handle,
cy_as_get_firmware_version_data *data,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_misc_get_firmware_version);
static cy_as_return_status_t
my_handle_response_read_m_c_u_register(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
uint8_t *data_p)
static cy_as_return_status_t
my_handle_response_get_gpio_value(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
uint8_t *data_p)
cy_as_return_status_t cy_as_misc_set_sd_power_polarity(
cy_as_device_handle handle,
cy_as_misc_signal_polarity polarity,
cy_as_function_callback cb,
uint32_t client)
cy_as_return_status_t
cy_as_misc_read_m_c_u_register(cy_as_device_handle handle,
uint16_t address,
uint8_t *value,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_misc_read_m_c_u_register);
cy_as_return_status_t
cy_as_misc_write_m_c_u_register(cy_as_device_handle handle,
uint16_t address,
uint8_t mask,
uint8_t value,
cy_as_function_callback cb,
uint32_t client)
cy_as_return_status_t
my_handle_response_reset(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_as_reset_type type)
cy_as_return_status_t
cy_as_misc_reset(cy_as_device_handle handle,
cy_as_reset_type type,
cy_bool flush,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_misc_reset);
static cy_as_return_status_t
get_unallocated_resource(cy_as_device *dev_p, cy_as_resource_type resource)
static cy_as_return_status_t
my_handle_response_acquire_resource(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_as_resource_type *resource)
cy_as_return_status_t
cy_as_misc_acquire_resource(cy_as_device_handle handle,
cy_as_resource_type *resource,
cy_bool force,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_misc_acquire_resource);
cy_as_return_status_t
cy_as_misc_release_resource(cy_as_device_handle handle,
cy_as_resource_type resource)
EXPORT_SYMBOL(cy_as_misc_release_resource);
cy_as_return_status_t
cy_as_misc_set_trace_level(cy_as_device_handle handle,
uint8_t level,
cy_as_bus_number_t bus,
uint32_t device,
uint32_t unit,
cy_as_function_callback cb,
uint32_t client)
cy_as_return_status_t
cy_as_misc_heart_beat_control(cy_as_device_handle handle,
cy_bool enable,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_misc_heart_beat_control);
static cy_as_return_status_t
my_set_sd_clock_freq(
cy_as_device		  *dev_p,
uint8_t			  card_type,
uint8_t			  setting,
cy_as_function_callback cb,
uint32_t			 client)
cy_as_return_status_t
cy_as_misc_set_low_speed_sd_freq(
cy_as_device_handle	 handle,
cy_as_low_speed_sd_freq   setting,
cy_as_function_callback cb,
uint32_t			 client)
EXPORT_SYMBOL(cy_as_misc_set_low_speed_sd_freq);
cy_as_return_status_t
cy_as_misc_set_high_speed_sd_freq(
cy_as_device_handle	 handle,
cy_as_high_speed_sd_freq  setting,
cy_as_function_callback cb,
uint32_t			 client)
EXPORT_SYMBOL(cy_as_misc_set_high_speed_sd_freq);
cy_as_return_status_t
cy_as_misc_get_gpio_value(cy_as_device_handle handle,
cy_as_misc_gpio pin,
uint8_t *value,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_misc_get_gpio_value);
cy_as_return_status_t
cy_as_misc_set_gpio_value(cy_as_device_handle handle,
cy_as_misc_gpio pin,
uint8_t value,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_misc_set_gpio_value);
static cy_as_return_status_t
my_enter_standby(cy_as_device *dev_p, cy_bool pin)
static cy_as_return_status_t
my_handle_response_enter_standby(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_bool pin)
cy_as_return_status_t
cy_as_misc_enter_standby(cy_as_device_handle handle,
cy_bool pin,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_misc_enter_standby);
cy_as_return_status_t
cy_as_misc_enter_standby_e_x_u(cy_as_device_handle handle,
cy_bool pin,
cy_bool uvalid_special,
cy_as_function_callback cb,
uint32_t client)
cy_as_return_status_t
cy_as_misc_leave_standby(cy_as_device_handle handle,
cy_as_resource_type resource)
EXPORT_SYMBOL(cy_as_misc_leave_standby);
cy_as_return_status_t
cy_as_misc_register_callback(
cy_as_device_handle handle,
cy_as_misc_event_callback  callback
)
cy_as_return_status_t
cy_as_misc_storage_changed(cy_as_device_handle handle,
cy_as_function_callback   cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_misc_storage_changed);
cy_as_return_status_t
cy_as_misc_enter_suspend(
cy_as_device_handle	 handle,
cy_bool			   usb_wakeup_en,
cy_bool			   gpio_wakeup_en,
cy_as_function_callback cb,
uint32_t			 client)
EXPORT_SYMBOL(cy_as_misc_enter_suspend);
cy_as_return_status_t
cy_as_misc_leave_suspend(
cy_as_device_handle	 handle,
cy_as_function_callback cb,
uint32_t			 client)
EXPORT_SYMBOL(cy_as_misc_leave_suspend);
cy_as_return_status_t
cy_as_misc_reserve_l_n_a_boot_area(cy_as_device_handle handle,
uint8_t numzones,
cy_as_function_callback cb,
uint32_t client)
cy_as_func_c_b_node*
cy_as_create_func_c_b_node_data(cy_as_function_callback cb,
uint32_t client,
cy_as_funct_c_b_type type,
void *data)
cy_as_func_c_b_node*
cy_as_create_func_c_b_node(cy_as_function_callback cb,
uint32_t client)
void
cy_as_destroy_func_c_b_node(cy_as_func_c_b_node *node)
cy_as_usb_func_c_b_node*
cy_as_create_usb_func_c_b_node(
cy_as_usb_function_callback cb, uint32_t client)
void
cy_as_destroy_usb_func_c_b_node(cy_as_usb_func_c_b_node *node)
cy_as_usb_io_c_b_node*
cy_as_create_usb_io_c_b_node(cy_as_usb_io_callback cb)
void
cy_as_destroy_usb_io_c_b_node(cy_as_usb_io_c_b_node *node)
cy_as_storage_io_c_b_node*
cy_as_create_storage_io_c_b_node(cy_as_storage_callback cb,
cy_as_media_type media, uint32_t device_index,
uint32_t unit, uint32_t block_addr, cy_as_oper_type oper,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p)
void
cy_as_destroy_storage_io_c_b_node(cy_as_storage_io_c_b_node *node)
cy_as_c_b_queue *
cy_as_create_c_b_queue(cy_as_c_b_node_type type)
void
cy_as_destroy_c_b_queue(cy_as_c_b_queue *queue)
void
cy_as_insert_c_b_node(cy_as_c_b_queue *queue_p, void*cbnode)
void
cy_as_remove_c_b_tail_node(cy_as_c_b_queue *queue_p)
void
cy_as_remove_c_b_node(cy_as_c_b_queue *queue_p)
void my_print_func_c_b_node(cy_as_func_c_b_node *node)
void my_print_c_b_queue(cy_as_c_b_queue *queue_p)
void
cy_as_clear_c_b_queue(cy_as_c_b_queue *queue_p)
cy_as_return_status_t
cy_as_misc_send_request(cy_as_device *dev_p,
cy_as_function_callback cb,
uint32_t client,
cy_as_funct_c_b_type type,
void *data,
cy_as_c_b_queue *queue,
uint16_t req_type,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_as_response_callback rcb)
void
cy_as_misc_cancel_ex_requests(cy_as_device *dev_p)
static void
cy_as_misc_func_callback(cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t stat)
