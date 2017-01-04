#define __UNICORE_STACKTRACE_H__
struct stackframe ;
extern int unwind_frame(struct stackframe *frame);
#define unwind_frame(f) (-EINVAL)
extern void walk_stackframe(struct stackframe *frame,
int (*fn)(struct stackframe *, void *), void *data);
