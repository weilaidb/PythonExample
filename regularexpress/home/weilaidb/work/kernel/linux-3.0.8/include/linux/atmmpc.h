#define _ATMMPC_H_
#define ATMMPC_CTRL _IO('a', ATMIOC_MPOA)
#define ATMMPC_DATA _IO('a', ATMIOC_MPOA+1)
#define MPC_SOCKET_INGRESS 1
#define MPC_SOCKET_EGRESS  2
struct atmmpc_ioc ;
typedef struct in_ctrl_info  in_ctrl_info;
typedef struct eg_ctrl_info  eg_ctrl_info;
struct mpc_parameters  ;
struct k_message  __ATM_API_ALIGN;
struct llc_snap_hdr ;
#define TLV_MPOA_DEVICE_TYPE         0x00a03e2a
#define NON_MPOA    0
#define MPS         1
#define MPC         2
#define MPS_AND_MPC 3
#define MPC_P1 10
#define MPC_P2 1
#define MPC_P3 0
#define MPC_P4 5
#define MPC_P5 40
#define MPC_P6 160
#define HOLDING_TIME_DEFAULT 1200
#define MPC_C1 2
#define MPC_C2 60
#define SND_MPOA_RES_RQST    201
#define SET_MPS_CTRL_ADDR    202
#define SND_MPOA_RES_RTRY    203
#define STOP_KEEP_ALIVE_SM   204
#define EGRESS_ENTRY_REMOVED 205
#define SND_EGRESS_PURGE     206
#define DIE                  207
#define DATA_PLANE_PURGE     208
#define OPEN_INGRESS_SVC     209
#define MPOA_TRIGGER_RCVD     101
#define MPOA_RES_REPLY_RCVD   102
#define INGRESS_PURGE_RCVD    103
#define EGRESS_PURGE_RCVD     104
#define MPS_DEATH             105
#define CACHE_IMPOS_RCVD      106
#define SET_MPC_CTRL_ADDR     107
#define SET_MPS_MAC_ADDR      108
#define CLEAN_UP_AND_EXIT     109
#define SET_MPC_PARAMS        110
#define RELOAD                301
