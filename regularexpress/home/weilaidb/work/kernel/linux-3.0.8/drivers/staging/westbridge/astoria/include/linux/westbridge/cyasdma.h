#define _INCLUDED_CYASDMA_H_
#define CY_AS_DMA_MAX_SIZE_HW_SIZE (0xffffffff)
typedef enum cy_as_dma_direction  cy_as_dma_direction;
extern cy_as_return_status_t
cy_as_dma_start(
cy_as_device *dev_p
);
extern cy_as_return_status_t
cy_as_dma_stop(
cy_as_device *dev_p
);
extern cy_as_return_status_t
cy_as_dma_cancel(
cy_as_device *dev_p,
cy_as_end_point_number_t ep,
cy_as_return_status_t err
);
extern cy_as_return_status_t
cy_as_dma_enable_end_point(
cy_as_device *dev_p,
cy_as_end_point_number_t ep,
cy_bool	enable,
cy_as_dma_direction	dir
);
extern cy_as_return_status_t
cy_as_dma_queue_request(
cy_as_device *dev_p,
cy_as_end_point_number_t ep,
void *mem_p,
uint32_t size,
cy_bool	packet,
cy_bool	readreq,
cy_as_dma_callback cb
);
extern cy_as_return_status_t
cy_as_dma_drain_queue(
cy_as_device *dev_p,
cy_as_end_point_number_t ep,
cy_bool kickstart
);
extern cy_as_return_status_t
cy_as_dma_set_max_dma_size(
cy_as_device *dev_p,
cy_as_end_point_number_t ep,
uint32_t size
);
extern cy_as_return_status_t
cy_as_dma_kick_start(
cy_as_device *dev_p,
cy_as_end_point_number_t ep
);
extern cy_as_return_status_t
cy_as_dma_received_data(
cy_as_device *dev_p,
cy_as_end_point_number_t ep,
uint32_t dsize,
void *data
);
extern void
cy_as_dma_completed_callback(
cy_as_hal_device_tag	 tag,
cy_as_end_point_number_t ep,
uint32_t			 length,
cy_as_return_status_t   status
);
