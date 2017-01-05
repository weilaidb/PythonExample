#define __FUSE_USERS_H__
char *getUsername(uid_t uid);
void freeGroups(char **groups, int numgroups);
char *getGroup(gid_t gid);
char *getGroupUid(uid_t uid) ;
gid_t getGidUid(uid_t uid);
char ** getGroups(uid_t uid, int *num_groups);
