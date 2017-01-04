int zmq::pipepair (class object_t *parents_ [2], class pipe_t* pipes_ [2],
int hwms_ [2], bool conflate_ [2])
zmq::pipe_t::pipe_t (object_t *parent_, upipe_t *inpipe_, upipe_t *outpipe_,
int inhwm_, int outhwm_, bool conflate_) :
object_t (parent_),
inpipe (inpipe_),
outpipe (outpipe_),
in_active (true),
out_active (true),
hwm (outhwm_),
lwm (compute_lwm (inhwm_)),
msgs_read (0),
msgs_written (0),
peers_msgs_read (0),
peer (NULL),
sink (NULL),
state (active),
delay (true),
conflate (conflate_)
zmq::pipe_t::~pipe_t ()
void zmq::pipe_t::set_peer (pipe_t *peer_)
void zmq::pipe_t::set_event_sink (i_pipe_events *sink_)
void zmq::pipe_t::set_identity (const blob_t &identity_)
zmq::blob_t zmq::pipe_t::get_identity ()
zmq::blob_t zmq::pipe_t::get_credential () const
bool zmq::pipe_t::check_read ()
bool zmq::pipe_t::read (msg_t *msg_)
bool zmq::pipe_t::check_write ()
bool zmq::pipe_t::write (msg_t *msg_)
void zmq::pipe_t::rollback ()
void zmq::pipe_t::flush ()
void zmq::pipe_t::process_activate_read ()
void zmq::pipe_t::process_activate_write (uint64_t msgs_read_)
void zmq::pipe_t::process_hiccup (void *pipe_)
void zmq::pipe_t::process_pipe_term ()
void zmq::pipe_t::process_pipe_term_ack ()
void zmq::pipe_t::set_nodelay ()
void zmq::pipe_t::terminate (bool delay_)
bool zmq::pipe_t::is_delimiter (const msg_t &msg_)
int zmq::pipe_t::compute_lwm (int hwm_)
void zmq::pipe_t::process_delimiter ()
void zmq::pipe_t::hiccup ()
void zmq::pipe_t::set_hwms (int inhwm_, int outhwm_)
bool zmq::pipe_t::check_hwm () const
