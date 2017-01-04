#define USB_TIMEOUT	(5 * HZ)
int tm6000_read_write_usb(struct tm6000_core *dev, u8 req_type, u8 req,
u16 value, u16 index, u8 *buf, u16 len)
int tm6000_set_reg(struct tm6000_core *dev, u8 req, u16 value, u16 index)
EXPORT_SYMBOL_GPL(tm6000_set_reg);
int tm6000_get_reg(struct tm6000_core *dev, u8 req, u16 value, u16 index)
EXPORT_SYMBOL_GPL(tm6000_get_reg);
int tm6000_set_reg_mask(struct tm6000_core *dev, u8 req, u16 value,
u16 index, u16 mask)
EXPORT_SYMBOL_GPL(tm6000_set_reg_mask);
int tm6000_get_reg16(struct tm6000_core *dev, u8 req, u16 value, u16 index)
int tm6000_get_reg32(struct tm6000_core *dev, u8 req, u16 value, u16 index)
int tm6000_i2c_reset(struct tm6000_core *dev, u16 tsleep)
void tm6000_set_fourcc_format(struct tm6000_core *dev)
static void tm6000_set_vbi(struct tm6000_core *dev)
int tm6000_init_analog_mode(struct tm6000_core *dev)
int tm6000_init_digital_mode(struct tm6000_core *dev)
EXPORT_SYMBOL(tm6000_init_digital_mode);
struct reg_init ;
struct reg_init tm6000_init_tab[] = ;
struct reg_init tm6010_init_tab[] = ;
int tm6000_init(struct tm6000_core *dev)
int tm6000_set_audio_bitrate(struct tm6000_core *dev, int bitrate)
EXPORT_SYMBOL_GPL(tm6000_set_audio_bitrate);
int tm6000_set_audio_rinput(struct tm6000_core *dev)
void tm6010_set_mute_sif(struct tm6000_core *dev, u8 mute)
void tm6010_set_mute_adc(struct tm6000_core *dev, u8 mute)
int tm6000_tvaudio_set_mute(struct tm6000_core *dev, u8 mute)
void tm6010_set_volume_sif(struct tm6000_core *dev, int vol)
void tm6010_set_volume_adc(struct tm6000_core *dev, int vol)
void tm6000_set_volume(struct tm6000_core *dev, int vol)
static LIST_HEAD(tm6000_devlist);
static DEFINE_MUTEX(tm6000_devlist_mutex);
void tm6000_remove_from_devlist(struct tm6000_core *dev)
;
void tm6000_add_into_devlist(struct tm6000_core *dev)
;
static LIST_HEAD(tm6000_extension_devlist);
int tm6000_call_fillbuf(struct tm6000_core *dev, enum tm6000_ops_type type,
char *buf, int size)
int tm6000_register_extension(struct tm6000_ops *ops)
EXPORT_SYMBOL(tm6000_register_extension);
void tm6000_unregister_extension(struct tm6000_ops *ops)
EXPORT_SYMBOL(tm6000_unregister_extension);
void tm6000_init_extension(struct tm6000_core *dev)
void tm6000_close_extension(struct tm6000_core *dev)
