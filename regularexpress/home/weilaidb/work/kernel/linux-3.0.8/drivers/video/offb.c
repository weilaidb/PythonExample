enum ;
struct offb_par ;
struct offb_par default_par;
extern boot_infos_t *boot_infos;
#define AVIVO_DC_LUT_RW_SELECT                  0x6480
#define AVIVO_DC_LUT_RW_MODE                    0x6484
#define AVIVO_DC_LUT_RW_INDEX                   0x6488
#define AVIVO_DC_LUT_SEQ_COLOR                  0x648c
#define AVIVO_DC_LUT_PWL_DATA                   0x6490
#define AVIVO_DC_LUT_30_COLOR                   0x6494
#define AVIVO_DC_LUT_READ_PIPE_SELECT           0x6498
#define AVIVO_DC_LUT_WRITE_EN_MASK              0x649c
#define AVIVO_DC_LUT_AUTOFILL                   0x64a0
#define AVIVO_DC_LUTA_CONTROL                   0x64c0
#define AVIVO_DC_LUTA_BLACK_OFFSET_BLUE         0x64c4
#define AVIVO_DC_LUTA_BLACK_OFFSET_GREEN        0x64c8
#define AVIVO_DC_LUTA_BLACK_OFFSET_RED          0x64cc
#define AVIVO_DC_LUTA_WHITE_OFFSET_BLUE         0x64d0
#define AVIVO_DC_LUTA_WHITE_OFFSET_GREEN        0x64d4
#define AVIVO_DC_LUTA_WHITE_OFFSET_RED          0x64d8
#define AVIVO_DC_LUTB_CONTROL                   0x6cc0
#define AVIVO_DC_LUTB_BLACK_OFFSET_BLUE         0x6cc4
#define AVIVO_DC_LUTB_BLACK_OFFSET_GREEN        0x6cc8
#define AVIVO_DC_LUTB_BLACK_OFFSET_RED          0x6ccc
#define AVIVO_DC_LUTB_WHITE_OFFSET_BLUE         0x6cd0
#define AVIVO_DC_LUTB_WHITE_OFFSET_GREEN        0x6cd4
#define AVIVO_DC_LUTB_WHITE_OFFSET_RED          0x6cd8
static int offb_setcolreg(u_int regno, u_int red, u_int green, u_int blue,
u_int transp, struct fb_info *info)
static int offb_blank(int blank, struct fb_info *info)
static int offb_set_par(struct fb_info *info)
static void offb_destroy(struct fb_info *info)
static struct fb_ops offb_ops = ;
static void __iomem *offb_map_reg(struct device_node *np, int index,
unsigned long offset, unsigned long size)
static void offb_init_palette_hacks(struct fb_info *info, struct device_node *dp,
const char *name, unsigned long address)
static void __init offb_init_fb(const char *name, const char *full_name,
int width, int height, int depth,
int pitch, unsigned long address,
int foreign_endian, struct device_node *dp)
static void __init offb_init_nodriver(struct device_node *dp, int no_real_node)
static int __init offb_init(void)
module_init(offb_init);
MODULE_LICENSE("GPL");
