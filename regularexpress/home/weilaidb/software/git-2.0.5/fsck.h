#define GIT_FSCK_H
#define FSCK_ERROR 1
#define FSCK_WARN 2
typedef int (*fsck_walk_func)(struct object *obj, int type, void *data);
typedef int (*fsck_error)(struct object *obj, int type, const char *err, ...);
__attribute__((format (printf, 3, 4)))
int fsck_error_function(struct object *obj, int type, const char *fmt, ...);
int fsck_walk(struct object *obj, fsck_walk_func walk, void *data);
int fsck_object(struct object *obj, int strict, fsck_error error_func);
