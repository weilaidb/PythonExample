static spinlock_t pmu_blink_lock;
static struct adb_request pmu_blink_req;
static int requested_change;
static void pmu_req_done(struct adb_request * req)
static void pmu_led_set(struct led_classdev *led_cdev,
enum led_brightness brightness)
static struct led_classdev pmu_led = ;
static int __init via_pmu_led_init(void)
late_initcall(via_pmu_led_init);
