#define __PERF_THREAD_H
struct thread ;
struct perf_session;
void thread__delete(struct thread *self);
int thread__set_comm(struct thread *self, const char *comm);
int thread__comm_len(struct thread *self);
struct thread *perf_session__findnew(struct perf_session *self, pid_t pid);
void thread__insert_map(struct thread *self, struct map *map);
int thread__fork(struct thread *self, struct thread *parent);
size_t perf_session__fprintf(struct perf_session *self, FILE *fp);
static inline struct map *thread__find_map(struct thread *self,
enum map_type type, u64 addr)
void thread__find_addr_map(struct thread *self,
struct perf_session *session, u8 cpumode,
enum map_type type, pid_t pid, u64 addr,
struct addr_location *al);
void thread__find_addr_location(struct thread *self,
struct perf_session *session, u8 cpumode,
enum map_type type, pid_t pid, u64 addr,
struct addr_location *al,
symbol_filter_t filter);
