int active_requests;
int http_is_verbose;
size_t http_post_buffer = 16 * LARGE_PACKET_MAX;
#if LIBCURL_VERSION_NUM >= 0x070a06
#define LIBCURL_CAN_HANDLE_AUTH_ANY
static int min_curl_sessions = 1;
static int curl_session_count;
static int max_requests = -1;
static CURLM *curlm;
static CURL *curl_default;
#define PREV_BUF_SIZE 4096
#define RANGE_HEADER_SIZE 30
char curl_errorstr[CURL_ERROR_SIZE];
static int curl_ssl_verify = -1;
static int curl_ssl_try;
static const char *ssl_cert;
#if LIBCURL_VERSION_NUM >= 0x070903
static const char *ssl_key;
#if LIBCURL_VERSION_NUM >= 0x070908
static const char *ssl_capath;
static const char *ssl_cainfo;
static long curl_low_speed_limit = -1;
static long curl_low_speed_time = -1;
static int curl_ftp_no_epsv;
static const char *curl_http_proxy;
static const char *curl_cookie_file;
static int curl_save_cookies;
struct credential http_auth = CREDENTIAL_INIT;
static int http_proactive_auth;
static const char *user_agent;
#if LIBCURL_VERSION_NUM >= 0x071700
#elif LIBCURL_VERSION_NUM >= 0x070903
#define CURLOPT_KEYPASSWD CURLOPT_SSLKEYPASSWD
#define CURLOPT_KEYPASSWD CURLOPT_SSLCERTPASSWD
static struct credential cert_auth = CREDENTIAL_INIT;
static int ssl_cert_password_required;
static struct curl_slist *pragma_header;
static struct curl_slist *no_pragma_header;
static struct active_request_slot *active_queue_head;
size_t fread_buffer(char *ptr, size_t eltsize, size_t nmemb, void *buffer_)
curlioerr ioctl_buffer(CURL *handle, int cmd, void *clientp)
size_t fwrite_buffer(char *ptr, size_t eltsize, size_t nmemb, void *buffer_)
size_t fwrite_null(char *ptr, size_t eltsize, size_t nmemb, void *strbuf)
static void process_curl_messages(void)
static int http_options(const char *var, const char *value, void *cb)
static void init_curl_http_auth(CURL *result)
static int has_cert_password(void)
#if LIBCURL_VERSION_NUM >= 0x071900
static void set_curl_keepalive(CURL *c)
#elif LIBCURL_VERSION_NUM >= 0x071000
static int sockopt_callback(void *client, curl_socket_t fd, curlsocktype type)
static void set_curl_keepalive(CURL *c)
static void set_curl_keepalive(CURL *c)
static CURL *get_curl_handle(void)
static void set_from_env(const char **var, const char *envname)
void http_init(struct remote *remote, const char *url, int proactive_auth)
void http_cleanup(void)
struct active_request_slot *get_active_slot(void)
int start_active_slot(struct active_request_slot *slot)
struct fill_chain ;
static struct fill_chain *fill_cfg;
void add_fill_function(void *data, int (*fill)(void *))
void fill_active_slots(void)
void step_active_slots(void)
void run_active_slot(struct active_request_slot *slot)
static void closedown_active_slot(struct active_request_slot *slot)
static void release_active_slot(struct active_request_slot *slot)
void finish_active_slot(struct active_request_slot *slot)
void finish_all_active_slots(void)
static inline int needs_quote(int ch)
static char *quote_ref_url(const char *base, const char *ref)
void append_remote_object_url(struct strbuf *buf, const char *url,
const char *hex,
int only_two_digit_prefix)
char *get_remote_object_url(const char *url, const char *hex,
int only_two_digit_prefix)
int handle_curl_result(struct slot_results *results)
int run_one_slot(struct active_request_slot *slot,
struct slot_results *results)
static CURLcode curlinfo_strbuf(CURL *curl, CURLINFO info, struct strbuf *buf)
#define HTTP_REQUEST_STRBUF	0
#define HTTP_REQUEST_FILE	1
static int http_request(const char *url,
void *result, int target,
const struct http_get_options *options)
static int update_url_from_redirect(struct strbuf *base,
const char *asked,
const struct strbuf *got)
static int http_request_reauth(const char *url,
void *result, int target,
struct http_get_options *options)
int http_get_strbuf(const char *url,
struct strbuf *result,
struct http_get_options *options)
static int http_get_file(const char *url, const char *filename,
struct http_get_options *options)
int http_fetch_ref(const char *base, struct ref *ref)
static char *fetch_pack_index(unsigned char *sha1, const char *base_url)
static int fetch_and_setup_pack_index(struct packed_git **packs_head,
unsigned char *sha1, const char *base_url)
int http_get_info_packs(const char *base_url, struct packed_git **packs_head)
void release_http_pack_request(struct http_pack_request *preq)
int finish_http_pack_request(struct http_pack_request *preq)
struct http_pack_request *new_http_pack_request(
struct packed_git *target, const char *base_url)
static size_t fwrite_sha1_file(char *ptr, size_t eltsize, size_t nmemb,
void *data)
struct http_object_request *new_http_object_request(const char *base_url,
unsigned char *sha1)
void process_http_object_request(struct http_object_request *freq)
int finish_http_object_request(struct http_object_request *freq)
void abort_http_object_request(struct http_object_request *freq)
void release_http_object_request(struct http_object_request *freq)
