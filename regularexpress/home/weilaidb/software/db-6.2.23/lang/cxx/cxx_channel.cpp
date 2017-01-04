#define	DB_CHANNEL_METHOD(_name, _delete, _argspec, _arglist, _retok)	\
int DbChannel::_name _argspec						\
DbChannel::DbChannel()
:       imp_(0)
DbChannel::~DbChannel()
DB_CHANNEL_METHOD(close, 1, (), (dbchannel, 0), DB_RETOK_STD)
int DbChannel::send_msg(Dbt *msg, u_int32_t nmsg, u_int32_t flags)
int DbChannel::send_request(Dbt *request, u_int32_t nrequest,
Dbt *response, db_timeout_t timeout, u_int32_t flags)
DB_CHANNEL_METHOD(set_timeout, 0, (db_timeout_t timeout),
(dbchannel, timeout), DB_RETOK_STD);
