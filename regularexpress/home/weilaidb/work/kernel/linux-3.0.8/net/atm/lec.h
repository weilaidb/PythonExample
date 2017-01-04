#define _LEC_H_
#define LEC_HEADER_LEN 16
struct lecdatahdr_8023 ;
struct lecdatahdr_8025 ;
#define LEC_MINIMUM_8023_SIZE   62
#define LEC_MINIMUM_8025_SIZE   16
struct lane2_ops ;
#define LEC_ARP_TABLE_SIZE 16
struct lec_priv ;
struct lec_vcc_priv ;
#define LEC_VCC_PRIV(vcc)	((struct lec_vcc_priv *)((vcc)->user_back))
