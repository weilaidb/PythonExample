#define _SYSDEP_TLS_H
# ifndef __KERNEL__
typedef struct um_dup_user_desc  user_desc_t;
# else
#  include <ldt.h>
typedef struct user_desc user_desc_t;
# endif
#define GDT_ENTRY_TLS_MIN_I386 6
#define GDT_ENTRY_TLS_MIN_X86_64 12
