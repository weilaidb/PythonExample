#define _LTQ_PROM_H__
#define LTQ_SYS_TYPE_LEN	0x100
struct ltq_soc_info ;
extern void ltq_soc_detect(struct ltq_soc_info *i);
extern void ltq_soc_setup(void);
