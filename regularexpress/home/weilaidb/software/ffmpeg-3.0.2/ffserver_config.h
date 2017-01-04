#define FFSERVER_CONFIG_H
#define FFSERVER_MAX_STREAMS 20
enum FFServerStreamType ;
enum FFServerIPAddressAction ;
typedef struct FFServerIPAddressACL  FFServerIPAddressACL;
typedef struct FFServerStream  FFServerStream;
typedef struct FFServerConfig  FFServerConfig;
void ffserver_get_arg(char *buf, int buf_size, const char **pp);
void ffserver_parse_acl_row(FFServerStream *stream, FFServerStream* feed,
FFServerIPAddressACL *ext_acl,
const char *p, const char *filename, int line_num);
int ffserver_parse_ffconfig(const char *filename, FFServerConfig *config);
void ffserver_free_child_args(void *argsp);
