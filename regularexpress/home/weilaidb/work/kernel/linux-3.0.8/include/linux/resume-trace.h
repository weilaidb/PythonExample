#define RESUME_TRACE_H
extern int pm_trace_enabled;
static inline int pm_trace_is_enabled(void)
struct device;
extern void set_trace_device(struct device *);
extern void generate_resume_trace(const void *tracedata, unsigned int user);
extern int show_trace_dev_match(char *buf, size_t size);
#define TRACE_DEVICE(dev) do  while(0)
static inline int pm_trace_is_enabled(void)
#define TRACE_DEVICE(dev) do  while (0)
#define TRACE_RESUME(dev) do  while (0)
