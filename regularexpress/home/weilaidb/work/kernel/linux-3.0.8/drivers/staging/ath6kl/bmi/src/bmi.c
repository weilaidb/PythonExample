static struct ath_debug_mask_description bmi_debug_desc[] = ;
ATH_DEBUG_INSTANTIATE_MODULE_VAR(bmi,
"bmi",
"Boot Manager Interface",
ATH_DEBUG_MASK_DEFAULTS,
ATH_DEBUG_DESCRIPTION_COUNT(bmi_debug_desc),
bmi_debug_desc);
static bool pendingEventsFuncCheck = false;
static u32 *pBMICmdCredits;
static u8 *pBMICmdBuf;
#define MAX_BMI_CMDBUF_SZ (BMI_DATASZ_MAX + \
sizeof(u32) + \
sizeof(u32) + \
sizeof(u32))
#define BMI_COMMAND_FITS(sz) ((sz) <= MAX_BMI_CMDBUF_SZ)
void
BMIInit(void)
void
BMICleanup(void)
int
BMIDone(struct hif_device *device)
int
BMIGetTargetInfo(struct hif_device *device, struct bmi_target_info *targ_info)
int
BMIReadMemory(struct hif_device *device,
u32 address,
u8 *buffer,
u32 length)
int
BMIWriteMemory(struct hif_device *device,
u32 address,
u8 *buffer,
u32 length)
int
BMIExecute(struct hif_device *device,
u32 address,
u32 *param)
int
BMISetAppStart(struct hif_device *device,
u32 address)
int
BMIReadSOCRegister(struct hif_device *device,
u32 address,
u32 *param)
int
BMIWriteSOCRegister(struct hif_device *device,
u32 address,
u32 param)
int
BMIrompatchInstall(struct hif_device *device,
u32 ROM_addr,
u32 RAM_addr,
u32 nbytes,
u32 do_activate,
u32 *rompatch_id)
int
BMIrompatchUninstall(struct hif_device *device,
u32 rompatch_id)
static int
_BMIrompatchChangeActivation(struct hif_device *device,
u32 rompatch_count,
u32 *rompatch_list,
u32 do_activate)
int
BMIrompatchActivate(struct hif_device *device,
u32 rompatch_count,
u32 *rompatch_list)
int
BMIrompatchDeactivate(struct hif_device *device,
u32 rompatch_count,
u32 *rompatch_list)
int
BMILZData(struct hif_device *device,
u8 *buffer,
u32 length)
int
BMILZStreamStart(struct hif_device *device,
u32 address)
int
bmiBufferSend(struct hif_device *device,
u8 *buffer,
u32 length)
int
bmiBufferReceive(struct hif_device *device,
u8 *buffer,
u32 length,
bool want_timeout)
int
BMIFastDownload(struct hif_device *device, u32 address, u8 *buffer, u32 length)
int
BMIRawWrite(struct hif_device *device, u8 *buffer, u32 length)
int
BMIRawRead(struct hif_device *device, u8 *buffer, u32 length, bool want_timeout)
