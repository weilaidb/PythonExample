#define TUNER_MODE_FM_RADIO 0
static int verve_write_byte(struct cx231xx *dev, u8 saddr, u8 data)
static int verve_read_byte(struct cx231xx *dev, u8 saddr, u8 *data)
void initGPIO(struct cx231xx *dev)
void uninitGPIO(struct cx231xx *dev)
static int afe_write_byte(struct cx231xx *dev, u16 saddr, u8 data)
static int afe_read_byte(struct cx231xx *dev, u16 saddr, u8 *data)
int cx231xx_afe_init_super_block(struct cx231xx *dev, u32 ref_count)
int cx231xx_afe_init_channels(struct cx231xx *dev)
int cx231xx_afe_setup_AFE_for_baseband(struct cx231xx *dev)
int cx231xx_afe_set_input_mux(struct cx231xx *dev, u32 input_mux)
int cx231xx_afe_set_mode(struct cx231xx *dev, enum AFE_MODE mode)
int cx231xx_afe_update_power_control(struct cx231xx *dev,
enum AV_MODE avmode)
int cx231xx_afe_adjust_ref_count(struct cx231xx *dev, u32 video_input)
static int vid_blk_write_byte(struct cx231xx *dev, u16 saddr, u8 data)
static int vid_blk_read_byte(struct cx231xx *dev, u16 saddr, u8 *data)
static int vid_blk_write_word(struct cx231xx *dev, u16 saddr, u32 data)
static int vid_blk_read_word(struct cx231xx *dev, u16 saddr, u32 *data)
int cx231xx_check_fw(struct cx231xx *dev)
int cx231xx_set_video_input_mux(struct cx231xx *dev, u8 input)
int cx231xx_set_decoder_video_input(struct cx231xx *dev,
u8 pin_type, u8 input)
void cx231xx_enable656(struct cx231xx *dev)
EXPORT_SYMBOL_GPL(cx231xx_enable656);
void cx231xx_disable656(struct cx231xx *dev)
EXPORT_SYMBOL_GPL(cx231xx_disable656);
int cx231xx_do_mode_ctrl_overrides(struct cx231xx *dev)
int cx231xx_unmute_audio(struct cx231xx *dev)
EXPORT_SYMBOL_GPL(cx231xx_unmute_audio);
int stopAudioFirmware(struct cx231xx *dev)
int restartAudioFirmware(struct cx231xx *dev)
int cx231xx_set_audio_input(struct cx231xx *dev, u8 input)
int cx231xx_set_audio_decoder_input(struct cx231xx *dev,
enum AUDIO_INPUT audio_input)
int cx231xx_init_ctrl_pin_status(struct cx231xx *dev)
int cx231xx_set_agc_analog_digital_mux_select(struct cx231xx *dev,
u8 analog_or_digital)
int cx231xx_enable_i2c_port_3(struct cx231xx *dev, bool is_port_3)
EXPORT_SYMBOL_GPL(cx231xx_enable_i2c_port_3);
void update_HH_register_after_set_DIF(struct cx231xx *dev)
void cx231xx_dump_HH_reg(struct cx231xx *dev)
void cx231xx_dump_SC_reg(struct cx231xx *dev)
void cx231xx_Setup_AFE_for_LowIF(struct cx231xx *dev)
void cx231xx_set_Colibri_For_LowIF(struct cx231xx *dev, u32 if_freq,
u8 spectral_invert, u32 mode)
u32 cx231xx_Get_Colibri_CarrierOffset(u32 mode, u32 standerd)
void cx231xx_set_DIF_bandpass(struct cx231xx *dev, u32 if_freq,
u8 spectral_invert, u32 mode)
int cx231xx_dif_configure_C2HH_for_low_IF(struct cx231xx *dev, u32 mode,
u32 function_mode, u32 standard)
int cx231xx_dif_set_standard(struct cx231xx *dev, u32 standard)
int cx231xx_tuner_pre_channel_change(struct cx231xx *dev)
int cx231xx_tuner_post_channel_change(struct cx231xx *dev)
int cx231xx_i2s_blk_initialize(struct cx231xx *dev)
int cx231xx_i2s_blk_update_power_control(struct cx231xx *dev,
enum AV_MODE avmode)
int cx231xx_i2s_blk_set_audio_input(struct cx231xx *dev, u8 audio_input)
int cx231xx_set_power_mode(struct cx231xx *dev, enum AV_MODE mode)
int cx231xx_power_suspend(struct cx231xx *dev)
int cx231xx_start_stream(struct cx231xx *dev, u32 ep_mask)
int cx231xx_stop_stream(struct cx231xx *dev, u32 ep_mask)
int cx231xx_initialize_stream_xfer(struct cx231xx *dev, u32 media_type)
int cx231xx_capture_start(struct cx231xx *dev, int start, u8 media_type)
EXPORT_SYMBOL_GPL(cx231xx_capture_start);
int cx231xx_set_gpio_bit(struct cx231xx *dev, u32 gpio_bit, u8 *gpio_val)
int cx231xx_get_gpio_bit(struct cx231xx *dev, u32 gpio_bit, u8 *gpio_val)
int cx231xx_set_gpio_direction(struct cx231xx *dev,
int pin_number, int pin_value)
int cx231xx_set_gpio_value(struct cx231xx *dev, int pin_number, int pin_value)
int cx231xx_gpio_i2c_start(struct cx231xx *dev)
int cx231xx_gpio_i2c_end(struct cx231xx *dev)
int cx231xx_gpio_i2c_write_byte(struct cx231xx *dev, u8 data)
int cx231xx_gpio_i2c_read_byte(struct cx231xx *dev, u8 *buf)
int cx231xx_gpio_i2c_read_ack(struct cx231xx *dev)
int cx231xx_gpio_i2c_write_ack(struct cx231xx *dev)
int cx231xx_gpio_i2c_write_nak(struct cx231xx *dev)
int cx231xx_gpio_i2c_read(struct cx231xx *dev, u8 dev_addr, u8 *buf, u8 len)
int cx231xx_gpio_i2c_write(struct cx231xx *dev, u8 dev_addr, u8 *buf, u8 len)
