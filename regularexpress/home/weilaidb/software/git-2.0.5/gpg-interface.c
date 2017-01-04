static char *configured_signing_key;
static const char *gpg_program = "gpg";
void set_signing_key(const char *key)
int git_gpg_config(const char *var, const char *value, void *cb)
const char *get_signing_key(void)
int sign_buffer(struct strbuf *buffer, struct strbuf *signature, const char *signing_key)
int verify_signed_buffer(const char *payload, size_t payload_size,
const char *signature, size_t signature_size,
struct strbuf *gpg_output, struct strbuf *gpg_status)
