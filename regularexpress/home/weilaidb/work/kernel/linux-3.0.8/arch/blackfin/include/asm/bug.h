#define _BLACKFIN_BUG_H
#define BFIN_BUG_OPCODE	0x0001
#define _BUG_OR_WARN(flags)						\
asm volatile(							\
"1:	.hword	%0\n"					\
"	.section __bug_table,\"a\",@progbits\n"		\
"2:	.long	1b\n"					\
"	.long	%1\n"					\
"	.short	%2\n"					\
"	.short	%3\n"					\
"	.org	2b + %4\n"				\
"	.previous"					\
:							\
: "i"(BFIN_BUG_OPCODE), "i"(__FILE__),			\
"i"(__LINE__), "i"(flags),				\
"i"(sizeof(struct bug_entry)))
#define _BUG_OR_WARN(flags)						\
asm volatile(							\
"1:	.hword	%0\n"					\
"	.section __bug_table,\"a\",@progbits\n"		\
"2:	.long	1b\n"					\
"	.short	%1\n"					\
"	.org	2b + %2\n"				\
"	.previous"					\
:							\
: "i"(BFIN_BUG_OPCODE), "i"(flags),			\
"i"(sizeof(struct bug_entry)))
#define BUG()								\
do  while (0)
#define WARN_ON(condition)							\
()
#define HAVE_ARCH_BUG
#define HAVE_ARCH_WARN_ON
