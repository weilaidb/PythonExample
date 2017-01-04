#define _ASM_IA64_SN_XTALK_HUBDEV_H
#define HUB_WIDGET_ID_MAX 0xf
#define DEV_PER_WIDGET (2*2*8)
#define IIO_ITTE_WIDGET_BITS    4
#define IIO_ITTE_WIDGET_MASK    ((1<<IIO_ITTE_WIDGET_BITS)-1)
#define IIO_ITTE_WIDGET_SHIFT   8
#define IIO_ITTE_WIDGET(itte)	\
(((itte) >> IIO_ITTE_WIDGET_SHIFT) & IIO_ITTE_WIDGET_MASK)
#define SWIN0_BIGWIN            HUB_NUM_BIG_WINDOW
#define IIO_NUM_ITTES   7
#define HUB_NUM_BIG_WINDOW      (IIO_NUM_ITTES - 1)
struct sn_flush_device_common ;
struct sn_flush_device_kernel ;
struct sn_flush_device_war ;
struct sn_flush_nasid_entry  ;
struct hubdev_info ;
extern void hubdev_init_node(nodepda_t *, cnodeid_t);
extern void hub_error_init(struct hubdev_info *);
extern void ice_error_init(struct hubdev_info *);
