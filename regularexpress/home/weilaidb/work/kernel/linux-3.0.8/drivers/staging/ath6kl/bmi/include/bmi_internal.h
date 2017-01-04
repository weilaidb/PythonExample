#define BMI_INTERNAL_H
#define ATH_MODULE_NAME bmi
#define ATH_DEBUG_BMI  ATH_DEBUG_MAKE_MODULE_MASK(0)
#define BMI_COMMUNICATION_TIMEOUT       100000
static bool bmiDone;
int
bmiBufferSend(struct hif_device *device,
u8 *buffer,
u32 length);
int
bmiBufferReceive(struct hif_device *device,
u8 *buffer,
u32 length,
bool want_timeout);
