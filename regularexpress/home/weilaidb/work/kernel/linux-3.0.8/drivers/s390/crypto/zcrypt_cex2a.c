#define CEX2A_MIN_MOD_SIZE	  1
#define CEX2A_MAX_MOD_SIZE	256
#define CEX3A_MIN_MOD_SIZE	CEX2A_MIN_MOD_SIZE
#define CEX3A_MAX_MOD_SIZE	512
#define CEX2A_SPEED_RATING	970
#define CEX3A_SPEED_RATING	900
#define CEX2A_MAX_MESSAGE_SIZE	0x390
#define CEX2A_MAX_RESPONSE_SIZE 0x110
#define CEX3A_MAX_RESPONSE_SIZE	0x210
#define CEX3A_MAX_MESSAGE_SIZE	sizeof(struct type50_crb3_msg)
#define CEX2A_CLEANUP_TIME	(15*HZ)
#define CEX3A_CLEANUP_TIME	CEX2A_CLEANUP_TIME
static struct ap_device_id zcrypt_cex2a_ids[] = ;
MODULE_DEVICE_TABLE(ap, zcrypt_cex2a_ids);
MODULE_AUTHOR("IBM Corporation");
MODULE_DESCRIPTION("CEX2A Cryptographic Coprocessor device driver, "
"Copyright 2001, 2006 IBM Corporation");
MODULE_LICENSE("GPL");
static int zcrypt_cex2a_probe(struct ap_device *ap_dev);
static void zcrypt_cex2a_remove(struct ap_device *ap_dev);
static void zcrypt_cex2a_receive(struct ap_device *, struct ap_message *,
struct ap_message *);
static struct ap_driver zcrypt_cex2a_driver = ;
static int ICAMEX_msg_to_type50MEX_msg(struct zcrypt_device *zdev,
struct ap_message *ap_msg,
struct ica_rsa_modexpo *mex)
static int ICACRT_msg_to_type50CRT_msg(struct zcrypt_device *zdev,
struct ap_message *ap_msg,
struct ica_rsa_modexpo_crt *crt)
static int convert_type80(struct zcrypt_device *zdev,
struct ap_message *reply,
char __user *outputdata,
unsigned int outputdatalength)
static int convert_response(struct zcrypt_device *zdev,
struct ap_message *reply,
char __user *outputdata,
unsigned int outputdatalength)
static void zcrypt_cex2a_receive(struct ap_device *ap_dev,
struct ap_message *msg,
struct ap_message *reply)
static atomic_t zcrypt_step = ATOMIC_INIT(0);
static long zcrypt_cex2a_modexpo(struct zcrypt_device *zdev,
struct ica_rsa_modexpo *mex)
static long zcrypt_cex2a_modexpo_crt(struct zcrypt_device *zdev,
struct ica_rsa_modexpo_crt *crt)
static struct zcrypt_ops zcrypt_cex2a_ops = ;
static int zcrypt_cex2a_probe(struct ap_device *ap_dev)
static void zcrypt_cex2a_remove(struct ap_device *ap_dev)
int __init zcrypt_cex2a_init(void)
void __exit zcrypt_cex2a_exit(void)
module_init(zcrypt_cex2a_init);
module_exit(zcrypt_cex2a_exit);
