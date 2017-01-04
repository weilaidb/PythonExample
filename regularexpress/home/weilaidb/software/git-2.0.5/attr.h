#define ATTR_H
struct git_attr;
struct git_attr *git_attr(const char *);
extern const char git_attr__true[];
extern const char git_attr__false[];
#define ATTR_TRUE(v) ((v) == git_attr__true)
#define ATTR_FALSE(v) ((v) == git_attr__false)
#define ATTR_UNSET(v) ((v) == NULL)
struct git_attr_check ;
char *git_attr_name(struct git_attr *);
int git_check_attr(const char *path, int, struct git_attr_check *);
int git_all_attrs(const char *path, int *num, struct git_attr_check **check);
enum git_attr_direction ;
void git_attr_set_direction(enum git_attr_direction, struct index_state *);
