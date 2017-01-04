#define __ASM_SMTC_IPI_H
struct smtc_ipi ;
#define LINUX_SMP_IPI 1
#define SMTC_CLOCK_TICK 2
#define IRQ_AFFINITY_IPI 3
struct smtc_ipi_q ;
static inline void smtc_ipi_nq(struct smtc_ipi_q *q, struct smtc_ipi *p)
static inline struct smtc_ipi *__smtc_ipi_dq(struct smtc_ipi_q *q)
static inline struct smtc_ipi *smtc_ipi_dq(struct smtc_ipi_q *q)
static inline void smtc_ipi_req(struct smtc_ipi_q *q, struct smtc_ipi *p)
static inline int smtc_ipi_qdepth(struct smtc_ipi_q *q)
extern void smtc_send_ipi(int cpu, int type, unsigned int action);
