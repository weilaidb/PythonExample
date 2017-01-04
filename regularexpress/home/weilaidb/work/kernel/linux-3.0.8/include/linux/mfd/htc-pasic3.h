#define __PASIC3_H
extern void pasic3_write_register(struct device *dev, u32 reg, u8 val);
extern u8 pasic3_read_register(struct device *dev, u32 reg);
#define PASIC3_MASK_LED0 0x04
#define PASIC3_MASK_LED1 0x08
#define PASIC3_MASK_LED2 0x40
#define PASIC3_BIT2_LED0 0x08
#define PASIC3_BIT2_LED1 0x10
#define PASIC3_BIT2_LED2 0x20
struct pasic3_led ;
struct pasic3_leds_machinfo ;
struct pasic3_platform_data ;
