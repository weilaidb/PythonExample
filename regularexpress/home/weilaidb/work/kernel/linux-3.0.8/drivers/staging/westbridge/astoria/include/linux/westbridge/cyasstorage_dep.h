#define __INCLUDED_CYANSTORAGE_DEP_H__
typedef void (*cy_as_storage_callback_dep)(
cy_as_device_handle handle,
cy_as_media_type type,
uint32_t device,
uint32_t unit,
uint32_t block_number,
cy_as_oper_type op,
cy_as_return_status_t status
);
typedef void (*cy_as_storage_event_callback_dep)(
cy_as_device_handle handle,
cy_as_media_type type,
cy_as_storage_event evtype,
void *evdata
);
typedef struct cy_as_storage_query_device_data_dep  cy_as_storage_query_device_data_dep;
typedef struct cy_as_storage_query_unit_data_dep  cy_as_storage_query_unit_data_dep;
EXTERN cy_as_return_status_t
cy_as_storage_register_callback_dep(
cy_as_device_handle	handle,
cy_as_storage_event_callback_dep callback
);
EXTERN cy_as_return_status_t
cy_as_storage_claim_dep(cy_as_device_handle handle,
cy_as_media_type type
);
EXTERN cy_as_return_status_t
cy_as_storage_claim_dep_EX(
cy_as_device_handle		handle,
cy_as_media_type	*type,
cy_as_function_callback	cb,
uint32_t	client
);
EXTERN cy_as_return_status_t
cy_as_storage_release_dep(cy_as_device_handle handle,
cy_as_media_type type
);
EXTERN cy_as_return_status_t
cy_as_storage_release_dep_EX(
cy_as_device_handle		handle,
cy_as_media_type	*type,
cy_as_function_callback		cb,
uint32_t			client
);
EXTERN cy_as_return_status_t
cy_as_storage_query_device_dep(
cy_as_device_handle handle,
cy_as_media_type media,
uint32_t device,
cy_as_device_desc *desc_p
);
EXTERN cy_as_return_status_t
cy_as_storage_query_device_dep_EX(
cy_as_device_handle		handle,
cy_as_storage_query_device_data_dep *data,
cy_as_function_callback		cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_storage_query_unit_dep(
cy_as_device_handle	handle,
cy_as_media_type		type,
uint32_t			device,
uint32_t			unit,
cy_as_unit_desc *unit_p
);
EXTERN cy_as_return_status_t
cy_as_storage_query_unit_dep_EX(
cy_as_device_handle	handle,
cy_as_storage_query_unit_data_dep *data_p,
cy_as_function_callback	cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_storage_device_control_dep(
cy_as_device_handle	   handle,
cy_bool				 card_detect_en,
cy_bool				 write_prot_en,
cy_as_function_callback   cb,
uint32_t			   client
);
EXTERN cy_as_return_status_t
cy_as_storage_read_dep(
cy_as_device_handle	handle,
cy_as_media_type type,
uint32_t device,
uint32_t unit,
uint32_t block,
void *data_p,
uint16_t			num_blocks
);
EXTERN cy_as_return_status_t
cy_as_storage_read_async_dep(
cy_as_device_handle		handle,
cy_as_media_type	type,
uint32_t	device,
uint32_t	unit,
uint32_t		block,
void *data_p,
uint16_t num_blocks,
cy_as_storage_callback_dep		callback
);
EXTERN cy_as_return_status_t
cy_as_storage_write_dep(
cy_as_device_handle	handle,
cy_as_media_type type,
uint32_t	device,
uint32_t	unit,
uint32_t	block,
void	*data_p,
uint16_t num_blocks
);
EXTERN cy_as_return_status_t
cy_as_storage_write_async_dep(
cy_as_device_handle	handle,
cy_as_media_type	type,
uint32_t	device,
uint32_t	unit,
uint32_t	block,
void *data_p,
uint16_t num_blocks,
cy_as_storage_callback_dep			callback
);
EXTERN cy_as_return_status_t
cy_as_storage_sd_register_read_dep(
cy_as_device_handle		handle,
cy_as_media_type		   type,
uint8_t				 device,
cy_as_sd_card_reg_type	   reg_type,
uint8_t				 read_len,
uint8_t				 *data_p
);
EXTERN cy_as_return_status_t
cy_as_storage_sd_register_read_dep_EX(
cy_as_device_handle	handle,
cy_as_media_type type,
uint8_t	device,
cy_as_sd_card_reg_type	reg_type,
cy_as_storage_sd_reg_read_data	 *data_p,
cy_as_function_callback	cb,
uint32_t	client
);
EXTERN cy_as_return_status_t
cy_as_storage_create_p_partition_dep(
cy_as_device_handle	 handle,
cy_as_media_type		media,
uint32_t			 device,
uint32_t			 size,
cy_as_function_callback cb,
uint32_t			 client);
EXTERN cy_as_return_status_t
cy_as_storage_remove_p_partition_dep(
cy_as_device_handle		handle,
cy_as_media_type		   media,
uint32_t				device,
cy_as_function_callback	cb,
uint32_t				client);
