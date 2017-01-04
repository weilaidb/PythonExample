int tfrc_debug;
module_param(tfrc_debug, bool, 0644);
MODULE_PARM_DESC(tfrc_debug, "Enable TFRC debug messages");
int __init tfrc_lib_init(void)
void tfrc_lib_exit(void)
