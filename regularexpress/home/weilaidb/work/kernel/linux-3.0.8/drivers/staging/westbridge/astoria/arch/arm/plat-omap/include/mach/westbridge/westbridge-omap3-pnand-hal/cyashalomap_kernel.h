#define _INCLUDED_CYASHALOMAP_KERNEL_H_
typedef struct cy_as_hal_sleep_channel_t  cy_as_hal_sleep_channel;
typedef void *cy_as_hal_device_tag;
void
cy_as_hal_write_register(cy_as_hal_device_tag tag,
uint16_t addr, uint16_t data);
uint16_t
cy_as_hal_read_register(cy_as_hal_device_tag tag, uint16_t addr);
void
cy_as_hal_dma_setup_write(cy_as_hal_device_tag tag,
uint8_t ep, void *buf, uint32_t size, uint16_t maxsize);
void
cy_as_hal_dma_setup_read(cy_as_hal_device_tag tag, uint8_t ep,
void *buf, uint32_t size, uint16_t maxsize);
void
cy_as_hal_dma_cancel_request(cy_as_hal_device_tag tag, uint8_t ep);
void
cy_as_hal_dma_register_callback(cy_as_hal_device_tag tag,
cy_as_hal_dma_complete_callback cb);
uint32_t
cy_as_hal_dma_max_request_size(cy_as_hal_device_tag tag,
cy_as_end_point_number_t ep);
cy_bool
cy_as_hal_set_wakeup_pin(cy_as_hal_device_tag tag, cy_bool state);
void
cy_as_hal_pll_lock_loss_handler(cy_as_hal_device_tag tag);
void *
cy_as_hal_alloc(uint32_t cnt);
void
cy_as_hal_free(void *mem_p);
void *
cy_as_hal_c_b_alloc(uint32_t cnt);
void
cy_as_hal_c_b_free(void *ptr);
void
cy_as_hal_mem_set(void *ptr, uint8_t value, uint32_t cnt);
cy_bool
cy_as_hal_create_sleep_channel(cy_as_hal_sleep_channel *channel);
cy_bool
cy_as_hal_destroy_sleep_channel(cy_as_hal_sleep_channel *channel);
cy_bool
cy_as_hal_sleep_on(cy_as_hal_sleep_channel *channel, uint32_t ms);
cy_bool
cy_as_hal_wake(cy_as_hal_sleep_channel *channel);
uint32_t
cy_as_hal_disable_interrupts(void);
void
cy_as_hal_enable_interrupts(uint32_t);
void
cy_as_hal_sleep150(void);
void
cy_as_hal_sleep(uint32_t ms);
cy_bool
cy_as_hal_is_polling(void);
void cy_as_hal_init_dev_registers(cy_as_hal_device_tag tag,
cy_bool is_standby_wakeup);
cy_bool cy_as_hal_sync_device_clocks(cy_as_hal_device_tag tag);
void cy_as_hal_read_regs_before_standby(cy_as_hal_device_tag tag);
#define cy_as_hal_assert(cond) if (!(cond))\
printk(KERN_WARNING"assertion failed at %s:%d\n", __FILE__, __LINE__);
#define cy_as_hal_assert(cond)
#define cy_as_hal_print_message printk
#define DBG_PRINT_ENABLED
#define DBGPRN(...) printk(__VA_ARGS__)
#define DBGPRN_FUNC_NAME	printk("<1> %x:_func: %s\n", \
current->pid, __func__)
#define DBGPRN(...)
#define DBGPRN_FUNC_NAME
void cyashal_prn_buf(void  *buf, uint16_t offset, int len);
int start_o_m_a_p_kernel(const char *pgm,
cy_as_hal_device_tag *tag, cy_bool debug);
int stop_o_m_a_p_kernel(const char *pgm, cy_as_hal_device_tag tag);
int omap_start_intr(cy_as_hal_device_tag tag);
void cy_as_hal_set_ep_dma_mode(uint8_t ep, bool sg_xfer_enabled);
