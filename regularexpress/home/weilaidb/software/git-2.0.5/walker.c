static unsigned char current_commit_sha1[20];
void walker_say(struct walker *walker, const char *fmt, const char *hex)
static void report_missing(const struct object *obj)
static int process(struct walker *walker, struct object *obj);
static int process_tree(struct walker *walker, struct tree *tree)
#define COMPLETE	(1U << 0)
#define SEEN		(1U << 1)
#define TO_SCAN		(1U << 2)
static struct commit_list *complete = NULL;
static int process_commit(struct walker *walker, struct commit *commit)
static int process_tag(struct walker *walker, struct tag *tag)
static struct object_list *process_queue = NULL;
static struct object_list **process_queue_end = &process_queue;
static int process_object(struct walker *walker, struct object *obj)
static int process(struct walker *walker, struct object *obj)
static int loop(struct walker *walker)
static int interpret_target(struct walker *walker, char *target, unsigned char *sha1)
static int mark_complete(const char *path, const unsigned char *sha1, int flag, void *cb_data)
int walker_targets_stdin(char ***target, const char ***write_ref)
void walker_targets_free(int targets, char **target, const char **write_ref)
int walker_fetch(struct walker *walker, int targets, char **target,
const char **write_ref, const char *write_ref_log_details)
void walker_free(struct walker *walker)
