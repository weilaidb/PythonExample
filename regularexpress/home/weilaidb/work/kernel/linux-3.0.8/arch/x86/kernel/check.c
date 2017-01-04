#define MAX_SCAN_AREAS	8
static int __read_mostly memory_corruption_check = -1;
static unsigned __read_mostly corruption_check_size = 64*1024;
static unsigned __read_mostly corruption_check_period = 60;
static struct scan_area  scan_areas[MAX_SCAN_AREAS];
static int num_scan_areas;
static __init int set_corruption_check(char *arg)
early_param("memory_corruption_check", set_corruption_check);
static __init int set_corruption_check_period(char *arg)
early_param("memory_corruption_check_period", set_corruption_check_period);
static __init int set_corruption_check_size(char *arg)
early_param("memory_corruption_check_size", set_corruption_check_size);
void __init setup_bios_corruption_check(void)
void check_for_bios_corruption(void)
static void check_corruption(struct work_struct *dummy);
static DECLARE_DELAYED_WORK(bios_check_work, check_corruption);
static void check_corruption(struct work_struct *dummy)
static int start_periodic_check_for_corruption(void)
module_init(start_periodic_check_for_corruption);
