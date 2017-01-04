static void
cy_as_dma_add_request_to_free_queue(cy_as_device *dev_p,
cy_as_dma_queue_entry *req_p)
static cy_as_dma_queue_entry *
cy_as_dma_get_dma_queue_entry(cy_as_device *dev_p)
cy_as_return_status_t
cy_as_dma_set_max_dma_size(cy_as_device *dev_p,
cy_as_end_point_number_t ep, uint32_t size)
static void
cy_as_dma_request_callback(
cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *resp_p,
cy_as_return_status_t ret)
static void
cy_as_dma_set_drq(cy_as_device *dev_p,
cy_as_end_point_number_t ep, cy_bool state)
static void
cy_as_dma_send_next_dma_request(cy_as_device *dev_p, cy_as_dma_end_point *ep_p)
void
cy_as_dma_completed_callback(cy_as_hal_device_tag tag,
cy_as_end_point_number_t ep, uint32_t cnt, cy_as_return_status_t status)
cy_as_return_status_t
cy_as_dma_kick_start(cy_as_device *dev_p, cy_as_end_point_number_t ep)
static cy_as_return_status_t
cy_as_dma_stop_end_point(cy_as_device *dev_p, cy_as_end_point_number_t ep)
static cy_as_return_status_t
cy_as_dma_stop_internal(cy_as_device *dev_p)
cy_as_return_status_t
cy_as_dma_stop(cy_as_device *dev_p)
cy_as_return_status_t
cy_as_dma_start(cy_as_device *dev_p)
cy_as_return_status_t
cy_as_dma_drain_queue(cy_as_device *dev_p,
cy_as_end_point_number_t ep, cy_bool kickstart)
cy_as_return_status_t
cy_as_dma_queue_request(cy_as_device *dev_p,
cy_as_end_point_number_t ep, void *mem_p,
uint32_t size, cy_bool pkt, cy_bool readreq, cy_as_dma_callback cb)
cy_as_return_status_t
cy_as_dma_enable_end_point(cy_as_device *dev_p,
cy_as_end_point_number_t ep, cy_bool enable, cy_as_dma_direction dir)
cy_as_return_status_t
cy_as_dma_cancel(
cy_as_device *dev_p,
cy_as_end_point_number_t ep,
cy_as_return_status_t err)
cy_as_return_status_t
cy_as_dma_received_data(cy_as_device *dev_p,
cy_as_end_point_number_t ep, uint32_t dsize, void *data)
