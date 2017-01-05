pthread_mutex_t passwdstruct_mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t groupstruct_mutex = PTHREAD_MUTEX_INITIALIZER;
char *getUsername(uid_t uid)
void freeGroups(char **groups, int numgroups)
#define GROUPBUF_SIZE 5
char *getGroup(gid_t gid)
char *getGroupUid(uid_t uid)
gid_t getGidUid(uid_t uid)
char ** getGroups(uid_t uid, int *num_groups)
