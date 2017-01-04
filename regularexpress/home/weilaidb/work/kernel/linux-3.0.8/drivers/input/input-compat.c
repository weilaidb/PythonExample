int input_event_from_user(const char __user *buffer,
struct input_event *event)
int input_event_to_user(char __user *buffer,
const struct input_event *event)
int input_ff_effect_from_user(const char __user *buffer, size_t size,
struct ff_effect *effect)
int input_event_from_user(const char __user *buffer,
struct input_event *event)
int input_event_to_user(char __user *buffer,
const struct input_event *event)
int input_ff_effect_from_user(const char __user *buffer, size_t size,
struct ff_effect *effect)
EXPORT_SYMBOL_GPL(input_event_from_user);
EXPORT_SYMBOL_GPL(input_event_to_user);
EXPORT_SYMBOL_GPL(input_ff_effect_from_user);
