#define SPI_AD5504_H_
#define AD5505_BITS			12
#define AD5504_RES_MASK			((1 << (AD5505_BITS)) - 1)
#define AD5504_CMD_READ			(1 << 15)
#define AD5504_CMD_WRITE		(0 << 15)
#define AD5504_ADDR(addr)		((addr) << 12)
#define AD5504_ADDR_NOOP		0
#define AD5504_ADDR_DAC0		1
#define AD5504_ADDR_DAC1		2
#define AD5504_ADDR_DAC2		3
#define AD5504_ADDR_DAC3		4
#define AD5504_ADDR_ALL_DAC		5
#define AD5504_ADDR_CTRL		7
#define AD5504_DAC_PWR(ch)		((ch) << 2)
#define AD5504_DAC_PWRDWN_MODE(mode)	((mode) << 6)
#define AD5504_DAC_PWRDN_20K		0
#define AD5504_DAC_PWRDN_3STATE		1
struct ad5504_platform_data ;
struct ad5504_state ;
enum ad5504_supported_device_ids ;
