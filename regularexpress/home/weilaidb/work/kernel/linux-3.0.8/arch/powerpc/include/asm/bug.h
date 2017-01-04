#define _ASM_POWERPC_BUG_H
#define BUG_OPCODE .long 0x00b00b00
#define BUG_ILLEGAL_INSTR "0x00b00b00"
.macro EMIT_BUG_ENTRY addr,file,line,flags
.section __bug_table,"a"
5001:	 PPC_LONG \addr, 5002f
.short \line, \flags
.org 5001b+BUG_ENTRY_SIZE
.previous
.section .rodata,"a"
5002:	 .asciz "\file"
.previous
.endm
.macro EMIT_BUG_ENTRY addr,file,line,flags
.section __bug_table,"a"
5001:	 PPC_LONG \addr
.short \flags
.org 5001b+BUG_ENTRY_SIZE
.previous
.endm
#define _EMIT_BUG_ENTRY				\
".section __bug_table,\"a\"\n"		\
"2:\t" PPC_LONG "1b, %0\n"		\
"\t.short %1, %2\n"			\
".org 2b+%3\n"				\
".previous\n"
#define _EMIT_BUG_ENTRY				\
".section __bug_table,\"a\"\n"		\
"2:\t" PPC_LONG "1b\n"			\
"\t.short %2\n"				\
".org 2b+%3\n"				\
".previous\n"
#define BUG() do  while (0)
#define BUG_ON(x) do  while (0)
#define __WARN_TAINT(taint) do  while (0)
#define WARN_ON(x) ()
#define HAVE_ARCH_BUG
#define HAVE_ARCH_BUG_ON
#define HAVE_ARCH_WARN_ON
.macro EMIT_BUG_ENTRY addr,file,line,flags
.endm
#define _EMIT_BUG_ENTRY
