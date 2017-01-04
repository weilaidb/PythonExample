#define _ASM_ARC_HINV_H
typedef enum configclass  CONFIGCLASS;
typedef enum configtype  CONFIGTYPE;
typedef enum  IDENTIFIERFLAG;
#define	NULL	0
union key_u ;
#if _MIPS_SIM == _MIPS_SIM_ABI64
#define SGI_ARCS_VERS	64
#define SGI_ARCS_REV	0
#define SGI_ARCS_VERS	1
#define SGI_ARCS_REV	10
typedef struct component  COMPONENT;
struct cfgdata ;
typedef struct systemid  SYSTEMID;
typedef enum memorytype  MEMORYTYPE;
typedef struct memorydescriptor  MEMORYDESCRIPTOR;
