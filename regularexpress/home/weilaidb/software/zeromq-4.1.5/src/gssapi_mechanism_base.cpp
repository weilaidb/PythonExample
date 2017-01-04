zmq::gssapi_mechanism_base_t::gssapi_mechanism_base_t (const options_t & options_) :
mechanism_t(options_),
send_tok (),
recv_tok (),
target_name (GSS_C_NO_NAME),
principal_name (NULL),
maj_stat (GSS_S_COMPLETE),
min_stat (0),
init_sec_min_stat (0),
ret_flags (0),
gss_flags (GSS_C_MUTUAL_FLAG | GSS_C_REPLAY_FLAG),
cred (GSS_C_NO_CREDENTIAL),
context (GSS_C_NO_CONTEXT),
do_encryption (!options_.gss_plaintext)
zmq::gssapi_mechanism_base_t::~gssapi_mechanism_base_t ()
int zmq::gssapi_mechanism_base_t::encode_message (msg_t *msg_)
int zmq::gssapi_mechanism_base_t::decode_message (msg_t *msg_)
int zmq::gssapi_mechanism_base_t::produce_initiate (msg_t *msg_, void *token_value_, size_t token_length_)
int zmq::gssapi_mechanism_base_t::process_initiate (msg_t *msg_, void **token_value_, size_t &token_length_)
int zmq::gssapi_mechanism_base_t::produce_ready (msg_t *msg_)
int zmq::gssapi_mechanism_base_t::process_ready (msg_t *msg_)
int zmq::gssapi_mechanism_base_t::acquire_credentials (char * service_name_, gss_cred_id_t * cred_)
