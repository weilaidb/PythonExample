#define GNOME_KEYRING_DEFAULT NULL
#define GNOME_KEYRING_RESULT_NO_MATCH GNOME_KEYRING_RESULT_DENIED
#define gnome_keyring_memory_alloc g_malloc
#define gnome_keyring_memory_free gnome_keyring_free_password
#define gnome_keyring_memory_strdup g_strdup
static const char *gnome_keyring_result_to_message(GnomeKeyringResult result)
#if GLIB_MAJOR_VERSION == 2 && GLIB_MINOR_VERSION < 8
static void gnome_keyring_done_cb(GnomeKeyringResult result, gpointer user_data)
static void wait_for_request_completion(int *done)
static GnomeKeyringResult gnome_keyring_item_delete_sync(const char *keyring, guint32 id)
struct credential ;
#define CREDENTIAL_INIT
typedef int (*credential_op_cb)(struct credential *);
struct credential_operation ;
#define CREDENTIAL_OP_END
static char *keyring_object(struct credential *c)
static int keyring_get(struct credential *c)
static int keyring_store(struct credential *c)
static int keyring_erase(struct credential *c)
static struct credential_operation const credential_helper_ops[] = ;
static void credential_init(struct credential *c)
static void credential_clear(struct credential *c)
static int credential_read(struct credential *c)
static void credential_write_item(FILE *fp, const char *key, const char *value)
static void credential_write(const struct credential *c)
static void usage(const char *name)
int main(int argc, char *argv[])
