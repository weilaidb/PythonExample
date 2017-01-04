#define PR_GET_TSC 25
#define PR_SET_TSC 26
# define PR_TSC_ENABLE		1
# define PR_TSC_SIGSEGV		2
uint64_t rdtsc()
void sigsegv_expect(int sig)
void segvtask(void)
void sigsegv_fail(int sig)
void rdtsctask(void)
int main(int argc, char **argv)
