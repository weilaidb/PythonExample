#define _ASM_X86_LGUEST_H
#define GDT_ENTRY_LGUEST_CS	10
#define GDT_ENTRY_LGUEST_DS	11
#define LGUEST_CS		(GDT_ENTRY_LGUEST_CS * 8)
#define LGUEST_DS		(GDT_ENTRY_LGUEST_DS * 8)
#define GUEST_PL 1
#define SHARED_SWITCHER_PAGES \
DIV_ROUND_UP(end_switcher_text - start_switcher_text, PAGE_SIZE)
#define TOTAL_SWITCHER_PAGES (SHARED_SWITCHER_PAGES + 2 * nr_cpu_ids)
#define SWITCHER_ADDR 0xFFE00000
#define SWITCHER_ADDR 0xFFC00000
extern unsigned long default_idt_entries[];
extern char lguest_noirq_start[], lguest_noirq_end[];
extern const char lgstart_cli[], lgend_cli[];
extern const char lgstart_sti[], lgend_sti[];
extern const char lgstart_popf[], lgend_popf[];
extern const char lgstart_pushf[], lgend_pushf[];
extern const char lgstart_iret[], lgend_iret[];
extern void lguest_iret(void);
extern void lguest_init(void);
struct lguest_regs ;
struct lguest_ro_state ;
struct lg_cpu_arch ;
static inline void lguest_set_ts(void)
#define FULL_EXEC_SEGMENT \
((struct desc_struct)GDT_ENTRY_INIT(0xc09b, 0, 0xfffff))
#define FULL_SEGMENT ((struct desc_struct)GDT_ENTRY_INIT(0xc093, 0, 0xfffff))
