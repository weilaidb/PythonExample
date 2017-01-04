#define __ARM_PMU_H__
enum arm_pmu_type ;
struct arm_pmu_platdata ;
extern struct platform_device *
reserve_pmu(enum arm_pmu_type device);
extern int
release_pmu(struct platform_device *pdev);
extern int
init_pmu(enum arm_pmu_type device);
static inline struct platform_device *
reserve_pmu(enum arm_pmu_type device)
static inline int
release_pmu(struct platform_device *pdev)
static inline int
init_pmu(enum arm_pmu_type device)
