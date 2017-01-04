#define __INCLUDED_CYASDEVICE_H__
#define CY_AS_P2S_WRITE_ENDPOINT (0x04)
#define CY_AS_P2S_READ_ENDPOINT (0x08)
#define CY_AS_FIRMWARE_ENDPOINT	(0x02)
#define CY_AS_MAXIMUM_FIRMWARE_SIZE	(24 * 1024)
#define CY_AS_EP0_MAX_WRITE_SIZE (128)
#define CY_AS_EP1_MAX_WRITE_SIZE (64)
#define CY_AS_DEVICE_STATE_PIN_STANDBY (0x00000001)
#define CY_AS_DEVICE_STATE_CONFIGURED (0x00000002)
#define CY_AS_DEVICE_STATE_FIRMWARE_LOADED (0x00000004)
#define CY_AS_DEVICE_STATE_LOWLEVEL_MODULE (0x00000008)
#define CY_AS_DEVICE_STATE_DMA_MODULE (0x00000010)
#define CY_AS_DEVICE_STATE_INTR_MODULE (0x00000020)
#define CY_AS_DEVICE_STATE_STORAGE_MODULE (0x00000040)
#define CY_AS_DEVICE_STATE_USB_MODULE (0x00000080)
#define CY_AS_DEVICE_STATE_STORAGE_SCSIMSG (0x00000100)
#define CY_AS_DEVICE_STATE_STORAGE_ASYNC_PENDING (0x00000200)
#define CY_AS_DEVICE_STATE_USB_CONNECTED (0x00000400)
#define CY_AS_DEVICE_STATE_USB_HIGHSPEED (0x00000800)
#define CY_AS_DEVICE_STATE_IN_CALLBACK (0x00001000)
#define CY_AS_DEVICE_STATE_IN_SETUP_PACKET (0x00004000)
#define CY_AS_DEVICE_STATE_REGISTER_STANDBY (0x00008000)
#define CY_AS_DEVICE_STATE_CRYSTAL (0x00010000)
#define CY_AS_DEVICE_STATE_WAKING (0x00020000)
#define CY_AS_DEVICE_STATE_EP0_STALLED (0x00040000)
#define CY_AS_DEVICE_STATE_SUSPEND (0x00080000)
#define CY_AS_DEVICE_STATE_RESETP (0x00100000)
#define CY_AS_DEVICE_STATE_STANDP (0x00200000)
#define CY_AS_DEVICE_STATE_SSSP	(0x00400000)
#define CY_AS_DEVICE_STATE_USSP	(0x00800000)
#define CY_AS_DEVICE_STATE_MSSP	(0x01000000)
#define CY_AS_DEVICE_STATE_P2SDMA_START (0x02000000)
#define CY_AS_DMA_ENDPOINT_STATE_ENABLED (0x0001)
#define CY_AS_DMA_ENDPOINT_STATE_SLEEPING (0x0002)
#define CY_AS_DMA_ENDPOINT_STATE_DMA_RUNNING (0x0004)
#define CY_AS_DMA_ENDPOINT_STATE_IN_TRANSIT (0x0008)
#define CY_AS_DMA_ENDPOINT_STATE_DIRECTION (0x0010)
#define CY_AS_REQUEST_LIST_STATE_MASK (0x0f)
#define CY_AS_REQUEST_LIST_STATE_QUEUED (0x00)
#define CY_AS_REQUEST_LIST_STATE_WAITING (0x01)
#define CY_AS_REQUEST_LIST_STATE_RECEIVED (0x02)
#define CY_AS_REQUEST_LIST_STATE_CANCELING (0x03)
#define CY_AS_REQUEST_LIST_STATE_SYNC (0x80)
#define CY_AS_REQUEST_RESPONSE_DELAY_ACK (0x01)
#define CY_AS_REQUEST_RESPONSE_EX (0x02)
#define CY_AS_REQUEST_RESPONSE_MS (0x04)
#define CY_AS_DEVICE_HANDLE_SIGNATURE (0x01211219)
#define CY_AS_NUM_EP(dev_p, num) ((dev_p)->endp[(num)])
typedef struct cy_as_device cy_as_device;
typedef void (*cy_as_dma_callback)(
cy_as_device *dev_p,
cy_as_end_point_number_t ep,
void *mem_p,
uint32_t size,
cy_as_return_status_t error
);
typedef struct cy_as_dma_queue_entry  cy_as_dma_queue_entry;
typedef struct cy_as_dma_end_point  cy_as_dma_end_point;
#define cy_as_end_point_number_is_usb(n) \
((n) != 2 && (n) != 4 && (n) != 6 && (n) != 8)
#define cy_as_end_point_number_is_storage(n) \
((n) == 2 || (n) == 4 || (n) == 6 || (n) == 8)
#define cy_as_dma_end_point_is_enabled(ep) \
((ep)->state & CY_AS_DMA_ENDPOINT_STATE_ENABLED)
#define cy_as_dma_end_point_enable(ep) \
((ep)->state |= CY_AS_DMA_ENDPOINT_STATE_ENABLED)
#define cy_as_dma_end_point_disable(ep) \
((ep)->state &= ~CY_AS_DMA_ENDPOINT_STATE_ENABLED)
#define cy_as_dma_end_point_is_sleeping(ep) \
((ep)->state & CY_AS_DMA_ENDPOINT_STATE_SLEEPING)
#define cy_as_dma_end_point_set_sleep_state(ep) \
((ep)->state |= CY_AS_DMA_ENDPOINT_STATE_SLEEPING)
#define cy_as_dma_end_point_set_wake_state(ep) \
((ep)->state &= ~CY_AS_DMA_ENDPOINT_STATE_SLEEPING)
#define cy_as_dma_end_point_is_running(ep) \
((ep)->state & CY_AS_DMA_ENDPOINT_STATE_DMA_RUNNING)
#define cy_as_dma_end_point_set_running(ep) \
((ep)->state |= CY_AS_DMA_ENDPOINT_STATE_DMA_RUNNING)
#define cy_as_dma_end_point_set_stopped(ep) \
((ep)->state &= ~CY_AS_DMA_ENDPOINT_STATE_DMA_RUNNING)
#define cy_as_dma_end_point_in_transit(ep) \
((ep)->state & CY_AS_DMA_ENDPOINT_STATE_IN_TRANSIT)
#define cy_as_dma_end_point_set_in_transit(ep) \
((ep)->state |= CY_AS_DMA_ENDPOINT_STATE_IN_TRANSIT)
#define cy_as_dma_end_point_clear_in_transit(ep) \
((ep)->state &= ~CY_AS_DMA_ENDPOINT_STATE_IN_TRANSIT)
#define cy_as_dma_end_point_is_direction_in(ep) \
(((ep)->state & CY_AS_DMA_ENDPOINT_STATE_DIRECTION) == \
CY_AS_DMA_ENDPOINT_STATE_DIRECTION)
#define cy_as_dma_end_point_is_direction_out(ep) \
(((ep)->state & CY_AS_DMA_ENDPOINT_STATE_DIRECTION) == 0)
#define cy_as_dma_end_point_set_direction_in(ep) \
((ep)->state |= CY_AS_DMA_ENDPOINT_STATE_DIRECTION)
#define cy_as_dma_end_point_set_direction_out(ep) \
((ep)->state &= ~CY_AS_DMA_ENDPOINT_STATE_DIRECTION)
#define cy_as_dma_end_point_is_usb(p) \
cy_as_end_point_number_is_usb((p)->ep)
#define cy_as_dma_end_point_is_storage(p) \
cy_as_end_point_number_is_storage((p)->ep)
typedef struct cy_as_ll_request_response  cy_as_ll_request_response;
typedef void (*cy_as_response_callback)(
cy_as_device *dev_p,
uint8_t						 context,
cy_as_ll_request_response *rqt,
cy_as_ll_request_response *resp,
cy_as_return_status_t status
);
typedef struct cy_as_ll_request_list_node  cy_as_ll_request_list_node;
#define cy_as_request_get_node_state(node_p) \
((node_p)->state & CY_AS_REQUEST_LIST_STATE_MASK)
#define cy_as_request_set_node_state(node_p, st) \
((node_p)->state = \
((node_p)->state & ~CY_AS_REQUEST_LIST_STATE_MASK) | (st))
#define cy_as_request_node_is_sync(node_p) \
((node_p)->state & CY_AS_REQUEST_LIST_STATE_SYNC)
#define cy_as_request_node_set_sync(node_p) \
((node_p)->state |= CY_AS_REQUEST_LIST_STATE_SYNC)
#define cy_as_request_node_clear_sync(node_p) \
((node_p)->state &= ~CY_AS_REQUEST_LIST_STATE_SYNC)
typedef enum cy_as_c_b_node_type  cy_as_c_b_node_type;
typedef struct cy_as_func_c_b_node  cy_as_func_c_b_node;
extern cy_as_func_c_b_node*
cy_as_create_func_c_b_node_data(cy_as_function_callback
cb, uint32_t client, cy_as_funct_c_b_type type, void *data);
extern cy_as_func_c_b_node*
cy_as_create_func_c_b_node(cy_as_function_callback cb,
uint32_t client);
extern void
cy_as_destroy_func_c_b_node(cy_as_func_c_b_node *node);
typedef struct cy_as_mtp_func_c_b_node  cy_as_mtp_func_c_b_node;
extern cy_as_mtp_func_c_b_node*
cy_as_create_mtp_func_c_b_node(cy_as_mtp_function_callback cb,
uint32_t client);
extern void
cy_as_destroy_mtp_func_c_b_node(cy_as_mtp_func_c_b_node *node);
typedef struct cy_as_usb_func_c_b_node  cy_as_usb_func_c_b_node;
extern cy_as_usb_func_c_b_node*
cy_as_create_usb_func_c_b_node(cy_as_usb_function_callback cb,
uint32_t client);
extern void
cy_as_destroy_usb_func_c_b_node(cy_as_usb_func_c_b_node *node);
typedef struct cy_as_usb_io_c_b_node  cy_as_usb_io_c_b_node;
extern cy_as_usb_io_c_b_node*
cy_as_create_usb_io_c_b_node(cy_as_usb_io_callback cb);
extern void
cy_as_destroy_usb_io_c_b_node(cy_as_usb_io_c_b_node *node);
typedef struct cy_as_storage_io_c_b_node  cy_as_storage_io_c_b_node;
extern cy_as_storage_io_c_b_node*
cy_as_create_storage_io_c_b_node(cy_as_storage_callback cb,
cy_as_media_type media, uint32_t device_index,
uint32_t unit, uint32_t block_addr, cy_as_oper_type oper,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p);
extern void
cy_as_destroy_storage_io_c_b_node(cy_as_storage_io_c_b_node *node);
typedef struct cy_as_c_b_queue  cy_as_c_b_queue;
extern cy_as_c_b_queue *
cy_as_create_c_b_queue(cy_as_c_b_node_type type);
extern void
cy_as_destroy_c_b_queue(cy_as_c_b_queue *queue);
extern void
cy_as_insert_c_b_node(cy_as_c_b_queue *queue_p, void *cbnode);
extern void
cy_as_remove_c_b_node(cy_as_c_b_queue *queue_p);
extern void
cy_as_remove_c_b_tail_node(cy_as_c_b_queue *queue_p);
extern void
cy_as_clear_c_b_queue(cy_as_c_b_queue *queue_p);
extern cy_as_return_status_t
cy_as_misc_send_request(cy_as_device *dev_p,
cy_as_function_callback cb,
uint32_t client,
cy_as_funct_c_b_type type,
void *data,
cy_as_c_b_queue *queue,
uint16_t req_type,
cy_as_ll_request_response *req_p,
cy_as_ll_request_response *reply_p,
cy_as_response_callback rcb);
extern void
cy_as_misc_cancel_ex_requests(cy_as_device *dev_p);
extern void
cy_as_usb_cleanup(
cy_as_device *dev_p);
extern void
cy_as_storage_cleanup(
cy_as_device *dev_p);
typedef struct cy_as_context  cy_as_context;
#define cy_as_context_is_waiting(ctxt) \
((ctxt)->state & CY_AS_CTXT_STATE_WAITING_RESPONSE)
#define cy_as_context_set_waiting(ctxt) \
((ctxt)->state |= CY_AS_CTXT_STATE_WAITING_RESPONSE)
#define cy_as_context_clear_waiting(ctxt) \
((ctxt)->state &= ~CY_AS_CTXT_STATE_WAITING_RESPONSE)
typedef struct cy_as_sdio_device  cy_as_sdio_device;
#define cy_as_sdio_get_function_code(handle, bus, i) \
(((cy_as_device *)handle)->sdiocard[bus].function[i-1].function_code)
#define cy_as_sdio_get_function_ext_code(handle, bus, i)	\
(((cy_as_device *)handle)->sdiocard[bus].\
function[i-1].extended_func_code)
#define cy_as_sdio_get_function_p_s_n(handle, bus, i) \
(((cy_as_device *)handle)->sdiocard[bus].function[i-1].card_psn)
#define cy_as_sdio_get_function_blocksize(handle, bus, i)  \
(((cy_as_device *)handle)->sdiocard[bus].function[i-1].blocksize)
#define cy_as_sdio_get_function_max_blocksize(handle, bus, i) \
(((cy_as_device *)handle)->sdiocard[bus].function[i-1].maxblocksize)
#define cy_as_sdio_get_function_csa_support(handle, bus, i) \
(((cy_as_device *)handle)->sdiocard[bus].function[i-1].csa_bits)
#define cy_as_sdio_get_function_wakeup_support(handle, bus, i) \
(((cy_as_device *)handle)->sdiocard[bus].function[i-1]. wakeup_support)
#define cy_as_sdio_set_function_block_size(handle, bus, i, blocksize) \
(((cy_as_device *)handle)->sdiocard[bus].function[i-1].blocksize = \
blocksize)
#define cy_as_sdio_get_card_num_functions(handle, bus) \
(((cy_as_device *)handle)->sdiocard[bus].card.num_functions)
#define cy_as_sdio_get_card_mem_present(handle, bus) \
(((cy_as_device *)handle)->sdiocard[bus].card.memory_present)
#define cy_as_sdio_get_card_manf_id(handle, bus)	\
(((cy_as_device *)handle)->sdiocard[bus].card.manufacturer__id)
#define cy_as_sdio_get_card_manf_info(handle, bus) \
(((cy_as_device *)handle)->sdiocard[bus].card.manufacturer_info)
#define cy_as_sdio_get_card_blocksize(handle, bus) \
(((cy_as_device *)handle)->sdiocard[bus].card.blocksize)
#define cy_as_sdio_get_card_max_blocksize(handle, bus) \
(((cy_as_device *)handle)->sdiocard[bus].card.maxblocksize)
#define cy_as_sdio_get_card_sdio_version(handle, bus) \
(((cy_as_device *)handle)->sdiocard[bus].card.sdio_version)
#define cy_as_sdio_get_card_capability(handle, bus) \
(((cy_as_device *)handle)->sdiocard[bus].card.card_capability)
#define cy_as_sdio_get_function_init_map(handle, bus) \
(((cy_as_device *)handle)->sdiocard[bus].function_init_map)
#define cy_as_sdio_check_function_initialized(handle, bus, i) \
(((cy_as_sdio_get_function_init_map(handle, bus)) & (0x01<<i)) ? 1 : 0)
#define cy_as_sdio_set_card_block_size(handle, bus, blocksize) \
(((cy_as_device *)handle)->sdiocard[bus].card.blocksize = blocksize)
#define cy_as_sdio_check_support_bus_suspend(handle, bus) \
((cy_as_sdio_get_card_capability(handle, bus) & CY_SDIO_SBS) ? 1 : 0)
#define cy_as_sdio_check_function_suspended(handle, bus, i) \
((((cy_as_device *)handle)->sdiocard[bus].function_suspended_map & \
(0x01<<i)) ? 1 : 0)
#define cy_as_sdio_set_function_suspended(handle, bus, i) \
((((cy_as_device *)handle)->sdiocard[bus].function_suspended_map) \
|= (0x01<<i))
#define cy_as_sdio_clear_function_suspended(handle, bus, i) \
((((cy_as_device *)handle)->sdiocard[bus].function_suspended_map) \
&= (~(0x01<<i)))
struct cy_as_device ;
#define cy_as_device_is_configured(dp) \
((dp)->state & CY_AS_DEVICE_STATE_CONFIGURED)
#define cy_as_device_set_configured(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_CONFIGURED)
#define cy_as_device_set_unconfigured(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_CONFIGURED)
#define cy_as_device_is_dma_running(dp) \
((dp)->state & CY_AS_DEVICE_STATE_DMA_MODULE)
#define cy_as_device_set_dma_running(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_DMA_MODULE)
#define cy_as_device_set_dma_stopped(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_DMA_MODULE)
#define cy_as_device_is_low_level_running(dp) \
((dp)->state & CY_AS_DEVICE_STATE_LOWLEVEL_MODULE)
#define cy_as_device_set_low_level_running(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_LOWLEVEL_MODULE)
#define cy_as_device_set_low_level_stopped(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_LOWLEVEL_MODULE)
#define cy_as_device_is_intr_running(dp) \
((dp)->state & CY_AS_DEVICE_STATE_INTR_MODULE)
#define cy_as_device_set_intr_running(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_INTR_MODULE)
#define cy_as_device_set_intr_stopped(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_INTR_MODULE)
#define cy_as_device_is_firmware_loaded(dp) \
((dp)->state & CY_AS_DEVICE_STATE_FIRMWARE_LOADED)
#define cy_as_device_set_firmware_loaded(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_FIRMWARE_LOADED)
#define cy_as_device_set_firmware_not_loaded(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_FIRMWARE_LOADED)
#define cy_as_device_is_storage_running(dp) \
((dp)->state & CY_AS_DEVICE_STATE_STORAGE_MODULE)
#define cy_as_device_set_storage_running(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_STORAGE_MODULE)
#define cy_as_device_set_storage_stopped(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_STORAGE_MODULE)
#define cy_as_device_is_usb_running(dp) \
((dp)->state & CY_AS_DEVICE_STATE_USB_MODULE)
#define cy_as_device_set_usb_running(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_USB_MODULE)
#define cy_as_device_set_usb_stopped(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_USB_MODULE)
#define cy_as_device_wants_scsi_messages(dp) \
(((dp)->state & CY_AS_DEVICE_STATE_STORAGE_SCSIMSG) \
? cy_true : cy_false)
#define cy_as_device_set_scsi_messages(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_STORAGE_SCSIMSG)
#define cy_as_device_clear_scsi_messages(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_STORAGE_SCSIMSG)
#define cy_as_device_is_storage_async_pending(dp) \
((dp)->state & CY_AS_DEVICE_STATE_STORAGE_ASYNC_PENDING)
#define cy_as_device_set_storage_async_pending(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_STORAGE_ASYNC_PENDING)
#define cy_as_device_clear_storage_async_pending(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_STORAGE_ASYNC_PENDING)
#define cy_as_device_is_usb_connected(dp) \
((dp)->state & CY_AS_DEVICE_STATE_USB_CONNECTED)
#define cy_as_device_set_usb_connected(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_USB_CONNECTED)
#define cy_as_device_clear_usb_connected(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_USB_CONNECTED)
#define cy_as_device_is_usb_high_speed(dp) \
((dp)->state & CY_AS_DEVICE_STATE_USB_HIGHSPEED)
#define cy_as_device_set_usb_high_speed(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_USB_HIGHSPEED)
#define cy_as_device_clear_usb_high_speed(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_USB_HIGHSPEED)
#define cy_as_device_is_in_callback(dp) \
((dp)->state & CY_AS_DEVICE_STATE_IN_CALLBACK)
#define cy_as_device_set_in_callback(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_IN_CALLBACK)
#define cy_as_device_clear_in_callback(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_IN_CALLBACK)
#define cy_as_device_is_setup_i_o_performed(dp) \
((dp)->state & CY_AS_DEVICE_STATE_SETUP_IO_PERFORMED)
#define cy_as_device_set_setup_i_o_performed(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_SETUP_IO_PERFORMED)
#define cy_as_device_clear_setup_i_o_performed(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_SETUP_IO_PERFORMED)
#define cy_as_device_is_ack_delayed(dp) \
((dp)->usb_delay_ack_count > 0)
#define cy_as_device_set_ack_delayed(dp) \
((dp)->usb_delay_ack_count++)
#define cy_as_device_rem_ack_delayed(dp) \
((dp)->usb_delay_ack_count--)
#define cy_as_device_clear_ack_delayed(dp) \
((dp)->usb_delay_ack_count = 0)
#define cy_as_device_is_setup_packet(dp) \
((dp)->state & CY_AS_DEVICE_STATE_IN_SETUP_PACKET)
#define cy_as_device_set_setup_packet(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_IN_SETUP_PACKET)
#define cy_as_device_clear_setup_packet(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_IN_SETUP_PACKET)
#define cy_as_device_is_ep0_stalled(dp) \
((dp)->state & CY_AS_DEVICE_STATE_EP0_STALLED)
#define cy_as_device_set_ep0_stalled(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_EP0_STALLED)
#define cy_as_device_clear_ep0_stalled(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_EP0_STALLED)
#define cy_as_device_is_register_standby(dp) \
((dp)->state & CY_AS_DEVICE_STATE_REGISTER_STANDBY)
#define cy_as_device_set_register_standby(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_REGISTER_STANDBY)
#define cy_as_device_clear_register_standby(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_REGISTER_STANDBY)
#define cy_as_device_is_pin_standby(dp) \
((dp)->state & CY_AS_DEVICE_STATE_PIN_STANDBY)
#define cy_as_device_set_pin_standby(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_PIN_STANDBY)
#define cy_as_device_clear_pin_standby(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_PIN_STANDBY)
#define cy_as_device_is_crystal(dp) \
((dp)->state & CY_AS_DEVICE_STATE_CRYSTAL)
#define cy_as_device_is_external_clock(dp) \
(!((dp)->state & CY_AS_DEVICE_STATE_CRYSTAL))
#define cy_as_device_set_crystal(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_CRYSTAL)
#define cy_as_device_set_external_clock(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_CRYSTAL)
#define cy_as_device_is_waking(dp) \
((dp)->state & CY_AS_DEVICE_STATE_WAKING)
#define cy_as_device_set_waking(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_WAKING)
#define cy_as_device_clear_waking(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_WAKING)
#define cy_as_device_is_in_suspend_mode(dp) \
((dp)->state & CY_AS_DEVICE_STATE_SUSPEND)
#define cy_as_device_set_suspend_mode(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_SUSPEND)
#define cy_as_device_clear_suspend_mode(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_SUSPEND)
#define cy_as_device_is_reset_pending(dp) \
((dp)->state & CY_AS_DEVICE_STATE_RESETP)
#define cy_as_device_set_reset_pending(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_RESETP)
#define cy_as_device_clear_reset_pending(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_RESETP)
#define cy_as_device_is_standby_pending(dp) \
((dp)->state & CY_AS_DEVICE_STATE_STANDP)
#define cy_as_device_set_standby_pending(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_STANDP)
#define cy_as_device_clear_standby_pending(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_STANDP)
#define cy_as_device_is_s_s_s_pending(dp) \
((dp)->state & CY_AS_DEVICE_STATE_SSSP)
#define cy_as_device_set_s_s_s_pending(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_SSSP)
#define cy_as_device_clear_s_s_s_pending(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_SSSP)
#define cy_as_device_is_u_s_s_pending(dp) \
((dp)->state & CY_AS_DEVICE_STATE_USSP)
#define cy_as_device_set_u_s_s_pending(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_USSP)
#define cy_as_device_clear_u_s_s_pending(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_USSP)
#define cy_as_device_is_m_s_s_pending(dp) \
((dp)->state & CY_AS_DEVICE_STATE_MSSP)
#define cy_as_device_set_m_s_s_pending(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_MSSP)
#define cy_as_device_clear_m_s_s_pending(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_MSSP)
#define cy_as_device_is_p2s_dma_start_recvd(dp) \
((dp)->state & CY_AS_DEVICE_STATE_P2SDMA_START)
#define cy_as_device_set_p2s_dma_start_recvd(dp) \
((dp)->state |= CY_AS_DEVICE_STATE_P2SDMA_START)
#define cy_as_device_clear_p2s_dma_start_recvd(dp) \
((dp)->state &= ~CY_AS_DEVICE_STATE_P2SDMA_START)
#define cy_as_device_is_usb_async_pending(dp, ep) \
((dp)->epasync & (1 << ep))
#define cy_as_device_set_usb_async_pending(dp, ep) \
((dp)->epasync |= (1 << ep))
#define cy_as_device_clear_usb_async_pending(dp, ep) \
((dp)->epasync &= ~(1 << ep))
#define cy_as_device_is_nand_storage_supported(dp) \
((dp)->media_supported[0] & 1)
#define cy_as_device_is_astoria_dev(dp) \
(((dp)->silicon_id == CY_AS_MEM_CM_WB_CFG_ID_HDID_ASTORIA_VALUE) || \
((dp)->silicon_id == CY_AS_MEM_CM_WB_CFG_ID_HDID_ASTORIA_FPGA_VALUE))
#define cy_as_device_is_antioch_dev(dp) \
((dp)->silicon_id == CY_AS_MEM_CM_WB_CFG_ID_HDID_ANTIOCH_VALUE)
extern void cy_as_log_debug_message(int value, const char *msg);
#define cy_as_log_debug_message(value, msg)
extern cy_as_device *
cy_as_device_find_from_tag(
cy_as_hal_device_tag tag
);
