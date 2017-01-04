static void handle_basic_params(HTTPAuthState *state, const char *key,
int key_len, char **dest, int *dest_len)
static void handle_digest_params(HTTPAuthState *state, const char *key,
int key_len, char **dest, int *dest_len)
static void handle_digest_update(HTTPAuthState *state, const char *key,
int key_len, char **dest, int *dest_len)
static void choose_qop(char *qop, int size)
void ff_http_auth_handle_header(HTTPAuthState *state, const char *key,
const char *value)
static void update_md5_strings(struct AVMD5 *md5ctx, ...)
static char *make_digest_auth(HTTPAuthState *state, const char *username,
const char *password, const char *uri,
const char *method)
char *ff_http_auth_create_response(HTTPAuthState *state, const char *auth,
const char *path, const char *method)
