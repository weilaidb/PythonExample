#define LOCAL_ADDRESS 0xc0a80081
#define LOCAL_PORT    1037
typedef enum  MMSCSPacketType;
typedef enum  MMSSCPacketType;
typedef struct MMSTContext  MMSTContext;
static void start_command_packet(MMSTContext *mmst, MMSCSPacketType packet_type)
static void insert_command_prefixes(MMSContext *mms,
uint32_t prefix1, uint32_t prefix2)
static int send_command_packet(MMSTContext *mmst)
static int mms_put_utf16(MMSContext *mms, const uint8_t *src)
static int send_time_test_data(MMSTContext *mmst)
static int send_protocol_select(MMSTContext *mmst)
static int send_media_file_request(MMSTContext *mmst)
static void handle_packet_stream_changing_type(MMSTContext *mmst)
static int send_keepalive_packet(MMSTContext *mmst)
static void pad_media_packet(MMSContext *mms)
static MMSSCPacketType get_tcp_server_response(MMSTContext *mmst)
static int mms_safe_send_recv(MMSTContext *mmst,
int (*send_fun)(MMSTContext *mmst),
const MMSSCPacketType expect_type)
static int send_media_header_request(MMSTContext *mmst)
static int send_startup_packet(MMSTContext *mmst)
static int send_stream_selection_request(MMSTContext *mmst)
static int send_close_packet(MMSTContext *mmst)
static int mms_close(URLContext *h)
static int send_media_packet_request(MMSTContext *mmst)
static void clear_stream_buffers(MMSContext *mms)
static int mms_open(URLContext *h, const char *uri, int flags)
static int mms_read(URLContext *h, uint8_t *buf, int size)
URLProtocol ff_mmst_protocol = ;
