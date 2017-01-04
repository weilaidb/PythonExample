#define _LINUX_3780I_H
#define DSP_IsaSlaveControl        0x0000
#define DSP_IsaSlaveStatus         0x0001
#define DSP_ConfigAddress          0x0002
#define DSP_ConfigData             0x0003
#define DSP_HBridgeControl         0x0002
#define DSP_MsaAddrLow             0x0004
#define DSP_MsaAddrHigh            0x0006
#define DSP_MsaDataDSISHigh        0x0008
#define DSP_MsaDataISLow           0x000A
#define DSP_ReadAndClear           0x000C
#define DSP_Interrupt              0x000E
typedef struct  DSP_ISA_SLAVE_CONTROL;
typedef struct  DSP_HBRIDGE_CONTROL;
#define DSP_UartCfg1Index          0x0003
#define DSP_UartCfg2Index          0x0004
#define DSP_HBridgeCfg1Index       0x0007
#define DSP_HBridgeCfg2Index       0x0008
#define DSP_BusMasterCfg1Index     0x0009
#define DSP_BusMasterCfg2Index     0x000A
#define DSP_IsaProtCfgIndex        0x000F
#define DSP_PowerMgCfgIndex        0x0010
#define DSP_HBusTimerCfgIndex      0x0011
typedef struct  DSP_UART_CFG_1;
typedef struct  DSP_UART_CFG_2;
typedef struct  DSP_HBRIDGE_CFG_1;
typedef struct  DSP_HBRIDGE_CFG_2;
typedef struct  DSP_BUSMASTER_CFG_1;
typedef struct  DSP_BUSMASTER_CFG_2;
typedef struct  DSP_ISA_PROT_CFG;
typedef struct  DSP_POWER_MGMT_CFG;
typedef struct  DSP_HBUS_TIMER_CFG;
#define DSP_ChipID                 0x80000000
#define DSP_MspBootDomain          0x80000580
#define DSP_LBusTimeoutDisable     0x80000580
#define DSP_ClockControl_1         0x8000058A
#define DSP_ClockControl_2         0x8000058C
#define DSP_ChipReset              0x80000588
#define DSP_GpioModeControl_15_8   0x80000082
#define DSP_GpioDriverEnable_15_8  0x80000076
#define DSP_GpioOutputData_15_8    0x80000072
typedef struct  DSP_BOOT_DOMAIN;
typedef struct  DSP_LBUS_TIMEOUT_DISABLE;
typedef struct  DSP_CHIP_RESET;
typedef struct  DSP_CLOCK_CONTROL_1;
typedef struct  DSP_CLOCK_CONTROL_2;
typedef struct  DSP_GPIO_OUTPUT_DATA_15_8;
typedef struct  DSP_GPIO_DRIVER_ENABLE_15_8;
typedef struct  DSP_GPIO_MODE_15_8;
#define MW_ADC_MASK    0x0001
#define MW_AIC2_MASK   0x0006
#define MW_MIDI_MASK   0x0008
#define MW_CDDAC_MASK  0x8001
#define MW_AIC1_MASK   0xE006
#define MW_UART_MASK   0xE00A
#define MW_ACI_MASK    0xE00B
typedef struct _DSP_3780I_CONFIG_SETTINGS  DSP_3780I_CONFIG_SETTINGS;
int dsp3780I_EnableDSP(DSP_3780I_CONFIG_SETTINGS * pSettings,
unsigned short *pIrqMap,
unsigned short *pDmaMap);
int dsp3780I_DisableDSP(DSP_3780I_CONFIG_SETTINGS * pSettings);
int dsp3780I_Reset(DSP_3780I_CONFIG_SETTINGS * pSettings);
int dsp3780I_Run(DSP_3780I_CONFIG_SETTINGS * pSettings);
int dsp3780I_ReadDStore(unsigned short usDspBaseIO, void __user *pvBuffer,
unsigned uCount, unsigned long ulDSPAddr);
int dsp3780I_ReadAndClearDStore(unsigned short usDspBaseIO,
void __user *pvBuffer, unsigned uCount,
unsigned long ulDSPAddr);
int dsp3780I_WriteDStore(unsigned short usDspBaseIO, void __user *pvBuffer,
unsigned uCount, unsigned long ulDSPAddr);
int dsp3780I_ReadIStore(unsigned short usDspBaseIO, void __user *pvBuffer,
unsigned uCount, unsigned long ulDSPAddr);
int dsp3780I_WriteIStore(unsigned short usDspBaseIO, void __user *pvBuffer,
unsigned uCount, unsigned long ulDSPAddr);
unsigned short dsp3780I_ReadMsaCfg(unsigned short usDspBaseIO,
unsigned long ulMsaAddr);
void dsp3780I_WriteMsaCfg(unsigned short usDspBaseIO,
unsigned long ulMsaAddr, unsigned short usValue);
int dsp3780I_GetIPCSource(unsigned short usDspBaseIO,
unsigned short *pusIPCSource);
#define MKWORD(var) (*((unsigned short *)(&var)))
#define MKBYTE(var) (*((unsigned char *)(&var)))
#define WriteMsaCfg(addr,value) dsp3780I_WriteMsaCfg(usDspBaseIO,addr,value)
#define ReadMsaCfg(addr) dsp3780I_ReadMsaCfg(usDspBaseIO,addr)
#define WriteGenCfg(index,value) dsp3780I_WriteGenCfg(usDspBaseIO,index,value)
#define ReadGenCfg(index) dsp3780I_ReadGenCfg(usDspBaseIO,index)
#define InWordDsp(index)          inw(usDspBaseIO+index)
#define InByteDsp(index)          inb(usDspBaseIO+index)
#define OutWordDsp(index,value)   outw(value,usDspBaseIO+index)
#define OutByteDsp(index,value)   outb(value,usDspBaseIO+index)
