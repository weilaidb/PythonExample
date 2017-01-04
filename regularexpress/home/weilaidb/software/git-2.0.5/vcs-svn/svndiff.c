#define INSN_MASK	0xc0
#define INSN_COPYFROM_SOURCE	0x00
#define INSN_COPYFROM_TARGET	0x40
#define INSN_COPYFROM_DATA	0x80
#define OPERAND_MASK	0x3f
#define VLI_CONTINUE	0x80
#define VLI_DIGIT_MASK	0x7f
#define VLI_BITS_PER_DIGIT 7
struct window ;
#define WINDOW_INIT(w)
static void window_release(struct window *ctx)
static int write_strbuf(struct strbuf *sb, FILE *out)
static int error_short_read(struct line_buffer *input)
static int read_chunk(struct line_buffer *delta, off_t *delta_len,
struct strbuf *buf, size_t len)
static int read_magic(struct line_buffer *in, off_t *len)
static int read_int(struct line_buffer *in, uintmax_t *result, off_t *len)
static int parse_int(const char **buf, size_t *result, const char *end)
static int read_offset(struct line_buffer *in, off_t *result, off_t *len)
static int read_length(struct line_buffer *in, size_t *result, off_t *len)
static int copyfrom_source(struct window *ctx, const char **instructions,
size_t nbytes, const char *insns_end)
static int copyfrom_target(struct window *ctx, const char **instructions,
size_t nbytes, const char *instructions_end)
static int copyfrom_data(struct window *ctx, size_t *data_pos, size_t nbytes)
static int parse_first_operand(const char **buf, size_t *out, const char *end)
static int execute_one_instruction(struct window *ctx,
const char **instructions, size_t *data_pos)
static int apply_window_in_core(struct window *ctx)
static int apply_one_window(struct line_buffer *delta, off_t *delta_len,
struct sliding_view *preimage, FILE *out)
int svndiff0_apply(struct line_buffer *delta, off_t delta_len,
struct sliding_view *preimage, FILE *postimage)
