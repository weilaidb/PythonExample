#define pr_fmt(fmt) KBUILD_BASENAME ": " fmt
static int check_effect_access(struct ff_device *ff, int effect_id,
struct file *file)
static inline int check_effects_compatible(struct ff_effect *e1,
struct ff_effect *e2)
static int compat_effect(struct ff_device *ff, struct ff_effect *effect)
int input_ff_upload(struct input_dev *dev, struct ff_effect *effect,
struct file *file)
EXPORT_SYMBOL_GPL(input_ff_upload);
static int erase_effect(struct input_dev *dev, int effect_id,
struct file *file)
int input_ff_erase(struct input_dev *dev, int effect_id, struct file *file)
EXPORT_SYMBOL_GPL(input_ff_erase);
static int flush_effects(struct input_dev *dev, struct file *file)
int input_ff_event(struct input_dev *dev, unsigned int type,
unsigned int code, int value)
EXPORT_SYMBOL_GPL(input_ff_event);
int input_ff_create(struct input_dev *dev, int max_effects)
EXPORT_SYMBOL_GPL(input_ff_create);
void input_ff_destroy(struct input_dev *dev)
EXPORT_SYMBOL_GPL(input_ff_destroy);
