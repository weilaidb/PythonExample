#define PGD_BOUND (4 * 1024 * 1024)
#define STACKSIZE (8 * 1024 * 1024)
#define THREAD_NAME_LEN (256)
static void set_stklim(void)
static __init void do_uml_initcalls(void)
static void last_ditch_exit(int sig)
static void install_fatal_handler(int sig)
#define UML_LIB_PATH	":" OS_LIB_PATH "/uml"
static void setup_env_path(void)
extern void scan_elf_aux( char **envp);
int __init main(int argc, char **argv, char **envp)
extern void *__real_malloc(int);
void *__wrap_malloc(int size)
void *__wrap_calloc(int n, int size)
extern void __real_free(void *);
extern unsigned long high_physmem;
void __wrap_free(void *ptr)
