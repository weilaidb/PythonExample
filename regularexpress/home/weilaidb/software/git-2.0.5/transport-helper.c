static int debug;
struct helper_data ;
static void sendline(struct helper_data *helper, struct strbuf *buffer)
static int recvline_fh(FILE *helper, struct strbuf *buffer, const char *name)
static int recvline(struct helper_data *helper, struct strbuf *buffer)
static void write_constant(int fd, const char *str)
static const char *remove_ext_force(const char *url)
static void do_take_over(struct transport *transport)
static struct child_process *get_helper(struct transport *transport)
static int disconnect_helper(struct transport *transport)
static const char *unsupported_options[] = ;
static const char *boolean_options[] = ;
static int set_helper_option(struct transport *transport,
const char *name, const char *value)
static void standard_options(struct transport *t)
static int release_helper(struct transport *transport)
static int fetch_with_fetch(struct transport *transport,
int nr_heads, struct ref **to_fetch)
static int get_importer(struct transport *transport, struct child_process *fastimport)
static int get_exporter(struct transport *transport,
struct child_process *fastexport,
struct string_list *revlist_args)
static int fetch_with_import(struct transport *transport,
int nr_heads, struct ref **to_fetch)
static int process_connect_service(struct transport *transport,
const char *name, const char *exec)
static int process_connect(struct transport *transport,
int for_push)
static int connect_helper(struct transport *transport, const char *name,
const char *exec, int fd[2])
static int fetch(struct transport *transport,
int nr_heads, struct ref **to_fetch)
static int push_update_ref_status(struct strbuf *buf,
struct ref **ref,
struct ref *remote_refs)
static int push_update_refs_status(struct helper_data *data,
struct ref *remote_refs,
int flags)
static int push_refs_with_push(struct transport *transport,
struct ref *remote_refs, int flags)
static int push_refs_with_export(struct transport *transport,
struct ref *remote_refs, int flags)
static int push_refs(struct transport *transport,
struct ref *remote_refs, int flags)
static int has_attribute(const char *attrs, const char *attr)
static struct ref *get_refs_list(struct transport *transport, int for_push)
int transport_helper_init(struct transport *transport, const char *name)
#define BUFFERSIZE 65536
#define PBUFFERSIZE 8192
__attribute__((format (printf, 1, 2)))
static void transfer_debug(const char *fmt, ...)
#define SSTATE_TRANSFERING 0
#define SSTATE_FLUSHING 1
#define SSTATE_FINISHED 2
#define STATE_NEEDS_READING(state) ((state) <= SSTATE_TRANSFERING)
#define STATE_NEEDS_WRITING(state) ((state) <= SSTATE_FLUSHING)
#define STATE_NEEDS_CLOSING(state) ((state) == SSTATE_FLUSHING)
struct unidirectional_transfer ;
static void udt_close_if_finished(struct unidirectional_transfer *t)
static int udt_do_read(struct unidirectional_transfer *t)
static int udt_do_write(struct unidirectional_transfer *t)
struct bidirectional_transfer_state ;
static void *udt_copy_task_routine(void *udt)
static int tloop_join(pthread_t thread, const char *name)
static int tloop_spawnwait_tasks(struct bidirectional_transfer_state *s)
static void udt_kill_transfer(struct unidirectional_transfer *t)
static int tloop_join(pid_t pid, const char *name)
static int tloop_spawnwait_tasks(struct bidirectional_transfer_state *s)
int bidirectional_transfer_loop(int input, int output)
