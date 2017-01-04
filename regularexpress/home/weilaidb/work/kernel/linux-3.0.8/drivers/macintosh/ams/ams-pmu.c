#define AMS_X			0x00
#define AMS_Y			0x01
#define AMS_Z			0x02
#define AMS_VENDOR		0x03
#define AMS_FF_CLEAR		0x04
#define AMS_FF_ENABLE		0x05
#define AMS_FF_LOW_LIMIT	0x06
#define AMS_FF_DEBOUNCE		0x07
#define AMS_SHOCK_CLEAR		0x08
#define AMS_SHOCK_ENABLE	0x09
#define AMS_SHOCK_HIGH_LIMIT	0x0a
#define AMS_SHOCK_DEBOUNCE	0x0b
#define AMS_CONTROL		0x0c
static u8 ams_pmu_cmd;
static void ams_pmu_req_complete(struct adb_request *req)
static void ams_pmu_set_register(u8 reg, u8 value)
static u8 ams_pmu_get_register(u8 reg)
static void ams_pmu_set_irq(enum ams_irq reg, char enable)
static void ams_pmu_clear_irq(enum ams_irq reg)
static u8 ams_pmu_get_vendor(void)
static void ams_pmu_get_xyz(s8 *x, s8 *y, s8 *z)
static void ams_pmu_exit(void)
int __init ams_pmu_init(struct device_node *np)
