#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define	PID_EFFECTS_MAX		64
#define PID_SET_EFFECT		0
#define PID_EFFECT_OPERATION	1
#define PID_DEVICE_GAIN		2
#define PID_POOL		3
#define PID_BLOCK_LOAD		4
#define PID_BLOCK_FREE		5
#define PID_DEVICE_CONTROL	6
#define PID_CREATE_NEW_EFFECT	7
#define PID_REQUIRED_REPORTS	7
#define PID_SET_ENVELOPE	8
#define PID_SET_CONDITION	9
#define PID_SET_PERIODIC	10
#define PID_SET_CONSTANT	11
#define PID_SET_RAMP		12
static const u8 pidff_reports[] = ;
#define PID_EFFECT_BLOCK_INDEX	0
#define PID_DURATION		1
#define PID_GAIN		2
#define PID_TRIGGER_BUTTON	3
#define PID_TRIGGER_REPEAT_INT	4
#define PID_DIRECTION_ENABLE	5
#define PID_START_DELAY		6
static const u8 pidff_set_effect[] = ;
#define PID_ATTACK_LEVEL	1
#define PID_ATTACK_TIME		2
#define PID_FADE_LEVEL		3
#define PID_FADE_TIME		4
static const u8 pidff_set_envelope[] = ;
#define PID_PARAM_BLOCK_OFFSET	1
#define PID_CP_OFFSET		2
#define PID_POS_COEFFICIENT	3
#define PID_NEG_COEFFICIENT	4
#define PID_POS_SATURATION	5
#define PID_NEG_SATURATION	6
#define PID_DEAD_BAND		7
static const u8 pidff_set_condition[] = ;
#define PID_MAGNITUDE		1
#define PID_OFFSET		2
#define PID_PHASE		3
#define PID_PERIOD		4
static const u8 pidff_set_periodic[] = ;
static const u8 pidff_set_constant[] = ;
#define PID_RAMP_START		1
#define PID_RAMP_END		2
static const u8 pidff_set_ramp[] = ;
#define PID_RAM_POOL_AVAILABLE	1
static const u8 pidff_block_load[] = ;
#define PID_LOOP_COUNT		1
static const u8 pidff_effect_operation[] = ;
static const u8 pidff_block_free[] = ;
#define PID_DEVICE_GAIN_FIELD	0
static const u8 pidff_device_gain[] = ;
#define PID_RAM_POOL_SIZE	0
#define PID_SIMULTANEOUS_MAX	1
#define PID_DEVICE_MANAGED_POOL	2
static const u8 pidff_pool[] = ;
#define PID_ENABLE_ACTUATORS	0
#define PID_RESET		1
static const u8 pidff_device_control[] = ;
#define PID_CONSTANT	0
#define PID_RAMP	1
#define PID_SQUARE	2
#define PID_SINE	3
#define PID_TRIANGLE	4
#define PID_SAW_UP	5
#define PID_SAW_DOWN	6
#define PID_SPRING	7
#define PID_DAMPER	8
#define PID_INERTIA	9
#define PID_FRICTION	10
static const u8 pidff_effect_types[] = ;
#define PID_BLOCK_LOAD_SUCCESS	0
#define PID_BLOCK_LOAD_FULL	1
static const u8 pidff_block_load_status[] = ;
#define PID_EFFECT_START	0
#define PID_EFFECT_STOP		1
static const u8 pidff_effect_operation_status[] = ;
struct pidff_usage ;
struct pidff_device ;
static int pidff_rescale(int i, int max, struct hid_field *field)
static int pidff_rescale_signed(int i, struct hid_field *field)
static void pidff_set(struct pidff_usage *usage, u16 value)
static void pidff_set_signed(struct pidff_usage *usage, s16 value)
static void pidff_set_envelope_report(struct pidff_device *pidff,
struct ff_envelope *envelope)
static int pidff_needs_set_envelope(struct ff_envelope *envelope,
struct ff_envelope *old)
static void pidff_set_constant_force_report(struct pidff_device *pidff,
struct ff_effect *effect)
static int pidff_needs_set_constant(struct ff_effect *effect,
struct ff_effect *old)
static void pidff_set_effect_report(struct pidff_device *pidff,
struct ff_effect *effect)
static int pidff_needs_set_effect(struct ff_effect *effect,
struct ff_effect *old)
static void pidff_set_periodic_report(struct pidff_device *pidff,
struct ff_effect *effect)
static int pidff_needs_set_periodic(struct ff_effect *effect,
struct ff_effect *old)
static void pidff_set_condition_report(struct pidff_device *pidff,
struct ff_effect *effect)
static int pidff_needs_set_condition(struct ff_effect *effect,
struct ff_effect *old)
static void pidff_set_ramp_force_report(struct pidff_device *pidff,
struct ff_effect *effect)
static int pidff_needs_set_ramp(struct ff_effect *effect, struct ff_effect *old)
static int pidff_request_effect_upload(struct pidff_device *pidff, int efnum)
static void pidff_playback_pid(struct pidff_device *pidff, int pid_id, int n)
static int pidff_playback(struct input_dev *dev, int effect_id, int value)
static void pidff_erase_pid(struct pidff_device *pidff, int pid_id)
static int pidff_erase_effect(struct input_dev *dev, int effect_id)
static int pidff_upload_effect(struct input_dev *dev, struct ff_effect *effect,
struct ff_effect *old)
static void pidff_set_gain(struct input_dev *dev, u16 gain)
static void pidff_autocenter(struct pidff_device *pidff, u16 magnitude)
static void pidff_set_autocenter(struct input_dev *dev, u16 magnitude)
static int pidff_find_fields(struct pidff_usage *usage, const u8 *table,
struct hid_report *report, int count, int strict)
static int pidff_check_usage(int usage)
static void pidff_find_reports(struct hid_device *hid, int report_type,
struct pidff_device *pidff)
static int pidff_reports_ok(struct pidff_device *pidff)
static struct hid_field *pidff_find_special_field(struct hid_report *report,
int usage, int enforce_min)
static int pidff_find_special_keys(int *keys, struct hid_field *fld,
const u8 *usagetable, int count)
#define PIDFF_FIND_SPECIAL_KEYS(keys, field, name) \
pidff_find_special_keys(pidff->keys, pidff->field, pidff_ ## name, \
sizeof(pidff_ ## name))
static int pidff_find_special_fields(struct pidff_device *pidff)
static int pidff_find_effects(struct pidff_device *pidff,
struct input_dev *dev)
#define PIDFF_FIND_FIELDS(name, report, strict) \
pidff_find_fields(pidff->name, pidff_ ## name, \
pidff->reports[report], \
sizeof(pidff_ ## name), strict)
static int pidff_init_fields(struct pidff_device *pidff, struct input_dev *dev)
static void pidff_reset(struct pidff_device *pidff)
static int pidff_check_autocenter(struct pidff_device *pidff,
struct input_dev *dev)
int hid_pidff_init(struct hid_device *hid)
