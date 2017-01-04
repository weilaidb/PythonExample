static u32 STG_PIXEL_BUS_WIDTH = 128;
static u32 REF_CLOCK = 14318;
int InitialiseRamdac(volatile STG4000REG __iomem * pSTGReg,
u32 displayDepth,
u32 displayWidth,
u32 displayHeight,
s32 HSyncPolarity,
s32 VSyncPolarity, u32 * pixelClock)
void DisableRamdacOutput(volatile STG4000REG __iomem * pSTGReg)
void EnableRamdacOutput(volatile STG4000REG __iomem * pSTGReg)
