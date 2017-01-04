#define AVFORMAT_HTTPAUTH_H
typedef enum HTTPAuthType  HTTPAuthType;
typedef struct DigestParams  DigestParams;
typedef struct HTTPAuthState  HTTPAuthState;
void ff_http_auth_handle_header(HTTPAuthState *state, const char *key,
const char *value);
char *ff_http_auth_create_response(HTTPAuthState *state, const char *auth,
const char *path, const char *method);
