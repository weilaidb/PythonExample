#define __ASM_BUGS_H
extern void check_writebuffer_bugs(void);
#define check_bugs() check_writebuffer_bugs()
#define check_bugs() do  while (0)
