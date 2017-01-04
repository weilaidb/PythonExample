#define __SMS_IR_H__
#define IR_DEFAULT_TIMEOUT		100
struct smscore_device_t;
struct ir_t ;
int sms_ir_init(struct smscore_device_t *coredev);
void sms_ir_exit(struct smscore_device_t *coredev);
void sms_ir_event(struct smscore_device_t *coredev,
const char *buf, int len);
