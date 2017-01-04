#define _DYNAMIC_DEBUG_H
extern long long dynamic_debug_enabled;
extern long long dynamic_debug_enabled2;
struct _ddebug  __attribute__((aligned(8)));
int ddebug_add_module(struct _ddebug *tab, unsigned int n,
const char *modname);
#if defined(CONFIG_DYNAMIC_DEBUG)
extern int ddebug_remove_module(const char *mod_name);
extern int __dynamic_pr_debug(struct _ddebug *descriptor, const char *fmt, ...)
__attribute__ ((format (printf, 2, 3)));
#define dynamic_pr_debug(fmt, ...) do  while (0)
#define dynamic_dev_dbg(dev, fmt, ...) do  while (0)
static inline int ddebug_remove_module(const char *mod)
#define dynamic_pr_debug(fmt, ...)					\
do  while (0)
#define dynamic_dev_dbg(dev, fmt, ...)					\
do  while (0)
