#define _PARISC_BUG_H
#define HAVE_ARCH_BUG
#define HAVE_ARCH_WARN_ON
#define	PARISC_BUG_BREAK_ASM	"break 0x1f, 0x1fff"
#define	PARISC_BUG_BREAK_INSN	0x03ffe01f
#if defined(CONFIG_64BIT)
#define ASM_WORD_INSN		".dword\t"
#define ASM_WORD_INSN		".word\t"
#define BUG()								\
do  while(0)
#define BUG()								\
do  while(0)
#define __WARN_TAINT(taint)						\
do  while(0)
#define __WARN_TAINT(taint)						\
do  while(0)
#define WARN_ON(x) ()
