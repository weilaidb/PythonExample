#define _LINUX_FAULT_INJECT_H
struct fault_attr ;
#define FAULT_ATTR_INITIALIZER
#define DECLARE_FAULT_ATTR(name) struct fault_attr name = FAULT_ATTR_INITIALIZER
int setup_fault_attr(struct fault_attr *attr, char *str);
void should_fail_srandom(unsigned long entropy);
bool should_fail(struct fault_attr *attr, ssize_t size);
int init_fault_attr_dentries(struct fault_attr *attr, const char *name);
void cleanup_fault_attr_dentries(struct fault_attr *attr);
static inline int init_fault_attr_dentries(struct fault_attr *attr,
const char *name)
static inline void cleanup_fault_attr_dentries(struct fault_attr *attr)
extern bool should_failslab(size_t size, gfp_t gfpflags, unsigned long flags);
static inline bool should_failslab(size_t size, gfp_t gfpflags,
unsigned long flags)
