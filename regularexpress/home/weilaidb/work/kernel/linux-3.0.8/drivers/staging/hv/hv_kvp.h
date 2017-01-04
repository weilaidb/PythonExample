#define	_KVP_H_
#define HV_KVP_EXCHANGE_MAX_VALUE_SIZE          (2048)
#define HV_KVP_EXCHANGE_MAX_KEY_SIZE            (512)
#define CN_KVP_VAL             0x1
#define CN_KVP_USER_VAL       0x2
enum hv_ku_op ;
struct hv_ku_msg ;
#define REG_SZ 1
enum hv_kvp_exchg_op ;
enum hv_kvp_exchg_pool ;
struct hv_kvp_hdr ;
struct hv_kvp_exchg_msg_value ;
struct hv_kvp_msg_enumerate ;
struct hv_kvp_msg ;
int hv_kvp_init(void);
void hv_kvp_deinit(void);
void hv_kvp_onchannelcallback(void *);
