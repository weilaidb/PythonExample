#define _S390_KDEBUG_H
struct pt_regs;
enum die_val ;
extern void die(const char *, struct pt_regs *, long);
