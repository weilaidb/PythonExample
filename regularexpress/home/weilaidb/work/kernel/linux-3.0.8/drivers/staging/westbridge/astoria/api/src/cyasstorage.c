cy_as_return_status_t
cy_an_map_bus_from_media_type(cy_as_device *dev_p,
cy_as_media_type type, cy_as_bus_number_t *bus)
static uint16_t
create_address(cy_as_bus_number_t bus, uint32_t device, uint8_t unit)
cy_as_media_type
cy_as_storage_get_media_from_address(uint16_t v)
cy_as_bus_number_t
cy_as_storage_get_bus_from_address(uint16_t v)
uint32_t
cy_as_storage_get_device_from_address(uint16_t v)
static uint8_t
get_unit_from_address(uint16_t v)
static cy_as_return_status_t
cy_as_map_bad_addr(uint16_t val)
static void
my_storage_request_callback(cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *resp_p,
cy_as_return_status_t ret)
static cy_as_return_status_t
is_storage_active(cy_as_device *dev_p)
static void
cy_as_storage_func_callback(cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t ret);
static cy_as_return_status_t
my_handle_response_no_data(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p)
static cy_as_return_status_t
my_handle_response_storage_start(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_as_return_status_t ret)
cy_as_return_status_t
cy_as_storage_start(cy_as_device_handle handle,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_storage_start);
static cy_as_return_status_t
my_handle_response_storage_stop(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_as_return_status_t ret)
cy_as_return_status_t
cy_as_storage_stop(cy_as_device_handle handle,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_storage_stop);
cy_as_return_status_t
cy_as_storage_register_callback(cy_as_device_handle handle,
cy_as_storage_event_callback callback)
EXPORT_SYMBOL(cy_as_storage_register_callback);
static cy_as_return_status_t
my_handle_response_storage_claim(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p)
static cy_as_return_status_t
my_storage_claim(cy_as_device *dev_p,
void *data,
cy_as_bus_number_t bus,
uint32_t device,
uint16_t req_flags,
cy_as_function_callback cb,
uint32_t client)
cy_as_return_status_t
cy_as_storage_claim(cy_as_device_handle handle,
cy_as_bus_number_t bus,
uint32_t device,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_storage_claim);
static cy_as_return_status_t
my_handle_response_storage_release(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p)
static cy_as_return_status_t
my_storage_release(cy_as_device *dev_p,
void *data,
cy_as_bus_number_t bus,
uint32_t device,
uint16_t req_flags,
cy_as_function_callback cb,
uint32_t client)
cy_as_return_status_t
cy_as_storage_release(cy_as_device_handle handle,
cy_as_bus_number_t bus,
uint32_t device,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_storage_release);
static cy_as_return_status_t
my_handle_response_storage_query_bus(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
uint32_t *count)
cy_as_return_status_t
my_storage_query_bus(cy_as_device *dev_p,
cy_as_bus_number_t bus,
cy_as_media_type   type,
uint16_t req_flags,
uint32_t *count,
cy_as_function_callback cb,
uint32_t client)
cy_as_return_status_t
cy_as_storage_query_bus(cy_as_device_handle handle,
cy_as_bus_number_t bus,
uint32_t *count,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_storage_query_bus);
cy_as_return_status_t
cy_as_storage_query_media(cy_as_device_handle handle,
cy_as_media_type type,
uint32_t *count,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_storage_query_media);
static cy_as_return_status_t
my_handle_response_storage_query_device(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
void *data_p)
static cy_as_return_status_t
my_storage_query_device(cy_as_device *dev_p,
void *data_p,
uint16_t req_flags,
cy_as_bus_number_t bus,
uint32_t device,
cy_as_function_callback cb,
uint32_t client)
cy_as_return_status_t
cy_as_storage_query_device(cy_as_device_handle handle,
cy_as_storage_query_device_data *data_p,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_storage_query_device);
static cy_as_return_status_t
my_handle_response_storage_query_unit(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
void *data_p)
static cy_as_return_status_t
my_storage_query_unit(cy_as_device *dev_p,
void *data_p,
uint16_t req_flags,
cy_as_bus_number_t bus,
uint32_t device,
uint32_t unit,
cy_as_function_callback cb,
uint32_t client)
cy_as_return_status_t
cy_as_storage_query_unit(cy_as_device_handle handle,
cy_as_storage_query_unit_data *data_p,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_storage_query_unit);
static cy_as_return_status_t
cy_as_get_block_size(cy_as_device *dev_p,
cy_as_bus_number_t bus,
uint32_t device,
cy_as_function_callback cb)
cy_as_return_status_t
my_storage_device_control(
cy_as_device		  *dev_p,
cy_as_bus_number_t	  bus,
uint32_t			 device,
cy_bool			   card_detect_en,
cy_bool			   write_prot_en,
cy_as_storage_card_detect config_detect,
cy_as_function_callback cb,
uint32_t			 client)
cy_as_return_status_t
cy_as_storage_device_control(cy_as_device_handle handle,
cy_as_bus_number_t bus,
uint32_t device,
cy_bool card_detect_en,
cy_bool write_prot_en,
cy_as_storage_card_detect config_detect,
cy_as_function_callback cb,
uint32_t client)
EXPORT_SYMBOL(cy_as_storage_device_control);
static void
cy_as_async_storage_callback(cy_as_device *dev_p,
cy_as_end_point_number_t ep, void *buf_p, uint32_t size,
cy_as_return_status_t ret)
static void
cy_as_async_storage_reply_callback(
cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t ret)
static cy_as_return_status_t
cy_as_storage_async_oper(cy_as_device *dev_p, cy_as_end_point_number_t ep,
uint8_t reqtype, uint16_t req_flags, cy_as_bus_number_t bus,
uint32_t device, uint32_t unit, uint32_t block, void *data_p,
uint16_t num_blocks, cy_as_storage_callback_dep callback,
cy_as_storage_callback callback_ms)
static void
cy_as_sync_storage_callback(cy_as_device *dev_p,
cy_as_end_point_number_t ep, void *buf_p,
uint32_t size, cy_as_return_status_t err)
static void
cy_as_sync_storage_reply_callback(
cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t ret)
static cy_as_return_status_t
cy_as_storage_sync_oper(cy_as_device *dev_p,
cy_as_end_point_number_t ep, uint8_t reqtype,
cy_as_bus_number_t bus, uint32_t device,
uint32_t unit, uint32_t block, void *data_p,
uint16_t num_blocks)
cy_as_return_status_t
cy_as_storage_read(cy_as_device_handle handle,
cy_as_bus_number_t bus, uint32_t device,
uint32_t unit, uint32_t block,
void *data_p, uint16_t num_blocks)
EXPORT_SYMBOL(cy_as_storage_read);
cy_as_return_status_t
cy_as_storage_write(cy_as_device_handle handle,
cy_as_bus_number_t bus, uint32_t device,
uint32_t unit, uint32_t block, void *data_p,
uint16_t num_blocks)
EXPORT_SYMBOL(cy_as_storage_write);
cy_as_return_status_t
cy_as_storage_read_async(cy_as_device_handle handle,
cy_as_bus_number_t bus, uint32_t device, uint32_t unit,
uint32_t block, void *data_p, uint16_t num_blocks,
cy_as_storage_callback callback)
EXPORT_SYMBOL(cy_as_storage_read_async);
cy_as_return_status_t
cy_as_storage_write_async(cy_as_device_handle handle,
cy_as_bus_number_t bus, uint32_t device, uint32_t unit,
uint32_t block, void *data_p, uint16_t num_blocks,
cy_as_storage_callback callback)
EXPORT_SYMBOL(cy_as_storage_write_async);
static void
my_storage_cancel_callback(
cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t stat)
cy_as_return_status_t
cy_as_storage_cancel_async(cy_as_device_handle handle)
EXPORT_SYMBOL(cy_as_storage_cancel_async);
void cy_as_storage_cleanup(cy_as_device *dev_p)
static cy_as_return_status_t
my_handle_response_sd_reg_read(
cy_as_device			   *dev_p,
cy_as_ll_request_response	*req_p,
cy_as_ll_request_response	*reply_p,
cy_as_storage_sd_reg_read_data *info)
cy_as_return_status_t
cy_as_storage_sd_register_read(
cy_as_device_handle		  handle,
cy_as_bus_number_t		   bus,
uint8_t				   device,
cy_as_sd_card_reg_type		 reg_type,
cy_as_storage_sd_reg_read_data *data_p,
cy_as_function_callback	  cb,
uint32_t				  client)
EXPORT_SYMBOL(cy_as_storage_sd_register_read);
cy_as_return_status_t
cy_as_storage_create_p_partition(
cy_as_device_handle		handle,
cy_as_bus_number_t		 bus,
uint32_t				device,
uint32_t				size,
cy_as_function_callback	cb,
uint32_t				client)
EXPORT_SYMBOL(cy_as_storage_create_p_partition);
cy_as_return_status_t
cy_as_storage_remove_p_partition(
cy_as_device_handle		handle,
cy_as_bus_number_t		 bus,
uint32_t				device,
cy_as_function_callback	cb,
uint32_t				client)
EXPORT_SYMBOL(cy_as_storage_remove_p_partition);
static cy_as_return_status_t
my_handle_response_get_transfer_amount(cy_as_device *dev_p,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_as_m_s_c_progress_data *data)
cy_as_return_status_t
cy_as_storage_get_transfer_amount(
cy_as_device_handle handle,
cy_as_bus_number_t  bus,
uint32_t device,
cy_as_m_s_c_progress_data *data_p,
cy_as_function_callback cb,
uint32_t client
)
EXPORT_SYMBOL(cy_as_storage_get_transfer_amount);
cy_as_return_status_t
cy_as_storage_erase(
cy_as_device_handle		handle,
cy_as_bus_number_t		 bus,
uint32_t				device,
uint32_t				erase_unit,
uint16_t				num_erase_units,
cy_as_function_callback	cb,
uint32_t				client
)
EXPORT_SYMBOL(cy_as_storage_erase);
static void
cy_as_storage_func_callback(cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t stat)
static void
cy_as_sdio_sync_reply_callback(
cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t ret)
cy_as_return_status_t
cy_as_sdio_device_check(
cy_as_device *dev_p,
cy_as_bus_number_t	 bus,
uint32_t			device)
cy_as_return_status_t
cy_as_sdio_direct_io(
cy_as_device_handle	handle,
cy_as_bus_number_t	 bus,
uint32_t			device,
uint8_t			 n_function_no,
uint32_t			address,
uint8_t			 misc_buf,
uint16_t			argument,
uint8_t			 is_write,
uint8_t *data_p)
cy_as_return_status_t
cy_as_sdio_direct_read(
cy_as_device_handle handle,
cy_as_bus_number_t bus,
uint32_t device,
uint8_t	n_function_no,
uint32_t address,
uint8_t	misc_buf,
uint8_t *data_p)
EXPORT_SYMBOL(cy_as_sdio_direct_read);
cy_as_return_status_t
cy_as_sdio_direct_write(
cy_as_device_handle		handle,
cy_as_bus_number_t		 bus,
uint32_t				device,
uint8_t				 n_function_no,
uint32_t				address,
uint8_t				 misc_buf,
uint16_t				argument,
uint8_t *data_p)
EXPORT_SYMBOL(cy_as_sdio_direct_write);
cy_as_return_status_t
cy_as_sdio_extended_i_o(
cy_as_device_handle		handle,
cy_as_bus_number_t		 bus,
uint32_t				device,
uint8_t				 n_function_no,
uint32_t				address,
uint8_t				 misc_buf,
uint16_t				argument,
uint8_t				 is_write,
uint8_t *data_p ,
uint8_t				 is_resume)
static void
cy_as_sdio_async_reply_callback(
cy_as_device	*dev_p,
uint8_t				 context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t	  ret)
cy_as_return_status_t
cy_as_sdio_extended_i_o_async(
cy_as_device_handle			handle,
cy_as_bus_number_t			 bus,
uint32_t					device,
uint8_t					 n_function_no,
uint32_t					address,
uint8_t					 misc_buf,
uint16_t					argument,
uint8_t					 is_write,
uint8_t					*data_p,
cy_as_storage_callback	   callback)
cy_as_return_status_t
cy_as_sdio_extended_read(
cy_as_device_handle			handle,
cy_as_bus_number_t			 bus,
uint32_t					device,
uint8_t					 n_function_no,
uint32_t					address,
uint8_t					 misc_buf,
uint16_t					argument,
uint8_t					*data_p,
cy_as_sdio_callback			callback)
EXPORT_SYMBOL(cy_as_sdio_extended_read);
cy_as_return_status_t
cy_as_sdio_extended_write(
cy_as_device_handle			handle,
cy_as_bus_number_t			 bus,
uint32_t					device,
uint8_t					 n_function_no,
uint32_t					address,
uint8_t					 misc_buf,
uint16_t					argument,
uint8_t					*data_p,
cy_as_sdio_callback			callback)
EXPORT_SYMBOL(cy_as_sdio_extended_write);
cy_as_return_status_t
cy_as_sdio_get_c_i_s_info(
cy_as_device_handle			handle,
cy_as_bus_number_t			 bus,
uint32_t					device,
uint8_t					 n_function_no,
uint16_t					tuple_id,
uint8_t					*data_p)
cy_as_return_status_t
cy_as_sdio_query_card(
cy_as_device_handle handle,
cy_as_bus_number_t bus,
uint32_t device,
cy_as_sdio_card *data_p)
EXPORT_SYMBOL(cy_as_sdio_query_card);
cy_as_return_status_t
cy_as_sdio_reset_card(
cy_as_device_handle			handle,
cy_as_bus_number_t		 bus,
uint32_t				device)
cy_as_return_status_t
cy_as_sdio_init_function(
cy_as_device_handle			handle,
cy_as_bus_number_t			 bus,
uint32_t					device,
uint8_t					 n_function_no,
uint8_t					 misc_buf)
EXPORT_SYMBOL(cy_as_sdio_init_function);
cy_as_return_status_t
cy_as_sdio_query_function(
cy_as_device_handle			handle,
cy_as_bus_number_t			 bus,
uint32_t					device,
uint8_t					 n_function_no,
cy_as_sdio_func			*data_p)
cy_as_return_status_t
cy_as_sdio_abort_function(
cy_as_device_handle			handle,
cy_as_bus_number_t			 bus,
uint32_t					device,
uint8_t					 n_function_no)
cy_as_return_status_t
cy_as_sdio_suspend(
cy_as_device_handle		handle,
cy_as_bus_number_t		 bus,
uint32_t				device,
uint8_t				 n_function_no)
cy_as_return_status_t
cy_as_sdio_resume(
cy_as_device_handle		handle,
cy_as_bus_number_t		 bus,
uint32_t				device,
uint8_t				 n_function_no,
cy_as_oper_type			op,
uint8_t				 misc_buf,
uint16_t				pendingblockcount,
uint8_t				 *data_p
)
cy_as_return_status_t
cy_as_sdio_set_blocksize(
cy_as_device_handle			handle,
cy_as_bus_number_t			 bus,
uint32_t					device,
uint8_t					 n_function_no,
uint16_t					blocksize)
EXPORT_SYMBOL(cy_as_sdio_set_blocksize);
cy_as_return_status_t
cy_as_sdio_de_init_function(
cy_as_device_handle			handle,
cy_as_bus_number_t			 bus,
uint32_t					device,
uint8_t					 n_function_no)
