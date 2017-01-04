#define _CHNL_SM_
#define CHNL_SHARED_BUFFER_BASE_SYM "_SHM_BEG"
#define CHNL_SHARED_BUFFER_LIMIT_SYM "_SHM_END"
#define BRIDGEINIT_BIOSGPTIMER "_BRIDGEINIT_BIOSGPTIMER"
#define BRIDGEINIT_LOADMON_GPTIMER "_BRIDGEINIT_LOADMON_GPTIMER"
#define _CHNL_WORDSIZE 4
#define MAXOPPS 16
#define SHM_CURROPP	0
#define SHM_OPPINFO	1
#define SHM_GETOPP	2
struct opp_table_entry ;
struct opp_struct ;
struct opp_rqst_struct ;
struct load_mon_struct ;
struct shm ;
struct chnl_mgr ;
struct chnl_object ;
struct chnl_irp ;
