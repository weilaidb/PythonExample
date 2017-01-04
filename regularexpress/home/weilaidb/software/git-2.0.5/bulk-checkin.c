static int pack_compression_level = Z_DEFAULT_COMPRESSION;
static struct bulk_checkin_state  state;
static void finish_bulk_checkin(struct bulk_checkin_state *state)
static int already_written(struct bulk_checkin_state *state, unsigned char sha1[])
static int stream_to_pack(struct bulk_checkin_state *state,
git_SHA_CTX *ctx, off_t *already_hashed_to,
int fd, size_t size, enum object_type type,
const char *path, unsigned flags)
static void prepare_to_stream(struct bulk_checkin_state *state,
unsigned flags)
static int deflate_to_pack(struct bulk_checkin_state *state,
unsigned char result_sha1[],
int fd, size_t size,
enum object_type type, const char *path,
unsigned flags)
int index_bulk_checkin(unsigned char *sha1,
int fd, size_t size, enum object_type type,
const char *path, unsigned flags)
void plug_bulk_checkin(void)
void unplug_bulk_checkin(void)
