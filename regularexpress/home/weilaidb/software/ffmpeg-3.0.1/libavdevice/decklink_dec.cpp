extern "C"
#if CONFIG_LIBZVBI
static uint8_t calc_parity_and_line_offset(int line)
int teletext_data_unit_from_vbi_data(int line, uint8_t *src, uint8_t *tgt)
static void avpacket_queue_init(AVFormatContext *avctx, AVPacketQueue *q)
static void avpacket_queue_flush(AVPacketQueue *q)
static void avpacket_queue_end(AVPacketQueue *q)
static unsigned long long avpacket_queue_size(AVPacketQueue *q)
static int avpacket_queue_put(AVPacketQueue *q, AVPacket *pkt)
static int avpacket_queue_get(AVPacketQueue *q, AVPacket *pkt, int block)
class decklink_input_callback : public IDeckLinkInputCallback
;
decklink_input_callback::decklink_input_callback(AVFormatContext *_avctx) : m_refCount(0)
decklink_input_callback::~decklink_input_callback()
ULONG decklink_input_callback::AddRef(void)
ULONG decklink_input_callback::Release(void)
HRESULT decklink_input_callback::VideoInputFrameArrived(
IDeckLinkVideoInputFrame *videoFrame, IDeckLinkAudioInputPacket *audioFrame)
HRESULT decklink_input_callback::VideoInputFormatChanged(
BMDVideoInputFormatChangedEvents events, IDeckLinkDisplayMode *mode,
BMDDetectedVideoInputFormatFlags)
static HRESULT decklink_start_input(AVFormatContext *avctx)
extern "C"
