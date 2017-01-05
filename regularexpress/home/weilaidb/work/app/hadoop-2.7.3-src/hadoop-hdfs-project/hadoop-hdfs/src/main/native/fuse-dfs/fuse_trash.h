#define __FUSE_TRASH_H__
int hdfsDeleteWithTrash(hdfsFS userFS, const char *path, int useTrash);
