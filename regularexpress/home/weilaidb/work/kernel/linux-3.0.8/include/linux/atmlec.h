#define _ATMLEC_H_
#define ATMLEC_CTRL	_IO('a', ATMIOC_LANE)
#define ATMLEC_DATA	_IO('a', ATMIOC_LANE+1)
#define ATMLEC_MCAST	_IO('a', ATMIOC_LANE+2)
#define MAX_LEC_ITF 48
#define NUM_TR_DEVS 8
typedef enum  atmlec_msg_type;
#define ATMLEC_MSG_TYPE_MAX l_should_bridge
struct atmlec_config_msg ;
struct atmlec_msg  __ATM_API_ALIGN;
struct atmlec_ioc ;
