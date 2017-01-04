#define MD4_DIGEST_SIZE		16
#define MD4_HMAC_BLOCK_SIZE	64
#define MD4_BLOCK_WORDS		16
#define MD4_HASH_WORDS		4
struct md4_ctx ;
static inline uint32_t lshift(uint32_t x, unsigned int s)
static inline uint32_t F(uint32_t x, uint32_t y, uint32_t z)
static inline uint32_t G(uint32_t x, uint32_t y, uint32_t z)
static inline uint32_t H(uint32_t x, uint32_t y, uint32_t z)
#define ROUND1(a,b,c,d,k,s) (a = lshift(a + F(b,c,d) + k, s))
#define ROUND2(a,b,c,d,k,s) (a = lshift(a + G(b,c,d) + k + (uint32_t)0x5A827999,s))
#define ROUND3(a,b,c,d,k,s) (a = lshift(a + H(b,c,d) + k + (uint32_t)0x6ED9EBA1,s))
static inline void le32_to_cpu_array(uint32_t *buf, unsigned int words)
static inline void cpu_to_le32_array(uint32_t *buf, unsigned int words)
static void md4_transform(uint32_t *hash, uint32_t const *in)
static inline void md4_transform_helper(struct md4_ctx *ctx)
static void md4_init(struct md4_ctx *mctx)
static void md4_update(struct md4_ctx *mctx,
const unsigned char *data, unsigned int len)
static void md4_final_ascii(struct md4_ctx *mctx, char *out, unsigned int len)
static inline void add_char(unsigned char c, struct md4_ctx *md)
static int parse_string(const char *file, unsigned long len,
struct md4_ctx *md)
static int parse_comment(const char *file, unsigned long len)
static int parse_file(const char *fname, struct md4_ctx *md)
static int is_static_library(const char *objfile)
static int parse_source_files(const char *objfile, struct md4_ctx *md)
void get_src_version(const char *modname, char sum[], unsigned sumlen)
static void write_version(const char *filename, const char *sum,
unsigned long offset)
static int strip_rcs_crap(char *version)
void maybe_frob_rcs_version(const char *modfilename,
char *version,
void *modinfo,
unsigned long version_offset)
