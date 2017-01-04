#define __ASM_AVR32_BUG_H
#define AVR32_BUG_OPCODE	0x5df0
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
: "i"(AVR32_BUG_OPCODE), "i"(__FILE__),			\
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
: "i"(AVR32_BUG_OPCODE), "i"(flags),			\
"i"(sizeof(struct bug_entry)))
#define BUG()								\
do  while (0)
#define WARN_ON(condition)							\
()
#define HAVE_ARCH_BUG
#define HAVE_ARCH_WARN_ON
