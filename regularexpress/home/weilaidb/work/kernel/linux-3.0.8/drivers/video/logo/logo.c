static int nologo;
module_param(nologo, bool, 0);
MODULE_PARM_DESC(nologo, "Disables startup logo");
const struct linux_logo * __init_refok fb_find_logo(int depth)
EXPORT_SYMBOL_GPL(fb_find_logo);
