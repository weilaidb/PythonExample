#define STATUS_IMAGE_CHECKSUM_MISMATCH -199
#define EVENT_SIGNALED 1
static B_UINT16 CFG_CalculateChecksum(B_UINT8 *pu8Buffer, B_UINT32 u32Size)
BOOLEAN IsReqGpioIsLedInNVM(PMINI_ADAPTER Adapter, UINT gpios)
static INT LED_Blink(PMINI_ADAPTER Adapter, UINT GPIO_Num, UCHAR uiLedIndex, ULONG timeout, INT num_of_time, LedEventInfo_t currdriverstate)
static INT ScaleRateofTransfer(ULONG rate)
static INT LED_Proportional_Blink(PMINI_ADAPTER Adapter, UCHAR GPIO_Num_tx,
UCHAR uiTxLedIndex, UCHAR GPIO_Num_rx, UCHAR uiRxLedIndex, LedEventInfo_t currdriverstate)
static INT ValidateDSDParamsChecksum(
PMINI_ADAPTER Adapter,
ULONG  ulParamOffset,
USHORT usParamLen )
static INT ValidateHWParmStructure(PMINI_ADAPTER Adapter, ULONG ulHwParamOffset)
static int ReadLEDInformationFromEEPROM(PMINI_ADAPTER Adapter, UCHAR GPIO_Array[])
static int ReadConfigFileStructure(PMINI_ADAPTER Adapter, BOOLEAN *bEnableThread)
static VOID LedGpioInit(PMINI_ADAPTER Adapter)
static INT BcmGetGPIOPinInfo(PMINI_ADAPTER Adapter, UCHAR *GPIO_num_tx, UCHAR *GPIO_num_rx ,UCHAR *uiLedTxIndex, UCHAR *uiLedRxIndex,LedEventInfo_t currdriverstate)
static VOID LEDControlThread(PMINI_ADAPTER Adapter)
int InitLedSettings(PMINI_ADAPTER Adapter)
