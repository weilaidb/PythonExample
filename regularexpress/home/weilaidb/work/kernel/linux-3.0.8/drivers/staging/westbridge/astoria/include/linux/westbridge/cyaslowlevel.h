#define _INCLUDED_CYASLOWLEVEL_H_
#define CY_AS_REQUEST_RESPONSE_CODE_MASK (0x00ff)
#define CY_AS_REQUEST_RESPONSE_CONTEXT_MASK	(0x0F00)
#define CY_AS_REQUEST_RESPONSE_CONTEXT_SHIFT (8)
#define CY_AS_REQUEST_RESPONSE_TYPE_MASK (0x4000)
#define CY_AS_REQUEST_RESPONSE_LAST_MASK (0x8000)
#define CY_AS_REQUEST_RESPONSE_CLEAR_STR_FLAG (0x1000)
#define cy_as_mbox_get_code(c) \
((uint8_t)((c) & CY_AS_REQUEST_RESPONSE_CODE_MASK))
#define cy_as_mbox_get_context(c) \
((uint8_t)(((c) & CY_AS_REQUEST_RESPONSE_CONTEXT_MASK) \
>> CY_AS_REQUEST_RESPONSE_CONTEXT_SHIFT))
#define cy_as_mbox_is_last(c) \
((c) & CY_AS_REQUEST_RESPONSE_LAST_MASK)
#define cy_as_mbox_is_request(c) \
(((c) & CY_AS_REQUEST_RESPONSE_TYPE_MASK) != 0)
#define cy_as_mbox_is_response(c) \
(((c) & CY_AS_REQUEST_RESPONSE_TYPE_MASK) == 0)
#define cy_as_ll_request_response__set_code(req, code) \
((req)->box0 = \
((req)->box0 & ~CY_AS_REQUEST_RESPONSE_CODE_MASK) | \
(code & CY_AS_REQUEST_RESPONSE_CODE_MASK))
#define cy_as_ll_request_response__get_code(req) \
cy_as_mbox_get_code((req)->box0)
#define cy_as_ll_request_response__set_context(req, context) \
((req)->box0 |= ((context) << \
CY_AS_REQUEST_RESPONSE_CONTEXT_SHIFT))
#define cy_as_ll_request_response__set_clear_storage_flag(req) \
((req)->box0 |= CY_AS_REQUEST_RESPONSE_CLEAR_STR_FLAG)
#define cy_as_ll_request_response__get_context(req) \
cy_as_mbox_get_context((req)->box0)
#define cy_as_ll_request_response__is_last(req) \
cy_as_mbox_is_last((req)->box0)
#define CY_an_ll_request_response___set_last(req) \
((req)->box0 |= CY_AS_REQUEST_RESPONSE_LAST_MASK)
#define cy_as_ll_request_response__is_request(req) \
cy_as_mbox_is_request((req)->box0)
#define cy_as_ll_request_response__set_request(req) \
((req)->box0 |= CY_AS_REQUEST_RESPONSE_TYPE_MASK)
#define cy_as_ll_request_response__set_response(req) \
((req)->box0 &= ~CY_AS_REQUEST_RESPONSE_TYPE_MASK)
#define cy_as_ll_request_response__is_response(req) \
cy_as_mbox_is_response((req)->box0)
#define cy_as_ll_request_response__get_word(req, offset) \
((req)->data[(offset)])
#define cy_as_ll_request_response__set_word(req, offset, \
value) ((req)->data[(offset)] = value)
typedef enum cy_as_remove_request_result_t  cy_as_remove_request_result_t;
cy_as_return_status_t
cy_as_ll_start(
cy_as_device *dev_p
);
cy_as_return_status_t
cy_as_ll_stop(
cy_as_device *dev_p
);
cy_as_ll_request_response *
cy_as_ll_create_request(
cy_as_device *dev_p,
uint16_t code,
uint8_t context,
uint16_t length
);
void
cy_as_ll_init_request(
cy_as_ll_request_response *req_p,
uint16_t code,
uint16_t context,
uint16_t length);
void
cy_as_ll_init_response(
cy_as_ll_request_response *req_p,
uint16_t length);
void
cy_as_ll_destroy_request(
cy_as_device *dev_p,
cy_as_ll_request_response *);
cy_as_ll_request_response *
cy_as_ll_create_response(
cy_as_device *dev_p,
uint16_t length
);
cy_as_remove_request_result_t
cy_as_ll_remove_request(
cy_as_device *dev_p,
cy_as_context *ctxt_p,
cy_as_ll_request_response *req_p,
cy_bool force
);
void
cy_as_ll_remove_all_requests(cy_as_device *dev_p,
cy_as_context *ctxt_p);
void
cy_as_ll_destroy_response(
cy_as_device *dev_p,
cy_as_ll_request_response *);
cy_as_return_status_t
cy_as_ll_send_request(
cy_as_device *dev_p,
cy_as_ll_request_response *req,
cy_as_ll_request_response *resp,
cy_bool	sync,
cy_as_response_callback cb
);
cy_as_return_status_t
cy_as_ll_send_request_wait_reply(
cy_as_device *dev_p,
cy_as_ll_request_response *req,
cy_as_ll_request_response *resp
);
extern cy_as_return_status_t
cy_as_ll_register_request_callback(
cy_as_device *dev_p,
uint8_t context,
cy_as_response_callback cb
);
extern void
cy_as_ll_request_response__pack(
cy_as_ll_request_response *req,
uint32_t offset,
uint32_t length,
void *data_p
);
extern void
cy_as_ll_request_response__unpack(
cy_as_ll_request_response *req,
uint32_t offset,
uint32_t length,
void *data_p
);
extern cy_as_return_status_t
cy_as_ll_send_status_response(
cy_as_device *dev_p,
uint8_t context,
uint16_t code,
uint8_t clear_storage);
extern cy_as_return_status_t
cy_as_ll_send_data_response(
cy_as_device *dev_p,
uint8_t context,
uint16_t code,
uint16_t length,
void *data
);
extern cy_as_return_status_t
cy_as_ll_remove_ep_data_requests(
cy_as_device *dev_p,
cy_as_end_point_number_t ep
);
