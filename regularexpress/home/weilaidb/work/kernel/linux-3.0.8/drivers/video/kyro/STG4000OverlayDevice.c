#define STG4000_NO_SCALING    0x800
#define STG4000_NO_DECIMATION 0xFFFFFFFF
#define STG4000_PRIM_NUM_PIX   5
#define STG4000_PRIM_ALIGN     4
#define STG4000_PRIM_ADDR_BITS 20
#define STG4000_PRIM_MIN_WIDTH  640
#define STG4000_PRIM_MAX_WIDTH  1600
#define STG4000_PRIM_MIN_HEIGHT 480
#define STG4000_PRIM_MAX_HEIGHT 1200
#define STG4000_OVRL_NUM_PIX   4
#define STG4000_OVRL_ALIGN     2
#define STG4000_OVRL_ADDR_BITS 20
#define STG4000_OVRL_NUM_MODES 5
#define STG4000_OVRL_MIN_WIDTH  0
#define STG4000_OVRL_MAX_WIDTH  720
#define STG4000_OVRL_MIN_HEIGHT 0
#define STG4000_OVRL_MAX_HEIGHT 576
static u32 adwDecim8[33] = ;
typedef struct _OVRL_SRC_DEST  OVRL_SRC_DEST;
static u32 ovlWidth, ovlHeight, ovlStride;
static int ovlLinear;
void ResetOverlayRegisters(volatile STG4000REG __iomem *pSTGReg)
int CreateOverlaySurface(volatile STG4000REG __iomem *pSTGReg,
u32 inWidth,
u32 inHeight,
int bLinear,
u32 ulOverlayOffset,
u32 * retStride, u32 * retUVStride)
int SetOverlayBlendMode(volatile STG4000REG __iomem *pSTGReg,
OVRL_BLEND_MODE mode,
u32 ulAlpha, u32 ulColorKey)
void EnableOverlayPlane(volatile STG4000REG __iomem *pSTGReg)
static u32 Overlap(u32 ulBits, u32 ulPattern)
int SetOverlayViewPort(volatile STG4000REG __iomem *pSTGReg,
u32 left, u32 top,
u32 right, u32 bottom)
