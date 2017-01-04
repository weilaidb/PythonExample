#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Anssi Hannula <anssi.hannula@gmail.com>");
MODULE_DESCRIPTION("Force feedback support for memoryless devices");
#define FF_MEMLESS_EFFECTS	16
#define FF_ENVELOPE_INTERVAL	50
#define FF_EFFECT_STARTED	0
#define FF_EFFECT_PLAYING	1
#define FF_EFFECT_ABORTING	2
struct ml_effect_state ;
struct ml_device ;
static const struct ff_envelope *get_envelope(const struct ff_effect *effect)
static unsigned long calculate_next_time(struct ml_effect_state *state)
static void ml_schedule_timer(struct ml_device *ml)
static int apply_envelope(struct ml_effect_state *state, int value,
struct ff_envelope *envelope)
static int get_compatible_type(struct ff_device *ff, int effect_type)
static u16 ml_calculate_direction(u16 direction, u16 force,
u16 new_direction, u16 new_force)
static void ml_combine_effects(struct ff_effect *effect,
struct ml_effect_state *state,
int gain)
static int ml_get_combo_effect(struct ml_device *ml,
unsigned long *effect_handled,
struct ff_effect *combo_effect)
static void ml_play_effects(struct ml_device *ml)
static void ml_effect_timer(unsigned long timer_data)
static void ml_ff_set_gain(struct input_dev *dev, u16 gain)
static int ml_ff_playback(struct input_dev *dev, int effect_id, int value)
static int ml_ff_upload(struct input_dev *dev,
struct ff_effect *effect, struct ff_effect *old)
static void ml_ff_destroy(struct ff_device *ff)
int input_ff_create_memless(struct input_dev *dev, void *data,
int (*play_effect)(struct input_dev *, void *, struct ff_effect *))
EXPORT_SYMBOL_GPL(input_ff_create_memless);
