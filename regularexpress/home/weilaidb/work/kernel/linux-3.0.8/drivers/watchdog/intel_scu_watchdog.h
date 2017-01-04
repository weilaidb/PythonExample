#define __INTEL_SCU_WATCHDOG_H
#define PFX "Intel_SCU: "
#define WDT_VER "0.3"
#define MIN_TIME_CYCLE 1
#define DEFAULT_SOFT_TO_HARD_MARGIN 2
#define MAX_TIME 170
#define DEFAULT_TIME 5
#define MAX_SOFT_TO_HARD_MARGIN (MAX_TIME-MIN_TIME_CYCLE)
#define FREQ_ADJUSTMENT 8
struct intel_scu_watchdog_dev ;
extern int sfi_mtimer_num;
