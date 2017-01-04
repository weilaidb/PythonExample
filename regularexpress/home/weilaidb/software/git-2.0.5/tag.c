#define PGP_SIGNATURE "-----BEGIN PGP SIGNATURE-----"
#define PGP_MESSAGE "-----BEGIN PGP MESSAGE-----"
const char *tag_type = "tag";
struct object *deref_tag(struct object *o, const char *warn, int warnlen)
struct object *deref_tag_noverify(struct object *o)
struct tag *lookup_tag(const unsigned char *sha1)
static unsigned long parse_tag_date(const char *buf, const char *tail)
int parse_tag_buffer(struct tag *item, const void *data, unsigned long size)
int parse_tag(struct tag *item)
size_t parse_signature(const char *buf, unsigned long size)
