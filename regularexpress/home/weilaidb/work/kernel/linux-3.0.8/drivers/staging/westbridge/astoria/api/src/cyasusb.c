static cy_as_return_status_t
cy_as_usb_ack_setup_packet(
cy_as_device_handle handle,
cy_as_function_callback	cb,
uint32_t client
);
static void
cy_as_usb_func_callback(
cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t ret);
static void
cy_as_usb_reset_e_p0_state(cy_as_device *dev_p)
static cy_as_return_status_t
is_usb_active(cy_as_device *dev_p)
static void
usb_ack_callback(cy_as_device_handle h,
cy_as_return_status_t status,
uint32_t client,
cy_as_funct_c_b_type  type,
void *data)
static void
my_usb_request_callback_usb_event(cy_as_device *dev_p,
cy_as_ll_request_response *req_p)
static void
my_usb_request_callback_usb_data(cy_as_device *dev_p,
cy_as_ll_request_response *req_p)
static void
my_usb_request_callback_inquiry(cy_as_device *dev_p,
cy_as_ll_request_response *req_p)
static void
my_usb_request_callback_start_stop(cy_as_device *dev_p,
cy_as_ll_request_response *req_p)
static void
my_usb_request_callback_uknown_c_b_w(cy_as_device *dev_p,
cy_as_ll_request_response *req_p)
static void
my_usb_request_callback_m_s_c_progress(cy_as_device *dev_p,
cy_as_ll_request_response *req_p)
static void
my_usb_request_callback(cy_as_device *dev_p, uint8_t context,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *resp_p,
cy_as_return_status_t ret)
static cy_as_return_status_t
my_handle_response_usb_start(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_as_return_status_t ret)
cy_as_return_status_t
cy_as_usb_start(cy_as_device_handle handle,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_usb_start);
void
cy_as_usb_reset(cy_as_device *dev_p)
void
cy_as_usb_cleanup(cy_as_device *dev_p)
static cy_as_return_status_t
my_handle_response_usb_stop(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_as_return_status_t ret)
cy_as_return_status_t
cy_as_usb_stop(cy_as_device_handle handle,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_usb_stop);
cy_as_return_status_t
cy_as_usb_register_callback(cy_as_device_handle handle,
cy_as_usb_event_callback callback)
EXPORT_SYMBOL(cy_as_usb_register_callback);
static cy_as_return_status_t
my_handle_response_no_data(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p)
static cy_as_return_status_t
my_handle_response_connect(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_as_return_status_t ret)
cy_as_return_status_t
cy_as_usb_connect(cy_as_device_handle handle,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_usb_connect);
static cy_as_return_status_t
my_handle_response_disconnect(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_as_return_status_t ret)
cy_as_return_status_t
cy_as_usb_disconnect(cy_as_device_handle handle,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_usb_disconnect);
static cy_as_return_status_t
my_handle_response_set_enum_config(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p)
static cy_as_return_status_t
my_usb_set_enum_config(cy_as_device *dev_p,
uint8_t bus_mask,
uint8_t media_mask,
cy_bool use_antioch_enumeration,
uint8_t mass_storage_interface,
uint8_t mtp_interface,
cy_bool mass_storage_callbacks,
cy_as_function_callback cb,
uint32_t client)
cy_as_return_status_t
cy_as_usb_set_enum_config(cy_as_device_handle handle,
cy_as_usb_enum_control *config_p,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_usb_set_enum_config);
static cy_as_return_status_t
my_handle_response_get_enum_config(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
void *config_p)
static cy_as_return_status_t
my_usb_get_enum_config(cy_as_device_handle handle,
uint16_t req_flags,
void *config_p,
cy_as_function_callback cb,
uint32_t client)
cy_as_return_status_t
cy_as_usb_get_enum_config(cy_as_device_handle handle,
cy_as_usb_enum_control *config_p,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_usb_get_enum_config);
cy_as_return_status_t
cy_as_usb_set_descriptor(cy_as_device_handle handle,
cy_as_usb_desc_type type,
uint8_t index,
void *desc_p,
uint16_t length,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_usb_set_descriptor);
cy_as_return_status_t
cy_as_usb_clear_descriptors(cy_as_device_handle handle,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_usb_clear_descriptors);
static cy_as_return_status_t
my_handle_response_get_descriptor(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_as_get_descriptor_data *data)
cy_as_return_status_t
cy_as_usb_get_descriptor(cy_as_device_handle handle,
cy_as_usb_desc_type type,
uint8_t index,
cy_as_get_descriptor_data *data,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_usb_get_descriptor);
cy_as_return_status_t
cy_as_usb_set_physical_configuration(cy_as_device_handle handle,
uint8_t config)
EXPORT_SYMBOL(cy_as_usb_set_physical_configuration);
static cy_bool
is_physical_valid(uint8_t config, cy_as_end_point_number_t ep)
cy_as_return_status_t
cy_as_usb_set_end_point_config(cy_as_device_handle handle,
cy_as_end_point_number_t ep, cy_as_usb_end_point_config *config_p)
EXPORT_SYMBOL(cy_as_usb_set_end_point_config);
cy_as_return_status_t
cy_as_usb_get_end_point_config(cy_as_device_handle handle,
cy_as_end_point_number_t ep, cy_as_usb_end_point_config *config_p)
EXPORT_SYMBOL(cy_as_usb_get_end_point_config);
cy_as_return_status_t
cy_as_usb_commit_config(cy_as_device_handle handle,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_usb_commit_config);
static void
sync_request_callback(cy_as_device *dev_p,
cy_as_end_point_number_t ep, void *buf_p,
uint32_t size, cy_as_return_status_t err)
static void
async_read_request_callback(cy_as_device *dev_p,
cy_as_end_point_number_t ep, void *buf_p,
uint32_t size, cy_as_return_status_t err)
static void
async_write_request_callback(cy_as_device *dev_p,
cy_as_end_point_number_t ep, void *buf_p,
uint32_t size, cy_as_return_status_t err)
static void
my_turbo_rqt_callback(cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t stat)
static cy_as_return_status_t
my_send_turbo_switch(cy_as_device *dev_p, uint32_t size, cy_bool pktread)
cy_as_return_status_t
cy_as_usb_read_data(cy_as_device_handle handle,
cy_as_end_point_number_t ep, cy_bool pktread,
uint32_t dsize, uint32_t *dataread, void *data)
EXPORT_SYMBOL(cy_as_usb_read_data);
cy_as_return_status_t
cy_as_usb_read_data_async(cy_as_device_handle handle,
cy_as_end_point_number_t ep, cy_bool pktread,
uint32_t dsize, void *data, cy_as_usb_io_callback cb)
EXPORT_SYMBOL(cy_as_usb_read_data_async);
cy_as_return_status_t
cy_as_usb_write_data(cy_as_device_handle handle,
cy_as_end_point_number_t ep, uint32_t dsize, void *data)
EXPORT_SYMBOL(cy_as_usb_write_data);
static void
mtp_write_callback(
cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t ret)
cy_as_return_status_t
cy_as_usb_write_data_async(cy_as_device_handle handle,
cy_as_end_point_number_t ep, uint32_t dsize, void *data,
cy_bool spacket, cy_as_usb_io_callback cb)
EXPORT_SYMBOL(cy_as_usb_write_data_async);
static void
my_usb_cancel_async_callback(
cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t ret)
cy_as_return_status_t
cy_as_usb_cancel_async(cy_as_device_handle handle,
cy_as_end_point_number_t ep)
EXPORT_SYMBOL(cy_as_usb_cancel_async);
static void
cy_as_usb_ack_callback(
cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t ret)
static cy_as_return_status_t
cy_as_usb_ack_setup_packet(cy_as_device_handle handle,
cy_as_function_callback	  cb,
uint32_t client)
static void
cy_as_usb_flush_logical_e_p(
cy_as_device *dev_p,
uint16_t	ep)
static cy_as_return_status_t
cy_as_usb_nak_stall_request(cy_as_device_handle handle,
cy_as_end_point_number_t ep,
uint16_t request,
cy_bool state,
cy_as_usb_function_callback cb,
cy_as_function_callback fcb,
uint32_t client)
static cy_as_return_status_t
my_handle_response_get_stall(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_bool *state_p)
static cy_as_return_status_t
my_handle_response_get_nak(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_bool *state_p)
static cy_as_return_status_t
cy_as_usb_get_nak_stall(cy_as_device_handle handle,
cy_as_end_point_number_t ep,
uint16_t request,
uint16_t response,
cy_bool *state_p,
cy_as_function_callback cb,
uint32_t client)
cy_as_return_status_t
cy_as_usb_set_nak(cy_as_device_handle handle,
cy_as_end_point_number_t ep,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_usb_set_nak);
cy_as_return_status_t
cy_as_usb_clear_nak(cy_as_device_handle handle,
cy_as_end_point_number_t ep,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_usb_clear_nak);
cy_as_return_status_t
cy_as_usb_get_nak(cy_as_device_handle handle,
cy_as_end_point_number_t ep,
cy_bool *nak_p,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_usb_get_nak);
cy_as_return_status_t
cy_as_usb_set_stall(cy_as_device_handle handle,
cy_as_end_point_number_t ep,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_usb_set_stall);
cy_as_return_status_t
cy_as_usb_clear_stall(cy_as_device_handle handle,
cy_as_end_point_number_t ep,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_usb_clear_stall);
cy_as_return_status_t
cy_as_usb_get_stall(cy_as_device_handle handle,
cy_as_end_point_number_t ep,
cy_bool *stall_p,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_usb_get_stall);
cy_as_return_status_t
cy_as_usb_signal_remote_wakeup(cy_as_device_handle handle,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_usb_signal_remote_wakeup);
cy_as_return_status_t
cy_as_usb_set_m_s_report_threshold(cy_as_device_handle handle,
uint32_t wr_sectors,
uint32_t rd_sectors,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_usb_set_m_s_report_threshold);
cy_as_return_status_t
cy_as_usb_select_m_s_partitions(
cy_as_device_handle		handle,
cy_as_bus_number_t		 bus,
uint32_t				device,
cy_as_usb_m_s_type_t		 type,
cy_as_function_callback	cb,
uint32_t				client)
EXPORT_SYMBOL(cy_as_usb_select_m_s_partitions);
static void
cy_as_usb_func_callback(
cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t stat)
