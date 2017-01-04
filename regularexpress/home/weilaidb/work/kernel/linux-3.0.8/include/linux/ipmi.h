#define __LINUX_IPMI_H
#define IPMI_MAX_ADDR_SIZE 32
struct ipmi_addr ;
#define IPMI_SYSTEM_INTERFACE_ADDR_TYPE	0x0c
struct ipmi_system_interface_addr ;
#define IPMI_IPMB_ADDR_TYPE		0x01
#define IPMI_IPMB_BROADCAST_ADDR_TYPE	0x41
struct ipmi_ipmb_addr ;
#define IPMI_LAN_ADDR_TYPE		0x04
struct ipmi_lan_addr ;
#define IPMI_BMC_CHANNEL  0xf
#define IPMI_NUM_CHANNELS 0x10
#define IPMI_CHAN_ALL     (~0)
struct ipmi_msg ;
struct kernel_ipmi_msg ;
#define IPMI_INVALID_CMD_COMPLETION_CODE	0xC1
#define IPMI_TIMEOUT_COMPLETION_CODE		0xC3
#define IPMI_UNKNOWN_ERR_COMPLETION_CODE	0xff
#define IPMI_RESPONSE_RECV_TYPE		1
#define IPMI_ASYNC_EVENT_RECV_TYPE	2
#define IPMI_CMD_RECV_TYPE		3
#define IPMI_RESPONSE_RESPONSE_TYPE	4
#define IPMI_OEM_RECV_TYPE		5
#define IPMI_MAINTENANCE_MODE_AUTO	0
#define IPMI_MAINTENANCE_MODE_OFF	1
#define IPMI_MAINTENANCE_MODE_ON	2
typedef struct ipmi_user *ipmi_user_t;
struct ipmi_recv_msg ;
void ipmi_free_recv_msg(struct ipmi_recv_msg *msg);
struct ipmi_user_hndl ;
int ipmi_create_user(unsigned int          if_num,
struct ipmi_user_hndl *handler,
void                  *handler_data,
ipmi_user_t           *user);
int ipmi_destroy_user(ipmi_user_t user);
void ipmi_get_version(ipmi_user_t   user,
unsigned char *major,
unsigned char *minor);
int ipmi_set_my_address(ipmi_user_t   user,
unsigned int  channel,
unsigned char address);
int ipmi_get_my_address(ipmi_user_t   user,
unsigned int  channel,
unsigned char *address);
int ipmi_set_my_LUN(ipmi_user_t   user,
unsigned int  channel,
unsigned char LUN);
int ipmi_get_my_LUN(ipmi_user_t   user,
unsigned int  channel,
unsigned char *LUN);
int ipmi_request_settime(ipmi_user_t      user,
struct ipmi_addr *addr,
long             msgid,
struct kernel_ipmi_msg  *msg,
void             *user_msg_data,
int              priority,
int              max_retries,
unsigned int     retry_time_ms);
int ipmi_request_supply_msgs(ipmi_user_t          user,
struct ipmi_addr     *addr,
long                 msgid,
struct kernel_ipmi_msg *msg,
void                 *user_msg_data,
void                 *supplied_smi,
struct ipmi_recv_msg *supplied_recv,
int                  priority);
void ipmi_poll_interface(ipmi_user_t user);
int ipmi_register_for_cmd(ipmi_user_t   user,
unsigned char netfn,
unsigned char cmd,
unsigned int  chans);
int ipmi_unregister_for_cmd(ipmi_user_t   user,
unsigned char netfn,
unsigned char cmd,
unsigned int  chans);
int ipmi_get_maintenance_mode(ipmi_user_t user);
int ipmi_set_maintenance_mode(ipmi_user_t user, int mode);
int ipmi_set_gets_events(ipmi_user_t user, int val);
struct ipmi_smi_watcher ;
int ipmi_smi_watcher_register(struct ipmi_smi_watcher *watcher);
int ipmi_smi_watcher_unregister(struct ipmi_smi_watcher *watcher);
unsigned int ipmi_addr_length(int addr_type);
int ipmi_validate_addr(struct ipmi_addr *addr, int len);
enum ipmi_addr_src ;
union ipmi_smi_info_union ;
struct ipmi_smi_info ;
extern int ipmi_get_smi_info(int if_num, struct ipmi_smi_info *data);
#define IPMI_IOC_MAGIC 'i'
struct ipmi_req ;
#define IPMICTL_SEND_COMMAND		_IOR(IPMI_IOC_MAGIC, 13,	\
struct ipmi_req)
struct ipmi_req_settime ;
#define IPMICTL_SEND_COMMAND_SETTIME	_IOR(IPMI_IOC_MAGIC, 21,	\
struct ipmi_req_settime)
struct ipmi_recv ;
#define IPMICTL_RECEIVE_MSG		_IOWR(IPMI_IOC_MAGIC, 12,	\
struct ipmi_recv)
#define IPMICTL_RECEIVE_MSG_TRUNC	_IOWR(IPMI_IOC_MAGIC, 11,	\
struct ipmi_recv)
struct ipmi_cmdspec ;
#define IPMICTL_REGISTER_FOR_CMD	_IOR(IPMI_IOC_MAGIC, 14,	\
struct ipmi_cmdspec)
#define IPMICTL_UNREGISTER_FOR_CMD	_IOR(IPMI_IOC_MAGIC, 15,	\
struct ipmi_cmdspec)
struct ipmi_cmdspec_chans ;
#define IPMICTL_REGISTER_FOR_CMD_CHANS	_IOR(IPMI_IOC_MAGIC, 28,	\
struct ipmi_cmdspec_chans)
#define IPMICTL_UNREGISTER_FOR_CMD_CHANS _IOR(IPMI_IOC_MAGIC, 29,	\
struct ipmi_cmdspec_chans)
#define IPMICTL_SET_GETS_EVENTS_CMD	_IOR(IPMI_IOC_MAGIC, 16, int)
struct ipmi_channel_lun_address_set ;
#define IPMICTL_SET_MY_CHANNEL_ADDRESS_CMD \
_IOR(IPMI_IOC_MAGIC, 24, struct ipmi_channel_lun_address_set)
#define IPMICTL_GET_MY_CHANNEL_ADDRESS_CMD \
_IOR(IPMI_IOC_MAGIC, 25, struct ipmi_channel_lun_address_set)
#define IPMICTL_SET_MY_CHANNEL_LUN_CMD \
_IOR(IPMI_IOC_MAGIC, 26, struct ipmi_channel_lun_address_set)
#define IPMICTL_GET_MY_CHANNEL_LUN_CMD \
_IOR(IPMI_IOC_MAGIC, 27, struct ipmi_channel_lun_address_set)
#define IPMICTL_SET_MY_ADDRESS_CMD	_IOR(IPMI_IOC_MAGIC, 17, unsigned int)
#define IPMICTL_GET_MY_ADDRESS_CMD	_IOR(IPMI_IOC_MAGIC, 18, unsigned int)
#define IPMICTL_SET_MY_LUN_CMD		_IOR(IPMI_IOC_MAGIC, 19, unsigned int)
#define IPMICTL_GET_MY_LUN_CMD		_IOR(IPMI_IOC_MAGIC, 20, unsigned int)
struct ipmi_timing_parms ;
#define IPMICTL_SET_TIMING_PARMS_CMD	_IOR(IPMI_IOC_MAGIC, 22, \
struct ipmi_timing_parms)
#define IPMICTL_GET_TIMING_PARMS_CMD	_IOR(IPMI_IOC_MAGIC, 23, \
struct ipmi_timing_parms)
#define IPMICTL_GET_MAINTENANCE_MODE_CMD	_IOR(IPMI_IOC_MAGIC, 30, int)
#define IPMICTL_SET_MAINTENANCE_MODE_CMD	_IOW(IPMI_IOC_MAGIC, 31, int)
