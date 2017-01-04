extern void phy_calibration_winbond(struct hw_data *phw_data, u32 frequency);
unsigned char Wb35Reg_BurstWrite(struct hw_data *pHwData, u16 RegisterNo, u32 *pRegisterData, u8 NumberOfData, u8 Flag)
void Wb35Reg_Update(struct hw_data *pHwData,  u16 RegisterNo,  u32 RegisterValue)
unsigned char Wb35Reg_WriteSync(struct hw_data *pHwData, u16 RegisterNo, u32 RegisterValue)
unsigned char Wb35Reg_Write(struct hw_data *pHwData, u16 RegisterNo, u32 RegisterValue)
unsigned char Wb35Reg_WriteWithCallbackValue(struct hw_data *pHwData,
u16 RegisterNo,
u32 RegisterValue,
s8 *pValue,
s8 Len)
unsigned char Wb35Reg_ReadSync(struct hw_data *pHwData, u16 RegisterNo, u32 *pRegisterValue)
unsigned char Wb35Reg_Read(struct hw_data *pHwData, u16 RegisterNo, u32 *pRegisterValue)
void Wb35Reg_EP0VM_start(struct hw_data *pHwData)
void Wb35Reg_EP0VM(struct hw_data *pHwData)
void Wb35Reg_EP0VM_complete(struct urb *urb)
void Wb35Reg_destroy(struct hw_data *pHwData)
unsigned char Wb35Reg_initial(struct hw_data *pHwData)
u32 CardComputeCrc(u8 *Buffer, u32 Length)
u32 BitReverse(u32 dwData, u32 DataLength)
void Wb35Reg_phy_calibration(struct hw_data *pHwData)
