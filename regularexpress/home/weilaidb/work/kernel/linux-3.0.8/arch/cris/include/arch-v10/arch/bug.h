#define __ASM_CRISv10_ARCH_BUG_H
#define BUG_PREFIX 0x0D7F
#define BUG_MAGIC  0x00001234
struct bug_frame ;
#define BUG() (*(int *)0 = 0)
#define HAVE_ARCH_BUG
