#define __TASK_IO_ACCOUNTING_OPS_INCLUDED
static inline void task_io_account_read(size_t bytes)
static inline unsigned long task_io_get_inblock(const struct task_struct *p)
static inline void task_io_account_write(size_t bytes)
static inline unsigned long task_io_get_oublock(const struct task_struct *p)
static inline void task_io_account_cancelled_write(size_t bytes)
static inline void task_io_accounting_init(struct task_io_accounting *ioac)
static inline void task_blk_io_accounting_add(struct task_io_accounting *dst,
struct task_io_accounting *src)
static inline void task_io_account_read(size_t bytes)
static inline unsigned long task_io_get_inblock(const struct task_struct *p)
static inline void task_io_account_write(size_t bytes)
static inline unsigned long task_io_get_oublock(const struct task_struct *p)
static inline void task_io_account_cancelled_write(size_t bytes)
static inline void task_io_accounting_init(struct task_io_accounting *ioac)
static inline void task_blk_io_accounting_add(struct task_io_accounting *dst,
struct task_io_accounting *src)
static inline void task_chr_io_accounting_add(struct task_io_accounting *dst,
struct task_io_accounting *src)
static inline void task_chr_io_accounting_add(struct task_io_accounting *dst,
struct task_io_accounting *src)
static inline void task_io_accounting_add(struct task_io_accounting *dst,
struct task_io_accounting *src)
