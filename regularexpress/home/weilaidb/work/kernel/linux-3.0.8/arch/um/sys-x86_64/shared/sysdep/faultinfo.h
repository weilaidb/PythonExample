#define __FAULTINFO_X86_64_H
struct faultinfo ;
#define FAULT_WRITE(fi) ((fi).error_code & 2)
#define FAULT_ADDRESS(fi) ((fi).cr2)
#define PTRACE_FULL_FAULTINFO 1
