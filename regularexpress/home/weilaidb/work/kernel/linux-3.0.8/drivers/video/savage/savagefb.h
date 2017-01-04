#define __SAVAGEFB_H__
# define DBG(x)		printk (KERN_DEBUG "savagefb: %s\n", (x));
# define DBG(x)
# define SavagePrintRegs(...)
#define PCI_CHIP_SAVAGE4      0x8a22
#define PCI_CHIP_SAVAGE3D     0x8a20
#define PCI_CHIP_SAVAGE3D_MV  0x8a21
#define PCI_CHIP_SAVAGE2000   0x9102
#define PCI_CHIP_SAVAGE_MX_MV 0x8c10
#define PCI_CHIP_SAVAGE_MX    0x8c11
#define PCI_CHIP_SAVAGE_IX_MV 0x8c12
#define PCI_CHIP_SAVAGE_IX    0x8c13
#define PCI_CHIP_PROSAVAGE_PM 0x8a25
#define PCI_CHIP_PROSAVAGE_KM 0x8a26
#define PCI_CHIP_S3TWISTER_P  0x8d01
#define PCI_CHIP_S3TWISTER_K  0x8d02
#define PCI_CHIP_PROSAVAGE_DDR          0x8d03
#define PCI_CHIP_PROSAVAGE_DDRK         0x8d04
#define PCI_CHIP_SUPSAV_MX128		0x8c22
#define PCI_CHIP_SUPSAV_MX64		0x8c24
#define PCI_CHIP_SUPSAV_MX64C		0x8c26
#define PCI_CHIP_SUPSAV_IX128SDR	0x8c2a
#define PCI_CHIP_SUPSAV_IX128DDR	0x8c2b
#define PCI_CHIP_SUPSAV_IX64SDR		0x8c2c
#define PCI_CHIP_SUPSAV_IX64DDR		0x8c2d
#define PCI_CHIP_SUPSAV_IXCSDR		0x8c2e
#define PCI_CHIP_SUPSAV_IXCDDR		0x8c2f
#define S3_SAVAGE_SERIES(chip)    ((chip>=S3_SAVAGE3D) && (chip<=S3_SAVAGE2000))
#define S3_SAVAGE3D_SERIES(chip)  ((chip>=S3_SAVAGE3D) && (chip<=S3_SAVAGE_MX))
#define S3_SAVAGE4_SERIES(chip)   ((chip>=S3_SAVAGE4) && (chip<=S3_PROSAVAGEDDR))
#define S3_SAVAGE_MOBILE_SERIES(chip)  ((chip==S3_SAVAGE_MX) || (chip==S3_SUPERSAVAGE))
#define S3_MOBILE_TWISTER_SERIES(chip) ((chip==S3_TWISTER) || (chip==S3_PROSAVAGEDDR))
typedef enum  savage_chipset;
#define BIOS_BSIZE		     1024
#define BIOS_BASE		     0xc0000
#define SAVAGE_NEWMMIO_REGBASE_S3    0x1000000
#define SAVAGE_NEWMMIO_REGBASE_S4    0x0000000
#define SAVAGE_NEWMMIO_REGSIZE	     0x0080000
#define SAVAGE_NEWMMIO_VGABASE	     0x8000
#define BASE_FREQ		     14318
#define HALF_BASE_FREQ               7159
#define FIFO_CONTROL_REG	     0x8200
#define MIU_CONTROL_REG		     0x8204
#define STREAMS_TIMEOUT_REG	     0x8208
#define MISC_TIMEOUT_REG	     0x820c
#define MONO_PAT_0                   0xa4e8
#define MONO_PAT_1                   0xa4ec
#define MAXFIFO                      0x7f00
#define BCI_CMD_NOP                  0x40000000
#define BCI_CMD_SETREG               0x96000000
#define BCI_CMD_RECT                 0x48000000
#define BCI_CMD_RECT_XP              0x01000000
#define BCI_CMD_RECT_YP              0x02000000
#define BCI_CMD_SEND_COLOR           0x00008000
#define BCI_CMD_DEST_GBD             0x00000000
#define BCI_CMD_SRC_GBD              0x00000020
#define BCI_CMD_SRC_SOLID            0x00000000
#define BCI_CMD_SRC_MONO             0x00000060
#define BCI_CMD_CLIP_NEW             0x00006000
#define BCI_CMD_CLIP_LR              0x00004000
#define BCI_CLIP_LR(l, r)            ((((r) << 16) | (l)) & 0x0FFF0FFF)
#define BCI_CLIP_TL(t, l)            ((((t) << 16) | (l)) & 0x0FFF0FFF)
#define BCI_CLIP_BR(b, r)            ((((b) << 16) | (r)) & 0x0FFF0FFF)
#define BCI_W_H(w, h)                (((h) << 16) | ((w) & 0xFFF))
#define BCI_X_Y(x, y)                (((y) << 16) | ((x) & 0xFFF))
#define BCI_GBD1                     0xE0
#define BCI_GBD2                     0xE1
#define BCI_BUFFER_OFFSET            0x10000
#define BCI_SIZE                     0x4000
#define BCI_SEND(dw)                 writel(dw, par->bci_base + par->bci_ptr++)
#define BCI_CMD_GET_ROP(cmd)         (((cmd) >> 16) & 0xFF)
#define BCI_CMD_SET_ROP(cmd, rop)    ((cmd) |= ((rop & 0xFF) << 16))
#define BCI_CMD_SEND_COLOR           0x00008000
#define DISP_CRT     1
#define DISP_LCD     2
#define DISP_DFP     3
struct xtimings ;
struct savage_reg ;
#define NR_PALETTE	256
struct savagefb_par;
struct savagefb_i2c_chan ;
struct savagefb_par ;
#define BCI_BD_BW_DISABLE            0x10000000
#define BCI_BD_SET_BPP(bd, bpp)      ((bd) |= (((bpp) & 0xFF) << 16))
#define BCI_BD_SET_STRIDE(bd, st)    ((bd) |= ((st) & 0xFFFF))
static inline u8 savage_in8(u32 addr, struct savagefb_par *par)
static inline u16 savage_in16(u32 addr, struct savagefb_par *par)
static inline u32 savage_in32(u32 addr, struct savagefb_par *par)
static inline void savage_out8(u32 addr, u8 val, struct savagefb_par *par)
static inline void savage_out16(u32 addr, u16 val, struct savagefb_par *par)
static inline void savage_out32(u32 addr, u32 val, struct savagefb_par *par)
static inline u8 vga_in8(int addr, struct savagefb_par *par)
static inline u16 vga_in16(int addr, struct savagefb_par *par)
static inline u8 vga_in32(int addr, struct savagefb_par *par)
static inline void vga_out8(int addr, u8 val, struct savagefb_par *par)
static inline void vga_out16(int addr, u16 val, struct savagefb_par *par)
static inline void vga_out32(int addr, u32 val, struct savagefb_par *par)
static inline u8 VGArCR (u8 index, struct savagefb_par *par)
static inline u8 VGArGR (u8 index, struct savagefb_par *par)
static inline u8 VGArSEQ (u8 index, struct savagefb_par *par)
static inline void VGAwCR(u8 index, u8 val, struct savagefb_par *par)
static inline void VGAwGR(u8 index, u8 val, struct savagefb_par *par)
static inline void VGAwSEQ(u8 index, u8 val, struct savagefb_par *par)
static inline void VGAenablePalette(struct savagefb_par *par)
static inline void VGAdisablePalette(struct savagefb_par *par)
static inline void VGAwATTR(u8 index, u8 value, struct savagefb_par *par)
static inline void VGAwMISC(u8 value, struct savagefb_par *par)
#define savagefb_set_clip(x)
static inline void VerticalRetraceWait(struct savagefb_par *par)
extern int savagefb_probe_i2c_connector(struct fb_info *info,
u8 **out_edid);
extern void savagefb_create_i2c_busses(struct fb_info *info);
extern void savagefb_delete_i2c_busses(struct fb_info *info);
extern int  savagefb_sync(struct fb_info *info);
extern void savagefb_copyarea(struct fb_info *info,
const struct fb_copyarea *region);
extern void savagefb_fillrect(struct fb_info *info,
const struct fb_fillrect *rect);
extern void savagefb_imageblit(struct fb_info *info,
const struct fb_image *image);
