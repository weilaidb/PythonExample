#define IRDA_PARAMS_H
typedef enum  PV_TYPE;
#define PV_BIG_ENDIAN    0x80
#define PV_LITTLE_ENDIAN 0x00
#define PV_MASK          0x7f
#define PV_PUT 0
#define PV_GET 1
typedef union  irda_pv_t;
typedef struct  irda_param_t;
typedef int (*PI_HANDLER)(void *self, irda_param_t *param, int get);
typedef int (*PV_HANDLER)(void *self, __u8 *buf, int len, __u8 pi,
PV_TYPE type, PI_HANDLER func);
typedef struct  pi_minor_info_t;
typedef struct  pi_major_info_t;
typedef struct  pi_param_info_t;
int irda_param_pack(__u8 *buf, char *fmt, ...);
int irda_param_insert(void *self, __u8 pi, __u8 *buf, int len,
pi_param_info_t *info);
int irda_param_extract_all(void *self, __u8 *buf, int len,
pi_param_info_t *info);
#define irda_param_insert_byte(buf,pi,pv) irda_param_pack(buf,"bbb",pi,1,pv)
