#define _FS_CEPH_DEBUG_H
#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
# if defined(DEBUG) || defined(CONFIG_DYNAMIC_DEBUG)
extern const char *ceph_file_part(const char *s, int len);
#  define dout(fmt, ...)						\
pr_debug("%.*s %12.12s:%-4d : " fmt,				\
8 - (int)sizeof(KBUILD_MODNAME), "    ",		\
ceph_file_part(__FILE__, sizeof(__FILE__)),		\
__LINE__, ##__VA_ARGS__)
# else
#  define dout(fmt, ...)	do  while (0)
# endif
# define dout(fmt, ...)	pr_debug(" " fmt, ##__VA_ARGS__)
