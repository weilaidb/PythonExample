#if TMS32060
#define MAX_RELOS_PER_PASS	4
static int priv_tramp_sect_tgt_alloc(struct dload_state *dlthis)
static u8 priv_h2a(u8 value)
static void priv_tramp_sym_gen_name(u32 value, char *dst)
static struct tramp_string *priv_tramp_string_create(struct dload_state *dlthis,
u32 str_len, char *str)
static struct tramp_string *priv_tramp_string_find(struct dload_state *dlthis,
char *str)
static int priv_string_tbl_finalize(struct dload_state *dlthis)
static u32 priv_tramp_sect_alloc(struct dload_state *dlthis, u32 tramp_size)
static struct tramp_sym *priv_tramp_sym_create(struct dload_state *dlthis,
u32 str_index,
struct local_symbol *tmp_sym)
static struct tramp_sym *priv_tramp_sym_get(struct dload_state *dlthis,
u32 string_index)
static struct tramp_sym *priv_tramp_sym_find(struct dload_state *dlthis,
char *string)
static int priv_tramp_sym_finalize(struct dload_state *dlthis)
static int priv_tgt_img_gen(struct dload_state *dlthis, u32 base,
u32 gen_index, struct tramp_sym *new_ext_sym)
static int priv_pkt_relo(struct dload_state *dlthis, tgt_au_t * data,
struct reloc_record_t *rp[], u32 relo_count)
static int priv_tramp_pkt_finalize(struct dload_state *dlthis)
static int priv_dup_pkt_finalize(struct dload_state *dlthis)
static struct tramp_img_dup_pkt *priv_dup_find(struct dload_state *dlthis,
s16 secnn, u32 image_offset)
static int priv_img_pkt_dup(struct dload_state *dlthis,
s16 secnn, u32 image_offset,
struct image_packet_t *ipacket,
struct reloc_record_t *rp,
struct tramp_sym *new_tramp_sym)
bool dload_tramp_avail(struct dload_state *dlthis, struct reloc_record_t *rp)
int dload_tramp_generate(struct dload_state *dlthis, s16 secnn,
u32 image_offset, struct image_packet_t *ipacket,
struct reloc_record_t *rp)
int dload_tramp_pkt_udpate(struct dload_state *dlthis, s16 secnn,
u32 image_offset, struct image_packet_t *ipacket)
int dload_tramp_finalize(struct dload_state *dlthis)
void dload_tramp_cleanup(struct dload_state *dlthis)
