static const char receive_pack_usage[] = "git receive-pack <git-dir>";
enum deny_action ;
static int deny_deletes;
static int deny_non_fast_forwards;
static enum deny_action deny_current_branch = DENY_UNCONFIGURED;
static enum deny_action deny_delete_current = DENY_UNCONFIGURED;
static int receive_fsck_objects = -1;
static int transfer_fsck_objects = -1;
static int receive_unpack_limit = -1;
static int transfer_unpack_limit = -1;
static int unpack_limit = 100;
static int report_status;
static int use_sideband;
static int quiet;
static int prefer_ofs_delta = 1;
static int auto_update_server_info;
static int auto_gc = 1;
static int fix_thin = 1;
static const char *head_name;
static void *head_name_to_free;
static int sent_capabilities;
static int shallow_update;
static const char *alt_shallow_file;
static enum deny_action parse_deny_action(const char *var, const char *value)
static int receive_pack_config(const char *var, const char *value, void *cb)
static void show_ref(const char *path, const unsigned char *sha1)
static int show_ref_cb(const char *path, const unsigned char *sha1, int flag, void *unused)
static void show_one_alternate_sha1(const unsigned char sha1[20], void *unused)
static void collect_one_alternate_ref(const struct ref *ref, void *data)
static void write_head_info(void)
struct command ;
static void rp_error(const char *err, ...) __attribute__((format (printf, 1, 2)));
static void rp_warning(const char *err, ...) __attribute__((format (printf, 1, 2)));
static void report_message(const char *prefix, const char *err, va_list params)
static void rp_warning(const char *err, ...)
static void rp_error(const char *err, ...)
static int copy_to_sideband(int in, int out, void *arg)
typedef int (*feed_fn)(void *, const char **, size_t *);
static int run_and_feed_hook(const char *hook_name, feed_fn feed, void *feed_state)
struct receive_hook_feed_state ;
static int feed_receive_hook(void *state_, const char **bufp, size_t *sizep)
static int run_receive_hook(struct command *commands, const char *hook_name,
int skip_broken)
static int run_update_hook(struct command *cmd)
static int is_ref_checked_out(const char *ref)
static char *refuse_unconfigured_deny_msg[] = ;
static void refuse_unconfigured_deny(void)
static char *refuse_unconfigured_deny_delete_current_msg[] = ;
static void refuse_unconfigured_deny_delete_current(void)
static int command_singleton_iterator(void *cb_data, unsigned char sha1[20]);
static int update_shallow_ref(struct command *cmd, struct shallow_info *si)
static const char *update(struct command *cmd, struct shallow_info *si)
static void run_update_post_hook(struct command *commands)
static void check_aliased_update(struct command *cmd, struct string_list *list)
static void check_aliased_updates(struct command *commands)
static int command_singleton_iterator(void *cb_data, unsigned char sha1[20])
static void set_connectivity_errors(struct command *commands,
struct shallow_info *si)
struct iterate_data ;
static int iterate_receive_command_list(void *cb_data, unsigned char sha1[20])
static void reject_updates_to_hidden(struct command *commands)
static void execute_commands(struct command *commands,
const char *unpacker_error,
struct shallow_info *si)
static struct command *read_head_info(struct sha1_array *shallow)
static const char *parse_pack_header(struct pack_header *hdr)
static const char *pack_lockfile;
static const char *unpack(int err_fd, struct shallow_info *si)
static const char *unpack_with_sideband(struct shallow_info *si)
static void prepare_shallow_update(struct command *commands,
struct shallow_info *si)
static void update_shallow_info(struct command *commands,
struct shallow_info *si,
struct sha1_array *ref)
static void report(struct command *commands, const char *unpack_status)
static int delete_only(struct command *commands)
int cmd_receive_pack(int argc, const char **argv, const char *prefix)
