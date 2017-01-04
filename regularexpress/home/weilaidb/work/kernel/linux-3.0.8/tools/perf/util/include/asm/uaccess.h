#define _PERF_ASM_UACCESS_H_
#define __get_user(src, dest)						\
()
#define get_user	__get_user
#define access_ok(type, addr, size)	1
