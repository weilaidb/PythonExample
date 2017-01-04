#define _SPARC_MBUS_H
enum mbus_module ;
extern enum mbus_module srmmu_modtype;
extern unsigned int viking_rev, swift_rev, cypress_rev;
#define HWBUG_COPYBACK_BROKEN        0x00000001
#define HWBUG_ASIFLUSH_BROKEN        0x00000002
#define HWBUG_VACFLUSH_BITROT        0x00000004
#define HWBUG_KERN_ACCBROKEN         0x00000008
#define HWBUG_KERN_CBITBROKEN        0x00000010
#define HWBUG_MODIFIED_BITROT        0x00000020
#define HWBUG_PC_BADFAULT_ADDR       0x00000040
#define HWBUG_SUPERSCALAR_BAD        0x00000080
#define HWBUG_PACINIT_BITROT         0x00000100
#define MBUS_VIKING        0x4
#define MBUS_LSI           0x3
#define MBUS_ROSS          0x1
#define MBUS_FMI           0x0
#define ROSS_604_REV_CDE        0x0
#define ROSS_604_REV_F          0x1
#define ROSS_605                0xf
#define ROSS_605_REV_B          0xe
#define VIKING_REV_12           0x1
#define VIKING_REV_2            0x2
#define VIKING_REV_30           0x3
#define VIKING_REV_35           0x4
#define LSI_L64815		0x0
#define FMI_AURORA		0x4
#define FMI_TURBO		0x5
#define TBR_ID_SHIFT            20
static inline int get_cpuid(void)
static inline int get_modid(void)
