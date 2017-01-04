#define __T4_HW_H
enum ;
enum ;
enum ;
enum ;
enum ;
struct sge_qstat ;
struct rsp_ctrl ;
#define RSPD_NEWBUF 0x80000000U
#define RSPD_LEN(x) (((x) >> 0) & 0x7fffffffU)
#define RSPD_QID(x) RSPD_LEN(x)
#define RSPD_GEN(x)  ((x) >> 7)
#define RSPD_TYPE(x) (((x) >> 4) & 3)
#define QINTR_CNT_EN       0x1
#define QINTR_TIMER_IDX(x) ((x) << 1)
#define QINTR_TIMER_IDX_GET(x) (((x) >> 1) & 0x7)
