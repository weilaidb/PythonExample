#define AHI	"ahi"
#define ALR	"alr"
#define CLR	"clr"
#define LHI	"lhi"
#define SLR	"slr"
#define AHI	"aghi"
#define ALR	"algr"
#define CLR	"clgr"
#define LHI	"lghi"
#define SLR	"slgr"
static size_t copy_from_user_mvcos(size_t size, const void __user *ptr, void *x)
static size_t copy_from_user_mvcos_check(size_t size, const void __user *ptr, void *x)
static size_t copy_to_user_mvcos(size_t size, void __user *ptr, const void *x)
static size_t copy_to_user_mvcos_check(size_t size, void __user *ptr,
const void *x)
static size_t copy_in_user_mvcos(size_t size, void __user *to,
const void __user *from)
static size_t clear_user_mvcos(size_t size, void __user *to)
static size_t strnlen_user_mvcos(size_t count, const char __user *src)
static size_t strncpy_from_user_mvcos(size_t count, const char __user *src,
char *dst)
struct uaccess_ops uaccess_mvcos = ;
struct uaccess_ops uaccess_mvcos_switch = ;
