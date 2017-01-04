#define _LINUX_PATH_H
struct dentry;
struct vfsmount;
struct path ;
extern void path_get(struct path *);
extern void path_put(struct path *);
static inline int path_equal(const struct path *path1, const struct path *path2)
