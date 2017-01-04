int saa7164_api_get_load_info(struct saa7164_dev *dev, struct tmFwInfoStruct *i)
int saa7164_api_collect_debug(struct saa7164_dev *dev)
int saa7164_api_set_debug(struct saa7164_dev *dev, u8 level)
int saa7164_api_set_vbi_format(struct saa7164_port *port)
int saa7164_api_set_gop_size(struct saa7164_port *port)
int saa7164_api_set_encoder(struct saa7164_port *port)
int saa7164_api_get_encoder(struct saa7164_port *port)
int saa7164_api_set_aspect_ratio(struct saa7164_port *port)
int saa7164_api_set_usercontrol(struct saa7164_port *port, u8 ctl)
int saa7164_api_get_usercontrol(struct saa7164_port *port, u8 ctl)
int saa7164_api_set_videomux(struct saa7164_port *port)
int saa7164_api_audio_mute(struct saa7164_port *port, int mute)
int saa7164_api_set_audio_volume(struct saa7164_port *port, s8 level)
int saa7164_api_set_audio_std(struct saa7164_port *port)
int saa7164_api_set_audio_detection(struct saa7164_port *port, int autodetect)
int saa7164_api_get_videomux(struct saa7164_port *port)
int saa7164_api_set_dif(struct saa7164_port *port, u8 reg, u8 val)
int saa7164_api_configure_dif(struct saa7164_port *port, u32 std)
int saa7164_api_initialize_dif(struct saa7164_port *port)
int saa7164_api_transition_port(struct saa7164_port *port, u8 mode)
int saa7164_api_get_fw_version(struct saa7164_dev *dev, u32 *version)
int saa7164_api_read_eeprom(struct saa7164_dev *dev, u8 *buf, int buflen)
int saa7164_api_configure_port_vbi(struct saa7164_dev *dev,
struct saa7164_port *port)
int saa7164_api_configure_port_mpeg2ts(struct saa7164_dev *dev,
struct saa7164_port *port,
struct tmComResTSFormatDescrHeader *tsfmt)
int saa7164_api_configure_port_mpeg2ps(struct saa7164_dev *dev,
struct saa7164_port *port,
struct tmComResPSFormatDescrHeader *fmt)
int saa7164_api_dump_subdevs(struct saa7164_dev *dev, u8 *buf, int len)
int saa7164_api_enum_subdevs(struct saa7164_dev *dev)
int saa7164_api_i2c_read(struct saa7164_i2c *bus, u8 addr, u32 reglen, u8 *reg,
u32 datalen, u8 *data)
int saa7164_api_i2c_write(struct saa7164_i2c *bus, u8 addr, u32 datalen,
u8 *data)
int saa7164_api_modify_gpio(struct saa7164_dev *dev, u8 unitid,
u8 pin, u8 state)
int saa7164_api_set_gpiobit(struct saa7164_dev *dev, u8 unitid,
u8 pin)
int saa7164_api_clear_gpiobit(struct saa7164_dev *dev, u8 unitid,
u8 pin)
