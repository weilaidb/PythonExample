#if defined ZMQ_HAVE_NORM
zmq::norm_engine_t::norm_engine_t(io_thread_t*     parent_,
const options_t& options_)
: io_object_t(parent_), zmq_session(NULL), options(options_),
norm_instance(NORM_INSTANCE_INVALID), norm_session(NORM_SESSION_INVALID),
is_sender(false), is_receiver(false),
zmq_encoder(0), norm_tx_stream(NORM_OBJECT_INVALID),
tx_first_msg(true), tx_more_bit(false),
zmq_output_ready(false), norm_tx_ready(false),
tx_index(0), tx_len(0),
zmq_input_ready(false)
zmq::norm_engine_t::~norm_engine_t()
int zmq::norm_engine_t::init(const char* network_, bool send, bool recv)
void zmq::norm_engine_t::shutdown()
void zmq::norm_engine_t::plug (io_thread_t* io_thread_, session_base_t *session_)
void zmq::norm_engine_t::unplug()
void zmq::norm_engine_t::terminate()
void zmq::norm_engine_t::restart_output()
void zmq::norm_engine_t::send_data()
void zmq::norm_engine_t::in_event()
void zmq::norm_engine_t::restart_input()
void zmq::norm_engine_t::recv_data(NormObjectHandle object)
zmq::norm_engine_t::NormRxStreamState::NormRxStreamState(NormObjectHandle normStream,
int64_t          maxMsgSize)
: norm_stream(normStream), max_msg_size(maxMsgSize),
in_sync(false), rx_ready(false), zmq_decoder(NULL), skip_norm_sync(false),
buffer_ptr(NULL), buffer_size(0), buffer_count(0),
prev(NULL), next(NULL), list(NULL)
zmq::norm_engine_t::NormRxStreamState::~NormRxStreamState()
bool zmq::norm_engine_t::NormRxStreamState::Init()
int zmq::norm_engine_t::NormRxStreamState::Decode()
zmq::norm_engine_t::NormRxStreamState::List::List()
: head(NULL), tail(NULL)
zmq::norm_engine_t::NormRxStreamState::List::~List()
void zmq::norm_engine_t::NormRxStreamState::List::Destroy()
void zmq::norm_engine_t::NormRxStreamState::List::Append(NormRxStreamState& item)
void zmq::norm_engine_t::NormRxStreamState::List::Remove(NormRxStreamState& item)
zmq::norm_engine_t::NormRxStreamState::List::Iterator::Iterator(const List& list)
: next_item(list.head)
zmq::norm_engine_t::NormRxStreamState* zmq::norm_engine_t::NormRxStreamState::List::Iterator::GetNextItem()
