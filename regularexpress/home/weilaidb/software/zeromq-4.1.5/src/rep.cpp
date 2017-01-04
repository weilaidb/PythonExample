zmq::rep_t::rep_t (class ctx_t *parent_, uint32_t tid_, int sid_) :
router_t (parent_, tid_, sid_),
sending_reply (false),
request_begins (true)
zmq::rep_t::~rep_t ()
int zmq::rep_t::xsend (msg_t *msg_)
int zmq::rep_t::xrecv (msg_t *msg_)
bool zmq::rep_t::xhas_in ()
bool zmq::rep_t::xhas_out ()
