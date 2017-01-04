#define __ASM_STACKTRACE_H
struct stackframe ;
extern int unwind_frame(struct stackframe *frame);
extern void walk_stackframe(struct stackframe *frame,
int (*fn)(struct stackframe *, void *), void *data);
