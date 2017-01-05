static const int DEFAULT_MIN_USERID = 1000;
static const char* DEFAULT_BANNED_USERS[] = ;
struct passwd *user_detail = NULL;
FILE* LOGFILE = NULL;
FILE* ERRORFILE = NULL;
static uid_t nm_uid = -1;
static gid_t nm_gid = -1;
char *concatenate(char *concat_pattern, char *return_path_name,
int numArgs, ...);
void set_nm_uid(uid_t user, gid_t group)
char* get_executable()
int check_executor_permissions(char *executable_file)
static int change_effective_user(uid_t user, gid_t group)
static int write_pid_to_cgroup_as_root(const char* cgroup_file, pid_t pid)
static int write_pid_to_file_as_nm(const char* pid_file, pid_t pid)
static int write_exit_code_file(const char* exit_code_file, int exit_code)
static int wait_and_write_exit_code(pid_t pid, const char* exit_code_file)
int change_user(uid_t user, gid_t group)
char *concatenate(char *concat_pattern, char *return_path_name,
int numArgs, ...)
char *get_app_directory(const char * nm_root, const char *user,
const char *app_id)
char *get_user_directory(const char *nm_root, const char *user)
char *get_container_work_directory(const char *nm_root, const char *user,
const char *app_id, const char *container_id)
char *get_exit_code_file(const char* pid_file)
char *get_container_launcher_file(const char* work_dir)
char *get_container_credentials_file(const char* work_dir)
char* get_app_log_directory(const char *log_root, const char* app_id)
char *get_tmp_directory(const char *work_dir)
int mkdirs(const char* path, mode_t perm)
int create_validate_dir(char* npath, mode_t perm, char* path, int finalComponent)
int check_dir(char* npath, mode_t st_mode, mode_t desired, int finalComponent)
static int create_container_directories(const char* user, const char *app_id,
const char *container_id, char* const* local_dir, char* const* log_dir, const char *work_dir)
static struct passwd* get_user_info(const char* user)
int is_whitelisted(const char *user)
struct passwd* check_user(const char *user)
int set_user(const char *user)
static int change_owner(const char* path, uid_t user, gid_t group)
int create_directory_for_user(const char* path)
static int open_file_as_nm(const char* filename)
static int copy_file(int input, const char* in_filename,
const char* out_filename, mode_t perm)
int initialize_user(const char *user, char* const* local_dirs)
int create_log_dirs(const char *app_id, char * const * log_dirs)
int initialize_app(const char *user, const char *app_id,
const char* nmPrivate_credentials_file,
char* const* local_dirs, char* const* log_roots,
char* const* args)
int launch_container_as_user(const char *user, const char *app_id,
const char *container_id, const char *work_dir,
const char *script_name, const char *cred_file,
const char* pid_file, char* const* local_dirs,
char* const* log_dirs, const char *resources_key,
char* const* resources_values)
int signal_container_as_user(const char *user, int pid, int sig)
static int rmdir_as_nm(const char* path)
static int delete_path(const char *full_path,
int needs_tt_user)
int delete_as_user(const char *user,
const char *subdir,
char* const* baseDirs)
void chown_dir_contents(const char *dir_path, uid_t uid, gid_t gid)
int mount_cgroup(const char *pair, const char *hierarchy)
