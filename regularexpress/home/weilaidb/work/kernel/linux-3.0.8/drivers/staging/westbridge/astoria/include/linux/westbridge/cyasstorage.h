#define _INCLUDED_CYASSTORAGE_H_
#define CY_AS_LUN_PHYSICAL_DEVICE (0xffffffff)
#define CY_AS_STORAGE_EP_SIZE (512)
typedef enum cy_as_storage_event  cy_as_storage_event;
typedef enum cy_as_oper_type  cy_as_oper_type;
typedef struct cy_as_device_desc  cy_as_device_desc;
typedef struct cy_as_unit_desc  cy_as_unit_desc;
typedef void (*cy_as_storage_callback)(
cy_as_device_handle handle,
cy_as_bus_number_t bus,
uint32_t device,
uint32_t unit,
uint32_t block_number,
cy_as_oper_type op,
cy_as_return_status_t status
);
typedef void (*cy_as_storage_event_callback)(
cy_as_device_handle handle,
cy_as_bus_number_t  bus,
uint32_t device,
cy_as_storage_event evtype,
void *evdata
);
typedef void (*cy_as_sdio_callback)(
cy_as_device_handle handle,
cy_as_bus_number_t bus,
uint32_t device,
uint32_t function,
uint32_t address,
cy_as_oper_type op,
cy_as_return_status_t status
);
typedef enum cy_as_sd_card_reg_type  cy_as_sd_card_reg_type;
typedef struct cy_as_storage_query_device_data  cy_as_storage_query_device_data;
typedef struct cy_as_storage_query_unit_data  cy_as_storage_query_unit_data;
typedef struct cy_as_storage_sd_reg_read_data  cy_as_storage_sd_reg_read_data;
typedef enum cy_as_storage_card_detect  cy_as_storage_card_detect;
#define cy_as_storage_detect_GPIO_0 cy_as_storage_detect_GPIO
#define CY_AS_SD_REG_OCR_LENGTH		 (4)
#define CY_AS_SD_REG_CID_LENGTH		 (16)
#define CY_AS_SD_REG_CSD_LENGTH		 (16)
#define CY_AS_SD_REG_MAX_RESP_LENGTH	(10)
typedef struct cy_as_m_s_c_progress_data  cy_as_m_s_c_progress_data;
#define CY_SDIO_RAW	(0x01)
#define CY_SDIO_OP_FIFO (0x00)
#define CY_SDIO_OP_INCR		 (0x02)
#define CY_SDIO_BLOCKMODE	   (0x04)
#define CY_SDIO_BYTEMODE		(0x00)
#define CY_SDIO_FORCE_INIT	  (0x40)
#define CY_SDIO_REARM_INT	   (0x80)
#define CY_SDIO_4BLS	(0x80)
#define CY_SDIO_LSC	 (0x40)
#define CY_SDIO_E4MI	(0x20)
#define CY_SDIO_S4MI	(0x10)
#define CY_SDIO_SBS	 (0x08)
#define CY_SDIO_SRW	 (0x04)
#define CY_SDIO_SMB	 (0x02)
#define CY_SDIO_SDC	 (0x01)
#define CY_SDIO_CSA_SUP		 (0x40)
#define CY_SDIO_CSA_EN		  (0x80)
#define CY_SDIO_CSA_WP		  (0x01)
#define CY_SDIO_CSA_NF		  (0x02)
#define CY_SDIO_FN_WUS		  (0x01)
typedef struct cy_as_sdio_card  cy_as_sdio_card;
typedef struct cy_as_sdio_func  cy_as_sdio_func;
EXTERN cy_as_return_status_t
cy_as_storage_start(
cy_as_device_handle	handle,
cy_as_function_callback	cb,
uint32_t		client
);
EXTERN cy_as_return_status_t
cy_as_storage_stop(
cy_as_device_handle	handle,
cy_as_function_callback	cb,
uint32_t		client
);
EXTERN cy_as_return_status_t
cy_as_storage_register_callback(
cy_as_device_handle			handle,
cy_as_storage_event_callback	callback
);
EXTERN cy_as_return_status_t
cy_as_storage_claim(
cy_as_device_handle	handle,
cy_as_bus_number_t	 bus,
uint32_t		 device,
cy_as_function_callback	cb,
uint32_t		client
);
EXTERN cy_as_return_status_t
cy_as_storage_release(
cy_as_device_handle	handle,
cy_as_bus_number_t	 bus,
uint32_t		 device,
cy_as_function_callback	cb,
uint32_t		client
);
EXTERN cy_as_return_status_t
cy_as_storage_query_bus(
cy_as_device_handle	handle,
cy_as_bus_number_t		bus,
uint32_t *count,
cy_as_function_callback	 cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_storage_query_media(
cy_as_device_handle	handle,
cy_as_media_type		type,
uint32_t *count,
cy_as_function_callback	 cb,
uint32_t		client
);
EXTERN cy_as_return_status_t
cy_as_storage_query_device(
cy_as_device_handle		handle,
cy_as_storage_query_device_data *data,
cy_as_function_callback		cb,
uint32_t			client
);
EXTERN cy_as_return_status_t
cy_as_storage_query_unit(
cy_as_device_handle		handle,
cy_as_storage_query_unit_data *data_p,
cy_as_function_callback		cb,
uint32_t			client
);
EXTERN cy_as_return_status_t
cy_as_storage_device_control(
cy_as_device_handle	handle,
cy_as_bus_number_t	 bus,
uint32_t		 device,
cy_bool		card_detect_en,
cy_bool		write_prot_en,
cy_as_storage_card_detect	config_detect,
cy_as_function_callback	 cb,
uint32_t		client
);
EXTERN cy_as_return_status_t
cy_as_storage_read(
cy_as_device_handle	handle,
cy_as_bus_number_t		bus,
uint32_t		device,
uint32_t		unit,
uint32_t		block,
void *data_p,
uint16_t		num_blocks
);
EXTERN cy_as_return_status_t
cy_as_storage_read_async(
cy_as_device_handle handle,
cy_as_bus_number_t	bus,
uint32_t device,
uint32_t unit,
uint32_t block,
void *data_p,
uint16_t num_blocks,
cy_as_storage_callback		callback
);
EXTERN cy_as_return_status_t
cy_as_storage_write(
cy_as_device_handle	handle,
cy_as_bus_number_t bus,
uint32_t device,
uint32_t unit,
uint32_t block,
void *data_p,
uint16_t num_blocks
);
EXTERN cy_as_return_status_t
cy_as_storage_write_async(
cy_as_device_handle	handle,
cy_as_bus_number_t	bus,
uint32_t	device,
uint32_t	unit,
uint32_t	block,
void *data_p,
uint16_t num_blocks,
cy_as_storage_callback	callback
);
EXTERN cy_as_return_status_t
cy_as_storage_cancel_async(
cy_as_device_handle		handle
);
EXTERN cy_as_return_status_t
cy_as_storage_sd_register_read(
cy_as_device_handle	handle,
cy_as_bus_number_t	bus,
uint8_t	device,
cy_as_sd_card_reg_type reg_type,
cy_as_storage_sd_reg_read_data	 *data_p,
cy_as_function_callback		cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_storage_create_p_partition(
cy_as_device_handle handle,
cy_as_bus_number_t bus,
uint32_t device,
uint32_t size,
cy_as_function_callback cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_storage_remove_p_partition(
cy_as_device_handle handle,
cy_as_bus_number_t  bus,
uint32_t device,
cy_as_function_callback cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_storage_get_transfer_amount(
cy_as_device_handle handle,
cy_as_bus_number_t  bus,
uint32_t device,
cy_as_m_s_c_progress_data *data_p,
cy_as_function_callback cb,
uint32_t client
);
EXTERN cy_as_return_status_t
cy_as_storage_erase(
cy_as_device_handle	 handle,
cy_as_bus_number_t	bus,
uint32_t device,
uint32_t erase_unit,
uint16_t num_erase_units,
cy_as_function_callback cb,
uint32_t client
);
cy_as_return_status_t
cy_as_sdio_get_c_i_s_info(
cy_as_device_handle	handle,
cy_as_bus_number_t		bus,
uint32_t		device,
uint8_t			n_function_no,
uint16_t		tuple_id,
uint8_t *data_p
);
cy_as_return_status_t
cy_as_sdio_query_card(
cy_as_device_handle	handle,
cy_as_bus_number_t	 bus,
uint32_t		device,
cy_as_sdio_card		*data_p
);
cy_as_return_status_t
cy_as_sdio_reset_card(
cy_as_device_handle	handle,
cy_as_bus_number_t	bus,
uint32_t device
);
cy_as_return_status_t
cy_as_sdio_direct_read(
cy_as_device_handle	handle,
cy_as_bus_number_t		 bus,
uint32_t		device,
uint8_t			n_function_no,
uint32_t		address,
uint8_t			misc_buf,
uint8_t *data_p
);
cy_as_return_status_t
cy_as_sdio_direct_write(
cy_as_device_handle	handle,
cy_as_bus_number_t	bus,
uint32_t		device,
uint8_t			n_function_no,
uint32_t		address,
uint8_t			misc_buf,
uint16_t		argument,
uint8_t *data_p
);
cy_as_return_status_t
cy_as_sdio_set_blocksize(
cy_as_device_handle	handle,
cy_as_bus_number_t	bus,
uint32_t device,
uint8_t	n_function_no,
uint16_t blocksize
);
cy_as_return_status_t
cy_as_sdio_extended_read(
cy_as_device_handle	handle,
cy_as_bus_number_t bus,
uint32_t device,
uint8_t	n_function_no,
uint32_t address,
uint8_t			misc_buf,
uint16_t		argument,
uint8_t *data_p,
cy_as_sdio_callback		callback
);
cy_as_return_status_t
cy_as_sdio_extended_write(
cy_as_device_handle	handle,
cy_as_bus_number_t bus,
uint32_t device,
uint8_t	n_function_no,
uint32_t address,
uint8_t	 misc_buf,
uint16_t		argument,
uint8_t *data_p,
cy_as_sdio_callback		callback
);
cy_as_return_status_t
cy_as_sdio_init_function(
cy_as_device_handle	handle,
cy_as_bus_number_t	bus,
uint32_t device,
uint8_t	n_function_no,
uint8_t	misc_buf
);
cy_as_return_status_t
cy_as_sdio_query_function(
cy_as_device_handle	handle,
cy_as_bus_number_t	bus,
uint32_t device,
uint8_t	n_function_no,
cy_as_sdio_func *data_p
);
cy_as_return_status_t
cy_as_sdio_abort_function(
cy_as_device_handle	handle,
cy_as_bus_number_t  bus,
uint32_t device,
uint8_t	n_function_no
);
cy_as_return_status_t
cy_as_sdio_de_init_function(
cy_as_device_handle	handle,
cy_as_bus_number_t	bus,
uint32_t device,
uint8_t	n_function_no
);
cy_as_return_status_t
cy_as_sdio_suspend(
cy_as_device_handle	handle,
cy_as_bus_number_t  bus,
uint32_t device,
uint8_t	n_function_no
);
cy_as_return_status_t
cy_as_sdio_resume(
cy_as_device_handle	handle,
cy_as_bus_number_t	bus,
uint32_t device,
uint8_t	n_function_no,
cy_as_oper_type	op,
uint8_t	misc_buf,
uint16_t pendingblockcount,
uint8_t		 *data_p
);
