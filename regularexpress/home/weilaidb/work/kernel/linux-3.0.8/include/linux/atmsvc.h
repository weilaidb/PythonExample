#define _LINUX_ATMSVC_H
#define ATMSIGD_CTRL _IO('a',ATMIOC_SPECIAL)
enum atmsvc_msg_type ;
struct atmsvc_msg  __ATM_API_ALIGN;
#define SELECT_TOP_PCR(tp) ((tp).pcr ? (tp).pcr : \
(tp).max_pcr && (tp).max_pcr != ATM_MAX_PCR ? (tp).max_pcr : \
(tp).min_pcr ? (tp).min_pcr : ATM_MAX_PCR)
