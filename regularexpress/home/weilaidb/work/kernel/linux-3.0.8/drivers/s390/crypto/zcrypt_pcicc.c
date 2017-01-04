#define PCICC_MIN_MOD_SIZE	 64
#define PCICC_MAX_MOD_SIZE_OLD	128
#define PCICC_MAX_MOD_SIZE	256
#define PCICC_SPEED_RATING	0
#define PCICC_MAX_MESSAGE_SIZE 0x710
#define PCICC_MAX_RESPONSE_SIZE 0x710
#define PCICC_CLEANUP_TIME	(15*HZ)
static struct ap_device_id zcrypt_pcicc_ids[] = ;
MODULE_DEVICE_TABLE(ap, zcrypt_pcicc_ids);
MODULE_AUTHOR("IBM Corporation");
MODULE_DESCRIPTION("PCICC Cryptographic Coprocessor device driver, "
"Copyright 2001, 2006 IBM Corporation");
MODULE_LICENSE("GPL");
static int zcrypt_pcicc_probe(struct ap_device *ap_dev);
static void zcrypt_pcicc_remove(struct ap_device *ap_dev);
static void zcrypt_pcicc_receive(struct ap_device *, struct ap_message *,
struct ap_message *);
static struct ap_driver zcrypt_pcicc_driver = ;
static struct CPRB static_cprb = ;
static inline int is_PKCS11_padded(unsigned char *buffer, int length)
static inline int is_PKCS12_padded(unsigned char *buffer, int length)
static int ICAMEX_msg_to_type6MEX_msg(struct zcrypt_device *zdev,
struct ap_message *ap_msg,
struct ica_rsa_modexpo *mex)
static int ICACRT_msg_to_type6CRT_msg(struct zcrypt_device *zdev,
struct ap_message *ap_msg,
struct ica_rsa_modexpo_crt *crt)
struct type86_reply  __attribute__((packed));
static int convert_type86(struct zcrypt_device *zdev,
struct ap_message *reply,
char __user *outputdata,
unsigned int outputdatalength)
static int convert_response(struct zcrypt_device *zdev,
struct ap_message *reply,
char __user *outputdata,
unsigned int outputdatalength)
static void zcrypt_pcicc_receive(struct ap_device *ap_dev,
struct ap_message *msg,
struct ap_message *reply)
static atomic_t zcrypt_step = ATOMIC_INIT(0);
static long zcrypt_pcicc_modexpo(struct zcrypt_device *zdev,
struct ica_rsa_modexpo *mex)
static long zcrypt_pcicc_modexpo_crt(struct zcrypt_device *zdev,
struct ica_rsa_modexpo_crt *crt)
static struct zcrypt_ops zcrypt_pcicc_ops = ;
static int zcrypt_pcicc_probe(struct ap_device *ap_dev)
static void zcrypt_pcicc_remove(struct ap_device *ap_dev)
int __init zcrypt_pcicc_init(void)
void zcrypt_pcicc_exit(void)
module_init(zcrypt_pcicc_init);
module_exit(zcrypt_pcicc_exit);
