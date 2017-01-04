static const unsigned char data_frame_if[] = ;
static const unsigned char data_panel[] = ;
static const unsigned char data_timing[] = ;
static const unsigned char data_timing_src[] = ;
static const unsigned char data_gamma[] = ;
static const unsigned char data_power[] = ;
static unsigned long read_reg(void *sohandle,
struct sh_mobile_lcdc_sys_bus_ops *so)
static void write_reg(void *sohandle,
struct sh_mobile_lcdc_sys_bus_ops *so,
int i, unsigned long v)
static void write_data(void *sohandle,
struct sh_mobile_lcdc_sys_bus_ops *so,
unsigned char const *data, int no_data)
static unsigned long read_device_code(void *sohandle,
struct sh_mobile_lcdc_sys_bus_ops *so)
static void write_memory_start(void *sohandle,
struct sh_mobile_lcdc_sys_bus_ops *so)
static void clear_memory(void *sohandle,
struct sh_mobile_lcdc_sys_bus_ops *so)
static void display_on(void *sohandle,
struct sh_mobile_lcdc_sys_bus_ops *so)
int kfr2r09_lcd_setup(void *board_data, void *sohandle,
struct sh_mobile_lcdc_sys_bus_ops *so)
void kfr2r09_lcd_start(void *board_data, void *sohandle,
struct sh_mobile_lcdc_sys_bus_ops *so)
#define CTRL_CKSW       0x10
#define CTRL_C10        0x20
#define CTRL_CPSW       0x80
#define MAIN_MLED4      0x40
#define MAIN_MSW        0x80
static int kfr2r09_lcd_backlight(int on)
void kfr2r09_lcd_on(void *board_data, struct fb_info *info)
void kfr2r09_lcd_off(void *board_data)
