#define _LINUX_MMIOTRACE_H
struct kmmio_probe;
struct pt_regs;
typedef void (*kmmio_pre_handler_t)(struct kmmio_probe *,
struct pt_regs *, unsigned long addr);
typedef void (*kmmio_post_handler_t)(struct kmmio_probe *,
unsigned long condition, struct pt_regs *);
struct kmmio_probe ;
extern unsigned int kmmio_count;
extern int register_kmmio_probe(struct kmmio_probe *p);
extern void unregister_kmmio_probe(struct kmmio_probe *p);
extern int kmmio_init(void);
extern void kmmio_cleanup(void);
static inline int is_kmmio_active(void)
extern int kmmio_handler(struct pt_regs *regs, unsigned long addr);
extern void mmiotrace_ioremap(resource_size_t offset, unsigned long size,
void __iomem *addr);
extern void mmiotrace_iounmap(volatile void __iomem *addr);
extern int mmiotrace_printk(const char *fmt, ...)
__attribute__ ((format (printf, 1, 2)));
static inline int is_kmmio_active(void)
static inline int kmmio_handler(struct pt_regs *regs, unsigned long addr)
static inline void mmiotrace_ioremap(resource_size_t offset,
unsigned long size, void __iomem *addr)
static inline void mmiotrace_iounmap(volatile void __iomem *addr)
static inline int mmiotrace_printk(const char *fmt, ...)
__attribute__ ((format (printf, 1, 0)));
static inline int mmiotrace_printk(const char *fmt, ...)
enum mm_io_opcode ;
struct mmiotrace_rw ;
struct mmiotrace_map ;
extern void enable_mmiotrace(void);
extern void disable_mmiotrace(void);
extern void mmio_trace_rw(struct mmiotrace_rw *rw);
extern void mmio_trace_mapping(struct mmiotrace_map *map);
extern int mmio_trace_printk(const char *fmt, va_list args);
