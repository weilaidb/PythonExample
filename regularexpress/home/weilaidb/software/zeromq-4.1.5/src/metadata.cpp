zmq::metadata_t::metadata_t (const dict_t &dict) :
ref_cnt (1),
dict (dict)
zmq::metadata_t::~metadata_t ()
const char *zmq::metadata_t::get (const std::string &property) const
void zmq::metadata_t::add_ref ()
bool zmq::metadata_t::drop_ref ()
