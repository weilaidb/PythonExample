#define DEFAULT_GIT_TEMPLATE_DIR "/usr/share/git-core/templates"
#define TEST_FILEMODE 0
#define TEST_FILEMODE 1
static int init_is_bare_repository = 0;
static int init_shared_repository = -1;
static const char *init_db_template_dir;
static const char *git_link;
static void safe_create_dir(const char *dir, int share)
static void copy_templates_1(char *path, int baselen,
char *template, int template_baselen,
DIR *dir)
static void copy_templates(const char *template_dir)
static int git_init_db_config(const char *k, const char *v, void *cb)
static int create_default_files(const char *template_path)
static void create_object_directory(void)
int set_git_dir_init(const char *git_dir, const char *real_git_dir,
int exist_ok)
static void separate_git_dir(const char *git_dir)
int init_db(const char *template_dir, unsigned int flags)
static int guess_repository_type(const char *git_dir)
static int shared_callback(const struct option *opt, const char *arg, int unset)
static const char *const init_db_usage[] = ;
int cmd_init_db(int argc, const char **argv, const char *prefix)
