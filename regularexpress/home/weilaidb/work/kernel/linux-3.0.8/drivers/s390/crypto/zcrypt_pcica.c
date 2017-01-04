#define PCICA_MIN_MOD_SIZE	  1
#define PCICA_MAX_MOD_SIZE	256
#define PCICA_SPEED_RATING	2800
#define PCICA_MAX_MESSAGE_SIZE	0x3a0
#define PCICA_MAX_RESPONSE_SIZE 0x110
#define PCICA_CLEANUP_TIME	(15*HZ)
static struct ap_device_id zcrypt_pcica_ids[] = ;
MODULE_DEVICE_TABLE(ap, zcrypt_pcica_ids);
MODULE_AUTHOR("IBM Corporation");
MODULE_DESCRIPTION("PCICA Cryptographic Coprocessor device driver, "
"Copyright 2001, 2006 IBM Corporation");
MODULE_LICENSE("GPL");
static int zcrypt_pcica_probe(struct ap_device *ap_dev);
static void zcrypt_pcica_remove(struct ap_device *ap_dev);
static void zcrypt_pcica_receive(struct ap_device *, struct ap_message *,
struct ap_message *);
static struct ap_driver zcrypt_pcica_driver = ;
static int ICAMEX_msg_to_type4MEX_msg(struct zcrypt_device *zdev,
struct ap_message *ap_msg,
struct ica_rsa_modexpo *mex)
static int ICACRT_msg_to_type4CRT_msg(struct zcrypt_device *zdev,
struct ap_message *ap_msg,
struct ica_rsa_modexpo_crt *crt)
static int convert_type84(struct zcrypt_device *zdev,
struct ap_message *reply,
char __user *outputdata,
unsigned int outputdatalength)
static int convert_response(struct zcrypt_device *zdev,
struct ap_message *reply,
char __user *outputdata,
unsigned int outputdatalength)
static void zcrypt_pcica_receive(struct ap_device *ap_dev,
struct ap_message *msg,
struct ap_message *reply)
static atomic_t zcrypt_step = ATOMIC_INIT(0);
static long zcrypt_pcica_modexpo(struct zcrypt_device *zdev,
struct ica_rsa_modexpo *mex)
static long zcrypt_pcica_modexpo_crt(struct zcrypt_device *zdev,
struct ica_rsa_modexpo_crt *crt)
static struct zcrypt_ops zcrypt_pcica_ops = ;
static int zcrypt_pcica_probe(struct ap_device *ap_dev)
static void zcrypt_pcica_remove(struct ap_device *ap_dev)
int __init zcrypt_pcica_init(void)
void zcrypt_pcica_exit(void)
module_init(zcrypt_pcica_init);
module_exit(zcrypt_pcica_exit);
