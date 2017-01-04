struct cvm_napi_wrapper  ____cacheline_aligned_in_smp;
static struct cvm_napi_wrapper cvm_oct_napi[NR_CPUS] __cacheline_aligned_in_smp;
struct cvm_oct_core_state  ____cacheline_aligned_in_smp;
static struct cvm_oct_core_state core_state __cacheline_aligned_in_smp;
static void cvm_oct_enable_napi(void *_)
static void cvm_oct_enable_one_cpu(void)
static void cvm_oct_no_more_work(void)
static irqreturn_t cvm_oct_do_interrupt(int cpl, void *dev_id)
static inline int cvm_oct_check_rcv_error(cvmx_wqe_t *work)
static int cvm_oct_napi_poll(struct napi_struct *napi, int budget)
void cvm_oct_poll_controller(struct net_device *dev)
void cvm_oct_rx_initialize(void)
void cvm_oct_rx_shutdown(void)
