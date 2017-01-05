#define INITIAL_GIDS_SIZE 32
#define MAX_USER_BUFFER_SIZE (32*1024)
struct hadoop_user_info *hadoop_user_info_alloc(void)
static void hadoop_user_info_clear(struct hadoop_user_info *uinfo)
void hadoop_user_info_free(struct hadoop_user_info *uinfo)
static int getpwnam_error_translate(int err)
int hadoop_user_info_fetch(struct hadoop_user_info *uinfo,
const char *username)
static int put_primary_gid_first(struct hadoop_user_info *uinfo)
int hadoop_user_info_getgroups(struct hadoop_user_info *uinfo)
{
int ret, ngroups;
gid_t *ngids;
if (!uinfo->pwd.pw_name)
uinfo->num_gids = 0;
if (!uinfo->gids)
ngroups = uinfo->gids_size;
ret = getgrouplist(uinfo->pwd.pw_name, uinfo->pwd.pw_gid,
uinfo->gids, &ngroups);
if (ret > 0)
int main(int argc, char **argv)
