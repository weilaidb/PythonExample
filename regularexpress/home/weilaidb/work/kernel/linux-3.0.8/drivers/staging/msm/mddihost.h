#define MDDIHOST_H
#undef FEATURE_MDDI_MC4
#undef FEATURE_MDDI_S6D0142
#undef FEATURE_MDDI_HITACHI
#define FEATURE_MDDI_SHARP
#define FEATURE_MDDI_TOSHIBA
#undef FEATURE_MDDI_E751
#define FEATURE_MDDI_CORONA
#define FEATURE_MDDI_PRISM
#define T_MSM7500
typedef enum  mddi_video_format;
typedef enum  mddi_lcd_type;
typedef enum  mddi_host_type;
typedef enum  mddi_host_driver_state_type;
typedef enum  mddi_gpio_int_type;
enum mddi_data_packet_size_type ;
typedef struct  mddi_reg_write_type;
boolean mddi_vsync_set_handler(msm_fb_vsync_handler_type handler, void *arg);
typedef void (*mddi_llist_done_cb_type) (void);
typedef void (*mddi_rev_handler_type) (void *);
boolean mddi_set_rev_handler(mddi_rev_handler_type handler, uint16 pkt_type);
#define MDDI_DEFAULT_PRIM_PIX_ATTR 0xC3
#define MDDI_DEFAULT_SECD_PIX_ATTR 0xC0
typedef int gpio_int_polarity_type;
typedef int gpio_int_handler_type;
typedef struct  mddi_lcd_func_type;
extern mddi_lcd_func_type mddi_lcd;
void mddi_init(void);
void mddi_powerdown(void);
void mddi_host_start_ext_display(void);
void mddi_host_stop_ext_display(void);
extern spinlock_t mddi_host_spin_lock;
void mddi_reset(void);
void mddi_host_switch_proc_control(boolean on);
void mddi_host_exit_power_collapse(void);
void mddi_queue_splash_screen
(void *buf_ptr,
boolean clear_area,
int16 src_width,
int16 src_starting_row,
int16 src_starting_column,
int16 num_of_rows,
int16 num_of_columns, int16 dst_starting_row, int16 dst_starting_column);
void mddi_queue_image
(void *buf_ptr,
uint8 stereo_video,
boolean clear_area,
int16 src_width,
int16 src_starting_row,
int16 src_starting_column,
int16 num_of_rows,
int16 num_of_columns, int16 dst_starting_row, int16 dst_starting_column);
int mddi_host_register_read
(uint32 reg_addr,
uint32 *reg_value_ptr, boolean wait, mddi_host_type host_idx);
int mddi_host_register_write
(uint32 reg_addr, uint32 reg_val,
enum mddi_data_packet_size_type packet_size,
boolean wait, mddi_llist_done_cb_type done_cb, mddi_host_type host);
boolean mddi_host_register_write_int
(uint32 reg_addr,
uint32 reg_val, mddi_llist_done_cb_type done_cb, mddi_host_type host);
boolean mddi_host_register_read_int
(uint32 reg_addr, uint32 *reg_value_ptr, mddi_host_type host_idx);
void mddi_queue_register_write_static
(uint32 reg_addr,
uint32 reg_val, boolean wait, mddi_llist_done_cb_type done_cb);
void mddi_queue_static_window_adjust
(const mddi_reg_write_type *reg_write,
uint16 num_writes, mddi_llist_done_cb_type done_cb);
#define mddi_queue_register_read(reg, val_ptr, wait, sig) \
mddi_host_register_read(reg, val_ptr, wait, MDDI_HOST_PRIM)
#define mddi_queue_register_write(reg, val, wait, sig) \
mddi_host_register_write(reg, val, MDDI_DATA_PACKET_4_BYTES,\
wait, NULL, MDDI_HOST_PRIM)
#define mddi_queue_register_write_extn(reg, val, pkt_size, wait, sig) \
mddi_host_register_write(reg, val, pkt_size, \
wait, NULL, MDDI_HOST_PRIM)
#define mddi_queue_register_write_int(reg, val) \
mddi_host_register_write_int(reg, val, NULL, MDDI_HOST_PRIM)
#define mddi_queue_register_read_int(reg, val_ptr) \
mddi_host_register_read_int(reg, val_ptr, MDDI_HOST_PRIM)
#define mddi_queue_register_writes(reg_ptr, val, wait, sig) \
mddi_host_register_writes(reg_ptr, val, wait, sig, MDDI_HOST_PRIM)
void mddi_wait(uint16 time_ms);
void mddi_assign_max_pkt_dimensions(uint16 image_cols,
uint16 image_rows,
uint16 bpp,
uint16 *max_cols, uint16 * max_rows);
uint16 mddi_assign_pkt_height(uint16 pkt_width, uint16 pkt_height, uint16 bpp);
void mddi_queue_reverse_encapsulation(boolean wait);
void mddi_disable(int lock);
