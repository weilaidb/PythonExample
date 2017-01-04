#define UML_DIR "~/.uml/"
#define UMID_LEN 64
static char umid[UMID_LEN] = ;
static char *uml_dir = UML_DIR;
static int __init make_uml_dir(void)
static int remove_files_and_dir(char *dir)
static inline int is_umdir_used(char *dir)
static int umdir_take_if_dead(char *dir)
static void __init create_pid_file(void)
int __init set_umid(char *name)
static int umid_setup = 0;
static int __init make_umid(void)
static int __init make_umid_init(void)
__initcall(make_umid_init);
int __init umid_file_name(char *name, char *buf, int len)
char *get_umid(void)
static int __init set_uml_dir(char *name, int *add)
__uml_setup("uml_dir=", set_uml_dir,
"uml_dir=<directory>\n"
"    The location to place the pid and umid files.\n\n"
);
static void remove_umid_dir(void)
__uml_exitcall(remove_umid_dir);
