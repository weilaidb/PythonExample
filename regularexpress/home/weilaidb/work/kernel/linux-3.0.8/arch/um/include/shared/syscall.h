#define __SYSCALL_USER_H
extern int record_syscall_start(int syscall);
extern void record_syscall_end(int index, long result);
