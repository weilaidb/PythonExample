#define _ASM_IRQFLAGS_H
#define TRACE_WITH_FRAME_BUFFER(func)		\
mflr	r0;				\
stdu	r1, -32(r1);			\
std	r0, 16(r1);			\
stdu	r1, -32(r1);			\
bl func;				\
ld	r1, 0(r1);			\
ld	r1, 0(r1);
#define TRACE_WITH_FRAME_BUFFER(func)		\
bl func;
#define TRACE_ENABLE_INTS	TRACE_WITH_FRAME_BUFFER(.trace_hardirqs_on)
#define TRACE_DISABLE_INTS	TRACE_WITH_FRAME_BUFFER(.trace_hardirqs_off)
#define TRACE_AND_RESTORE_IRQ_PARTIAL(en,skip)		\
cmpdi	en,0;					\
bne	95f;					\
stb	en,PACASOFTIRQEN(r13);			\
TRACE_WITH_FRAME_BUFFER(.trace_hardirqs_off)	\
b	skip;					\
95:	TRACE_WITH_FRAME_BUFFER(.trace_hardirqs_on)	\
li	en,1;
#define TRACE_AND_RESTORE_IRQ(en)		\
TRACE_AND_RESTORE_IRQ_PARTIAL(en,96f);	\
stb	en,PACASOFTIRQEN(r13);		\
96:
#define TRACE_ENABLE_INTS
#define TRACE_DISABLE_INTS
#define TRACE_AND_RESTORE_IRQ_PARTIAL(en,skip)
#define TRACE_AND_RESTORE_IRQ(en)		\
stb	en,PACASOFTIRQEN(r13)
