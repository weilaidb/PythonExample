#define _ASM_S390_APPLDATA_H
#define APPLDATA_START_INTERVAL_REC	0x00
#define APPLDATA_STOP_REC		0x01
#define APPLDATA_GEN_EVENT_REC		0x02
#define APPLDATA_START_CONFIG_REC	0x03
struct appldata_parameter_list  __attribute__ ((packed));
#define APPLDATA_START_INTERVAL_REC	0x80
#define APPLDATA_STOP_REC		0x81
#define APPLDATA_GEN_EVENT_REC		0x82
#define APPLDATA_START_CONFIG_REC	0x83
struct appldata_parameter_list  __attribute__ ((packed));
struct appldata_product_id  __attribute__ ((packed));
static inline int appldata_asm(struct appldata_product_id *id,
unsigned short fn, void *buffer,
unsigned short length)
