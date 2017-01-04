#define PCIXCC_MIN_MOD_SIZE	 16
#define PCIXCC_MIN_MOD_SIZE_OLD	 64
#define PCIXCC_MAX_MOD_SIZE	256
#define CEX3C_MIN_MOD_SIZE	PCIXCC_MIN_MOD_SIZE
#define CEX3C_MAX_MOD_SIZE	512
#define PCIXCC_MCL2_SPEED_RATING	7870
#define PCIXCC_MCL3_SPEED_RATING	7870
#define CEX2C_SPEED_RATING		7000
#define CEX3C_SPEED_RATING		6500
#define PCIXCC_MAX_ICA_MESSAGE_SIZE 0x77c
#define PCIXCC_MAX_ICA_RESPONSE_SIZE 0x77c
#define PCIXCC_MAX_XCRB_MESSAGE_SIZE (12*1024)
#define PCIXCC_MAX_XCRB_RESPONSE_SIZE PCIXCC_MAX_XCRB_MESSAGE_SIZE
#define PCIXCC_MAX_XCRB_DATA_SIZE (11*1024)
#define PCIXCC_MAX_XCRB_REPLY_SIZE (5*1024)
#define PCIXCC_MAX_RESPONSE_SIZE PCIXCC_MAX_XCRB_RESPONSE_SIZE
#define PCIXCC_CLEANUP_TIME	(15*HZ)
#define CEIL4(x) ((((x)+3)/4)*4)
struct response_type ;
#define PCIXCC_RESPONSE_TYPE_ICA  0
#define PCIXCC_RESPONSE_TYPE_XCRB 1
static struct ap_device_id zcrypt_pcixcc_ids[] = ;
MODULE_DEVICE_TABLE(ap, zcrypt_pcixcc_ids);
MODULE_AUTHOR("IBM Corporation");
MODULE_DESCRIPTION("PCIXCC Cryptographic Coprocessor device driver, "
"Copyright 2001, 2006 IBM Corporation");
MODULE_LICENSE("GPL");
static int zcrypt_pcixcc_probe(struct ap_device *ap_dev);
static void zcrypt_pcixcc_remove(struct ap_device *ap_dev);
static void zcrypt_pcixcc_receive(struct ap_device *, struct ap_message *,
struct ap_message *);
static struct ap_driver zcrypt_pcixcc_driver = ;
static struct CPRBX static_cprbx = ;
static int ICAMEX_msg_to_type6MEX_msgX(struct zcrypt_device *zdev,
struct ap_message *ap_msg,
struct ica_rsa_modexpo *mex)
static int ICACRT_msg_to_type6CRT_msgX(struct zcrypt_device *zdev,
struct ap_message *ap_msg,
struct ica_rsa_modexpo_crt *crt)
struct type86_fmt2_msg  __attribute__((packed));
static int XCRB_msg_to_type6CPRB_msgX(struct zcrypt_device *zdev,
struct ap_message *ap_msg,
struct ica_xcRB *xcRB)
static void rng_type6CPRB_msgX(struct ap_device *ap_dev,
struct ap_message *ap_msg,
unsigned random_number_length)
struct type86x_reply  __attribute__((packed));
static int convert_type86_ica(struct zcrypt_device *zdev,
struct ap_message *reply,
char __user *outputdata,
unsigned int outputdatalength)
static int convert_type86_xcrb(struct zcrypt_device *zdev,
struct ap_message *reply,
struct ica_xcRB *xcRB)
static int convert_type86_rng(struct zcrypt_device *zdev,
struct ap_message *reply,
char *buffer)
static int convert_response_ica(struct zcrypt_device *zdev,
struct ap_message *reply,
char __user *outputdata,
unsigned int outputdatalength)
static int convert_response_xcrb(struct zcrypt_device *zdev,
struct ap_message *reply,
struct ica_xcRB *xcRB)
static int convert_response_rng(struct zcrypt_device *zdev,
struct ap_message *reply,
char *data)
static void zcrypt_pcixcc_receive(struct ap_device *ap_dev,
struct ap_message *msg,
struct ap_message *reply)
static atomic_t zcrypt_step = ATOMIC_INIT(0);
static long zcrypt_pcixcc_modexpo(struct zcrypt_device *zdev,
struct ica_rsa_modexpo *mex)
static long zcrypt_pcixcc_modexpo_crt(struct zcrypt_device *zdev,
struct ica_rsa_modexpo_crt *crt)
static long zcrypt_pcixcc_send_cprb(struct zcrypt_device *zdev,
struct ica_xcRB *xcRB)
static long zcrypt_pcixcc_rng(struct zcrypt_device *zdev,
char *buffer)
static struct zcrypt_ops zcrypt_pcixcc_ops = ;
static struct zcrypt_ops zcrypt_pcixcc_with_rng_ops = ;
static int zcrypt_pcixcc_mcl(struct ap_device *ap_dev)
static int zcrypt_pcixcc_rng_supported(struct ap_device *ap_dev)
static int zcrypt_pcixcc_probe(struct ap_device *ap_dev)
static void zcrypt_pcixcc_remove(struct ap_device *ap_dev)
int __init zcrypt_pcixcc_init(void)
void zcrypt_pcixcc_exit(void)
module_init(zcrypt_pcixcc_init);
module_exit(zcrypt_pcixcc_exit);
