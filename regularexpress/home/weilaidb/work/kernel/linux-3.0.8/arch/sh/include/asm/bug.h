#define __ASM_SH_BUG_H
#define TRAPA_BUG_OPCODE	0xc33e
#define BUGFLAG_UNWINDER	(1 << 1)
#define HAVE_ARCH_BUG
#define HAVE_ARCH_WARN_ON
#define _EMIT_BUG_ENTRY				\
"\t.pushsection __bug_table,\"a\"\n"	\
"2:\t.long 1b, %O1\n"			\
"\t.short %O2, %O3\n"			\
"\t.org 2b+%O4\n"			\
"\t.popsection\n"
#define _EMIT_BUG_ENTRY				\
"\t.pushsection __bug_table,\"a\"\n"	\
"2:\t.long 1b\n"			\
"\t.short %O3\n"			\
"\t.org 2b+%O4\n"			\
"\t.popsection\n"
#define BUG()						\
do  while (0)
#define __WARN_TAINT(taint)				\
do  while (0)
#define WARN_ON(x) ()
#define UNWINDER_BUG()					\
do  while (0)
#define UNWINDER_BUG_ON(x) ()
#define UNWINDER_BUG	BUG
#define UNWINDER_BUG_ON	BUG_ON
