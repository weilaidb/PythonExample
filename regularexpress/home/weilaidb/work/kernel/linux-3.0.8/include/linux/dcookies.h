#define DCOOKIES_H
struct dcookie_user;
struct path;
struct dcookie_user * dcookie_register(void);
void dcookie_unregister(struct dcookie_user * user);
int get_dcookie(struct path *path, unsigned long *cookie);
static inline struct dcookie_user * dcookie_register(void)
static inline void dcookie_unregister(struct dcookie_user * user)
static inline int get_dcookie(struct path *path, unsigned long *cookie)
