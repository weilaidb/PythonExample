#define _LINUX_IF_EQL_H
#define EQL_DEFAULT_SLAVE_PRIORITY 28800
#define EQL_DEFAULT_MAX_SLAVES     4
#define EQL_DEFAULT_MTU            576
#define EQL_DEFAULT_RESCHED_IVAL   100
#define EQL_ENSLAVE     (SIOCDEVPRIVATE)
#define EQL_EMANCIPATE  (SIOCDEVPRIVATE + 1)
#define EQL_GETSLAVECFG (SIOCDEVPRIVATE + 2)
#define EQL_SETSLAVECFG (SIOCDEVPRIVATE + 3)
#define EQL_GETMASTRCFG (SIOCDEVPRIVATE + 4)
#define EQL_SETMASTRCFG (SIOCDEVPRIVATE + 5)
typedef struct slave  slave_t;
typedef struct slave_queue  slave_queue_t;
typedef struct equalizer  equalizer_t;
typedef struct master_config  master_config_t;
typedef struct slave_config  slave_config_t;
typedef struct slaving_request  slaving_request_t;
