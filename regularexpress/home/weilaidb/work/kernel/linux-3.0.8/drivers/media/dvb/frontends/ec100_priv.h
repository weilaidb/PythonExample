#define EC100_PRIV
#define LOG_PREFIX "ec100"
#define dprintk(var, level, args...) \
do  while (0)
#define deb_info(args...) dprintk(ec100_debug, 0x01, args)
#undef err
#define err(f, arg...)  printk(KERN_ERR     LOG_PREFIX": " f "\n" , ## arg)
#undef info
#define info(f, arg...) printk(KERN_INFO    LOG_PREFIX": " f "\n" , ## arg)
#undef warn
#define warn(f, arg...) printk(KERN_WARNING LOG_PREFIX": " f "\n" , ## arg)
