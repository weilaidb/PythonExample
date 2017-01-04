static unsigned short s_ausThinkpadIrqToField[16] =
;
static unsigned short s_ausThinkpadDmaToField[8] =
;
static unsigned short s_numIrqs = 16, s_numDmas = 8;
static void EnableSRAM(THINKPAD_BD_DATA * pBDData)
static irqreturn_t UartInterrupt(int irq, void *dev_id)
static irqreturn_t DspInterrupt(int irq, void *dev_id)
int tp3780I_InitializeBoardData(THINKPAD_BD_DATA * pBDData)
int tp3780I_Cleanup(THINKPAD_BD_DATA * pBDData)
int tp3780I_CalcResources(THINKPAD_BD_DATA * pBDData)
int tp3780I_ClaimResources(THINKPAD_BD_DATA * pBDData)
int tp3780I_ReleaseResources(THINKPAD_BD_DATA * pBDData)
int tp3780I_EnableDSP(THINKPAD_BD_DATA * pBDData)
int tp3780I_DisableDSP(THINKPAD_BD_DATA * pBDData)
int tp3780I_ResetDSP(THINKPAD_BD_DATA * pBDData)
int tp3780I_StartDSP(THINKPAD_BD_DATA * pBDData)
int tp3780I_QueryAbilities(THINKPAD_BD_DATA * pBDData, MW_ABILITIES * pAbilities)
int tp3780I_ReadWriteDspDStore(THINKPAD_BD_DATA * pBDData, unsigned int uOpcode,
void __user *pvBuffer, unsigned int uCount,
unsigned long ulDSPAddr)
int tp3780I_ReadWriteDspIStore(THINKPAD_BD_DATA * pBDData, unsigned int uOpcode,
void __user *pvBuffer, unsigned int uCount,
unsigned long ulDSPAddr)
