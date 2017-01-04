static inline char _tolower(const char c)
static int _kstrtoull(const char *s, unsigned int base, unsigned long long *res)
int kstrtoull(const char *s, unsigned int base, unsigned long long *res)
EXPORT_SYMBOL(kstrtoull);
int kstrtoll(const char *s, unsigned int base, long long *res)
EXPORT_SYMBOL(kstrtoll);
int _kstrtoul(const char *s, unsigned int base, unsigned long *res)
EXPORT_SYMBOL(_kstrtoul);
int _kstrtol(const char *s, unsigned int base, long *res)
EXPORT_SYMBOL(_kstrtol);
int kstrtouint(const char *s, unsigned int base, unsigned int *res)
EXPORT_SYMBOL(kstrtouint);
int kstrtoint(const char *s, unsigned int base, int *res)
EXPORT_SYMBOL(kstrtoint);
int kstrtou16(const char *s, unsigned int base, u16 *res)
EXPORT_SYMBOL(kstrtou16);
int kstrtos16(const char *s, unsigned int base, s16 *res)
EXPORT_SYMBOL(kstrtos16);
int kstrtou8(const char *s, unsigned int base, u8 *res)
EXPORT_SYMBOL(kstrtou8);
int kstrtos8(const char *s, unsigned int base, s8 *res)
EXPORT_SYMBOL(kstrtos8);
#define kstrto_from_user(f, g, type)					\
int f(const char __user *s, size_t count, unsigned int base, type *res)	\
\
EXPORT_SYMBOL(f)
kstrto_from_user(kstrtoull_from_user,	kstrtoull,	unsigned long long);
kstrto_from_user(kstrtoll_from_user,	kstrtoll,	long long);
kstrto_from_user(kstrtoul_from_user,	kstrtoul,	unsigned long);
kstrto_from_user(kstrtol_from_user,	kstrtol,	long);
kstrto_from_user(kstrtouint_from_user,	kstrtouint,	unsigned int);
kstrto_from_user(kstrtoint_from_user,	kstrtoint,	int);
kstrto_from_user(kstrtou16_from_user,	kstrtou16,	u16);
kstrto_from_user(kstrtos16_from_user,	kstrtos16,	s16);
kstrto_from_user(kstrtou8_from_user,	kstrtou8,	u8);
kstrto_from_user(kstrtos8_from_user,	kstrtos8,	s8);
