#define MEMCPY_FN(fn, name, desc)		\
extern void *fn(void *, const void *, size_t);
#undef MEMCPY_FN
