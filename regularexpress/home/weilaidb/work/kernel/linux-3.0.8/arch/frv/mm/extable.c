extern const struct exception_table_entry __attribute__((aligned(8))) __start___ex_table[];
extern const struct exception_table_entry __attribute__((aligned(8))) __stop___ex_table[];
extern const void __memset_end, __memset_user_error_lr, __memset_user_error_handler;
extern const void __memcpy_end, __memcpy_user_error_lr, __memcpy_user_error_handler;
extern spinlock_t modlist_lock;
static inline unsigned long search_one_table(const struct exception_table_entry *first,
const struct exception_table_entry *last,
unsigned long value)
unsigned long search_exception_table(unsigned long pc)
