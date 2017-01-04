#define _INCLUDED_CYANSTORAGE_H_
#define CY_AN_LUN_PHYSICAL_DEVICE (CY_AS_LUN_PHYSICAL_DEVICE)
#define CY_AN_STORAGE_EP_SIZE (CY_AS_STORAGE_EP_SIZE)
#define	cy_an_storage_antioch	cy_as_storage_antioch
#define	cy_an_storage_processor	cy_as_storage_processor
#define	cy_an_storage_removed	cy_as_storage_removed
#define	cy_an_storage_inserted	cy_as_storage_inserted
#define	cy_an_sdio_interrupt	cy_as_sdio_interrupt
typedef cy_as_storage_event	cy_an_storage_event;
#define	cy_an_op_read	 cy_as_op_read
#define	cy_an_op_write	 cy_as_op_write
typedef cy_as_oper_type cy_an_oper_type;
typedef cy_as_device_desc cy_an_device_desc;
typedef cy_as_unit_desc cy_an_unit_desc;
typedef cy_as_storage_callback_dep \
cy_an_storage_callback;
typedef cy_as_storage_event_callback_dep \
cy_an_storage_event_callback;
#define	cy_an_sd_reg_OCR cy_as_sd_reg_OCR
#define	cy_an_sd_reg_CID cy_as_sd_reg_CID
#define	cy_an_sd_reg_CSD cy_as_sd_reg_CSD
typedef cy_as_sd_card_reg_type \
cy_an_sd_card_reg_type;
typedef cy_as_storage_query_device_data_dep \
cy_an_storage_query_device_data;
typedef cy_as_storage_query_unit_data_dep \
cy_an_storage_query_unit_data;
typedef cy_as_storage_sd_reg_read_data \
cy_an_storage_sd_reg_read_data;
#define CY_AN_SD_REG_OCR_LENGTH (CY_AS_SD_REG_OCR_LENGTH)
#define CY_AN_SD_REG_CID_LENGTH	(CY_AS_SD_REG_CID_LENGTH)
#define CY_AN_SD_REG_CSD_LENGTH	(CY_AS_SD_REG_CSD_LENGTH)
#define CY_AN_SD_REG_MAX_RESP_LENGTH \
(CY_AS_SD_REG_MAX_RESP_LENGTH)
EXTERN cy_an_return_status_t
cy_an_storage_start(
cy_an_device_handle		handle
);
#define cy_an_storage_start(handle) \
cy_as_storage_start((cy_as_device_handle)(handle), 0, 0)
EXTERN cy_an_return_status_t
cy_an_storage_start_e_x(
cy_an_device_handle	handle,
cy_an_function_callback	cb,
uint32_t		client
);
#define cy_an_storage_start_e_x(h, cb, client) \
cy_as_storage_start((cy_as_device_handle)(h), \
(cy_as_function_callback)(cb), (client))
EXTERN cy_an_return_status_t
cy_an_storage_stop(
cy_an_device_handle		handle
);
#define cy_an_storage_stop(handle) \
cy_as_storage_stop((cy_as_device_handle)(handle), 0, 0)
EXTERN cy_an_return_status_t
cy_an_storage_stop_e_x(
cy_an_device_handle	handle,
cy_an_function_callback	cb,
uint32_t		client
);
#define cy_an_storage_stop_e_x(h, cb, client)		\
cy_as_storage_stop((cy_as_device_handle)(h), \
(cy_as_function_callback)(cb), (client))
EXTERN cy_an_return_status_t
cy_an_storage_register_callback(
cy_an_device_handle			handle,
cy_an_storage_event_callback	callback
);
#define cy_an_storage_register_callback(h, cb)		\
cy_as_storage_register_callback_dep((cy_as_device_handle)(h), \
(cy_as_storage_event_callback_dep)(cb))
EXTERN cy_an_return_status_t
cy_an_storage_claim(
cy_an_device_handle		handle,
cy_an_media_type			type
);
#define cy_an_storage_claim(h, type)			\
cy_as_storage_claim_dep((cy_as_device_handle)(h), \
(cy_as_media_type)(type))
EXTERN cy_an_return_status_t
cy_an_storage_claim_e_x(
cy_an_device_handle		handle,
cy_an_media_type *type,
cy_an_function_callback		cb,
uint32_t			client
);
#define cy_an_storage_claim_e_x(h, type_p, cb, client)		\
cy_as_storage_claim_dep_EX((cy_as_device_handle)(h), \
(cy_as_media_type *)(type_p), \
(cy_as_function_callback)(cb), (client))
EXTERN cy_an_return_status_t
cy_an_storage_release(
cy_an_device_handle		handle,
cy_an_media_type			type
);
#define cy_an_storage_release(h, type)			\
cy_as_storage_release_dep((cy_as_device_handle)(h), \
(cy_as_media_type)(type))
EXTERN cy_an_return_status_t
cy_an_storage_release_e_x(
cy_an_device_handle		handle,
cy_an_media_type *type,
cy_an_function_callback		cb,
uint32_t			client
);
#define cy_an_storage_release_e_x(h, type_p, cb, client)	\
cy_as_storage_release_dep_EX((cy_as_device_handle)(h), \
(cy_as_media_type *)(type_p), \
(cy_as_function_callback)(cb), (client))
EXTERN cy_an_return_status_t
cy_an_storage_query_media(
cy_an_device_handle		handle,
cy_an_media_type			type,
uint32_t *count
);
#define cy_an_storage_query_media(handle, type, count) \
cy_as_storage_query_media((cy_as_device_handle)(handle), \
(cy_as_media_type)(type), (count), 0, 0)
EXTERN cy_an_return_status_t
cy_an_storage_query_media_e_x(
cy_an_device_handle		handle,
cy_an_media_type			type,
uint32_t *count,
cy_an_function_callback		cb,
uint32_t			client
);
#define cy_an_storage_query_media_e_x(h, type, count, cb, client) \
cy_as_storage_query_media((cy_as_device_handle)(h), \
(cy_as_media_type)(type), (count), \
(cy_as_function_callback)(cb), (client))
EXTERN cy_an_return_status_t
cy_an_storage_query_device(
cy_an_device_handle		handle,
cy_an_media_type			type,
uint32_t			device,
cy_an_device_desc *desc_p
);
#define cy_an_storage_query_device(h, type, device, desc_p) \
cy_as_storage_query_device_dep((cy_as_device_handle)(h), \
(cy_as_media_type)(type), (device), (cy_as_device_desc *)(desc_p))
EXTERN cy_an_return_status_t
cy_an_storage_query_device_e_x(
cy_an_device_handle		handle,
cy_an_storage_query_device_data *data,
cy_an_function_callback		cb,
uint32_t			client
);
#define cy_an_storage_query_device_e_x(h, data, cb, client) \
cy_as_storage_query_device_dep_EX((cy_as_device_handle)(h), \
(cy_as_storage_query_device_data_dep *)(data),	\
(cy_as_function_callback)(cb), (client))
EXTERN cy_an_return_status_t
cy_an_storage_query_unit(
cy_an_device_handle		handle,
cy_an_media_type			type,
uint32_t			device,
uint32_t			unit,
cy_an_unit_desc *desc_p
);
#define cy_an_storage_query_unit(h, type, device, unit, desc_p)	\
cy_as_storage_query_unit_dep((cy_as_device_handle)(h), \
(cy_as_media_type)(type), (device), \
(unit), (cy_as_unit_desc *)(desc_p))
EXTERN cy_an_return_status_t
cy_an_storage_query_unit_e_x(
cy_an_device_handle		handle,
cy_an_storage_query_unit_data *data_p,
cy_an_function_callback		cb,
uint32_t			client
);
#define cy_an_storage_query_unit_e_x(h, data_p, cb, client)	\
cy_as_storage_query_unit_dep_EX((cy_as_device_handle)(h), \
(cy_as_storage_query_unit_data_dep *)(data_p),	\
(cy_as_function_callback)(cb), (client))
EXTERN cy_an_return_status_t
cy_an_storage_device_control(
cy_an_device_handle	handle,
cy_bool	 card_detect_en,
cy_bool	 write_prot_en
);
#define cy_an_storage_device_control(handle, \
card_detect_en, write_prot_en) \
cy_as_storage_device_control_dep((cy_as_device_handle)(handle), \
(card_detect_en), (write_prot_en), 0, 0)
EXTERN cy_an_return_status_t
cy_an_storage_device_control_e_x(
cy_an_device_handle				handle,
cy_bool			card_detect_en,
cy_bool			write_prot_en,
cy_an_function_callback		cb,
uint32_t			client
);
#define cy_an_storage_device_control_e_x(h, det_en, prot_en, cb, client) \
cy_as_storage_device_control_dep((cy_as_device_handle)(h), (det_en), \
(prot_en), (cy_as_function_callback)(cb), (client))
EXTERN cy_an_return_status_t
cy_an_storage_read(
cy_an_device_handle		handle,
cy_an_media_type			type,
uint32_t			device,
uint32_t			unit,
uint32_t			block,
void *data_p,
uint16_t			num_blocks
);
#define cy_an_storage_read(h, type, device, unit, block, data_p, nblks)	\
cy_as_storage_read_dep((cy_as_device_handle)(h), \
(cy_as_media_type)(type), (device), (unit), \
(block), (data_p), (nblks))
EXTERN cy_an_return_status_t
cy_an_storage_read_async(
cy_an_device_handle		handle,
cy_an_media_type			type,
uint32_t			device,
uint32_t			unit,
uint32_t			block,
void *data_p,
uint16_t			num_blocks,
cy_an_storage_callback		callback
);
#define cy_an_storage_read_async(h, type, device, unit, \
block, data_p, nblks, cb)				\
cy_as_storage_read_async_dep((cy_as_device_handle)(h), \
(cy_as_media_type)(type), (device), (unit), (block), \
(data_p), (nblks), (cy_as_storage_callback_dep)(cb))
EXTERN cy_an_return_status_t
cy_an_storage_write(
cy_an_device_handle		handle,
cy_an_media_type			type,
uint32_t			device,
uint32_t			unit,
uint32_t			block,
void *data_p,
uint16_t			num_blocks
);
#define cy_an_storage_write(h, type, device, unit, \
block, data_p, nblks)	\
cy_as_storage_write_dep((cy_as_device_handle)(h), \
(cy_as_media_type)(type), (device), (unit), \
(block), (data_p), (nblks))
EXTERN cy_an_return_status_t
cy_an_storage_write_async(
cy_an_device_handle		handle,
cy_an_media_type			type,
uint32_t			device,
uint32_t			unit,
uint32_t			block,
void *data_p,
uint16_t			num_blocks,
cy_an_storage_callback		callback
);
#define cy_an_storage_write_async(h, type, device, unit, \
block, data_p, nblks, cb) \
cy_as_storage_write_async_dep((cy_as_device_handle)(h), \
(cy_as_media_type)(type), (device), (unit), (block), \
(data_p), (nblks), (cy_as_storage_callback_dep)(cb))
EXTERN cy_an_return_status_t
cy_an_storage_cancel_async(
cy_an_device_handle		handle
);
#define cy_an_storage_cancel_async(h) \
cy_as_storage_cancel_async((cy_as_device_handle)(h))
EXTERN cy_an_return_status_t
cy_an_storage_sd_register_read(
cy_an_device_handle		  handle,
cy_an_media_type		  type,
uint8_t				  device,
cy_an_sd_card_reg_type		 reg_type,
uint8_t				   read_len,
uint8_t				  *data_p
);
#define cy_an_storage_sd_register_read(h, type, device, \
reg_type, len, data_p) \
cy_as_storage_sd_register_read_dep((cy_as_device_handle)(h), \
(cy_as_media_type)(type), (device),	 \
(cy_as_sd_card_reg_type)(reg_type), (len), (data_p))
EXTERN cy_an_return_status_t
cy_an_storage_sd_register_read_e_x(
cy_an_device_handle		  handle,
cy_an_media_type		  type,
uint8_t				  device,
cy_an_sd_card_reg_type		 reg_type,
cy_an_storage_sd_reg_read_data *data_p,
cy_an_function_callback	  cb,
uint32_t				  client
);
#define cy_an_storage_sd_register_read_e_x(h, type, device, \
reg_type, data_p, cb, client) \
cy_as_storage_sd_register_read_dep_EX((cy_as_device_handle)(h), \
(cy_as_media_type)(type), (device),	\
(cy_as_sd_card_reg_type)(reg_type), \
(cy_as_storage_sd_reg_read_data *)(data_p),	\
(cy_as_function_callback)(cb), (client))
EXTERN cy_an_return_status_t
cy_an_storage_create_p_partition(
cy_an_device_handle	 handle,
cy_an_media_type		media,
uint32_t			 device,
uint32_t			 size,
cy_an_function_callback cb,
uint32_t			 client);
#define cy_an_storage_create_p_partition(h, media, dev, \
size, cb, client) \
cy_as_storage_create_p_partition_dep((cy_as_device_handle)(h), \
(cy_as_media_type)(media), (dev), \
(size), (cy_as_function_callback)(cb), (client))
EXTERN cy_an_return_status_t
cy_an_storage_remove_p_partition(
cy_an_device_handle		handle,
cy_an_media_type		   media,
uint32_t				device,
cy_an_function_callback	cb,
uint32_t				client);
#define cy_an_storage_remove_p_partition\
(h, media, dev, cb, client)	 \
cy_as_storage_remove_p_partition_dep((cy_as_device_handle)(h), \
(cy_as_media_type)(media), (dev),	   \
(cy_as_function_callback)(cb), (client))
