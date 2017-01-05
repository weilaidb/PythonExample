enum command ;
enum errorcodes ;
#define NM_GROUP_KEY "yarn.nodemanager.linux-container-executor.group"
#define USER_DIR_PATTERN "%s/usercache/%s"
#define NM_APP_DIR_PATTERN USER_DIR_PATTERN "/appcache/%s"
#define CONTAINER_DIR_PATTERN NM_APP_DIR_PATTERN "/%s"
#define CONTAINER_SCRIPT "launch_container.sh"
#define CREDENTIALS_FILENAME "container_tokens"
#define MIN_USERID_KEY "min.user.id"
#define BANNED_USERS_KEY "banned.users"
#define ALLOWED_SYSTEM_USERS_KEY "allowed.system.users"
#define TMP_DIR "tmp"
extern struct passwd *user_detail;
extern FILE *LOGFILE;
extern FILE *ERRORFILE;
char* get_executable();
int check_executor_permissions(char *executable_file);
int initialize_app(const char *user, const char *app_id,
const char *credentials, char* const* local_dirs,
char* const* log_dirs, char* const* args);
int launch_container_as_user(const char * user, const char *app_id,
const char *container_id, const char *work_dir,
const char *script_name, const char *cred_file,
const char *pid_file, char* const* local_dirs,
char* const* log_dirs, const char *resources_key,
char* const* resources_value);
int signal_container_as_user(const char *user, int pid, int sig);
int delete_as_user(const char *user,
const char *dir_to_be_deleted,
char* const* baseDirs);
void set_nm_uid(uid_t user, gid_t group);
struct passwd* check_user(const char *user);
int set_user(const char *user);
char *get_user_directory(const char *nm_root, const char *user);
char *get_app_directory(const char * nm_root, const char *user,
const char *app_id);
char *get_container_work_directory(const char *nm_root, const char *user,
const char *app_id, const char *container_id);
char *get_container_launcher_file(const char* work_dir);
char *get_container_credentials_file(const char* work_dir);
char* get_app_log_directory(const char* log_root, const char* appid);
int mkdirs(const char* path, mode_t perm);
int initialize_user(const char *user, char* const* local_dirs);
int create_directory_for_user(const char* path);
int change_user(uid_t user, gid_t group);
int mount_cgroup(const char *pair, const char *hierarchy);
int check_dir(char* npath, mode_t st_mode, mode_t desired,
int finalComponent);
int create_validate_dir(char* npath, mode_t perm, char* path,
int finalComponent);
