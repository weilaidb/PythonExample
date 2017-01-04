#define PR_GET_TSC 25
#define PR_SET_TSC 26
# define PR_TSC_ENABLE		1
# define PR_TSC_SIGSEGV		2
uint64_t rdtsc()
int should_segv = 0;
void sigsegv_cb(int sig)
void task(void)
int main(int argc, char **argv)
