#define MAX_TST_PACKETS 128
#define SLEEPTIME_50_MS 50000
#define SLEEPTIME_10_MS 10000
typedef struct FailingMuxerPacketData  FailingMuxerPacketData;
typedef struct FailingMuxerContext  FailingMuxerContext;
static int failing_write_header(AVFormatContext *avf)
static int failing_write_packet(AVFormatContext *avf, AVPacket *pkt)
static int failing_write_trailer(AVFormatContext *avf)
static void failing_deinit(AVFormatContext *avf)
#define OFFSET(x) offsetof(FailingMuxerContext, x)
static const AVOption options[] = ;
static const AVClass failing_muxer_class = ;
AVOutputFormat tst_failing_muxer = ;
static int prepare_packet(AVPacket *pkt,const FailingMuxerPacketData *pkt_data, int64_t pts)
static int initialize_fifo_tst_muxer_chain(AVFormatContext **oc)
static int fifo_basic_test(AVFormatContext *oc, AVDictionary **opts,
const FailingMuxerPacketData *pkt_data)
static int fifo_write_header_err_tst(AVFormatContext *oc, AVDictionary **opts,
const FailingMuxerPacketData *pkt_data)
static int fifo_overflow_drop_test(AVFormatContext *oc, AVDictionary **opts,
const FailingMuxerPacketData *data)
typedef struct TestCase  TestCase;
#define BUFFER_SIZE 64
static int run_test(const TestCase *test)
const TestCase tests[] = ;
int main(int argc, char *argv[])
