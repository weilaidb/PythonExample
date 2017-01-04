#define _LINUX_TP3780I_H
#define TP_ABILITIES_INTS_PER_SEC       39160800
#define TP_ABILITIES_DATA_SIZE          32768
#define TP_ABILITIES_INST_SIZE          32768
#define TP_ABILITIES_MWAVEOS_NAME       "mwaveos0700.dsp"
#define TP_ABILITIES_BIOSTASK_NAME      "mwbio701.dsp"
#define TP_CFG_NumTransfers     3
#define TP_CFG_RerequestTimer   1
#define TP_CFG_MEMCS16          0
#define TP_CFG_IsaMemCmdWidth   3
#define TP_CFG_GateIOCHRDY      0
#define TP_CFG_EnablePwrMgmt    1
#define TP_CFG_HBusTimerValue 255
#define TP_CFG_DisableLBusTimeout 0
#define TP_CFG_N_Divisor       32
#define TP_CFG_M_Multiplier    37
#define TP_CFG_PllBypass        0
#define TP_CFG_ChipletEnable 0xFFFF
typedef struct  THINKPAD_BD_DATA;
int tp3780I_InitializeBoardData(THINKPAD_BD_DATA * pBDData);
int tp3780I_CalcResources(THINKPAD_BD_DATA * pBDData);
int tp3780I_ClaimResources(THINKPAD_BD_DATA * pBDData);
int tp3780I_ReleaseResources(THINKPAD_BD_DATA * pBDData);
int tp3780I_EnableDSP(THINKPAD_BD_DATA * pBDData);
int tp3780I_DisableDSP(THINKPAD_BD_DATA * pBDData);
int tp3780I_ResetDSP(THINKPAD_BD_DATA * pBDData);
int tp3780I_StartDSP(THINKPAD_BD_DATA * pBDData);
int tp3780I_QueryAbilities(THINKPAD_BD_DATA * pBDData, MW_ABILITIES * pAbilities);
int tp3780I_Cleanup(THINKPAD_BD_DATA * pBDData);
int tp3780I_ReadWriteDspDStore(THINKPAD_BD_DATA * pBDData, unsigned int uOpcode,
void __user *pvBuffer, unsigned int uCount,
unsigned long ulDSPAddr);
int tp3780I_ReadWriteDspIStore(THINKPAD_BD_DATA * pBDData, unsigned int uOpcode,
void __user *pvBuffer, unsigned int uCount,
unsigned long ulDSPAddr);
