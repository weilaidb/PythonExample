#define __CNA_H__
#define bfa_sm_fault(__mod, __event)    do  while (0)
extern char bfa_version[];
#define	CNA_FW_FILE_CT	"ctfw_cna.bin"
#define FC_SYMNAME_MAX	256
#define MAC_ADDRLEN	(6)
typedef struct mac  mac_t;
#define bfa_q_first(_q) ((void *)(((struct list_head *) (_q))->next))
#define bfa_q_next(_qe)	(((struct list_head *) (_qe))->next)
#define bfa_q_prev(_qe) (((struct list_head *) (_qe))->prev)
#define bfa_q_qe_init(_qe)
#define bfa_q_deq(_q, _qe)
