int
__rep_bulk_marshal(env, argp, bp, max, lenp)
ENV *env;
__rep_bulk_args *argp;
u_int8_t *bp;
size_t *lenp, max;
int
__rep_bulk_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__rep_bulk_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
int
__rep_control_marshal(env, argp, bp, max, lenp)
ENV *env;
__rep_control_args *argp;
u_int8_t *bp;
size_t *lenp, max;
int
__rep_control_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__rep_control_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
int
__rep_egen_marshal(env, argp, bp, max, lenp)
ENV *env;
__rep_egen_args *argp;
u_int8_t *bp;
size_t *lenp, max;
int
__rep_egen_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__rep_egen_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
int
__rep_fileinfo_marshal(env, argp, bp, max, lenp)
ENV *env;
__rep_fileinfo_args *argp;
u_int8_t *bp;
size_t *lenp, max;
int
__rep_fileinfo_unmarshal(env, argpp, bp, max, nextp)
ENV *env;
__rep_fileinfo_args **argpp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
int
__rep_fileinfo_v7_marshal(env, argp, bp, max, lenp)
ENV *env;
__rep_fileinfo_v7_args *argp;
u_int8_t *bp;
size_t *lenp, max;
int
__rep_fileinfo_v7_unmarshal(env, argpp, bp, max, nextp)
ENV *env;
__rep_fileinfo_v7_args **argpp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
int
__rep_fileinfo_v6_marshal(env, argp, bp, max, lenp)
ENV *env;
__rep_fileinfo_v6_args *argp;
u_int8_t *bp;
size_t *lenp, max;
int
__rep_fileinfo_v6_unmarshal(env, argpp, bp, max, nextp)
ENV *env;
__rep_fileinfo_v6_args **argpp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
int
__rep_grant_info_marshal(env, argp, bp, max, lenp)
ENV *env;
__rep_grant_info_args *argp;
u_int8_t *bp;
size_t *lenp, max;
int
__rep_grant_info_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__rep_grant_info_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
int
__rep_logreq_marshal(env, argp, bp, max, lenp)
ENV *env;
__rep_logreq_args *argp;
u_int8_t *bp;
size_t *lenp, max;
int
__rep_logreq_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__rep_logreq_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
int
__rep_newfile_marshal(env, argp, bp, max, lenp)
ENV *env;
__rep_newfile_args *argp;
u_int8_t *bp;
size_t *lenp, max;
int
__rep_newfile_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__rep_newfile_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
int
__rep_update_marshal(env, argp, bp, max, lenp)
ENV *env;
__rep_update_args *argp;
u_int8_t *bp;
size_t *lenp, max;
int
__rep_update_unmarshal(env, argpp, bp, max, nextp)
ENV *env;
__rep_update_args **argpp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
int
__rep_vote_info_marshal(env, argp, bp, max, lenp)
ENV *env;
__rep_vote_info_args *argp;
u_int8_t *bp;
size_t *lenp, max;
int
__rep_vote_info_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__rep_vote_info_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
int
__rep_vote_info_v5_marshal(env, argp, bp, max, lenp)
ENV *env;
__rep_vote_info_v5_args *argp;
u_int8_t *bp;
size_t *lenp, max;
int
__rep_vote_info_v5_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__rep_vote_info_v5_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__rep_lsn_hist_key_marshal(env, argp, bp)
ENV *env;
__rep_lsn_hist_key_args *argp;
u_int8_t *bp;
int
__rep_lsn_hist_key_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__rep_lsn_hist_key_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__rep_lsn_hist_data_marshal(env, argp, bp)
ENV *env;
__rep_lsn_hist_data_args *argp;
u_int8_t *bp;
int
__rep_lsn_hist_data_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__rep_lsn_hist_data_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__rep_blob_update_req_marshal(env, argp, bp)
ENV *env;
__rep_blob_update_req_args *argp;
u_int8_t *bp;
int
__rep_blob_update_req_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__rep_blob_update_req_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__rep_blob_update_req_v8_marshal(env, argp, bp)
ENV *env;
__rep_blob_update_req_v8_args *argp;
u_int8_t *bp;
int
__rep_blob_update_req_v8_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__rep_blob_update_req_v8_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__rep_blob_update_marshal(env, argp, bp)
ENV *env;
__rep_blob_update_args *argp;
u_int8_t *bp;
int
__rep_blob_update_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__rep_blob_update_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__rep_blob_file_marshal(env, argp, bp)
ENV *env;
__rep_blob_file_args *argp;
u_int8_t *bp;
int
__rep_blob_file_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__rep_blob_file_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__rep_blob_chunk_marshal(env, argp, bp)
ENV *env;
__rep_blob_chunk_args *argp;
u_int8_t *bp;
int
__rep_blob_chunk_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__rep_blob_chunk_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__rep_blob_chunk_req_marshal(env, argp, bp)
ENV *env;
__rep_blob_chunk_req_args *argp;
u_int8_t *bp;
int
__rep_blob_chunk_req_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__rep_blob_chunk_req_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
