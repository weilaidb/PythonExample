#define _INCLUDED_CYASHALCB_H_
typedef void (*cy_as_hal_dma_complete_callback)(
cy_as_hal_device_tag tag,
cy_as_end_point_number_t ep,
uint32_t cnt,
cy_as_return_status_t ret);
typedef cy_as_hal_dma_complete_callback \
cy_an_hal_dma_complete_callback;
