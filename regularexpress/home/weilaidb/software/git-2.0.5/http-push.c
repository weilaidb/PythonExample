static const char http_push_usage[] =
"git http-push [--all] [--dry-run] [--force] [--verbose] <remote> [<head>...]\n";
enum XML_Status ;
#define XML_STATUS_OK    1
#define XML_STATUS_ERROR 0
#define PREV_BUF_SIZE 4096
#define DAV_LOCK "LOCK"
#define DAV_MKCOL "MKCOL"
#define DAV_MOVE "MOVE"
#define DAV_PROPFIND "PROPFIND"
#define DAV_PUT "PUT"
#define DAV_UNLOCK "UNLOCK"
#define DAV_DELETE "DELETE"
#define DAV_PROP_LOCKWR (1u << 0)
#define DAV_PROP_LOCKEX (1u << 1)
#define DAV_LOCK_OK (1u << 2)
#define DAV_CTX_LOCKENTRY ".multistatus.response.propstat.prop.supportedlock.lockentry"
#define DAV_CTX_LOCKTYPE_WRITE ".multistatus.response.propstat.prop.supportedlock.lockentry.locktype.write"
#define DAV_CTX_LOCKTYPE_EXCLUSIVE ".multistatus.response.propstat.prop.supportedlock.lockentry.lockscope.exclusive"
#define DAV_ACTIVELOCK_OWNER ".prop.lockdiscovery.activelock.owner.href"
#define DAV_ACTIVELOCK_TIMEOUT ".prop.lockdiscovery.activelock.timeout"
#define DAV_ACTIVELOCK_TOKEN ".prop.lockdiscovery.activelock.locktoken.href"
#define DAV_PROPFIND_RESP ".multistatus.response"
#define DAV_PROPFIND_NAME ".multistatus.response.href"
#define DAV_PROPFIND_COLLECTION ".multistatus.response.propstat.prop.resourcetype.collection"
#define PROPFIND_SUPPORTEDLOCK_REQUEST "<?xml version=\"1.0\" encoding=\"utf-8\" ?>\n<D:propfind xmlns:D=\"DAV:\">\n<D:prop xmlns:R=\"%s\">\n<D:supportedlock/>\n</D:prop>\n</D:propfind>"
#define PROPFIND_ALL_REQUEST "<?xml version=\"1.0\" encoding=\"utf-8\" ?>\n<D:propfind xmlns:D=\"DAV:\">\n<D:allprop/>\n</D:propfind>"
#define LOCK_REQUEST "<?xml version=\"1.0\" encoding=\"utf-8\" ?>\n<D:lockinfo xmlns:D=\"DAV:\">\n<D:lockscope><D:exclusive/></D:lockscope>\n<D:locktype><D:write/></D:locktype>\n<D:owner>\n<D:href>mailto:%s</D:href>\n</D:owner>\n</D:lockinfo>"
#define LOCK_TIME 600
#define LOCK_REFRESH 30
#define LOCAL    (1u<<16)
#define REMOTE   (1u<<17)
#define FETCHING (1u<<18)
#define PUSHING  (1u<<19)
#define MAXDEPTH 5
static int pushing;
static int aborted;
static signed char remote_dir_exists[256];
static int push_verbosely;
static int push_all = MATCH_REFS_NONE;
static int force_all;
static int dry_run;
static int helper_status;
static struct object_list *objects;
struct repo ;
static struct repo *repo;
enum transfer_state ;
struct transfer_request ;
static struct transfer_request *request_queue_head;
struct xml_ctx ;
struct remote_lock ;
#define PROCESS_FILES (1u << 0)
#define PROCESS_DIRS  (1u << 1)
#define RECURSIVE     (1u << 2)
#define IS_DIR (1u << 0)
struct remote_ls_ctx ;
enum dav_header_flag ;
static char *xml_entities(const char *s)
static void curl_setup_http_get(CURL *curl, const char *url,
const char *custom_req)
static void curl_setup_http(CURL *curl, const char *url,
const char *custom_req, struct buffer *buffer,
curl_write_callback write_fn)
static struct curl_slist *get_dav_token_headers(struct remote_lock *lock, enum dav_header_flag options)
static void finish_request(struct transfer_request *request);
static void release_request(struct transfer_request *request);
static void process_response(void *callback_data)
static void start_fetch_loose(struct transfer_request *request)
static void start_mkcol(struct transfer_request *request)
static void start_fetch_packed(struct transfer_request *request)
static void start_put(struct transfer_request *request)
static void start_move(struct transfer_request *request)
static int refresh_lock(struct remote_lock *lock)
static void check_locks(void)
static void release_request(struct transfer_request *request)
static void finish_request(struct transfer_request *request)
static int is_running_queue;
static int fill_active_slot(void *unused)
static void get_remote_object_list(unsigned char parent);
static void add_fetch_request(struct object *obj)
static int add_send_request(struct object *obj, struct remote_lock *lock)
static int fetch_indices(void)
static void one_remote_object(const char *hex)
static void handle_lockprop_ctx(struct xml_ctx *ctx, int tag_closed)
static void handle_new_lock_ctx(struct xml_ctx *ctx, int tag_closed)
static void one_remote_ref(const char *refname);
static void
xml_start_tag(void *userData, const char *name, const char **atts)
static void
xml_end_tag(void *userData, const char *name)
static void
xml_cdata(void *userData, const XML_Char *s, int len)
static struct remote_lock *lock_remote(const char *path, long timeout)
static int unlock_remote(struct remote_lock *lock)
static void remove_locks(void)
static void remove_locks_on_signal(int signo)
static void remote_ls(const char *path, int flags,
void (*userFunc)(struct remote_ls_ctx *ls),
void *userData);
static void process_ls_object(struct remote_ls_ctx *ls)
static void process_ls_ref(struct remote_ls_ctx *ls)
static void handle_remote_ls_ctx(struct xml_ctx *ctx, int tag_closed)
static void remote_ls(const char *path, int flags,
void (*userFunc)(struct remote_ls_ctx *ls),
void *userData)
static void get_remote_object_list(unsigned char parent)
static int locking_available(void)
static struct object_list **add_one_object(struct object *obj, struct object_list **p)
static struct object_list **process_blob(struct blob *blob,
struct object_list **p,
struct name_path *path,
const char *name)
static struct object_list **process_tree(struct tree *tree,
struct object_list **p,
struct name_path *path,
const char *name)
static int get_delta(struct rev_info *revs, struct remote_lock *lock)
static int update_remote(unsigned char *sha1, struct remote_lock *lock)
static struct ref *remote_refs;
static void one_remote_ref(const char *refname)
static void get_dav_remote_heads(void)
static void add_remote_info_ref(struct remote_ls_ctx *ls)
static void update_remote_info_refs(struct remote_lock *lock)
static int remote_exists(const char *path)
static void fetch_symref(const char *path, char **symref, unsigned char *sha1)
static int verify_merge_base(unsigned char *head_sha1, struct ref *remote)
static int delete_remote_branch(const char *pattern, int force)
static void run_request_queue(void)
int main(int argc, char **argv)
