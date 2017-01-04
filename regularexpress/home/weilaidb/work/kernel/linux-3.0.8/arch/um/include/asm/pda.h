#define __UM_PDA_X86_64_H
struct foo ;
extern struct foo me;
#define read_pda(me) (&me)
