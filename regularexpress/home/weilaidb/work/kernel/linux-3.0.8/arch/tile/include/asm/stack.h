#define _ASM_TILE_STACK_H
struct KBacktraceIterator ;
extern void KBacktraceIterator_init(struct KBacktraceIterator *kbt,
struct task_struct *, struct pt_regs *);
extern void KBacktraceIterator_init_current(struct KBacktraceIterator *kbt);
extern void _KBacktraceIterator_init_current(struct KBacktraceIterator *kbt,
ulong pc, ulong lr, ulong sp, ulong r52);
extern int KBacktraceIterator_end(struct KBacktraceIterator *kbt);
extern void KBacktraceIterator_next(struct KBacktraceIterator *kbt);
extern void tile_show_stack(struct KBacktraceIterator *, int headers);
extern void dump_stack_regs(struct pt_regs *);
extern void _dump_stack(int dummy, ulong pc, ulong lr, ulong sp, ulong r52);
