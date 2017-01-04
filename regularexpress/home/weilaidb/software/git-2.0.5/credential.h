#define CREDENTIAL_H
struct credential ;
#define CREDENTIAL_INIT
void credential_init(struct credential *);
void credential_clear(struct credential *);
void credential_fill(struct credential *);
void credential_approve(struct credential *);
void credential_reject(struct credential *);
int credential_read(struct credential *, FILE *);
void credential_write(const struct credential *, FILE *);
void credential_from_url(struct credential *, const char *url);
int credential_match(const struct credential *have,
const struct credential *want);
