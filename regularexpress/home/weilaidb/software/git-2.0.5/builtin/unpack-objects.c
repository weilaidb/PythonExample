static int dry_run, quiet, recover, has_errors, strict;
static const char unpack_usage[] = "git unpack-objects [-n] [-q] [-r] [--strict] < pack-file";
static unsigned char buffer[4096];
static unsigned int offset, len;
static off_t consumed_bytes;
static git_SHA_CTX ctx;
struct obj_buffer ;
static struct decoration obj_decorate;
static struct obj_buffer *lookup_object_buffer(struct object *base)
static void add_object_buffer(struct object *object, char *buffer, unsigned long size)
static void *fill(int min)
static void use(int bytes)
static void *get_data(unsigned long size)
struct delta_info ;
static struct delta_info *delta_list;
static void add_delta_to_list(unsigned nr, unsigned const char *base_sha1,
off_t base_offset,
void *delta, unsigned long size)
struct obj_info ;
#define FLAG_OPEN (1u<<20)
#define FLAG_WRITTEN (1u<<21)
static struct obj_info *obj_list;
static unsigned nr_objects;
static void write_cached_object(struct object *obj)
static int check_object(struct object *obj, int type, void *data)
static void write_rest(void)
static void added_object(unsigned nr, enum object_type type,
void *data, unsigned long size);
static void write_object(unsigned nr, enum object_type type,
void *buf, unsigned long size)
static void resolve_delta(unsigned nr, enum object_type type,
void *base, unsigned long base_size,
void *delta, unsigned long delta_size)
static void added_object(unsigned nr, enum object_type type,
void *data, unsigned long size)
static void unpack_non_delta_entry(enum object_type type, unsigned long size,
unsigned nr)
static int resolve_against_held(unsigned nr, const unsigned char *base,
void *delta_data, unsigned long delta_size)
static void unpack_delta_entry(enum object_type type, unsigned long delta_size,
unsigned nr)
static void unpack_one(unsigned nr)
static void unpack_all(void)
int cmd_unpack_objects(int argc, const char **argv, const char *prefix)
