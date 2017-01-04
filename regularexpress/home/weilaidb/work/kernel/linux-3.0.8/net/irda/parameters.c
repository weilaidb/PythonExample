static int irda_extract_integer(void *self, __u8 *buf, int len, __u8 pi,
PV_TYPE type, PI_HANDLER func);
static int irda_extract_string(void *self, __u8 *buf, int len, __u8 pi,
PV_TYPE type, PI_HANDLER func);
static int irda_extract_octseq(void *self, __u8 *buf, int len, __u8 pi,
PV_TYPE type, PI_HANDLER func);
static int irda_extract_no_value(void *self, __u8 *buf, int len, __u8 pi,
PV_TYPE type, PI_HANDLER func);
static int irda_insert_integer(void *self, __u8 *buf, int len, __u8 pi,
PV_TYPE type, PI_HANDLER func);
static int irda_insert_no_value(void *self, __u8 *buf, int len, __u8 pi,
PV_TYPE type, PI_HANDLER func);
static int irda_param_unpack(__u8 *buf, char *fmt, ...);
static PV_HANDLER pv_extract_table[] = ;
static PV_HANDLER pv_insert_table[] = ;
static int irda_insert_no_value(void *self, __u8 *buf, int len, __u8 pi,
PV_TYPE type, PI_HANDLER func)
static int irda_extract_no_value(void *self, __u8 *buf, int len, __u8 pi,
PV_TYPE type, PI_HANDLER func)
static int irda_insert_integer(void *self, __u8 *buf, int len, __u8 pi,
PV_TYPE type, PI_HANDLER func)
static int irda_extract_integer(void *self, __u8 *buf, int len, __u8 pi,
PV_TYPE type, PI_HANDLER func)
static int irda_extract_string(void *self, __u8 *buf, int len, __u8 pi,
PV_TYPE type, PI_HANDLER func)
static int irda_extract_octseq(void *self, __u8 *buf, int len, __u8 pi,
PV_TYPE type, PI_HANDLER func)
int irda_param_pack(__u8 *buf, char *fmt, ...)
EXPORT_SYMBOL(irda_param_pack);
static int irda_param_unpack(__u8 *buf, char *fmt, ...)
int irda_param_insert(void *self, __u8 pi, __u8 *buf, int len,
pi_param_info_t *info)
EXPORT_SYMBOL(irda_param_insert);
static int irda_param_extract(void *self, __u8 *buf, int len,
pi_param_info_t *info)
int irda_param_extract_all(void *self, __u8 *buf, int len,
pi_param_info_t *info)
EXPORT_SYMBOL(irda_param_extract_all);
