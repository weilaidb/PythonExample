static int inside_git_dir = -1;
static int inside_work_tree = -1;
static int abspath_part_inside_repo(char *path)
char *prefix_path_gently(const char *prefix, int len,
int *remaining_prefix, const char *path)
char *prefix_path(const char *prefix, int len, const char *path)
int path_inside_repo(const char *prefix, const char *path)
int check_filename(const char *prefix, const char *arg)
static void NORETURN die_verify_filename(const char *prefix,
const char *arg,
int diagnose_misspelt_rev)
void verify_filename(const char *prefix,
const char *arg,
int diagnose_misspelt_rev)
void verify_non_filename(const char *prefix, const char *arg)
int is_git_directory(const char *suspect)
int is_inside_git_dir(void)
int is_inside_work_tree(void)
void setup_work_tree(void)
static int check_repository_format_gently(const char *gitdir, int *nongit_ok)
const char *read_gitfile(const char *path)
static const char *setup_explicit_git_dir(const char *gitdirenv,
char *cwd, int len,
int *nongit_ok)
static const char *setup_discovered_git_dir(const char *gitdir,
char *cwd, int offset, int len,
int *nongit_ok)
static const char *setup_bare_git_dir(char *cwd, int offset, int len, int *nongit_ok)
static const char *setup_nongit(const char *cwd, int *nongit_ok)
static dev_t get_device_or_die(const char *path, const char *prefix, int prefix_len)
static int canonicalize_ceiling_entry(struct string_list_item *item,
void *cb_data)
static const char *setup_git_directory_gently_1(int *nongit_ok)
const char *setup_git_directory_gently(int *nongit_ok)
int git_config_perm(const char *var, const char *value)
int check_repository_format_version(const char *var, const char *value, void *cb)
int check_repository_format(void)
const char *setup_git_directory(void)
const char *resolve_gitdir(const char *suspect)
void sanitize_stdfds(void)
int daemonize(void)
