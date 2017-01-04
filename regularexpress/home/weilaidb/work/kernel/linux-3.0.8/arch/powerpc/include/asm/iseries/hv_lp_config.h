#define _ASM_POWERPC_ISERIES_HV_LP_CONFIG_H
enum ;
#define HvCallCfgGetSystemPhysicalProcessors		HvCallCfg +  6
#define HvCallCfgGetPhysicalProcessors			HvCallCfg +  7
#define HvCallCfgGetMsChunks				HvCallCfg +  9
#define HvCallCfgGetSharedPoolIndex			HvCallCfg + 20
#define HvCallCfgGetSharedProcUnits			HvCallCfg + 21
#define HvCallCfgGetNumProcsInSharedPool		HvCallCfg + 22
#define HvCallCfgGetVirtualLanIndexMap			HvCallCfg + 30
#define HvCallCfgGetHostingLpIndex			HvCallCfg + 32
extern HvLpIndex HvLpConfig_getLpIndex_outline(void);
extern HvLpIndex HvLpConfig_getLpIndex(void);
extern HvLpIndex HvLpConfig_getPrimaryLpIndex(void);
static inline u64 HvLpConfig_getMsChunks(void)
static inline u64 HvLpConfig_getSystemPhysicalProcessors(void)
static inline u64 HvLpConfig_getNumProcsInSharedPool(HvLpSharedPoolIndex sPI)
static inline u64 HvLpConfig_getPhysicalProcessors(void)
static inline HvLpSharedPoolIndex HvLpConfig_getSharedPoolIndex(void)
static inline u64 HvLpConfig_getSharedProcUnits(void)
static inline u64 HvLpConfig_getMaxSharedProcUnits(void)
static inline u64 HvLpConfig_getMaxPhysicalProcessors(void)
static inline HvLpVirtualLanIndexMap HvLpConfig_getVirtualLanIndexMapForLp(
HvLpIndex lp)
static inline HvLpVirtualLanIndexMap HvLpConfig_getVirtualLanIndexMap(void)
static inline int HvLpConfig_doLpsCommunicateOnVirtualLan(HvLpIndex lp1,
HvLpIndex lp2)
static inline HvLpIndex HvLpConfig_getHostingLpIndex(HvLpIndex lp)
