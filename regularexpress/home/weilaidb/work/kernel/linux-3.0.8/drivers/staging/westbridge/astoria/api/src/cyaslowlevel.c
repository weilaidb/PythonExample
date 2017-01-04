static const uint32_t cy_as_low_level_timeout_count = 65536 * 4;
static cy_as_return_status_t cy_as_send_one(cy_as_device *dev_p,
cy_as_ll_request_response *req_p);
static uint16_t max_request_length[CY_RQT_CONTEXT_COUNT] = ;
static void
cy_as_ll_remove_request_queue_head(cy_as_device *dev_p, cy_as_context *ctxt_p)
static void
cy_as_ll_send_next_request(cy_as_device *dev_p, cy_as_context *ctxt_p)
cy_as_remove_request_result_t
cy_as_ll_remove_request(cy_as_device *dev_p, cy_as_context *ctxt_p,
cy_as_ll_request_response *req_p, cy_bool force)
void
cy_as_ll_remove_all_requests(cy_as_device *dev_p, cy_as_context *ctxt_p)
static cy_bool
cy_as_ll_is_in_queue(cy_as_context *ctxt_p, cy_as_ll_request_response *req_p)
void
cy_as_ll_queue_mailbox_data(cy_as_device *dev_p)
void
cy_as_mail_box_process_data(cy_as_device *dev_p, uint16_t *data)
void
cy_as_mail_box_queued_data_handler(cy_as_device *dev_p)
void
cy_as_mail_box_interrupt_handler(cy_as_device *dev_p)
cy_as_return_status_t
cy_as_ll_start(cy_as_device *dev_p)
cy_as_return_status_t
cy_as_ll_stop(cy_as_device *dev_p)
void
cy_as_ll_init_request(cy_as_ll_request_response *req_p,
uint16_t code, uint16_t context, uint16_t length)
cy_as_ll_request_response *
cy_as_ll_create_request(cy_as_device *dev_p, uint16_t code,
uint8_t context, uint16_t length)
void
cy_as_ll_destroy_request(cy_as_device *dev_p, cy_as_ll_request_response *req_p)
void
cy_as_ll_init_response(cy_as_ll_request_response *req_p, uint16_t length)
cy_as_ll_request_response *
cy_as_ll_create_response(cy_as_device *dev_p, uint16_t length)
void
cy_as_ll_destroy_response(cy_as_device *dev_p, cy_as_ll_request_response *req_p)
static uint16_t
cy_as_read_intr_status(
cy_as_device *dev_p)
static cy_as_return_status_t
cy_as_send_one(
cy_as_device *dev_p,
cy_as_ll_request_response *req_p)
extern cy_as_return_status_t
cy_as_ll_send_request(
cy_as_device *dev_p,
cy_as_ll_request_response *req,
cy_as_ll_request_response *resp,
cy_bool sync,
cy_as_response_callback cb
)
static void
cy_as_ll_send_callback(
cy_as_device *dev_p,
uint8_t context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t ret)
cy_as_return_status_t
cy_as_ll_send_request_wait_reply(
cy_as_device *dev_p,
cy_as_ll_request_response *req,
cy_as_ll_request_response *resp
)
cy_as_return_status_t
cy_as_ll_register_request_callback(
cy_as_device *dev_p,
uint8_t context,
cy_as_response_callback cb)
void
cy_as_ll_request_response__pack(
cy_as_ll_request_response *req_p,
uint32_t offset,
uint32_t length,
void *data_p)
void
cy_as_ll_request_response__unpack(
cy_as_ll_request_response *req_p,
uint32_t offset,
uint32_t length,
void *data_p)
extern cy_as_return_status_t
cy_as_ll_send_status_response(
cy_as_device *dev_p,
uint8_t context,
uint16_t code,
uint8_t clear_storage)
extern cy_as_return_status_t
cy_as_ll_send_data_response(
cy_as_device *dev_p,
uint8_t context,
uint16_t code,
uint16_t length,
void *data)
static cy_bool
cy_as_ll_is_e_p_transfer_related_request(cy_as_ll_request_response *rqt_p,
cy_as_end_point_number_t ep)
cy_as_return_status_t
cy_as_ll_remove_ep_data_requests(cy_as_device *dev_p,
cy_as_end_point_number_t ep)
