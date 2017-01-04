#define _ASM_X86_DESC_H
static inline void fill_ldt(struct desc_struct *desc, const struct user_desc *info)
extern struct desc_ptr idt_descr;
extern gate_desc idt_table[];
struct gdt_page  __attribute__((aligned(PAGE_SIZE)));
DECLARE_PER_CPU_PAGE_ALIGNED(struct gdt_page, gdt_page);
static inline struct desc_struct *get_cpu_gdt_table(unsigned int cpu)
static inline void pack_gate(gate_desc *gate, unsigned type, unsigned long func,
unsigned dpl, unsigned ist, unsigned seg)
static inline void pack_gate(gate_desc *gate, unsigned char type,
unsigned long base, unsigned dpl, unsigned flags,
unsigned short seg)
static inline int desc_empty(const void *ptr)
#define load_TR_desc()				native_load_tr_desc()
#define load_gdt(dtr)				native_load_gdt(dtr)
#define load_idt(dtr)				native_load_idt(dtr)
#define load_tr(tr)				asm volatile("ltr %0"::"m" (tr))
#define load_ldt(ldt)				asm volatile("lldt %0"::"m" (ldt))
#define store_gdt(dtr)				native_store_gdt(dtr)
#define store_idt(dtr)				native_store_idt(dtr)
#define store_tr(tr)				(tr = native_store_tr())
#define load_TLS(t, cpu)			native_load_tls(t, cpu)
#define set_ldt					native_set_ldt
#define write_ldt_entry(dt, entry, desc)	native_write_ldt_entry(dt, entry, desc)
#define write_gdt_entry(dt, entry, desc, type)	native_write_gdt_entry(dt, entry, desc, type)
#define write_idt_entry(dt, entry, g)		native_write_idt_entry(dt, entry, g)
static inline void paravirt_alloc_ldt(struct desc_struct *ldt, unsigned entries)
static inline void paravirt_free_ldt(struct desc_struct *ldt, unsigned entries)
#define store_ldt(ldt) asm("sldt %0" : "=m"(ldt))
static inline void native_write_idt_entry(gate_desc *idt, int entry, const gate_desc *gate)
static inline void native_write_ldt_entry(struct desc_struct *ldt, int entry, const void *desc)
static inline void
native_write_gdt_entry(struct desc_struct *gdt, int entry, const void *desc, int type)
static inline void pack_descriptor(struct desc_struct *desc, unsigned long base,
unsigned long limit, unsigned char type,
unsigned char flags)
static inline void set_tssldt_descriptor(void *d, unsigned long addr, unsigned type, unsigned size)
static inline void __set_tss_desc(unsigned cpu, unsigned int entry, void *addr)
#define set_tss_desc(cpu, addr) __set_tss_desc(cpu, GDT_ENTRY_TSS, addr)
static inline void native_set_ldt(const void *addr, unsigned int entries)
static inline void native_load_tr_desc(void)
static inline void native_load_gdt(const struct desc_ptr *dtr)
static inline void native_load_idt(const struct desc_ptr *dtr)
static inline void native_store_gdt(struct desc_ptr *dtr)
static inline void native_store_idt(struct desc_ptr *dtr)
static inline unsigned long native_store_tr(void)
static inline void native_load_tls(struct thread_struct *t, unsigned int cpu)
#define _LDT_empty(info)				\
((info)->base_addr		== 0	&&	\
(info)->limit			== 0	&&	\
(info)->contents		== 0	&&	\
(info)->read_exec_only		== 1	&&	\
(info)->seg_32bit		== 0	&&	\
(info)->limit_in_pages		== 0	&&	\
(info)->seg_not_present	== 1	&&	\
(info)->useable		== 0)
#define LDT_empty(info) (_LDT_empty(info) && ((info)->lm == 0))
#define LDT_empty(info) (_LDT_empty(info))
static inline void clear_LDT(void)
static inline void load_LDT_nolock(mm_context_t *pc)
static inline void load_LDT(mm_context_t *pc)
static inline unsigned long get_desc_base(const struct desc_struct *desc)
static inline void set_desc_base(struct desc_struct *desc, unsigned long base)
static inline unsigned long get_desc_limit(const struct desc_struct *desc)
static inline void set_desc_limit(struct desc_struct *desc, unsigned long limit)
static inline void _set_gate(int gate, unsigned type, void *addr,
unsigned dpl, unsigned ist, unsigned seg)
static inline void set_intr_gate(unsigned int n, void *addr)
extern int first_system_vector;
extern unsigned long used_vectors[];
static inline void alloc_system_vector(int vector)
static inline void alloc_intr_gate(unsigned int n, void *addr)
static inline void set_system_intr_gate(unsigned int n, void *addr)
static inline void set_system_trap_gate(unsigned int n, void *addr)
static inline void set_trap_gate(unsigned int n, void *addr)
static inline void set_task_gate(unsigned int n, unsigned int gdt_entry)
static inline void set_intr_gate_ist(int n, void *addr, unsigned ist)
static inline void set_system_intr_gate_ist(int n, void *addr, unsigned ist)
