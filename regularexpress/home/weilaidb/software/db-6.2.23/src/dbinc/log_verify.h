#define	_DB_LOG_VERIFY_H_
struct __db_log_verify_info ;
struct __txn_verify_info ;
struct __lv_filereg_info ;
struct __lv_filelife ;
struct __lv_ckp_info ;
struct __lv_timestamp_info ;
struct __lv_txnrange ;
struct __add_recycle_params ;
struct __ckp_verify_params ;
#define	LOGTYPE_NAME(lvh, type) (lvh->logtype_names[type] == NULL ? \
NULL : lvh->logtype_names[type] + 3)
#define	NUMCMP(i1, i2) ((i1) > (i2) ? 1 : ((i1) < (i2) ? -1 : 0))
#define	INVAL_DBREGID -1
#define	IS_DBREG_OPEN(opcode) (opcode == DBREG_OPEN || opcode == \
DBREG_PREOPEN || opcode == DBREG_REOPEN || opcode == DBREG_CHKPNT \
|| opcode == DBREG_XCHKPNT || opcode == DBREG_XOPEN || \
opcode == DBREG_XREOPEN)
#define	IS_DBREG_CLOSE(opcode) (opcode == DBREG_CLOSE || opcode == DBREG_RCLOSE)
#define	IS_LOG_VRFY_SUPPORTED(version) ((version) == DB_LOGVERSION)
