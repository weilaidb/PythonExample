static struct ps3_sys_manager_ops ps3_sys_manager_ops;
void ps3_sys_manager_register_ops(const struct ps3_sys_manager_ops *ops)
EXPORT_SYMBOL_GPL(ps3_sys_manager_register_ops);
void ps3_sys_manager_power_off(void)
void ps3_sys_manager_restart(void)
void ps3_sys_manager_halt(void)
