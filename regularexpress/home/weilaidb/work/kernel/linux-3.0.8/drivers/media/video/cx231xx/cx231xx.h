#define _CX231XX_H
#define DRIVER_NAME                     "cx231xx"
#define PWR_SLEEP_INTERVAL              5
#define     AFE_DEVICE_ADDRESS		0x60
#define     I2S_BLK_DEVICE_ADDRESS	0x98
#define     VID_BLK_I2C_ADDRESS		0x88
#define     VERVE_I2C_ADDRESS           0x40
#define     DIF_USE_BASEBAND            0xFFFFFFFF
#define CX231XX_BOARD_UNKNOWN		    0
#define CX231XX_BOARD_CNXT_CARRAERA	1
#define CX231XX_BOARD_CNXT_SHELBY	2
#define CX231XX_BOARD_CNXT_RDE_253S	3
#define CX231XX_BOARD_CNXT_RDU_253S	4
#define CX231XX_BOARD_CNXT_VIDEO_GRABBER	5
#define CX231XX_BOARD_CNXT_RDE_250	6
#define CX231XX_BOARD_CNXT_RDU_250	7
#define CX231XX_BOARD_HAUPPAUGE_EXETER  8
#define CX231XX_BOARD_HAUPPAUGE_USBLIVE2 9
#define CX231XX_BOARD_PV_PLAYTV_USB_HYBRID 10
#define CX231XX_BOARD_PV_XCAPTURE_USB 11
#define CX231XX_BOARD_KWORLD_UB430_USB_HYBRID 12
#define CX231XX_BOARD_ICONBIT_U100 13
#define CX231XX_MIN_BUF                 4
#define CX231XX_DEF_BUF                 12
#define CX231XX_DEF_VBI_BUF             6
#define VBI_LINE_COUNT                  17
#define VBI_LINE_LENGTH                 1440
#define URB_MAX_CTRL_SIZE               80
#define CX231XX_BOARD_NOT_VALIDATED     1
#define CX231XX_BOARD_VALIDATED		0
#define CX231XX_MAXBOARDS               8
#define CX231XX_NUM_FRAMES              5
#define CX231XX_NUM_BUFS                8
#define CX231XX_NUM_PACKETS             40
#define CX231XX_PINOUT                  0
#define CX231XX_INTERLACED_DEFAULT      1
#define CX231XX_URB_TIMEOUT		\
msecs_to_jiffies(CX231XX_NUM_BUFS * CX231XX_NUM_PACKETS)
#define CX231xx_NORMS (\
V4L2_STD_NTSC_M |  V4L2_STD_NTSC_M_JP |  V4L2_STD_NTSC_443 | \
V4L2_STD_PAL_BG |  V4L2_STD_PAL_DK    |  V4L2_STD_PAL_I    | \
V4L2_STD_PAL_M  |  V4L2_STD_PAL_N     |  V4L2_STD_PAL_Nc   | \
V4L2_STD_PAL_60 |  V4L2_STD_SECAM_L   |  V4L2_STD_SECAM_DK)
#define CX231xx_VERSION_CODE KERNEL_VERSION(0, 0, 2)
#define SLEEP_S5H1432    30
#define CX23417_OSC_EN   8
#define CX23417_RESET    9
struct cx23417_fmt ;
enum cx231xx_mode ;
enum cx231xx_std_mode ;
enum cx231xx_stream_state ;
struct cx231xx;
struct cx231xx_isoc_ctl ;
struct cx231xx_bulk_ctl ;
struct cx231xx_fmt ;
struct cx231xx_buffer ;
enum ps_package_head ;
struct cx231xx_dmaqueue ;
#define MAX_CX231XX_INPUT               4
enum cx231xx_itype ;
enum cx231xx_v_input ;
enum cx231xx_amux ;
struct cx231xx_reg_seq ;
struct cx231xx_input ;
#define INPUT(nr) (&cx231xx_boards[dev->model].input[nr])
enum cx231xx_decoder ;
enum CX231XX_I2C_MASTER_PORT ;
struct cx231xx_board ;
enum cx231xx_dev_state ;
enum AFE_MODE ;
enum AUDIO_INPUT ;
#define CX231XX_AUDIO_BUFS              5
#define CX231XX_NUM_AUDIO_PACKETS       16
#define CX231XX_ISO_NUM_AUDIO_PACKETS	64
#define CX231XX_AUDIO                   0x10
#define CX231XX_DVB                     0x20
struct cx231xx_audio ;
struct cx231xx;
struct cx231xx_fh ;
#define I2C_SPEED_1M            0x0
#define I2C_SPEED_400K          0x1
#define I2C_SPEED_100K          0x2
#define I2C_SPEED_5M            0x3
#define I2C_STOP                0x0
#define I2C_NOSTOP              0x1
#define I2C_SYNC                0x1
struct cx231xx_i2c ;
struct cx231xx_i2c_xfer_data ;
struct VENDOR_REQUEST_IN ;
struct cx231xx_tvnorm ;
struct cx231xx_ctrl ;
enum TRANSFER_TYPE  ;
struct cx231xx_video_mode ;
struct cx231xx_tsport ;
struct cx231xx ;
extern struct list_head cx231xx_devlist;
#define cx25840_call(cx231xx, o, f, args...) \
v4l2_subdev_call(cx231xx->sd_cx25840, o, f, ##args)
#define tuner_call(cx231xx, o, f, args...) \
v4l2_subdev_call(cx231xx->sd_tuner, o, f, ##args)
#define call_all(dev, o, f, args...) \
v4l2_device_call_until_err(&dev->v4l2_dev, 0, o, f, ##args)
struct cx231xx_ops ;
int cx231xx_set_analog_freq(struct cx231xx *dev, u32 freq);
int cx231xx_reset_analog_tuner(struct cx231xx *dev);
void cx231xx_do_i2c_scan(struct cx231xx *dev, struct i2c_client *c);
int cx231xx_i2c_register(struct cx231xx_i2c *bus);
int cx231xx_i2c_unregister(struct cx231xx_i2c *bus);
int cx231xx_read_i2c_master(struct cx231xx *dev, u8 dev_addr, u16 saddr,
u8 saddr_len, u32 *data, u8 data_len, int master);
int cx231xx_write_i2c_master(struct cx231xx *dev, u8 dev_addr, u16 saddr,
u8 saddr_len, u32 data, u8 data_len, int master);
int cx231xx_read_i2c_data(struct cx231xx *dev, u8 dev_addr,
u16 saddr, u8 saddr_len, u32 *data, u8 data_len);
int cx231xx_write_i2c_data(struct cx231xx *dev, u8 dev_addr,
u16 saddr, u8 saddr_len, u32 data, u8 data_len);
int cx231xx_reg_mask_write(struct cx231xx *dev, u8 dev_addr, u8 size,
u16 register_address, u8 bit_start, u8 bit_end,
u32 value);
int cx231xx_read_modify_write_i2c_dword(struct cx231xx *dev, u8 dev_addr,
u16 saddr, u32 mask, u32 value);
u32 cx231xx_set_field(u32 field_mask, u32 data);
void initGPIO(struct cx231xx *dev);
void uninitGPIO(struct cx231xx *dev);
int cx231xx_afe_init_super_block(struct cx231xx *dev, u32 ref_count);
int cx231xx_afe_init_channels(struct cx231xx *dev);
int cx231xx_afe_setup_AFE_for_baseband(struct cx231xx *dev);
int cx231xx_afe_set_input_mux(struct cx231xx *dev, u32 input_mux);
int cx231xx_afe_set_mode(struct cx231xx *dev, enum AFE_MODE mode);
int cx231xx_afe_update_power_control(struct cx231xx *dev,
enum AV_MODE avmode);
int cx231xx_afe_adjust_ref_count(struct cx231xx *dev, u32 video_input);
int cx231xx_i2s_blk_initialize(struct cx231xx *dev);
int cx231xx_i2s_blk_update_power_control(struct cx231xx *dev,
enum AV_MODE avmode);
int cx231xx_i2s_blk_set_audio_input(struct cx231xx *dev, u8 audio_input);
int cx231xx_dif_configure_C2HH_for_low_IF(struct cx231xx *dev, u32 mode,
u32 function_mode, u32 standard);
void cx231xx_set_Colibri_For_LowIF(struct cx231xx *dev, u32 if_freq,
u8 spectral_invert, u32 mode);
u32 cx231xx_Get_Colibri_CarrierOffset(u32 mode, u32 standerd);
void cx231xx_set_DIF_bandpass(struct cx231xx *dev, u32 if_freq,
u8 spectral_invert, u32 mode);
void cx231xx_Setup_AFE_for_LowIF(struct cx231xx *dev);
void reset_s5h1432_demod(struct cx231xx *dev);
void cx231xx_dump_HH_reg(struct cx231xx *dev);
void update_HH_register_after_set_DIF(struct cx231xx *dev);
void cx231xx_dump_SC_reg(struct cx231xx *dev);
int cx231xx_dif_set_standard(struct cx231xx *dev, u32 standard);
int cx231xx_tuner_pre_channel_change(struct cx231xx *dev);
int cx231xx_tuner_post_channel_change(struct cx231xx *dev);
u8 cx231xx_find_next_SAV_EAV(u8 *p_buffer, u32 buffer_size,
u32 *p_bytes_used);
u8 cx231xx_find_boundary_SAV_EAV(u8 *p_buffer, u8 *partial_buf,
u32 *p_bytes_used);
int cx231xx_do_copy(struct cx231xx *dev, struct cx231xx_dmaqueue *dma_q,
u8 *p_buffer, u32 bytes_to_copy);
void cx231xx_reset_video_buffer(struct cx231xx *dev,
struct cx231xx_dmaqueue *dma_q);
u8 cx231xx_is_buffer_done(struct cx231xx *dev, struct cx231xx_dmaqueue *dma_q);
u32 cx231xx_copy_video_line(struct cx231xx *dev, struct cx231xx_dmaqueue *dma_q,
u8 *p_line, u32 length, int field_number);
u32 cx231xx_get_video_line(struct cx231xx *dev, struct cx231xx_dmaqueue *dma_q,
u8 sav_eav, u8 *p_buffer, u32 buffer_size);
void cx231xx_swab(u16 *from, u16 *to, u16 len);
u32 cx231xx_request_buffers(struct cx231xx *dev, u32 count);
void cx231xx_queue_unusedframes(struct cx231xx *dev);
void cx231xx_release_buffers(struct cx231xx *dev);
int cx231xx_read_ctrl_reg(struct cx231xx *dev, u8 req, u16 reg,
char *buf, int len);
int cx231xx_write_ctrl_reg(struct cx231xx *dev, u8 req, u16 reg,
char *buf, int len);
int cx231xx_mode_register(struct cx231xx *dev, u16 address, u32 mode);
int cx231xx_send_vendor_cmd(struct cx231xx *dev,
struct VENDOR_REQUEST_IN *ven_req);
int cx231xx_send_usb_command(struct cx231xx_i2c *i2c_bus,
struct cx231xx_i2c_xfer_data *req_data);
int cx231xx_send_gpio_cmd(struct cx231xx *dev, u32 gpio_bit, u8 *gpio_val,
u8 len, u8 request, u8 direction);
int cx231xx_set_gpio_bit(struct cx231xx *dev, u32 gpio_bit, u8 *gpio_val);
int cx231xx_get_gpio_bit(struct cx231xx *dev, u32 gpio_bit, u8 *gpio_val);
int cx231xx_set_gpio_value(struct cx231xx *dev, int pin_number, int pin_value);
int cx231xx_set_gpio_direction(struct cx231xx *dev, int pin_number,
int pin_value);
int cx231xx_gpio_i2c_start(struct cx231xx *dev);
int cx231xx_gpio_i2c_end(struct cx231xx *dev);
int cx231xx_gpio_i2c_write_byte(struct cx231xx *dev, u8 data);
int cx231xx_gpio_i2c_read_byte(struct cx231xx *dev, u8 *buf);
int cx231xx_gpio_i2c_read_ack(struct cx231xx *dev);
int cx231xx_gpio_i2c_write_ack(struct cx231xx *dev);
int cx231xx_gpio_i2c_write_nak(struct cx231xx *dev);
int cx231xx_gpio_i2c_read(struct cx231xx *dev, u8 dev_addr, u8 *buf, u8 len);
int cx231xx_gpio_i2c_write(struct cx231xx *dev, u8 dev_addr, u8 *buf, u8 len);
int cx231xx_set_audio_decoder_input(struct cx231xx *dev,
enum AUDIO_INPUT audio_input);
int cx231xx_capture_start(struct cx231xx *dev, int start, u8 media_type);
int cx231xx_set_video_alternate(struct cx231xx *dev);
int cx231xx_set_alt_setting(struct cx231xx *dev, u8 index, u8 alt);
int is_fw_load(struct cx231xx *dev);
int cx231xx_check_fw(struct cx231xx *dev);
int cx231xx_init_isoc(struct cx231xx *dev, int max_packets,
int num_bufs, int max_pkt_size,
int (*isoc_copy) (struct cx231xx *dev,
struct urb *urb));
int cx231xx_init_bulk(struct cx231xx *dev, int max_packets,
int num_bufs, int max_pkt_size,
int (*bulk_copy) (struct cx231xx *dev,
struct urb *urb));
void cx231xx_stop_TS1(struct cx231xx *dev);
void cx231xx_start_TS1(struct cx231xx *dev);
void cx231xx_uninit_isoc(struct cx231xx *dev);
void cx231xx_uninit_bulk(struct cx231xx *dev);
int cx231xx_set_mode(struct cx231xx *dev, enum cx231xx_mode set_mode);
int cx231xx_unmute_audio(struct cx231xx *dev);
int cx231xx_ep5_bulkout(struct cx231xx *dev, u8 *firmware, u16 size);
void cx231xx_disable656(struct cx231xx *dev);
void cx231xx_enable656(struct cx231xx *dev);
int cx231xx_demod_reset(struct cx231xx *dev);
int cx231xx_gpio_set(struct cx231xx *dev, struct cx231xx_reg_seq *gpio);
void cx231xx_release_resources(struct cx231xx *dev);
void cx231xx_release_analog_resources(struct cx231xx *dev);
int cx231xx_register_analog_devices(struct cx231xx *dev);
void cx231xx_remove_from_devlist(struct cx231xx *dev);
void cx231xx_add_into_devlist(struct cx231xx *dev);
void cx231xx_init_extension(struct cx231xx *dev);
void cx231xx_close_extension(struct cx231xx *dev);
int cx231xx_dev_init(struct cx231xx *dev);
void cx231xx_dev_uninit(struct cx231xx *dev);
void cx231xx_config_i2c(struct cx231xx *dev);
int cx231xx_config(struct cx231xx *dev);
int cx231xx_start_stream(struct cx231xx *dev, u32 ep_mask);
int cx231xx_stop_stream(struct cx231xx *dev, u32 ep_mask);
int cx231xx_initialize_stream_xfer(struct cx231xx *dev, u32 media_type);
int cx231xx_set_power_mode(struct cx231xx *dev, enum AV_MODE mode);
int cx231xx_power_suspend(struct cx231xx *dev);
int cx231xx_init_ctrl_pin_status(struct cx231xx *dev);
int cx231xx_set_agc_analog_digital_mux_select(struct cx231xx *dev,
u8 analog_or_digital);
int cx231xx_enable_i2c_port_3(struct cx231xx *dev, bool is_port_3);
void video_mux(struct cx231xx *dev, int index);
int cx231xx_set_video_input_mux(struct cx231xx *dev, u8 input);
int cx231xx_set_decoder_video_input(struct cx231xx *dev, u8 pin_type, u8 input);
int cx231xx_do_mode_ctrl_overrides(struct cx231xx *dev);
int cx231xx_set_audio_input(struct cx231xx *dev, u8 input);
int cx231xx_register_extension(struct cx231xx_ops *dev);
void cx231xx_unregister_extension(struct cx231xx_ops *dev);
void cx231xx_init_extension(struct cx231xx *dev);
void cx231xx_close_extension(struct cx231xx *dev);
extern void cx231xx_pre_card_setup(struct cx231xx *dev);
extern void cx231xx_card_setup(struct cx231xx *dev);
extern struct cx231xx_board cx231xx_boards[];
extern struct usb_device_id cx231xx_id_table[];
extern const unsigned int cx231xx_bcount;
int cx231xx_tuner_callback(void *ptr, int component, int command, int arg);
extern int cx231xx_417_register(struct cx231xx *dev);
extern void cx231xx_417_unregister(struct cx231xx *dev);
#if defined(CONFIG_VIDEO_CX231XX_RC)
int cx231xx_ir_init(struct cx231xx *dev);
void cx231xx_ir_exit(struct cx231xx *dev);
#define cx231xx_ir_init(dev)	(0)
#define cx231xx_ir_exit(dev)	(0)
#define cx231xx_err(fmt, arg...) do  while (0)
#define cx231xx_errdev(fmt, arg...) do  while (0)
#define cx231xx_info(fmt, arg...) do  while (0)
#define cx231xx_warn(fmt, arg...) do  while (0)
static inline unsigned int norm_maxw(struct cx231xx *dev)
static inline unsigned int norm_maxh(struct cx231xx *dev)
