#define _DVBCA_H_
typedef struct ca_slot_info  ca_slot_info_t;
typedef struct ca_descr_info  ca_descr_info_t;
typedef struct ca_caps  ca_caps_t;
typedef struct ca_msg  ca_msg_t;
typedef struct ca_descr  ca_descr_t;
typedef struct ca_pid  ca_pid_t;
#define CA_RESET          _IO('o', 128)
#define CA_GET_CAP        _IOR('o', 129, ca_caps_t)
#define CA_GET_SLOT_INFO  _IOR('o', 130, ca_slot_info_t)
#define CA_GET_DESCR_INFO _IOR('o', 131, ca_descr_info_t)
#define CA_GET_MSG        _IOR('o', 132, ca_msg_t)
#define CA_SEND_MSG       _IOW('o', 133, ca_msg_t)
#define CA_SET_DESCR      _IOW('o', 134, ca_descr_t)
#define CA_SET_PID        _IOW('o', 135, ca_pid_t)
