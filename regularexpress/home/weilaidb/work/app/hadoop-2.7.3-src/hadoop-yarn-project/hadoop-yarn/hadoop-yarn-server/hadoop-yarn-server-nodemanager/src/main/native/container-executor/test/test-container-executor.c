#define TEST_ROOT "/tmp/test-container-executor"
#define DONT_TOUCH_FILE "dont-touch-me"
#define NM_LOCAL_DIRS       TEST_ROOT "/local-1," TEST_ROOT "/local-2," \
TEST_ROOT "/local-3," TEST_ROOT "/local-4," TEST_ROOT "/local-5"
#define NM_LOG_DIRS         TEST_ROOT "/logs/userlogs"
#define ARRAY_SIZE 1000
static char* username = NULL;
static char* yarn_username = NULL;
static char** local_dirs = NULL;
static char** log_dirs = NULL;
void run(const char *cmd)
int write_config_file(char *file_name, int banned)
void create_nm_roots(char ** nm_roots)
void check_pid_file(const char* pid_file, pid_t mypid)
void test_get_user_directory()
void test_get_app_directory()
void test_get_container_directory()
void test_get_container_launcher_file()
void test_get_app_log_dir()
void test_check_user()
void test_resolve_config_path()
void test_check_configuration_permissions()
void test_delete_container()
void test_delete_app()
void test_delete_user()
void run_test_in_child(const char* test_name, void (*func)())
void test_signal_container_group()
void test_init_app()
void test_run_container()
int main(int argc, char **argv)
