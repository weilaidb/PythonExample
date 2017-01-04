static void
cy_as_mtp_func_callback(cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t stat);
static cy_as_return_status_t
is_mtp_active(cy_as_device *dev_p)
static void
my_mtp_request_callback(cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *resp_p,
cy_as_return_status_t ret)
static cy_as_return_status_t
my_handle_response_no_data(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p)
static cy_as_return_status_t
my_handle_response_mtp_start(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_as_return_status_t ret)
cy_as_return_status_t
cy_as_mtp_start(cy_as_device_handle handle,
cy_as_mtp_event_callback event_c_b,
cy_as_function_callback cb,
uint32_t client
)
EXPORT_SYMBOL(cy_as_mtp_start);
static cy_as_return_status_t
my_handle_response_mtp_stop(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_as_return_status_t ret)
cy_as_return_status_t
cy_as_mtp_stop(cy_as_device_handle handle,
cy_as_function_callback cb,
uint32_t client
)
static void
mtp_write_callback(
cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t ret)
static void
async_write_request_callback(cy_as_device *dev_p,
cy_as_end_point_number_t ep, void *buf_p, uint32_t size,
cy_as_return_status_t err)
static void
sync_mtp_callback(cy_as_device *dev_p, cy_as_end_point_number_t ep,
void *buf_p, uint32_t size, cy_as_return_status_t err)
static cy_as_return_status_t
cy_as_mtp_operation(cy_as_device *dev_p,
cy_as_mtp_block_table *blk_table,
uint32_t num_bytes,
uint32_t transaction_id,
cy_as_function_callback cb,
uint32_t client,
uint8_t rqttype
)
cy_as_return_status_t
cy_as_mtp_init_send_object(cy_as_device_handle handle,
cy_as_mtp_block_table *blk_table,
uint32_t num_bytes,
cy_as_function_callback cb,
uint32_t client
)
EXPORT_SYMBOL(cy_as_mtp_init_send_object);
cy_as_return_status_t
cy_as_mtp_init_get_object(cy_as_device_handle handle,
cy_as_mtp_block_table *blk_table,
uint32_t num_bytes,
uint32_t transaction_id,
cy_as_function_callback cb,
uint32_t client
)
EXPORT_SYMBOL(cy_as_mtp_init_get_object);
static cy_as_return_status_t
my_handle_response_cancel_send_object(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_as_return_status_t ret)
cy_as_return_status_t
cy_as_mtp_cancel_send_object(cy_as_device_handle handle,
cy_as_function_callback cb,
uint32_t client
)
EXPORT_SYMBOL(cy_as_mtp_cancel_send_object);
static cy_as_return_status_t
my_handle_response_cancel_get_object(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_as_return_status_t ret)
cy_as_return_status_t
cy_as_mtp_cancel_get_object(cy_as_device_handle handle,
cy_as_function_callback cb,
uint32_t client
)
EXPORT_SYMBOL(cy_as_mtp_cancel_get_object);
cy_as_return_status_t
cy_as_mtp_send_block_table(cy_as_device_handle handle,
cy_as_mtp_block_table *blk_table,
cy_as_function_callback cb,
uint32_t client)
static void
cy_as_mtp_func_callback(cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t stat)
cy_as_return_status_t
cy_as_mtp_storage_only_start(cy_as_device_handle handle)
EXPORT_SYMBOL(cy_as_mtp_storage_only_start);
cy_as_return_status_t
cy_as_mtp_storage_only_stop(cy_as_device_handle handle,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_mtp_storage_only_stop);
