#define PR_GET_TSC 25
#define PR_SET_TSC 26
# define PR_TSC_ENABLE		1
# define PR_TSC_SIGSEGV		2
const char *tsc_names[] =
;
uint64_t rdtsc()
void sigsegv_cb(int sig)
int main(int argc, char **argv)
