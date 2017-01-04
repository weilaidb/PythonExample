#define __TPA6130A2_H__
#define TPA6130A2_REG_CONTROL		0x01
#define TPA6130A2_REG_VOL_MUTE		0x02
#define TPA6130A2_REG_OUT_IMPEDANCE	0x03
#define TPA6130A2_REG_VERSION		0x04
#define TPA6130A2_CACHEREGNUM	(TPA6130A2_REG_VERSION + 1)
#define TPA6130A2_SWS			(0x01 << 0)
#define TPA6130A2_TERMAL		(0x01 << 1)
#define TPA6130A2_MODE(x)		(x << 4)
#define TPA6130A2_MODE_STEREO		(0x00)
#define TPA6130A2_MODE_DUAL_MONO	(0x01)
#define TPA6130A2_MODE_BRIDGE		(0x02)
#define TPA6130A2_MODE_MASK		(0x03)
#define TPA6130A2_HP_EN_R		(0x01 << 6)
#define TPA6130A2_HP_EN_L		(0x01 << 7)
#define TPA6130A2_VOLUME(x)		((x & 0x3f) << 0)
#define TPA6130A2_MUTE_R		(0x01 << 6)
#define TPA6130A2_MUTE_L		(0x01 << 7)
#define TPA6130A2_HIZ_R			(0x01 << 0)
#define TPA6130A2_HIZ_L			(0x01 << 1)
#define TPA6130A2_VERSION_MASK		(0x0f)
extern int tpa6130a2_add_controls(struct snd_soc_codec *codec);
extern int tpa6130a2_stereo_enable(struct snd_soc_codec *codec, int enable);
