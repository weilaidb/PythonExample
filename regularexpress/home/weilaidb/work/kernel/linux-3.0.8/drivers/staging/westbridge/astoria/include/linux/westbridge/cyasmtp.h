#define _INCLUDED_CYASMTP_H_
#define CY_AS_MAX_BLOCK_TABLE_ENTRIES 64
#define CY_AS_MTP_READ_ENDPOINT		 (2)
#define CY_AS_MTP_WRITE_ENDPOINT		(6)
typedef struct cy_as_mtp_block_table  cy_as_mtp_block_table;
typedef enum cy_as_mtp_event  cy_as_mtp_event;
typedef struct cy_as_mtp_send_object_complete_data  cy_as_mtp_send_object_complete_data;
typedef struct cy_as_mtp_get_object_complete_data  cy_as_mtp_get_object_complete_data;
typedef void (*cy_as_mtp_event_callback)(
cy_as_device_handle handle,
cy_as_mtp_event evtype,
void *evdata
);
typedef void (*cy_as_mtp_function_callback)(
cy_as_device_handle	handle,
cy_as_return_status_t	status,
uint32_t client
);
cy_as_return_status_t
cy_as_mtp_start(
cy_as_device_handle handle,
cy_as_mtp_event_callback event_c_b,
cy_as_function_callback cb,
uint32_t client
);
cy_as_return_status_t
cy_as_mtp_stop(
cy_as_device_handle handle,
cy_as_function_callback cb,
uint32_t client
);
cy_as_return_status_t
cy_as_mtp_init_send_object(
cy_as_device_handle handle,
cy_as_mtp_block_table *blk_table,
uint32_t num_bytes,
cy_as_function_callback cb,
uint32_t client
);
cy_as_return_status_t
cy_as_mtp_cancel_send_object(
cy_as_device_handle handle,
cy_as_function_callback cb,
uint32_t client
);
cy_as_return_status_t
cy_as_mtp_init_get_object(
cy_as_device_handle handle,
cy_as_mtp_block_table *table_p,
uint32_t num_bytes,
uint32_t transaction_id,
cy_as_function_callback cb,
uint32_t client
);
cy_as_return_status_t
cy_as_mtp_cancel_get_object(
cy_as_device_handle handle,
cy_as_function_callback cb,
uint32_t client
);
cy_as_return_status_t
cy_as_mtp_send_block_table(
cy_as_device_handle handle,
cy_as_mtp_block_table *table,
cy_as_function_callback cb,
uint32_t client
);
cy_as_return_status_t
cy_as_mtp_storage_only_start(
cy_as_device_handle handle
);
cy_as_return_status_t
cy_as_mtp_storage_only_stop(
cy_as_device_handle handle,
cy_as_function_callback cb,
uint32_t client
);
