#define __LINUX_MFD_NVEC
typedef enum  nvec_size;
typedef enum  how_care;
typedef enum  nvec_event;
typedef enum  nvec_state;
struct nvec_msg ;
struct nvec_subdev ;
struct nvec_platform_data ;
struct nvec_chip ;
extern void nvec_write_async(struct nvec_chip *nvec, unsigned char *data, short size);
extern int nvec_register_notifier(struct nvec_chip *nvec,
struct notifier_block *nb, unsigned int events);
extern int nvec_unregister_notifier(struct device *dev,
struct notifier_block *nb, unsigned int events);
const char *nvec_send_msg(unsigned char *src, unsigned char *dst_size, how_care care_resp, void (*rt_handler)(unsigned char *data));
extern int nvec_ps2(struct nvec_chip *nvec);
extern int nvec_kbd_init(struct nvec_chip *nvec);
#define I2C_CNFG			0x00
#define I2C_CNFG_PACKET_MODE_EN		(1<<10)
#define I2C_CNFG_NEW_MASTER_SFM		(1<<11)
#define I2C_CNFG_DEBOUNCE_CNT_SHIFT	12
#define I2C_SL_CNFG		0x20
#define I2C_SL_NEWL		(1<<2)
#define I2C_SL_NACK		(1<<1)
#define I2C_SL_RESP		(1<<0)
#define I2C_SL_IRQ		(1<<3)
#define END_TRANS		(1<<4)
#define RCVD			(1<<2)
#define RNW			(1<<1)
#define I2C_SL_RCVD		0x24
#define I2C_SL_STATUS		0x28
#define I2C_SL_ADDR1		0x2c
#define I2C_SL_ADDR2		0x30
#define I2C_SL_DELAY_COUNT	0x3c
