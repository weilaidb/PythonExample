#define __BFIN_ADV7393FB_H__
#define BFIN_LCD_NBR_PALETTE_ENTRIES	256
# define VMODE 0
# define VMODE 1
# define VMODE 2
# define VMODE 3
# define VMODE 4
# define VMODE 5
# define VMODE 1
# define VMEM 2
# define VMEM 1
#if defined(CONFIG_BF537) || defined(CONFIG_BF536) || defined(CONFIG_BF534)
# define DMA_CFG_VAL	0x7935
# define VB_DUMMY_MEMORY_SOURCE	L1_DATA_B_START
# define DMA_CFG_VAL	0x7915
# define VB_DUMMY_MEMORY_SOURCE	BOOT_ROM_START
enum ;
enum ;
#define DRIVER_NAME "bfin-adv7393"
struct adv7393fb_modes ;
static const u8 init_NTSC_TESTPATTERN[] = ;
static const u8 init_NTSC[] = ;
static const u8 init_PAL[] = ;
static const u8 init_NTSC_YCbCr[] = ;
static const u8 init_PAL_YCbCr[] = ;
static struct adv7393fb_modes known_modes[] = ;
struct adv7393fb_regs ;
struct adv7393fb_device ;
#define to_adv7393fb_device(_info) \
(_info ? container_of(_info, struct adv7393fb_device, info) : NULL);
static int bfin_adv7393_fb_open(struct fb_info *info, int user);
static int bfin_adv7393_fb_release(struct fb_info *info, int user);
static int bfin_adv7393_fb_check_var(struct fb_var_screeninfo *var,
struct fb_info *info);
static int bfin_adv7393_fb_pan_display(struct fb_var_screeninfo *var,
struct fb_info *info);
static int bfin_adv7393_fb_blank(int blank, struct fb_info *info);
static void bfin_config_ppi(struct adv7393fb_device *fbdev);
static int bfin_config_dma(struct adv7393fb_device *fbdev);
static void bfin_disable_dma(void);
static void bfin_enable_ppi(void);
static void bfin_disable_ppi(void);
static inline int adv7393_write(struct i2c_client *client, u8 reg, u8 value);
static inline int adv7393_read(struct i2c_client *client, u8 reg);
static int adv7393_write_block(struct i2c_client *client, const u8 *data,
unsigned int len);
int bfin_adv7393_fb_cursor(struct fb_info *info, struct fb_cursor *cursor);
static int bfin_adv7393_fb_setcolreg(u_int, u_int, u_int, u_int,
u_int, struct fb_info *info);
