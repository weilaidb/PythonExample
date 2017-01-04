static int
cifs_spnego_key_instantiate(struct key *key, const void *data, size_t datalen)
static void
cifs_spnego_key_destroy(struct key *key)
struct key_type cifs_spnego_key_type = ;
#define MAX_VER_STR_LEN		8
#define MAX_MECH_STR_LEN	13
#define HOST_KEY_LEN		5
#define IP_KEY_LEN		5
#define UID_KEY_LEN		7
#define CREDUID_KEY_LEN		11
#define USER_KEY_LEN		6
#define PID_KEY_LEN		7
struct key *
cifs_get_spnego_key(struct cifs_ses *sesInfo)
