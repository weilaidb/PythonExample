#define __debug__h__
static inline
void __d_head(char *head, size_t head_size,
struct device *dev)
#define _d_printf(l, tag, dev, f, a...)					\
do  while (0)
#define __D_PASTE__(varname, modulename) varname##_##modulename
#define __D_PASTE(varname, modulename) (__D_PASTE__(varname, modulename))
#define _D_SUBMODULE_INDEX(_name) (D_SUBMODULE_DECLARE(_name))
struct d_level ;
#define D_LEVEL __D_PASTE(d_level, D_MODULENAME)
#define D_LEVEL_SIZE __D_PASTE(d_level_size, D_MODULENAME)
extern struct d_level D_LEVEL[];
extern size_t D_LEVEL_SIZE;
#error D_MODULENAME is not defined in your debug-levels.h file
#define D_MODULENAME undefined_modulename
#warning D_MASTER not defined, but debug.h included! [see docs]
#define D_MASTER 0
#error D_SUBMODULE not defined, but debug.h included! [see docs]
#define D_SUBMODULE undefined_module
#define D_SUBMODULE_DECLARE(_name) __D_SUBMODULE_##_name
#define D_SUBMODULE_DEFINE(_name)		\
[__D_SUBMODULE_##_name] =
#define d_test(l)							\
()
#define d_fnstart(l, _dev, f, a...) _d_printf(l, " FNSTART", _dev, f, ## a)
#define d_fnend(l, _dev, f, a...) _d_printf(l, " FNEND", _dev, f, ## a)
#define d_printf(l, _dev, f, a...) _d_printf(l, "", _dev, f, ## a)
#define d_dump(l, dev, ptr, size)			\
do  while (0)
#define d_level_register_debugfs(prefix, name, parent)			\
()
static inline
void d_submodule_set(struct d_level *d_level, size_t d_level_size,
const char *submodule, u8 level, const char *tag)
static inline
void d_parse_params(struct d_level *d_level, size_t d_level_size,
const char *_params, const char *tag)
