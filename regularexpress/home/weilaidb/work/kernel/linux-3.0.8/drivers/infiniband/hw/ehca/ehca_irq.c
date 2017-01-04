#define EQE_COMPLETION_EVENT   EHCA_BMASK_IBM( 1,  1)
#define EQE_CQ_QP_NUMBER       EHCA_BMASK_IBM( 8, 31)
#define EQE_EE_IDENTIFIER      EHCA_BMASK_IBM( 2,  7)
#define EQE_CQ_NUMBER          EHCA_BMASK_IBM( 8, 31)
#define EQE_QP_NUMBER          EHCA_BMASK_IBM( 8, 31)
#define EQE_QP_TOKEN           EHCA_BMASK_IBM(32, 63)
#define EQE_CQ_TOKEN           EHCA_BMASK_IBM(32, 63)
#define NEQE_COMPLETION_EVENT  EHCA_BMASK_IBM( 1,  1)
#define NEQE_EVENT_CODE        EHCA_BMASK_IBM( 2,  7)
#define NEQE_PORT_NUMBER       EHCA_BMASK_IBM( 8, 15)
#define NEQE_PORT_AVAILABILITY EHCA_BMASK_IBM(16, 16)
#define NEQE_DISRUPTIVE        EHCA_BMASK_IBM(16, 16)
#define NEQE_SPECIFIC_EVENT    EHCA_BMASK_IBM(16, 23)
#define ERROR_DATA_LENGTH      EHCA_BMASK_IBM(52, 63)
#define ERROR_DATA_TYPE        EHCA_BMASK_IBM( 0,  7)
static void queue_comp_task(struct ehca_cq *__cq);
static struct ehca_comp_pool *pool;
static inline void comp_event_callback(struct ehca_cq *cq)
static void print_error_data(struct ehca_shca *shca, void *data,
u64 *rblock, int length)
int ehca_error_data(struct ehca_shca *shca, void *data,
u64 resource)
static void dispatch_qp_event(struct ehca_shca *shca, struct ehca_qp *qp,
enum ib_event_type event_type)
static void qp_event_callback(struct ehca_shca *shca, u64 eqe,
enum ib_event_type event_type, int fatal)
static void cq_event_callback(struct ehca_shca *shca,
u64 eqe)
static void parse_identifier(struct ehca_shca *shca, u64 eqe)
static void dispatch_port_event(struct ehca_shca *shca, int port_num,
enum ib_event_type type, const char *msg)
static void notify_port_conf_change(struct ehca_shca *shca, int port_num)
static int replay_modify_qp(struct ehca_sport *sport)
static void parse_ec(struct ehca_shca *shca, u64 eqe)
static inline void reset_eq_pending(struct ehca_cq *cq)
irqreturn_t ehca_interrupt_neq(int irq, void *dev_id)
void ehca_tasklet_neq(unsigned long data)
irqreturn_t ehca_interrupt_eq(int irq, void *dev_id)
static inline void process_eqe(struct ehca_shca *shca, struct ehca_eqe *eqe)
void ehca_process_eq(struct ehca_shca *shca, int is_irq)
void ehca_tasklet_eq(unsigned long data)
static inline int find_next_online_cpu(struct ehca_comp_pool *pool)
static void __queue_comp_task(struct ehca_cq *__cq,
struct ehca_cpu_comp_task *cct)
static void queue_comp_task(struct ehca_cq *__cq)
static void run_comp_task(struct ehca_cpu_comp_task *cct)
static int comp_task(void *__cct)
static struct task_struct *create_comp_task(struct ehca_comp_pool *pool,
int cpu)
static void destroy_comp_task(struct ehca_comp_pool *pool,
int cpu)
static void __cpuinit take_over_work(struct ehca_comp_pool *pool, int cpu)
static int __cpuinit comp_pool_callback(struct notifier_block *nfb,
unsigned long action,
void *hcpu)
static struct notifier_block comp_pool_callback_nb __cpuinitdata = ;
int ehca_create_comp_pool(void)
void ehca_destroy_comp_pool(void)
