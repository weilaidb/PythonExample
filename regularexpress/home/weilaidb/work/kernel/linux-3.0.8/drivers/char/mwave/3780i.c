static DEFINE_SPINLOCK(dsp_lock);
static void PaceMsaAccess(unsigned short usDspBaseIO)
unsigned short dsp3780I_ReadMsaCfg(unsigned short usDspBaseIO,
unsigned long ulMsaAddr)
void dsp3780I_WriteMsaCfg(unsigned short usDspBaseIO,
unsigned long ulMsaAddr, unsigned short usValue)
static void dsp3780I_WriteGenCfg(unsigned short usDspBaseIO, unsigned uIndex,
unsigned char ucValue)
int dsp3780I_EnableDSP(DSP_3780I_CONFIG_SETTINGS * pSettings,
unsigned short *pIrqMap,
unsigned short *pDmaMap)
int dsp3780I_DisableDSP(DSP_3780I_CONFIG_SETTINGS * pSettings)
int dsp3780I_Reset(DSP_3780I_CONFIG_SETTINGS * pSettings)
int dsp3780I_Run(DSP_3780I_CONFIG_SETTINGS * pSettings)
int dsp3780I_ReadDStore(unsigned short usDspBaseIO, void __user *pvBuffer,
unsigned uCount, unsigned long ulDSPAddr)
int dsp3780I_ReadAndClearDStore(unsigned short usDspBaseIO,
void __user *pvBuffer, unsigned uCount,
unsigned long ulDSPAddr)
int dsp3780I_WriteDStore(unsigned short usDspBaseIO, void __user *pvBuffer,
unsigned uCount, unsigned long ulDSPAddr)
int dsp3780I_ReadIStore(unsigned short usDspBaseIO, void __user *pvBuffer,
unsigned uCount, unsigned long ulDSPAddr)
int dsp3780I_WriteIStore(unsigned short usDspBaseIO, void __user *pvBuffer,
unsigned uCount, unsigned long ulDSPAddr)
int dsp3780I_GetIPCSource(unsigned short usDspBaseIO,
unsigned short *pusIPCSource)
