#define HADOOP_USER_INFO_DOT_H
struct hadoop_user_info ;
struct hadoop_user_info *hadoop_user_info_alloc(void);
void hadoop_user_info_free(struct hadoop_user_info *uinfo);
int hadoop_user_info_fetch(struct hadoop_user_info *uinfo,
const char *username);
int hadoop_user_info_getgroups(struct hadoop_user_info *uinfo);
