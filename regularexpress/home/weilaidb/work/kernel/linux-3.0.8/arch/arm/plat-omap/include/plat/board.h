#define _OMAP_BOARD_H
enum ;
#define OMAP_TAG_CLOCK		0x4f01
#define OMAP_TAG_LCD		0x4f05
#define OMAP_TAG_GPIO_SWITCH	0x4f06
#define OMAP_TAG_FBMEM		0x4f08
#define OMAP_TAG_STI_CONSOLE	0x4f09
#define OMAP_TAG_CAMERA_SENSOR	0x4f0a
#define OMAP_TAG_BOOT_REASON    0x4f80
#define OMAP_TAG_FLASH_PART	0x4f81
#define OMAP_TAG_VERSION_STR	0x4f82
struct omap_clock_config ;
struct omap_serial_console_config ;
struct omap_sti_console_config ;
struct omap_camera_sensor_config ;
struct omap_usb_config ;
struct omap_lcd_config ;
struct device;
struct fb_info;
struct omap_backlight_config ;
struct omap_fbmem_config ;
struct omap_pwm_led_platform_data ;
struct omap_uart_config ;
struct omap_flash_part_config ;
struct omap_boot_reason_config ;
struct omap_version_config ;
struct omap_board_config_entry ;
struct omap_board_config_kernel ;
extern const void *__init __omap_get_config(u16 tag, size_t len, int nr);
#define omap_get_config(tag, type) \
((const type *) __omap_get_config((tag), sizeof(type), 0))
#define omap_get_nr_config(tag, type, nr) \
((const type *) __omap_get_config((tag), sizeof(type), (nr)))
extern const void *__init omap_get_var_config(u16 tag, size_t *len);
extern struct omap_board_config_kernel *omap_board_config;
extern int omap_board_config_size;
extern int debug_card_init(u32 addr, unsigned gpio);
#if defined(CONFIG_MACH_OMAP3EVM)
u8 get_omap3_evm_rev(void);
#define get_omap3_evm_rev() (-EINVAL)
