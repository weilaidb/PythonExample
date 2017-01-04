#if defined ZMQ_HAVE_WINDOWS
zmq::trie_t::trie_t () :
refcnt (0),
min (0),
count (0),
live_nodes (0)
zmq::trie_t::~trie_t ()
bool zmq::trie_t::add (unsigned char *prefix_, size_t size_)
bool zmq::trie_t::rm (unsigned char *prefix_, size_t size_)
bool zmq::trie_t::check (unsigned char *data_, size_t size_)
void zmq::trie_t::apply (void (*func_) (unsigned char *data_, size_t size_,
void *arg_), void *arg_)
void zmq::trie_t::apply_helper (
unsigned char **buff_, size_t buffsize_, size_t maxbuffsize_,
void (*func_) (unsigned char *data_, size_t size_, void *arg_), void *arg_)
bool zmq::trie_t::is_redundant () const
