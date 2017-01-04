#define __LINUX_KMOD_H__
#define KMOD_PATH_LEN 256
extern char modprobe_path[];
extern int __request_module(bool wait, const char *name, ...) \
__attribute__((format(printf, 2, 3)));
#define request_module(mod...) __request_module(true, mod)
#define request_module_nowait(mod...) __request_module(false, mod)
#define try_then_request_module(x, mod...) \
((x) ?: (__request_module(true, mod), (x)))
static inline int request_module(const char *name, ...)
static inline int request_module_nowait(const char *name, ...)
#define try_then_request_module(x, mod...) (x)
struct cred;
struct file;
enum umh_wait ;
struct subprocess_info ;
struct subprocess_info *call_usermodehelper_setup(char *path, char **argv,
char **envp, gfp_t gfp_mask);
void call_usermodehelper_setfns(struct subprocess_info *info,
int (*init)(struct subprocess_info *info, struct cred *new),
void (*cleanup)(struct subprocess_info *info),
void *data);
int call_usermodehelper_exec(struct subprocess_info *info, enum umh_wait wait);
void call_usermodehelper_freeinfo(struct subprocess_info *info);
static inline int
call_usermodehelper_fns(char *path, char **argv, char **envp,
enum umh_wait wait,
int (*init)(struct subprocess_info *info, struct cred *new),
void (*cleanup)(struct subprocess_info *), void *data)
static inline int
call_usermodehelper(char *path, char **argv, char **envp, enum umh_wait wait)
extern struct ctl_table usermodehelper_table[];
extern void usermodehelper_init(void);
extern int usermodehelper_disable(void);
extern void usermodehelper_enable(void);
extern bool usermodehelper_is_disabled(void);
