#define _LINUX_EVENTPOLL_H
#define EPOLL_CLOEXEC O_CLOEXEC
#define EPOLL_CTL_ADD 1
#define EPOLL_CTL_DEL 2
#define EPOLL_CTL_MOD 3
#define EPOLLONESHOT (1 << 30)
#define EPOLLET (1 << 31)
#define EPOLL_PACKED __attribute__((packed))
#define EPOLL_PACKED
struct epoll_event  EPOLL_PACKED;
struct file;
static inline void eventpoll_init_file(struct file *file)
void eventpoll_release_file(struct file *file);
static inline void eventpoll_release(struct file *file)
static inline void eventpoll_init_file(struct file *file)
static inline void eventpoll_release(struct file *file)
