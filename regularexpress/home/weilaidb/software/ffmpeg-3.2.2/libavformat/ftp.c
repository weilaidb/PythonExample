#define CONTROL_BUFFER_SIZE 1024
#define DIR_BUFFER_SIZE 4096
typedef enum  FTPState;
typedef enum  FTPListingMethod;
typedef struct  FTPContext;
#define OFFSET(x) offsetof(FTPContext, x)
#define D AV_OPT_FLAG_DECODING_PARAM
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass ftp_context_class = ;
static int ftp_close(URLContext *h);
static int ftp_getc(FTPContext *s)
static int ftp_get_line(FTPContext *s, char *line, int line_size)
static int ftp_status(FTPContext *s, char **line, const int response_codes[])
static int ftp_send_command(FTPContext *s, const char *command,
const int response_codes[], char **response)
static void ftp_close_data_connection(FTPContext *s)
static void ftp_close_both_connections(FTPContext *s)
static int ftp_auth(FTPContext *s)
static int ftp_passive_mode_epsv(FTPContext *s)
static int ftp_passive_mode(FTPContext *s)
static int ftp_current_dir(FTPContext *s)
static int ftp_file_size(FTPContext *s)
static int ftp_retrieve(FTPContext *s)
static int ftp_store(FTPContext *s)
static int ftp_type(FTPContext *s)
static int ftp_restart(FTPContext *s, int64_t pos)
static int ftp_set_dir(FTPContext *s)
static int ftp_list_mlsd(FTPContext *s)
static int ftp_list_nlst(FTPContext *s)
static int ftp_has_feature(FTPContext *s, const char *feature_name);
static int ftp_list(FTPContext *s)
static int ftp_has_feature(FTPContext *s, const char *feature_name)
static int ftp_features(FTPContext *s)
static int ftp_connect_control_connection(URLContext *h)
static int ftp_connect_data_connection(URLContext *h)
static int ftp_abort(URLContext *h)
static int ftp_connect(URLContext *h, const char *url)
static int ftp_open(URLContext *h, const char *url, int flags)
static int64_t ftp_seek(URLContext *h, int64_t pos, int whence)
static int ftp_read(URLContext *h, unsigned char *buf, int size)
static int ftp_write(URLContext *h, const unsigned char *buf, int size)
static int ftp_close(URLContext *h)
static int ftp_get_file_handle(URLContext *h)
static int ftp_shutdown(URLContext *h, int flags)
static int ftp_open_dir(URLContext *h)
static int64_t ftp_parse_date(const char *date)
static int ftp_parse_entry_nlst(char *line, AVIODirEntry *next)
static int ftp_parse_entry_mlsd(char *mlsd, AVIODirEntry *next)
static int ftp_parse_entry(URLContext *h, char *line, AVIODirEntry *next)
static int ftp_read_dir(URLContext *h, AVIODirEntry **next)
static int ftp_close_dir(URLContext *h)
static int ftp_delete(URLContext *h)
static int ftp_move(URLContext *h_src, URLContext *h_dst)
const URLProtocol ff_ftp_protocol = ;
