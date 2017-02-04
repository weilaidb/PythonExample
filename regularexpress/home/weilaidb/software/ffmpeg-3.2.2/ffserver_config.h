#define FFSERVER_CONFIG_H
#define FFSERVER_MAX_STREAMS 20
enum FFServerStreamType ;
enum FFServerIPAddressAction ;
typedef struct FFServerIPAddressACL  FFServerIPAddressACL;
typedef struct FFServerStream  FFServerStream;
typedef struct FFServerConfig  FFServerConfig;
ffserver_get_arg;
ffserver_parse_acl_row;
ffserver_parse_ffconfig;
ffserver_free_child_args;
