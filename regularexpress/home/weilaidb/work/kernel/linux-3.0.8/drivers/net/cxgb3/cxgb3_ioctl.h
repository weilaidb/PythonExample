#define __CHIOCTL_H__
enum ;
struct ch_reg ;
struct ch_cntxt ;
enum ;
struct ch_desc ;
struct ch_mem_range ;
struct ch_qset_params ;
struct ch_pktsched_params ;
# define TCB_SIZE   128
#define TCB_WORDS (TCB_SIZE / 4)
enum ;
struct ch_mtus ;
struct ch_pm ;
struct ch_tcam ;
struct ch_tcb ;
struct ch_tcam_word ;
struct ch_trace ;
#define SIOCCHIOCTL SIOCDEVPRIVATE
