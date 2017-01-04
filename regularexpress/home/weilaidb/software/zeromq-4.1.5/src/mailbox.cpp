zmq::mailbox_t::mailbox_t ()
zmq::mailbox_t::~mailbox_t ()
zmq::fd_t zmq::mailbox_t::get_fd () const
void zmq::mailbox_t::send (const command_t &cmd_)
int zmq::mailbox_t::recv (command_t *cmd_, int timeout_)
