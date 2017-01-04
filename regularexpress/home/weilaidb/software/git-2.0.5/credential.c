void credential_init(struct credential *c)
void credential_clear(struct credential *c)
int credential_match(const struct credential *want,
const struct credential *have)
static int credential_config_callback(const char *var, const char *value,
void *data)
static int proto_is_http(const char *s)
static void credential_apply_config(struct credential *c)
static void credential_describe(struct credential *c, struct strbuf *out)
static char *credential_ask_one(const char *what, struct credential *c,
int flags)
static void credential_getpass(struct credential *c)
int credential_read(struct credential *c, FILE *fp)
static void credential_write_item(FILE *fp, const char *key, const char *value)
void credential_write(const struct credential *c, FILE *fp)
static int run_credential_helper(struct credential *c,
const char *cmd,
int want_output)
static int credential_do(struct credential *c, const char *helper,
const char *operation)
void credential_fill(struct credential *c)
void credential_approve(struct credential *c)
void credential_reject(struct credential *c)
void credential_from_url(struct credential *c, const char *url)
