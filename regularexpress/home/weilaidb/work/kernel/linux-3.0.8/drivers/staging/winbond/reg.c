u32 max2825_rf_data[] = ;
u32 max2825_channel_data_24[][3] = ;
u32 max2825_power_data_24[] = ;
u32 max2827_rf_data[] = ;
u32 max2827_channel_data_24[][3] = ;
u32 max2827_channel_data_50[][3] = ;
u32 max2827_power_data_24[] = ;
u32 max2827_power_data_50[] = ;
u32 max2828_rf_data[] = ;
u32 max2828_channel_data_24[][3] = ;
u32 max2828_channel_data_50[][3] = ;
u32 max2828_power_data_24[] = ;
u32 max2828_power_data_50[] = ;
u32 max2829_rf_data[] = ;
u32 max2829_channel_data_24[][3] = ;
u32 max2829_channel_data_50[][4] = ;
u32 maxim_317_rf_data[] = ;
u32 maxim_317_channel_data_24[][3] = ;
u32 maxim_317_channel_data_50[][3] = ;
u32 maxim_317_power_data_24[] = ;
u32 maxim_317_power_data_50[] = ;
u32 al2230_rf_data[] = ;
u32 al2230s_rf_data[] = ;
u32 al2230_channel_data_24[][2] = ;
#define AIROHA_TXVGA_LOW_INDEX		31
#define AIROHA_TXVGA_MIDDLE_INDEX	12
#define AIROHA_TXVGA_HIGH_INDEX		8
u32 al2230_txvga_data[][2] = ;
u32 al7230_rf_data_24[]	= ;
u32 al7230_channel_data_24[][2] = ;
u32 al7230_rf_data_50[]	= ;
u32 al7230_channel_data_5[][4] = ;
u32 al7230_txvga_data[][2] = ;
u32 w89rf242_rf_data[] = ;
u32 w89rf242_channel_data_24[][2] = ;
u32 w89rf242_power_data_24[] = ;
u32 w89rf242_txvga_old_mapping[][2] = ;
u32 w89rf242_txvga_data[][5] = ;
void Uxx_ReadEthernetAddress(struct hw_data *pHwData)
void CardGetMulticastBit(u8 Address[ETH_ALEN], u8 *Byte, u8 *Value)
void Uxx_power_on_procedure(struct hw_data *pHwData)
void Set_ChanIndep_RfData_al7230_24(struct hw_data *pHwData, u32 *pltmp , char number)
void Set_ChanIndep_RfData_al7230_50(struct hw_data *pHwData, u32 *pltmp, char number)
void RFSynthesizer_initial(struct hw_data *pHwData)
void BBProcessor_AL7230_2400(struct hw_data *pHwData)
void BBProcessor_AL7230_5000(struct hw_data *pHwData)
void BBProcessor_initial(struct hw_data *pHwData)
void set_tx_power_per_channel_max2829(struct hw_data *pHwData,  struct chan_info Channel)
void set_tx_power_per_channel_al2230(struct hw_data *pHwData,  struct chan_info Channel)
void set_tx_power_per_channel_al7230(struct hw_data *pHwData,  struct chan_info Channel)
void set_tx_power_per_channel_wb242(struct hw_data *pHwData,  struct chan_info Channel)
void RFSynthesizer_SwitchingChannel(struct hw_data *pHwData,  struct chan_info Channel)
u8 RFSynthesizer_SetPowerIndex(struct hw_data *pHwData,  u8 PowerIndex)
u8 RFSynthesizer_SetMaxim2828_24Power(struct hw_data *pHwData, u8 index)
u8 RFSynthesizer_SetMaxim2828_50Power(struct hw_data *pHwData, u8 index)
u8 RFSynthesizer_SetMaxim2827_24Power(struct hw_data *pHwData, u8 index)
u8 RFSynthesizer_SetMaxim2827_50Power(struct hw_data *pHwData, u8 index)
u8 RFSynthesizer_SetMaxim2825Power(struct hw_data *pHwData, u8 index)
u8 RFSynthesizer_SetAiroha2230Power(struct hw_data *pHwData, u8 index)
u8 RFSynthesizer_SetAiroha7230Power(struct hw_data *pHwData, u8 index)
u8 RFSynthesizer_SetWinbond242Power(struct hw_data *pHwData, u8 index)
void Dxx_initial(struct hw_data *pHwData)
void Mxx_initial(struct hw_data *pHwData)
void Uxx_power_off_procedure(struct hw_data *pHwData)
void GetTxVgaFromEEPROM(struct hw_data *pHwData)
void EEPROMTxVgaAdjust(struct hw_data *pHwData)
void BBProcessor_RateChanging(struct hw_data *pHwData,  u8 rate)
