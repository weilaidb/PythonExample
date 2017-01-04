int
__db_rmid_to_env(rmid, envp)
int rmid;
ENV **envp;
int
__db_xid_to_txn(env, xid, tdp)
ENV *env;
XID *xid;
TXN_DETAIL **tdp;
void
__db_map_rmid(rmid, env)
int rmid;
ENV *env;
int
__db_unmap_rmid(rmid)
int rmid;
void
__db_unmap_xid(env, xid, off)
ENV *env;
XID *xid;
size_t off;
