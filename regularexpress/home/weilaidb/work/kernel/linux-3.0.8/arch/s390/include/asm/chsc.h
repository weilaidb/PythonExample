#define _ASM_CHSC_H
struct chsc_async_header  __attribute__ ((packed));
struct chsc_async_area  __attribute__ ((packed));
struct chsc_response_struct  __attribute__ ((packed));
struct chsc_chp_cd ;
struct chsc_cu_cd ;
struct chsc_sch_cud ;
struct conf_id ;
struct chsc_conf_info ;
struct ccl_parm_chpid ;
struct ccl_parm_cssids ;
struct chsc_comp_list ;
struct chsc_dcal ;
struct chsc_cpd_info ;
#define CHSC_IOCTL_MAGIC 'c'
#define CHSC_START _IOWR(CHSC_IOCTL_MAGIC, 0x81, struct chsc_async_area)
#define CHSC_INFO_CHANNEL_PATH _IOWR(CHSC_IOCTL_MAGIC, 0x82, \
struct chsc_chp_cd)
#define CHSC_INFO_CU _IOWR(CHSC_IOCTL_MAGIC, 0x83, struct chsc_cu_cd)
#define CHSC_INFO_SCH_CU _IOWR(CHSC_IOCTL_MAGIC, 0x84, struct chsc_sch_cud)
#define CHSC_INFO_CI _IOWR(CHSC_IOCTL_MAGIC, 0x85, struct chsc_conf_info)
#define CHSC_INFO_CCL _IOWR(CHSC_IOCTL_MAGIC, 0x86, struct chsc_comp_list)
#define CHSC_INFO_CPD _IOWR(CHSC_IOCTL_MAGIC, 0x87, struct chsc_cpd_info)
#define CHSC_INFO_DCAL _IOWR(CHSC_IOCTL_MAGIC, 0x88, struct chsc_dcal)
struct css_general_char __attribute__((packed));
extern struct css_general_char css_general_characteristics;
