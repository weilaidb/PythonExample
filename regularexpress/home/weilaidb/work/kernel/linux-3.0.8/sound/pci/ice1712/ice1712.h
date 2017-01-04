#define __SOUND_ICE1712_H
#define ICEREG(ice, x) ((ice)->port + ICE1712_REG_##x)
#define ICE1712_REG_CONTROL		0x00
#define   ICE1712_RESET			0x80
#define   ICE1712_SERR_LEVEL		0x04
#define   ICE1712_NATIVE		0x01
#define ICE1712_REG_IRQMASK		0x01
#define   ICE1712_IRQ_MPU1		0x80
#define   ICE1712_IRQ_TIMER		0x40
#define   ICE1712_IRQ_MPU2		0x20
#define   ICE1712_IRQ_PROPCM		0x10
#define   ICE1712_IRQ_FM		0x08
#define   ICE1712_IRQ_PBKDS		0x04
#define   ICE1712_IRQ_CONCAP		0x02
#define   ICE1712_IRQ_CONPBK		0x01
#define ICE1712_REG_IRQSTAT		0x02
#define ICE1712_REG_INDEX		0x03
#define ICE1712_REG_DATA		0x04
#define ICE1712_REG_NMI_STAT1		0x05
#define ICE1712_REG_NMI_DATA		0x06
#define ICE1712_REG_NMI_INDEX		0x07
#define ICE1712_REG_AC97_INDEX		0x08
#define ICE1712_REG_AC97_CMD		0x09
#define   ICE1712_AC97_COLD		0x80
#define   ICE1712_AC97_WARM		0x40
#define   ICE1712_AC97_WRITE		0x20
#define   ICE1712_AC97_READ		0x10
#define   ICE1712_AC97_READY		0x08
#define   ICE1712_AC97_PBK_VSR		0x02
#define   ICE1712_AC97_CAP_VSR		0x01
#define ICE1712_REG_AC97_DATA		0x0a
#define ICE1712_REG_MPU1_CTRL		0x0c
#define ICE1712_REG_MPU1_DATA		0x0d
#define ICE1712_REG_I2C_DEV_ADDR	0x10
#define   ICE1712_I2C_WRITE		0x01
#define ICE1712_REG_I2C_BYTE_ADDR	0x11
#define ICE1712_REG_I2C_DATA		0x12
#define ICE1712_REG_I2C_CTRL		0x13
#define   ICE1712_I2C_EEPROM		0x80
#define   ICE1712_I2C_BUSY		0x01
#define ICE1712_REG_CONCAP_ADDR		0x14
#define ICE1712_REG_CONCAP_COUNT	0x18
#define ICE1712_REG_SERR_SHADOW		0x1b
#define ICE1712_REG_MPU2_CTRL		0x1c
#define ICE1712_REG_MPU2_DATA		0x1d
#define ICE1712_REG_TIMER		0x1e
#define ICE1712_IREG_PBK_COUNT_LO	0x00
#define ICE1712_IREG_PBK_COUNT_HI	0x01
#define ICE1712_IREG_PBK_CTRL		0x02
#define ICE1712_IREG_PBK_LEFT		0x03
#define ICE1712_IREG_PBK_RIGHT		0x04
#define ICE1712_IREG_PBK_SOFT		0x05
#define ICE1712_IREG_PBK_RATE_LO	0x06
#define ICE1712_IREG_PBK_RATE_MID	0x07
#define ICE1712_IREG_PBK_RATE_HI	0x08
#define ICE1712_IREG_CAP_COUNT_LO	0x10
#define ICE1712_IREG_CAP_COUNT_HI	0x11
#define ICE1712_IREG_CAP_CTRL		0x12
#define ICE1712_IREG_GPIO_DATA		0x20
#define ICE1712_IREG_GPIO_WRITE_MASK	0x21
#define ICE1712_IREG_GPIO_DIRECTION	0x22
#define ICE1712_IREG_CONSUMER_POWERDOWN	0x30
#define ICE1712_IREG_PRO_POWERDOWN	0x31
#define ICEDS(ice, x) ((ice)->dmapath_port + ICE1712_DS_##x)
#define ICE1712_DS_INTMASK		0x00
#define ICE1712_DS_INTSTAT		0x02
#define ICE1712_DS_DATA			0x04
#define ICE1712_DS_INDEX		0x08
#define ICE1712_DSC_ADDR0		0x00
#define ICE1712_DSC_COUNT0		0x01
#define ICE1712_DSC_ADDR1		0x02
#define ICE1712_DSC_COUNT1		0x03
#define ICE1712_DSC_CONTROL		0x04
#define   ICE1712_BUFFER1		0x80
#define   ICE1712_BUFFER1_AUTO		0x40
#define   ICE1712_BUFFER0_AUTO		0x20
#define   ICE1712_FLUSH			0x10
#define   ICE1712_STEREO		0x08
#define   ICE1712_16BIT			0x04
#define   ICE1712_PAUSE			0x02
#define   ICE1712_START			0x01
#define ICE1712_DSC_RATE		0x05
#define ICE1712_DSC_VOLUME		0x06
#define ICEMT(ice, x) ((ice)->profi_port + ICE1712_MT_##x)
#define ICE1712_MT_IRQ			0x00
#define   ICE1712_MULTI_CAPTURE		0x80
#define   ICE1712_MULTI_PLAYBACK	0x40
#define   ICE1712_MULTI_CAPSTATUS	0x02
#define   ICE1712_MULTI_PBKSTATUS	0x01
#define ICE1712_MT_RATE			0x01
#define   ICE1712_SPDIF_MASTER		0x10
#define ICE1712_MT_I2S_FORMAT		0x02
#define ICE1712_MT_AC97_INDEX		0x04
#define ICE1712_MT_AC97_CMD		0x05
#define ICE1712_MT_AC97_DATA		0x06
#define ICE1712_MT_PLAYBACK_ADDR	0x10
#define ICE1712_MT_PLAYBACK_SIZE	0x14
#define ICE1712_MT_PLAYBACK_COUNT	0x16
#define ICE1712_MT_PLAYBACK_CONTROL	0x18
#define   ICE1712_CAPTURE_START_SHADOW	0x04
#define   ICE1712_PLAYBACK_PAUSE	0x02
#define   ICE1712_PLAYBACK_START	0x01
#define ICE1712_MT_CAPTURE_ADDR		0x20
#define ICE1712_MT_CAPTURE_SIZE		0x24
#define ICE1712_MT_CAPTURE_COUNT	0x26
#define ICE1712_MT_CAPTURE_CONTROL	0x28
#define   ICE1712_CAPTURE_START		0x01
#define ICE1712_MT_ROUTE_PSDOUT03	0x30
#define ICE1712_MT_ROUTE_SPDOUT		0x32
#define ICE1712_MT_ROUTE_CAPTURE	0x34
#define ICE1712_MT_MONITOR_VOLUME	0x38
#define ICE1712_MT_MONITOR_INDEX	0x3a
#define ICE1712_MT_MONITOR_RATE		0x3b
#define ICE1712_MT_MONITOR_ROUTECTRL	0x3c
#define   ICE1712_ROUTE_AC97		0x01
#define ICE1712_MT_MONITOR_PEAKINDEX	0x3e
#define ICE1712_MT_MONITOR_PEAKDATA	0x3f
#define ICE1712_CFG_CLOCK	0xc0
#define   ICE1712_CFG_CLOCK512	0x00
#define   ICE1712_CFG_CLOCK384  0x40
#define   ICE1712_CFG_EXT	0x80
#define ICE1712_CFG_2xMPU401	0x20
#define ICE1712_CFG_NO_CON_AC97 0x10
#define ICE1712_CFG_ADC_MASK	0x0c
#define ICE1712_CFG_DAC_MASK	0x03
#define ICE1712_CFG_PRO_I2S	0x80
#define ICE1712_CFG_AC97_PACKED	0x01
#define ICE1712_CFG_I2S_VOLUME	0x80
#define ICE1712_CFG_I2S_96KHZ	0x40
#define ICE1712_CFG_I2S_RESMASK	0x30
#define ICE1712_CFG_I2S_OTHER	0x0f
#define ICE1712_CFG_I2S_CHIPID	0xfc
#define ICE1712_CFG_SPDIF_IN	0x02
#define ICE1712_CFG_SPDIF_OUT	0x01
#define ICE1712_DMA_MODE_WRITE		0x48
#define ICE1712_DMA_AUTOINIT		0x10
struct snd_ice1712;
struct snd_ice1712_eeprom ;
enum ;
#define ice_has_con_ac97(ice)	(!((ice)->eeprom.data[ICE_EEP1_CODEC] & ICE1712_CFG_NO_CON_AC97))
struct snd_ak4xxx_private ;
struct snd_ice1712_spdif ;
struct snd_ice1712 ;
static inline void snd_ice1712_gpio_set_dir(struct snd_ice1712 *ice, unsigned int bits)
static inline unsigned int snd_ice1712_gpio_get_dir(struct snd_ice1712 *ice)
static inline void snd_ice1712_gpio_set_mask(struct snd_ice1712 *ice, unsigned int bits)
static inline void snd_ice1712_gpio_write(struct snd_ice1712 *ice, unsigned int val)
static inline unsigned int snd_ice1712_gpio_read(struct snd_ice1712 *ice)
static inline void snd_ice1712_save_gpio_status(struct snd_ice1712 *ice)
static inline void snd_ice1712_restore_gpio_status(struct snd_ice1712 *ice)
#define ICE1712_GPIO(xiface, xname, xindex, mask, invert, xaccess) \
int snd_ice1712_gpio_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol);
int snd_ice1712_gpio_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol);
static inline void snd_ice1712_gpio_write_bits(struct snd_ice1712 *ice,
unsigned int mask, unsigned int bits)
static inline int snd_ice1712_gpio_read_bits(struct snd_ice1712 *ice,
unsigned int mask)
int snd_ice1724_get_route_val(struct snd_ice1712 *ice, int shift);
int snd_ice1724_put_route_val(struct snd_ice1712 *ice, unsigned int val,
int shift);
int snd_ice1712_spdif_build_controls(struct snd_ice1712 *ice);
int snd_ice1712_akm4xxx_init(struct snd_akm4xxx *ak,
const struct snd_akm4xxx *template,
const struct snd_ak4xxx_private *priv,
struct snd_ice1712 *ice);
void snd_ice1712_akm4xxx_free(struct snd_ice1712 *ice);
int snd_ice1712_akm4xxx_build_controls(struct snd_ice1712 *ice);
int snd_ice1712_init_cs8427(struct snd_ice1712 *ice, int addr);
static inline void snd_ice1712_write(struct snd_ice1712 *ice, u8 addr, u8 data)
static inline u8 snd_ice1712_read(struct snd_ice1712 *ice, u8 addr)
struct snd_ice1712_card_info ;
