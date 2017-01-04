static const char content_type[] = "Content-Type";
static const char content_length[] = "Content-Length";
static const char last_modified[] = "Last-Modified";
static int getanyfile = 1;
static struct string_list *query_params;
struct rpc_service ;
static struct rpc_service rpc_service[] = ;
static struct string_list *get_parameters(void)
static const char *get_parameter(const char *name)
__attribute__((format (printf, 2, 3)))
static void format_write(int fd, const char *fmt, ...)
static void http_status(unsigned code, const char *msg)
static void hdr_str(const char *name, const char *value)
static void hdr_int(const char *name, uintmax_t value)
static void hdr_date(const char *name, unsigned long when)
static void hdr_nocache(void)
static void hdr_cache_forever(void)
static void end_headers(void)
__attribute__((format (printf, 1, 2)))
static NORETURN void not_found(const char *err, ...)
__attribute__((format (printf, 1, 2)))
static NORETURN void forbidden(const char *err, ...)
static void select_getanyfile(void)
static void send_strbuf(const char *type, struct strbuf *buf)
static void send_local_file(const char *the_type, const char *name)
static void get_text_file(char *name)
static void get_loose_object(char *name)
static void get_pack_file(char *name)
static void get_idx_file(char *name)
static int http_config(const char *var, const char *value, void *cb)
static struct rpc_service *select_service(const char *name)
static void inflate_request(const char *prog_name, int out)
static void run_service(const char **argv)
static int show_text_ref(const char *name, const unsigned char *sha1,
int flag, void *cb_data)
static void get_info_refs(char *arg)
static int show_head_ref(const char *refname, const unsigned char *sha1,
int flag, void *cb_data)
static void get_head(char *arg)
static void get_info_packs(char *arg)
static void check_content_type(const char *accepted_type)
static void service_rpc(char *service_name)
static NORETURN void die_webcgi(const char *err, va_list params)
static char* getdir(void)
static struct service_cmd  services[] = ;
int main(int argc, char **argv)
