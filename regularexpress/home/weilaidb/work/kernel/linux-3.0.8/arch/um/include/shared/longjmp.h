#define __UML_LONGJMP_H
extern int setjmp(jmp_buf);
extern void longjmp(jmp_buf, int);
#define UML_LONGJMP(buf, val) do  while(0)
#define UML_SETJMP(buf) ()
