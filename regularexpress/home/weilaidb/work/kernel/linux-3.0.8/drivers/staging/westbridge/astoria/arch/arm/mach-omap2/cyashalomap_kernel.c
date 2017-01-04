#define HAL_REV "1.1.0"
#define PNAND_16BIT_MODE
#define PNAND_LBD_READ_NO_PFE
#define MAX_DRQ_LOOPS_IN_ISR 4
#define CYASSTORAGE_WRITE_EP_NUM	(4)
#define CYASSTORAGE_READ_EP_NUM	(8)
#define CYASSTORAGE_MAX_XFER_SIZE	(2*32768)
#define HAL_DMA_PKT_SZ 512
#define is_storage_e_p(ep) (((ep) == 2) || ((ep) == 4) || \
((ep) == 6) || ((ep) == 8))
static uint8_t pnand_16bit;
#define PROCESS_MULTIPLE_DRQ_IN_ISR (1)
#define CASDO 0x05
#define CASDI 0x85
#define RDPAGE_B1   0x00
#define RDPAGE_B2   0x30
#define PGMPAGE_B1  0x80
#define PGMPAGE_B2  0x10
typedef enum cy_as_hal_dma_type  cy_as_hal_dma_type;
typedef struct cy_as_hal_endpoint_dma  cy_as_hal_endpoint_dma;
static cy_as_omap_dev_kernel *m_omap_list_p;
static cy_as_hal_dma_complete_callback callback;
static cy_as_hal_endpoint_dma end_points[16];
static void cy_handle_d_r_q_interrupt(cy_as_omap_dev_kernel *dev_p);
static uint16_t intr_sequence_num;
static uint8_t intr__enable;
spinlock_t int_lock;
static u32 iomux_vma;
static u32 csa_phy;
static u32 gpmc_base;
static u32 gpmc_data_vma;
static u32 ndata_reg_vma;
static u32 ncmd_reg_vma;
static u32 naddr_reg_vma;
static void p_nand_lbd_read(u16 col_addr, u32 row_addr, u16 count, void *buff);
static void p_nand_lbd_write(u16 col_addr, u32 row_addr, u16 count, void *buff);
static inline u16 __attribute__((always_inline))
ast_p_nand_casdo_read(u8 reg_addr8);
static inline void __attribute__((always_inline))
ast_p_nand_casdi_write(u8 reg_addr8, u16 data);
static void cy_as_hal_print_omap_regs(char *name_prefix,
u8 name_base, u32 virt_base, u16 count)
static u16 omap_cfg_reg_L(u32 pad_func_index)
#define BLKSZ_4K 0x1000
void cy_as_hal_gpmc_enable_16bit_bus(bool dbus16_enabled)
static int cy_as_hal_gpmc_init(void)
static irqreturn_t cy_astoria_int_handler(int irq,
void *dev_id, struct pt_regs *regs)
static int cy_as_hal_configure_interrupts(void *dev_p)
static void cy_as_hal_init_user_pads(user_pad_cfg_t *pad_cfg_tab)
static void cy_as_hal_release_user_pads(user_pad_cfg_t *pad_cfg_tab)
void cy_as_hal_config_c_s_mux(void)
EXPORT_SYMBOL(cy_as_hal_config_c_s_mux);
uint32_t cy_as_hal_processor_hw_init(void)
EXPORT_SYMBOL(cy_as_hal_processor_hw_init);
void cy_as_hal_omap_hardware_deinit(cy_as_omap_dev_kernel *dev_p)
int stop_o_m_a_p_kernel(const char *pgm, cy_as_hal_device_tag tag)
int omap_start_intr(cy_as_hal_device_tag tag)
static inline void nand_cmd_n_addr(u8 cmdb1, u16 col_addr, u32 row_addr)
inline int wait_rn_b_high(void)
static void p_nand_lbd_read(u16 col_addr, u32 row_addr, u16 count, void *buff)
static void p_nand_lbd_read(u16 col_addr, u32 row_addr, u16 count, void *buff)
static void p_nand_lbd_read(u16 col_addr, u32 row_addr, u16 count, void *buff)
static void p_nand_lbd_write(u16 col_addr, u32 row_addr, u16 count, void *buff)
static inline void ast_p_nand_casdi_write(u8 reg_addr8, u16 data)
static inline u16 ast_p_nand_casdo_read(u8 reg_addr8)
void cy_as_hal_write_register(
cy_as_hal_device_tag tag,
uint16_t addr, uint16_t data)
uint16_t cy_as_hal_read_register(cy_as_hal_device_tag tag, uint16_t addr)
static inline bool prep_for_next_xfer(cy_as_hal_device_tag tag, uint8_t ep)
static void cy_service_e_p_dma_read_request(
cy_as_omap_dev_kernel *dev_p, uint8_t ep)
static void cy_service_e_p_dma_write_request(
cy_as_omap_dev_kernel *dev_p, uint8_t ep)
static void cy_handle_d_r_q_interrupt(cy_as_omap_dev_kernel *dev_p)
void cy_as_hal_dma_cancel_request(cy_as_hal_device_tag tag, uint8_t ep)
void cy_as_hal_set_ep_dma_mode(uint8_t ep, bool sg_xfer_enabled)
EXPORT_SYMBOL(cy_as_hal_set_ep_dma_mode);
void cy_as_hal_dma_setup_write(cy_as_hal_device_tag tag,
uint8_t ep, void *buf,
uint32_t size, uint16_t maxsize)
void cy_as_hal_dma_setup_read(cy_as_hal_device_tag tag,
uint8_t ep, void *buf,
uint32_t size, uint16_t maxsize)
void cy_as_hal_dma_register_callback(cy_as_hal_device_tag tag,
cy_as_hal_dma_complete_callback cb)
uint32_t cy_as_hal_dma_max_request_size(cy_as_hal_device_tag tag,
cy_as_end_point_number_t ep)
cy_bool cy_as_hal_set_wakeup_pin(cy_as_hal_device_tag tag, cy_bool state)
void cy_as_hal_pll_lock_loss_handler(cy_as_hal_device_tag tag)
void *cy_as_hal_alloc(uint32_t cnt)
void cy_as_hal_free(void *mem_p)
void *cy_as_hal_c_b_alloc(uint32_t cnt)
void cy_as_hal_mem_set(void *ptr, uint8_t value, uint32_t cnt)
cy_bool cy_as_hal_create_sleep_channel(cy_as_hal_sleep_channel *channel)
cy_bool cy_as_hal_destroy_sleep_channel(cy_as_hal_sleep_channel *channel)
cy_bool cy_as_hal_sleep_on(cy_as_hal_sleep_channel *channel, uint32_t ms)
cy_bool cy_as_hal_wake(cy_as_hal_sleep_channel *channel)
uint32_t cy_as_hal_disable_interrupts()
void cy_as_hal_enable_interrupts(uint32_t val)
void cy_as_hal_sleep150(void)
void cy_as_hal_sleep(uint32_t ms)
cy_bool cy_as_hal_is_polling()
void cy_as_hal_c_b_free(void *ptr)
void cy_as_hal_init_dev_registers(cy_as_hal_device_tag tag,
cy_bool is_standby_wakeup)
void cy_as_hal_read_regs_before_standby(cy_as_hal_device_tag tag)
cy_bool cy_as_hal_sync_device_clocks(cy_as_hal_device_tag tag)
int start_o_m_a_p_kernel(const char *pgm,
cy_as_hal_device_tag *tag, cy_bool debug)
void my_o_m_a_p_kernel_hal_dummy_function(void)
