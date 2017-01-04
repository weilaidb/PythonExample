#define _BMI_H_
void
BMIInit(void);
void
BMICleanup(void);
int
BMIDone(struct hif_device *device);
int
BMIGetTargetInfo(struct hif_device *device, struct bmi_target_info *targ_info);
int
BMIReadMemory(struct hif_device *device,
u32 address,
u8 *buffer,
u32 length);
int
BMIWriteMemory(struct hif_device *device,
u32 address,
u8 *buffer,
u32 length);
int
BMIExecute(struct hif_device *device,
u32 address,
u32 *param);
int
BMISetAppStart(struct hif_device *device,
u32 address);
int
BMIReadSOCRegister(struct hif_device *device,
u32 address,
u32 *param);
int
BMIWriteSOCRegister(struct hif_device *device,
u32 address,
u32 param);
int
BMIrompatchInstall(struct hif_device *device,
u32 ROM_addr,
u32 RAM_addr,
u32 nbytes,
u32 do_activate,
u32 *patch_id);
int
BMIrompatchUninstall(struct hif_device *device,
u32 rompatch_id);
int
BMIrompatchActivate(struct hif_device *device,
u32 rompatch_count,
u32 *rompatch_list);
int
BMIrompatchDeactivate(struct hif_device *device,
u32 rompatch_count,
u32 *rompatch_list);
int
BMILZStreamStart(struct hif_device *device,
u32 address);
int
BMILZData(struct hif_device *device,
u8 *buffer,
u32 length);
int
BMIFastDownload(struct hif_device *device,
u32 address,
u8 *buffer,
u32 length);
int
BMIRawWrite(struct hif_device *device,
u8 *buffer,
u32 length);
int
BMIRawRead(struct hif_device *device,
u8 *buffer,
u32 length,
bool want_timeout);
