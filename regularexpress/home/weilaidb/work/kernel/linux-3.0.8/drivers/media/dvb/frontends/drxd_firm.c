#define ADDRESS(x)     ((x) & 0xFF), (((x)>>8) & 0xFF), (((x)>>16) & 0xFF), (((x)>>24) & 0xFF)
#define LENGTH(x)      ((x) & 0xFF), (((x)>>8) & 0xFF)
#define DATA16(x)      ((x) & 0xFF), (((x)>>8) & 0xFF)
#define WRBLOCK(a, l) ADDRESS(a), LENGTH(l)
#define WR16(a, d) ADDRESS(a), LENGTH(1), DATA16(d)
#define END_OF_TABLE      0xFF, 0xFF, 0xFF, 0xFF
#define HI_TR_FUNC_ADDR HI_IF_RAM_USR_BEGIN__A
#define HI_TR_FUNC_SIZE 9
u8 DRXD_InitAtomicRead[] = ;
#define HI_RST_FUNC_ADDR (HI_IF_RAM_USR_BEGIN__A + HI_TR_FUNC_SIZE)
#define HI_RST_FUNC_SIZE 54
u8 DRXD_HiI2cPatch_1[] = ;
u8 DRXD_HiI2cPatch_3[] = ;
u8 DRXD_ResetCEFR[] = ;
u8 DRXD_InitFEA2_1[] = ;
u8 DRXD_InitFEA2_2[] = ;
u8 DRXD_InitFEB1_1[] = ;
u8 DRXD_InitFEB1_2[] = ;
u8 DRXD_InitCPA2[] = ;
u8 DRXD_InitCPB1[] = ;
u8 DRXD_InitCEA2[] = ;
u8 DRXD_InitCEB1[] = ;
u8 DRXD_InitEQA2[] = ;
u8 DRXD_InitEQB1[] = ;
u8 DRXD_ResetECRAM[] = ;
u8 DRXD_InitECA2[] = ;
u8 DRXD_InitECB1[] = ;
u8 DRXD_ResetECA2[] = ;
u8 DRXD_InitSC[] = ;
u8 DRXD_InitDiversityFront[] = ;
u8 DRXD_DisableDiversity[] = ;
u8 DRXD_StartDiversityFront[] = ;
u8 DRXD_StartDiversityEnd[] = ;
u8 DRXD_DiversityDelay8MHZ[] = ;
u8 DRXD_DiversityDelay6MHZ[] =
;
