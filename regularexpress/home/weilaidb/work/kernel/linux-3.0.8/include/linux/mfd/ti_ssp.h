#define __TI_SSP_H__
struct ti_ssp_dev_data ;
struct ti_ssp_data ;
struct ti_ssp_spi_data ;
#define SSP_IN			0x0000
#define SSP_DATA		0x0001
#define SSP_CLOCK		0x0002
#define SSP_CHIPSEL		0x0003
#define SSP_OUT			0x0004
#define SSP_PIN_SEL(pin, v)	((v) << ((pin) * 3))
#define SSP_PIN_MASK(pin)	SSP_PIN_SEL(pin, 0x7)
#define SSP_INPUT_SEL(pin)	((pin) << 16)
#define SSP_EARLY_DIN		BIT(8)
#define SSP_DELAY_DOUT		BIT(9)
#define SSP_CLK_HIGH		BIT(0)
#define SSP_CLK_LOW		0
#define SSP_DATA_HIGH		BIT(1)
#define SSP_DATA_LOW		0
#define SSP_CS_HIGH		BIT(2)
#define SSP_CS_LOW		0
#define SSP_OUT_MODE		BIT(3)
#define SSP_IN_MODE		0
#define SSP_DATA_REG		BIT(4)
#define SSP_ADDR_REG		0
#define SSP_OPCODE_DIRECT	((0x0) << 5)
#define SSP_OPCODE_TOGGLE	((0x1) << 5)
#define SSP_OPCODE_SHIFT	((0x2) << 5)
#define SSP_OPCODE_BRANCH0	((0x4) << 5)
#define SSP_OPCODE_BRANCH1	((0x5) << 5)
#define SSP_OPCODE_BRANCH	((0x6) << 5)
#define SSP_OPCODE_STOP		((0x7) << 5)
#define SSP_BRANCH(addr)	((addr) << 8)
#define SSP_COUNT(cycles)	((cycles) << 8)
int ti_ssp_raw_read(struct device *dev);
int ti_ssp_raw_write(struct device *dev, u32 val);
int ti_ssp_load(struct device *dev, int offs, u32* prog, int len);
int ti_ssp_run(struct device *dev, u32 pc, u32 input, u32 *output);
int ti_ssp_set_mode(struct device *dev, int mode);
int ti_ssp_set_iosel(struct device *dev, u32 iosel);
