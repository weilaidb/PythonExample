#define HTTP_H
#undef USE_CURL_MULTI
#if LIBCURL_VERSION_NUM >= 0x071000
#define USE_CURL_MULTI
#define DEFAULT_MAX_REQUESTS 5
#if LIBCURL_VERSION_NUM < 0x070704
#define curl_global_cleanup() do  while (0)
#if LIBCURL_VERSION_NUM < 0x070800
#define curl_global_init(a) do  while (0)
#if (LIBCURL_VERSION_NUM < 0x070c04) || (LIBCURL_VERSION_NUM == 0x071000)
#define NO_CURL_EASY_DUPHANDLE
#if LIBCURL_VERSION_NUM < 0x070a03
#define CURLE_HTTP_RETURNED_ERROR CURLE_HTTP_NOT_FOUND
#if LIBCURL_VERSION_NUM < 0x070c03
#define NO_CURL_IOCTL
#if !defined(CURLOPT_USE_SSL) && defined(CURLOPT_FTP_SSL)
#define CURLOPT_USE_SSL CURLOPT_FTP_SSL
#define CURLUSESSL_TRY CURLFTPSSL_TRY
struct slot_results ;
struct active_request_slot ;
struct buffer ;
extern size_t fread_buffer(char *ptr, size_t eltsize, size_t nmemb, void *strbuf);
extern size_t fwrite_buffer(char *ptr, size_t eltsize, size_t nmemb, void *strbuf);
extern size_t fwrite_null(char *ptr, size_t eltsize, size_t nmemb, void *strbuf);
extern curlioerr ioctl_buffer(CURL *handle, int cmd, void *clientp);
extern struct active_request_slot *get_active_slot(void);
extern int start_active_slot(struct active_request_slot *slot);
extern void run_active_slot(struct active_request_slot *slot);
extern void finish_active_slot(struct active_request_slot *slot);
extern void finish_all_active_slots(void);
extern int handle_curl_result(struct slot_results *results);
int run_one_slot(struct active_request_slot *slot,
struct slot_results *results);
extern void fill_active_slots(void);
extern void add_fill_function(void *data, int (*fill)(void *));
extern void step_active_slots(void);
extern void http_init(struct remote *remote, const char *url,
int proactive_auth);
extern void http_cleanup(void);
extern int active_requests;
extern int http_is_verbose;
extern size_t http_post_buffer;
extern struct credential http_auth;
extern char curl_errorstr[CURL_ERROR_SIZE];
static inline int missing__target(int code, int result)
{
return
extern void append_remote_object_url(struct strbuf *buf, const char *url,
const char *hex,
int only_two_digit_prefix);
extern char *get_remote_object_url(const char *url, const char *hex,
int only_two_digit_prefix);
struct http_get_options ;
#define HTTP_OK			0
#define HTTP_MISSING_TARGET	1
#define HTTP_ERROR		2
#define HTTP_START_FAILED	3
#define HTTP_REAUTH	4
#define HTTP_NOAUTH	5
int http_get_strbuf(const char *url, struct strbuf *result, struct http_get_options *options);
extern int http_fetch_ref(const char *base, struct ref *ref);
extern int http_get_info_packs(const char *base_url,
struct packed_git **packs_head);
struct http_pack_request ;
extern struct http_pack_request *new_http_pack_request(
struct packed_git *target, const char *base_url);
extern int finish_http_pack_request(struct http_pack_request *preq);
extern void release_http_pack_request(struct http_pack_request *preq);
struct http_object_request ;
extern struct http_object_request *new_http_object_request(
const char *base_url, unsigned char *sha1);
extern void process_http_object_request(struct http_object_request *freq);
extern int finish_http_object_request(struct http_object_request *freq);
extern void abort_http_object_request(struct http_object_request *freq);
extern void release_http_object_request(struct http_object_request *freq);
