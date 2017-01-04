#define _INPUT_COMPAT_H
#if defined(CONFIG_X86_64) || defined(CONFIG_TILE)
#  define INPUT_COMPAT_TEST is_compat_task()
#elif defined(CONFIG_S390)
#  define INPUT_COMPAT_TEST test_thread_flag(TIF_31BIT)
#elif defined(CONFIG_MIPS)
#  define INPUT_COMPAT_TEST test_thread_flag(TIF_32BIT_ADDR)
#  define INPUT_COMPAT_TEST test_thread_flag(TIF_32BIT)
struct input_event_compat ;
struct ff_periodic_effect_compat ;
struct ff_effect_compat ;
static inline size_t input_event_size(void)
static inline size_t input_event_size(void)
int input_event_from_user(const char __user *buffer,
struct input_event *event);
int input_event_to_user(char __user *buffer,
const struct input_event *event);
int input_ff_effect_from_user(const char __user *buffer, size_t size,
struct ff_effect *effect);
