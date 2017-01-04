static void exec_next_command(struct service_processor *sp);
static atomic_t command_count = ATOMIC_INIT(0);
struct command *ibmasm_new_command(struct service_processor *sp, size_t buffer_size)
void ibmasm_free_command(struct kref *kref)
static void enqueue_command(struct service_processor *sp, struct command *cmd)
static struct command *dequeue_command(struct service_processor *sp)
static inline void do_exec_command(struct service_processor *sp)
void ibmasm_exec_command(struct service_processor *sp, struct command *cmd)
static void exec_next_command(struct service_processor *sp)
void ibmasm_wait_for_response(struct command *cmd, int timeout)
void ibmasm_receive_command_response(struct service_processor *sp, void *response, size_t size)
