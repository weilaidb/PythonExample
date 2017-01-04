zmq::sub_t::sub_t (class ctx_t *parent_, uint32_t tid_, int sid_) :
xsub_t (parent_, tid_, sid_)
zmq::sub_t::~sub_t ()
int zmq::sub_t::xsetsockopt (int option_, const void *optval_,
size_t optvallen_)
int zmq::sub_t::xsend (msg_t *)
bool zmq::sub_t::xhas_out ()
