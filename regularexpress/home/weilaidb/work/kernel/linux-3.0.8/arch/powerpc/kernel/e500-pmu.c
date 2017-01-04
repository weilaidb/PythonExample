static int e500_generic_events[] = ;
#define C(x)	PERF_COUNT_HW_CACHE_##x
static int e500_cache_events[C(MAX)][C(OP_MAX)][C(RESULT_MAX)] = ;
static int num_events = 128;
static u64 e500_xlate_event(u64 event_id)
static struct fsl_emb_pmu e500_pmu = ;
static int init_e500_pmu(void)
early_initcall(init_e500_pmu);
