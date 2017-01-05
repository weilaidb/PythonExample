#define HADOOP_GROUP_INFO_DOT_H
struct hadoop_group_info ;
struct hadoop_group_info *hadoop_group_info_alloc(void);
void hadoop_group_info_free(struct hadoop_group_info *ginfo);
int hadoop_group_info_fetch(struct hadoop_group_info *ginfo, gid_t gid);
