#define __FAULTINFO_I386_H
struct faultinfo ;
#define FAULT_WRITE(fi) ((fi).error_code & 2)
#define FAULT_ADDRESS(fi) ((fi).cr2)
#define PTRACE_FULL_FAULTINFO 0
