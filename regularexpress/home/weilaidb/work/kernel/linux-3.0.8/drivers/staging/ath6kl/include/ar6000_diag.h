#define AR6000_DIAG_H_
int
ar6000_ReadRegDiag(struct hif_device *hifDevice, u32 *address, u32 *data);
int
ar6000_WriteRegDiag(struct hif_device *hifDevice, u32 *address, u32 *data);
int
ar6000_ReadDataDiag(struct hif_device *hifDevice, u32 address,
u8 *data, u32 length);
int
ar6000_WriteDataDiag(struct hif_device *hifDevice, u32 address,
u8 *data, u32 length);
int
ar6k_ReadTargetRegister(struct hif_device *hifDevice, int regsel, u32 *regval);
void
ar6k_FetchTargetRegs(struct hif_device *hifDevice, u32 *targregs);
