static void
ar6000_htc_raw_read_cb(void *Context, struct htc_packet *pPacket)
{
struct ar6_softc        *ar = (struct ar6_softc *)Context;
raw_htc_buffer    *busy;
HTC_RAW_STREAM_ID streamID;
AR_RAW_HTC_T *arRaw = ar->arRawHtc;
busy = (raw_htc_buffer *)pPacket->pPktContext;
A_ASSERT(busy != NULL);
if (pPacket->Status == A_ECANCELED)
streamID = arEndpoint2RawStreamID(ar,pPacket->Endpoint);
A_ASSERT(streamID != HTC_RAW_STREAM_NOT_MAPPED);
if (down_trylock(&arRaw->raw_htc_read_sem[streamID]))
static void
ar6000_htc_raw_write_cb(void *Context, struct htc_packet *pPacket)
{
struct ar6_softc          *ar = (struct ar6_softc  *)Context;
raw_htc_buffer      *free;
HTC_RAW_STREAM_ID   streamID;
AR_RAW_HTC_T *arRaw = ar->arRawHtc;
free = (raw_htc_buffer *)pPacket->pPktContext;
A_ASSERT(free != NULL);
if (pPacket->Status == A_ECANCELED)
streamID = arEndpoint2RawStreamID(ar,pPacket->Endpoint);
A_ASSERT(streamID != HTC_RAW_STREAM_NOT_MAPPED);
if (down_trylock(&arRaw->raw_htc_write_sem[streamID]))
static int ar6000_connect_raw_service(struct ar6_softc        *ar,
HTC_RAW_STREAM_ID StreamID)
int ar6000_htc_raw_open(struct ar6_softc *ar)
int ar6000_htc_raw_close(struct ar6_softc *ar)
raw_htc_buffer *
get_filled_buffer(struct ar6_softc *ar, HTC_RAW_STREAM_ID StreamID)
ssize_t ar6000_htc_raw_read(struct ar6_softc *ar, HTC_RAW_STREAM_ID StreamID,
char __user *buffer, size_t length)
static raw_htc_buffer *
get_free_buffer(struct ar6_softc *ar, HTC_ENDPOINT_ID StreamID)
ssize_t ar6000_htc_raw_write(struct ar6_softc *ar, HTC_RAW_STREAM_ID StreamID,
char __user *buffer, size_t length)
