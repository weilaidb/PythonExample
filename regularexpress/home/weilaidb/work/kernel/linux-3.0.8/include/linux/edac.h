#define _LINUX_EDAC_H_
#define EDAC_OPSTATE_INVAL	-1
#define EDAC_OPSTATE_POLL	0
#define EDAC_OPSTATE_NMI	1
#define EDAC_OPSTATE_INT	2
extern int edac_op_state;
extern int edac_err_assert;
extern atomic_t edac_handlers;
extern struct sysdev_class edac_class;
extern int edac_handler_set(void);
extern void edac_atomic_assert_error(void);
extern struct sysdev_class *edac_get_sysfs_class(void);
extern void edac_put_sysfs_class(void);
static inline void opstate_init(void)
