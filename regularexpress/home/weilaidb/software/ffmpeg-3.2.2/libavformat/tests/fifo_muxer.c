#define MAX_TST_PACKETS 128
#define SLEEPTIME_50_MS 50000
#define SLEEPTIME_10_MS 10000
typedef struct FailingMuxerPacketData  FailingMuxerPacketData;
typedef struct FailingMuxerContext  FailingMuxerContext;
failing_write_header
failing_write_packet
failing_write_trailer
failing_deinit
OFFSET offsetof(FailingMuxerContext, x)
static const AVOption options[] = ;
static const AVClass failing_muxer_class = ;
AVOutputFormat tst_failing_muxer = ;
prepare_packet
initialize_fifo_tst_muxer_chain
fifo_basic_test
fifo_write_header_err_tst
fifo_overflow_drop_test
typedef struct TestCase  TestCase;
#define BUFFER_SIZE 64
run_test
const TestCase tests[] = ;
main
