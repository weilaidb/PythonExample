#define SAA7164_REV2_FIRMWARE		"NXP7164-2010-03-10.1.fw"
#define SAA7164_REV2_FIRMWARE_SIZE	4019072
#define SAA7164_REV3_FIRMWARE		"NXP7164-2010-03-10.1.fw"
#define SAA7164_REV3_FIRMWARE_SIZE	4019072
struct fw_header ;
int saa7164_dl_wait_ack(struct saa7164_dev *dev, u32 reg)
int saa7164_dl_wait_clr(struct saa7164_dev *dev, u32 reg)
int saa7164_downloadimage(struct saa7164_dev *dev, u8 *src, u32 srcsize,
u32 dlflags, u8 *dst, u32 dstsize)
int saa7164_downloadfirmware(struct saa7164_dev *dev)
