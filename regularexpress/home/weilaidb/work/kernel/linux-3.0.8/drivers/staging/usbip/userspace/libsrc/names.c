struct vendor ;
struct product ;
struct class ;
struct subclass ;
struct protocol ;
struct audioterminal ;
struct genericstrtable ;
#define HASH1  0x10
#define HASH2  0x02
#define HASHSZ 16
static unsigned int hashnum(unsigned int num)
static struct vendor *vendors[HASHSZ] = ;
static struct product *products[HASHSZ] = ;
static struct class *classes[HASHSZ] = ;
static struct subclass *subclasses[HASHSZ] = ;
static struct protocol *protocols[HASHSZ] = ;
static struct audioterminal *audioterminals[HASHSZ] = ;
static struct genericstrtable *hiddescriptors[HASHSZ] = ;
static struct genericstrtable *reports[HASHSZ] = ;
static struct genericstrtable *huts[HASHSZ] = ;
static struct genericstrtable *biass[HASHSZ] = ;
static struct genericstrtable *physdess[HASHSZ] = ;
static struct genericstrtable *hutus[HASHSZ] = ;
static struct genericstrtable *langids[HASHSZ] = ;
static struct genericstrtable *countrycodes[HASHSZ] = ;
static const char *names_genericstrtable(struct genericstrtable *t[HASHSZ], unsigned int index)
const char *names_hid(u_int8_t hidd)
const char *names_reporttag(u_int8_t rt)
const char *names_huts(unsigned int data)
const char *names_hutus(unsigned int data)
const char *names_langid(u_int16_t langid)
const char *names_physdes(u_int8_t ph)
const char *names_bias(u_int8_t b)
const char *names_countrycode(unsigned int countrycode)
const char *names_vendor(u_int16_t vendorid)
const char *names_product(u_int16_t vendorid, u_int16_t productid)
const char *names_class(u_int8_t classid)
const char *names_subclass(u_int8_t classid, u_int8_t subclassid)
const char *names_protocol(u_int8_t classid, u_int8_t subclassid, u_int8_t protocolid)
const char *names_audioterminal(u_int16_t termt)
struct pool ;
static struct pool *pool_head = NULL;
static void *my_malloc(size_t size)
void names_free(void)
static int new_vendor(const char *name, u_int16_t vendorid)
static int new_product(const char *name, u_int16_t vendorid, u_int16_t productid)
static int new_class(const char *name, u_int8_t classid)
static int new_subclass(const char *name, u_int8_t classid, u_int8_t subclassid)
static int new_protocol(const char *name, u_int8_t classid, u_int8_t subclassid, u_int8_t protocolid)
static int new_audioterminal(const char *name, u_int16_t termt)
static int new_genericstrtable(struct genericstrtable *t[HASHSZ], const char *name, unsigned int index)
static int new_hid(const char *name, u_int8_t hidd)
static int new_reporttag(const char *name, u_int8_t rt)
static int new_huts(const char *name, unsigned int data)
static int new_hutus(const char *name, unsigned int data)
static int new_langid(const char *name, u_int16_t langid)
static int new_physdes(const char *name, u_int8_t ph)
static int new_bias(const char *name, u_int8_t b)
static int new_countrycode(const char *name, unsigned int countrycode)
#define DBG(x)
static void parse(FILE *f)
int names_init(char *n)
