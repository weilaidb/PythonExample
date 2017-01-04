extern void __bb_init_func(void *)  __attribute__((weak));
EXPORT_SYMBOL(__bb_init_func);
extern void __gcov_init(void *) __attribute__((weak));
EXPORT_SYMBOL(__gcov_init);
extern void __gcov_merge_add(void *) __attribute__((weak));
EXPORT_SYMBOL(__gcov_merge_add);
