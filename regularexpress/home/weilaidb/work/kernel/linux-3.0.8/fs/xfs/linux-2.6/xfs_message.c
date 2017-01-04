static void
__xfs_printk(
const char		*level,
const struct xfs_mount	*mp,
struct va_format	*vaf)
#define define_xfs_printk_level(func, kern_level)		\
void func(const struct xfs_mount *mp, const char *fmt, ...)	\
\
define_xfs_printk_level(xfs_emerg, KERN_EMERG);
define_xfs_printk_level(xfs_alert, KERN_ALERT);
define_xfs_printk_level(xfs_crit, KERN_CRIT);
define_xfs_printk_level(xfs_err, KERN_ERR);
define_xfs_printk_level(xfs_warn, KERN_WARNING);
define_xfs_printk_level(xfs_notice, KERN_NOTICE);
define_xfs_printk_level(xfs_info, KERN_INFO);
define_xfs_printk_level(xfs_debug, KERN_DEBUG);
void
xfs_alert_tag(
const struct xfs_mount	*mp,
int			panic_tag,
const char		*fmt, ...)
void
assfail(char *expr, char *file, int line)
void
xfs_hex_dump(void *p, int length)
