int edac_op_state = EDAC_OPSTATE_INVAL;
EXPORT_SYMBOL_GPL(edac_op_state);
atomic_t edac_handlers = ATOMIC_INIT(0);
EXPORT_SYMBOL_GPL(edac_handlers);
int edac_err_assert = 0;
EXPORT_SYMBOL_GPL(edac_err_assert);
static atomic_t edac_class_valid = ATOMIC_INIT(0);
int edac_handler_set(void)
EXPORT_SYMBOL_GPL(edac_handler_set);
void edac_atomic_assert_error(void)
EXPORT_SYMBOL_GPL(edac_atomic_assert_error);
struct sysdev_class edac_class = ;
EXPORT_SYMBOL_GPL(edac_class);
struct sysdev_class *edac_get_sysfs_class(void)
EXPORT_SYMBOL_GPL(edac_get_sysfs_class);
void edac_put_sysfs_class(void)
EXPORT_SYMBOL_GPL(edac_put_sysfs_class);
