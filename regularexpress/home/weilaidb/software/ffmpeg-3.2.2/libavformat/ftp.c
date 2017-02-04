#define CONTROL_BUFFER_SIZE 1024
#define DIR_BUFFER_SIZE 4096
typedef enum  FTPState;
typedef enum  FTPListingMethod;
typedef struct  FTPContext;
OFFSET offsetof(FTPContext, x)
#define D AV_OPT_FLAG_DECODING_PARAM
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass ftp_context_class = ;
ftp_close;
ftp_getc
ftp_get_line
ftp_status
ftp_send_command
ftp_close_data_connection
ftp_close_both_connections
ftp_auth
ftp_passive_mode_epsv
ftp_passive_mode
ftp_current_dir
ftp_file_size
ftp_retrieve
ftp_store
ftp_type
ftp_restart
ftp_set_dir
ftp_list_mlsd
ftp_list_nlst
ftp_has_feature;
ftp_list
ftp_has_feature
ftp_features
ftp_connect_control_connection
ftp_connect_data_connection
ftp_abort
ftp_connect
ftp_open
ftp_seek
ftp_read
ftp_write
ftp_close
ftp_get_file_handle
ftp_shutdown
ftp_open_dir
ftp_parse_date
ftp_parse_entry_nlst
ftp_parse_entry_mlsd
ftp_parse_entry
ftp_read_dir
ftp_close_dir
ftp_delete
ftp_move
const URLProtocol ff_ftp_protocol = ;
