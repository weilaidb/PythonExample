#define	DB_SITE_METHOD(_name, _delete, _argspec, _arglist, _retok)	\
int DbSite::_name _argspec						\
DbSite::DbSite()
:       imp_(0)
DbSite::~DbSite()
DB_SITE_METHOD(close, 1, (), (dbsite), DB_RETOK_STD)
DB_SITE_METHOD(get_address, 0, (const char **hostp, u_int *port),
(dbsite, hostp, port), DB_RETOK_STD)
DB_SITE_METHOD(get_config, 0, (u_int32_t which, u_int32_t *valuep),
(dbsite, which, valuep), DB_RETOK_STD)
DB_SITE_METHOD(get_eid, 0, (int *eidp), (dbsite, eidp), DB_RETOK_STD)
DB_SITE_METHOD(remove, 1, (), (dbsite), DB_RETOK_STD)
DB_SITE_METHOD(set_config, 0, (u_int32_t which, u_int32_t value),
(dbsite, which, value), DB_RETOK_STD)
