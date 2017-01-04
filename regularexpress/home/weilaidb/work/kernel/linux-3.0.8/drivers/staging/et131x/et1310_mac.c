#define COUNTER_WRAP_28_BIT 0x10000000
#define COUNTER_WRAP_22_BIT 0x400000
#define COUNTER_WRAP_16_BIT 0x10000
#define COUNTER_WRAP_12_BIT 0x1000
#define COUNTER_MASK_28_BIT (COUNTER_WRAP_28_BIT - 1)
#define COUNTER_MASK_22_BIT (COUNTER_WRAP_22_BIT - 1)
#define COUNTER_MASK_16_BIT (COUNTER_WRAP_16_BIT - 1)
#define COUNTER_MASK_12_BIT (COUNTER_WRAP_12_BIT - 1)
void ConfigMACRegs1(struct et131x_adapter *etdev)
void ConfigMACRegs2(struct et131x_adapter *etdev)
void ConfigRxMacRegs(struct et131x_adapter *etdev)
void ConfigTxMacRegs(struct et131x_adapter *etdev)
void ConfigMacStatRegs(struct et131x_adapter *etdev)
void ConfigFlowControl(struct et131x_adapter *etdev)
void UpdateMacStatHostCounters(struct et131x_adapter *etdev)
void HandleMacStatInterrupt(struct et131x_adapter *etdev)
void SetupDeviceForMulticast(struct et131x_adapter *etdev)
void SetupDeviceForUnicast(struct et131x_adapter *etdev)
