static int sal_rec_max = 10000;
extern void *mca_handler_bhhook(void);
static DEFINE_SPINLOCK(mca_bh_lock);
typedef enum  mca_type_t;
#define MAX_PAGE_ISOLATE 1024
static struct page *page_isolate[MAX_PAGE_ISOLATE];
static int num_page_isolate = 0;
typedef enum  isolate_status_t;
typedef enum  recovery_status_t;
static struct  slidx_pool;
static int
fatal_mca(const char *fmt, ...)
static int
mca_recovered(const char *fmt, ...)
static isolate_status_t
mca_page_isolate(unsigned long paddr)
void
mca_handler_bh(unsigned long paddr, void *iip, unsigned long ipsr)
static void
mca_make_peidx(sal_log_processor_info_t *slpi, peidx_table_t *peidx)
#define LOG_INDEX_ADD_SECT_PTR(sect, ptr) \
static int
mca_make_slidx(void *buffer, slidx_table_t *slidx)
static int
init_record_index_pools(void)
static mca_type_t
is_mca_global(peidx_table_t *peidx, pal_bus_check_info_t *pbci,
struct ia64_sal_os_state *sos)
static u64
get_target_identifier(peidx_table_t *peidx)
static int
recover_from_read_error(slidx_table_t *slidx,
peidx_table_t *peidx, pal_bus_check_info_t *pbci,
struct ia64_sal_os_state *sos)
static int
recover_from_platform_error(slidx_table_t *slidx, peidx_table_t *peidx,
pal_bus_check_info_t *pbci,
struct ia64_sal_os_state *sos)
static int
recover_from_tlb_check(peidx_table_t *peidx)
static int
recover_from_processor_error(int platform, slidx_table_t *slidx,
peidx_table_t *peidx, pal_bus_check_info_t *pbci,
struct ia64_sal_os_state *sos)
static int
mca_try_to_recover(void *rec, struct ia64_sal_os_state *sos)
int __init mca_external_handler_init(void)
void __exit mca_external_handler_exit(void)
module_init(mca_external_handler_init);
module_exit(mca_external_handler_exit);
module_param(sal_rec_max, int, 0644);
MODULE_PARM_DESC(sal_rec_max, "Max size of SAL error record");
MODULE_DESCRIPTION("ia64 platform dependent mca handler driver");
MODULE_LICENSE("GPL");
