#define IIO_DAC_AD5446_H_
#define AD5446_LOAD		(0x0 << 14)
#define AD5446_SDO_DIS		(0x1 << 14)
#define AD5446_NOP		(0x2 << 14)
#define AD5446_CLK_RISING	(0x3 << 14)
#define AD5620_LOAD		(0x0 << 14)
#define AD5620_PWRDWN_1k	(0x1 << 14)
#define AD5620_PWRDWN_100k	(0x2 << 14)
#define AD5620_PWRDWN_TRISTATE	(0x3 << 14)
#define AD5660_LOAD		(0x0 << 16)
#define AD5660_PWRDWN_1k	(0x1 << 16)
#define AD5660_PWRDWN_100k	(0x2 << 16)
#define AD5660_PWRDWN_TRISTATE	(0x3 << 16)
#define RES_MASK(bits)	((1 << (bits)) - 1)
#define MODE_PWRDWN_1k		0x1
#define MODE_PWRDWN_100k	0x2
#define MODE_PWRDWN_TRISTATE	0x3
struct ad5446_state ;
struct ad5446_chip_info ;
enum ad5446_supported_device_ids ;
