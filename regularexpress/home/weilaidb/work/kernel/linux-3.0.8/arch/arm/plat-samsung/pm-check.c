#if CONFIG_SAMSUNG_PM_CHECK_CHUNKSIZE < 1
#error CONFIG_SAMSUNG_PM_CHECK_CHUNKSIZE must be a positive non-zero value
#define CHECK_CHUNKSIZE (CONFIG_SAMSUNG_PM_CHECK_CHUNKSIZE * 1024)
static u32 crc_size;
static u32 *crcs;
typedef u32 *(run_fn_t)(struct resource *ptr, u32 *arg);
static void s3c_pm_run_res(struct resource *ptr, run_fn_t fn, u32 *arg)
static void s3c_pm_run_sysram(run_fn_t fn, u32 *arg)
static u32 *s3c_pm_countram(struct resource *res, u32 *val)
void s3c_pm_check_prepare(void)
static u32 *s3c_pm_makecheck(struct resource *res, u32 *val)
void s3c_pm_check_store(void)
static inline int in_region(void *ptr, int size, void *what, size_t whatsz)
static u32 *s3c_pm_runcheck(struct resource *res, u32 *val)
void s3c_pm_check_restore(void)
void s3c_pm_check_cleanup(void)
