struct group_info init_groups = ;
struct group_info *groups_alloc(int gidsetsize)
EXPORT_SYMBOL(groups_alloc);
void groups_free(struct group_info *group_info)
EXPORT_SYMBOL(groups_free);
static int groups_to_user(gid_t __user *grouplist,
const struct group_info *group_info)
static int groups_from_user(struct group_info *group_info,
gid_t __user *grouplist)
static void groups_sort(struct group_info *group_info)
int groups_search(const struct group_info *group_info, gid_t grp)
int set_groups(struct cred *new, struct group_info *group_info)
EXPORT_SYMBOL(set_groups);
int set_current_groups(struct group_info *group_info)
EXPORT_SYMBOL(set_current_groups);
SYSCALL_DEFINE2(getgroups, int, gidsetsize, gid_t __user *, grouplist)
SYSCALL_DEFINE2(setgroups, int, gidsetsize, gid_t __user *, grouplist)
int in_group_p(gid_t grp)
EXPORT_SYMBOL(in_group_p);
int in_egroup_p(gid_t grp)
EXPORT_SYMBOL(in_egroup_p);
