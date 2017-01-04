#define __RIVA_HW_H__
#define RIVA_SW_VERSION 0x00010003
typedef int Bool;
#define TRUE 1
#define FALSE 0
#define NULL 0
typedef unsigned char  U008;
typedef unsigned short U016;
typedef unsigned int   U032;
#define NV_WR08(p,i,d)  (__raw_writeb((d), (void __iomem *)(p) + (i)))
#define NV_RD08(p,i)    (__raw_readb((void __iomem *)(p) + (i)))
#define NV_WR16(p,i,d)  (__raw_writew((d), (void __iomem *)(p) + (i)))
#define NV_RD16(p,i)    (__raw_readw((void __iomem *)(p) + (i)))
#define NV_WR32(p,i,d)  (__raw_writel((d), (void __iomem *)(p) + (i)))
#define NV_RD32(p,i)    (__raw_readl((void __iomem *)(p) + (i)))
#define VGA_WR08(p,i,d) (writeb((d), (void __iomem *)(p) + (i)))
#define VGA_RD08(p,i)   (readb((void __iomem *)(p) + (i)))
#define NV_ARCH_03  0x03
#define NV_ARCH_04  0x04
#define NV_ARCH_10  0x10
#define NV_ARCH_20  0x20
#define NV_ARCH_30  0x30
#define NV_ARCH_40  0x40
typedef volatile struct
RivaRop;
typedef volatile struct
RivaPattern;
typedef volatile struct
RivaClip;
typedef volatile struct
RivaRectangle;
typedef volatile struct
RivaScreenBlt;
typedef volatile struct
RivaPixmap;
typedef volatile struct
RivaBitmap;
typedef volatile struct
RivaTexturedTriangle03;
typedef volatile struct
RivaTexturedTriangle05;
typedef volatile struct
RivaLine;
typedef volatile struct
RivaSurface;
typedef volatile struct
RivaSurface3D;
#define FP_ENABLE  1
#define FP_DITHER  2
struct _riva_hw_inst;
struct _riva_hw_state;
typedef struct _riva_hw_inst
RIVA_HW_INST;
typedef struct _riva_hw_state
RIVA_HW_STATE;
extern int CalcStateExt
(
RIVA_HW_INST  *chip,
RIVA_HW_STATE *state,
int            bpp,
int            width,
int            hDisplaySize,
int            height,
int            dotClock
);
int RivaGetConfig(RIVA_HW_INST *, unsigned int);
#define RIVA_FIFO_FREE(hwinst,hwptr,cnt)                            \
