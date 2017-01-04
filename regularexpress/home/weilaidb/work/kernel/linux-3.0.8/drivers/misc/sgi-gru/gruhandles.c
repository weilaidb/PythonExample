#define GRU_OPERATION_TIMEOUT	(((cycles_t) local_cpu_data->itc_freq)*10)
#define CLKS2NSEC(c)		((c) *1000000000 / local_cpu_data->itc_freq)
#define GRU_OPERATION_TIMEOUT	((cycles_t) tsc_khz*10*1000)
#define CLKS2NSEC(c)		((c) * 1000000 / tsc_khz)
#define GET_MSEG_HANDLE_STATUS(h)	(((*(unsigned long *)(h)) >> 16) & 3)
struct mcs_op_statistic mcs_op_statistics[mcsop_last];
static void update_mcs_stats(enum mcs_op op, unsigned long clks)
static void start_instruction(void *h)
static void report_instruction_timeout(void *h)
static int wait_instruction_complete(void *h, enum mcs_op opc)
int cch_allocate(struct gru_context_configuration_handle *cch)
int cch_start(struct gru_context_configuration_handle *cch)
int cch_interrupt(struct gru_context_configuration_handle *cch)
int cch_deallocate(struct gru_context_configuration_handle *cch)
int cch_interrupt_sync(struct gru_context_configuration_handle
*cch)
int tgh_invalidate(struct gru_tlb_global_handle *tgh,
unsigned long vaddr, unsigned long vaddrmask,
int asid, int pagesize, int global, int n,
unsigned short ctxbitmap)
int tfh_write_only(struct gru_tlb_fault_handle *tfh,
unsigned long paddr, int gaa,
unsigned long vaddr, int asid, int dirty,
int pagesize)
void tfh_write_restart(struct gru_tlb_fault_handle *tfh,
unsigned long paddr, int gaa,
unsigned long vaddr, int asid, int dirty,
int pagesize)
void tfh_restart(struct gru_tlb_fault_handle *tfh)
void tfh_user_polling_mode(struct gru_tlb_fault_handle *tfh)
void tfh_exception(struct gru_tlb_fault_handle *tfh)
