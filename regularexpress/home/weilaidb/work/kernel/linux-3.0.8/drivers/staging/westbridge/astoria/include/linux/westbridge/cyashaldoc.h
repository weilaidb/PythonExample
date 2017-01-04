#define _INCLUDED_CYASHALDOC_H_
typedef struct cy_as_hal_sleep_channel  cy_as_hal_sleep_channel;
EXTERN void
cy_as_hal_write_register(
cy_as_hal_device_tag			tag,
uint16_t				addr,
uint16_t				value
);
EXTERN uint16_t
cy_as_hal_read_register(
cy_as_hal_device_tag tag,
uint16_t addr
);
EXTERN void
cy_as_hal_dma_setup_write(
cy_as_hal_device_tag			tag,
cy_as_end_point_number_t		ep,
void *buf_p,
uint32_t				size,
uint16_t				maxsize
);
EXTERN void
cy_as_hal_dma_setup_read(
cy_as_hal_device_tag			tag,
cy_as_end_point_number_t		ep,
void *buf_p,
uint32_t				size,
uint16_t				maxsize
);
EXTERN void
cy_as_hal_dma_cancel_request(
cy_as_hal_device_tag			tag,
cy_as_end_point_number_t		ep
);
EXTERN void
cy_as_hal_dma_register_callback(
cy_as_hal_device_tag tag,
cy_as_hal_dma_complete_callback		cb
);
EXTERN uint32_t
cy_as_hal_dma_max_request_size(
cy_as_hal_device_tag tag,
cy_as_end_point_number_t ep
);
EXTERN uint32_t
cy_as_hal_set_wakeup_pin(
cy_as_hal_device_tag tag,
cy_bool	state
);
EXTERN cy_bool
cy_as_hal_sync_device_clocks(
cy_as_hal_device_tag tag,
);
EXTERN void
cy_as_hal_init_dev_registers(
cy_as_hal_device_tag tag,
cy_bool	is_standby_wakeup
);
EXTERN void
cy_as_hal_read_regs_before_standby(
cy_as_hal_device_tag tag
);
EXTERN void
cy_as_hal_restore_regs_after_standby(
cy_as_hal_device_tag tag
);
EXTERN void *
cy_as_hal_alloc(
uint32_t				size
);
EXTERN void
cy_as_hal_free(
void *ptr
);
EXTERN void *
cy_as_hal_c_b_alloc(
uint32_t size
);
EXTERN void
cy_as_hal_c_b_free(
void *ptr
);
EXTERN void
cy_as_mem_set(
void *ptr,
uint8_t	value,
uint32_t cnt
);
EXTERN cy_bool
cy_as_hal_create_sleep_channel(
cy_as_hal_sleep_channel	*chan
);
EXTERN cy_bool
cy_as_hal_destroy_sleep_channel(
cy_as_hal_sleep_channel		chan
);
EXTERN cy_bool
cy_as_hal_sleep_on(
cy_as_hal_sleep_channel chan,
uint32_t ms
);
EXTERN cy_bool
cy_as_hal_wake(
cy_as_hal_sleep_channel		chan
);
EXTERN uint32_t
cy_as_hal_disable_interrupts();
EXTERN void
cy_as_hal_enable_interrupts(
uint32_t value
);
EXTERN void
cy_as_hal_sleep150(
);
EXTERN void
cy_as_hal_sleep(
uint32_t ms
);
EXTERN void
cy_as_hal_assert(
cy_bool	cond
);
EXTERN void
cy_as_hal_print_message(
const char *fmt_p,
...
);
EXTERN cy_bool
cy_as_hal_is_polling(
void);
