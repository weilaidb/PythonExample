#define __ARM_PERF_EVENT_H__
#define PERF_EVENT_INDEX_OFFSET 1
enum arm_perf_pmu_ids ;
extern enum arm_perf_pmu_ids
armpmu_get_pmu_id(void);
extern int
armpmu_get_max_events(void);
