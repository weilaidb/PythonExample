enum ;
static void print_packet(uint32_t *data, size_t length);
static void decode_link_packet(struct link_packet *packet, size_t length,
int include_flags, int exclude_flags);
static int run = 1;
sig_t sys_sigint_handler;
static char *option_nosy_device = "/dev/nosy";
static char *option_view = "packet";
static char *option_output;
static char *option_input;
static int option_hex;
static int option_iso;
static int option_cycle_start;
static int option_version;
static int option_verbose;
enum ;
static const struct poptOption options[] = ;
static void
sigint_handler(int signal_num)
static struct subaction *
subaction_create(uint32_t *data, size_t length)
static void
subaction_destroy(struct subaction *sa)
static struct list pending_transaction_list = ;
static struct link_transaction *
link_transaction_lookup(int request_node, int response_node, int tlabel)
static void
link_transaction_destroy(struct link_transaction *t)
struct protocol_decoder ;
static const struct protocol_decoder protocol_decoders[] = ;
static void
handle_transaction(struct link_transaction *t)
static void
clear_pending_transaction_list(void)
static const char * const tcode_names[] = ;
static const char * const ack_names[] = ;
static const char * const rcode_names[] = ;
static const char * const retry_names[] = ;
enum ;
struct packet_info ;
struct packet_field ;
#define COMMON_REQUEST_FIELDS						\
,			\
,						\
,		\
,	\
,				\
,			\
#define COMMON_RESPONSE_FIELDS						\
,						\
,						\
,		\
,				\
,				\
,						\
static const struct packet_field read_quadlet_request_fields[] = ;
static const struct packet_field read_quadlet_response_fields[] = ;
static const struct packet_field read_block_request_fields[] = ;
static const struct packet_field block_response_fields[] = ;
static const struct packet_field write_quadlet_request_fields[] = ;
static const struct packet_field block_request_fields[] = ;
static const struct packet_field write_response_fields[] = ;
static const struct packet_field iso_data_fields[] = ;
static const struct packet_info packet_info[] = ;
static int
handle_request_packet(uint32_t *data, size_t length)
static int
handle_response_packet(uint32_t *data, size_t length)
static int
handle_packet(uint32_t *data, size_t length)
static unsigned int
get_bits(struct link_packet *packet, int offset, int width)
#if __BYTE_ORDER == __LITTLE_ENDIAN
#define byte_index(i) ((i) ^ 3)
#elif __BYTE_ORDER == __BIG_ENDIAN
#define byte_index(i) (i)
#error unsupported byte order.
static void
dump_data(unsigned char *data, int length)
static void
decode_link_packet(struct link_packet *packet, size_t length,
int include_flags, int exclude_flags)
static void
print_packet(uint32_t *data, size_t length)
#define HIDE_CURSOR	"\033[?25l"
#define SHOW_CURSOR	"\033[?25h"
#define CLEAR		"\033[H\033[2J"
static void
print_stats(uint32_t *data, size_t length)
static struct termios saved_attributes;
static void
reset_input_mode(void)
static void
set_input_mode(void)
int main(int argc, const char *argv[])
