struct semaphore mddi_host_mutex;
struct clk *mddi_io_clk;
static boolean mddi_host_powered = FALSE;
static boolean mddi_host_initialized = FALSE;
extern uint32 *mddi_reg_read_value_ptr;
mddi_lcd_func_type mddi_lcd;
extern mddi_client_capability_type mddi_client_capability_pkt;
extern void mddi_hitachi_window_adjust(uint16 x1,
uint16 x2, uint16 y1, uint16 y2);
extern void mddi_toshiba_lcd_init(void);
extern void mddi_s6d0142_lcd_init(void);
extern void mddi_s6d0142_window_adjust(uint16 x1,
uint16 x2,
uint16 y1,
uint16 y2,
mddi_llist_done_cb_type done_cb);
void mddi_init(void)
int mddi_host_register_read(uint32 reg_addr,
uint32 *reg_value_ptr, boolean wait, mddi_host_type host)
int mddi_host_register_write(uint32 reg_addr,
uint32 reg_val, enum mddi_data_packet_size_type packet_size,
boolean wait, mddi_llist_done_cb_type done_cb, mddi_host_type host)
boolean mddi_host_register_read_int
(uint32 reg_addr, uint32 *reg_value_ptr, mddi_host_type host)
boolean mddi_host_register_write_int
(uint32 reg_addr,
uint32 reg_val, mddi_llist_done_cb_type done_cb, mddi_host_type host)
void mddi_wait(uint16 time_ms)
void mddi_client_lcd_vsync_detected(boolean detected)
void mddi_window_adjust_ext(struct msm_fb_data_type *mfd,
uint16 x1,
uint16 x2,
uint16 y1,
uint16 y2, mddi_llist_done_cb_type done_cb)
void mddi_window_adjust(struct msm_fb_data_type *mfd,
uint16 x1, uint16 x2, uint16 y1, uint16 y2)
