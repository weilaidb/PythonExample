void
__repmgr_handshake_marshal(env, argp, bp)
ENV *env;
__repmgr_handshake_args *argp;
u_int8_t *bp;
int
__repmgr_handshake_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_handshake_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__repmgr_v3handshake_marshal(env, argp, bp)
ENV *env;
__repmgr_v3handshake_args *argp;
u_int8_t *bp;
int
__repmgr_v3handshake_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_v3handshake_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__repmgr_v2handshake_marshal(env, argp, bp)
ENV *env;
__repmgr_v2handshake_args *argp;
u_int8_t *bp;
int
__repmgr_v2handshake_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_v2handshake_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__repmgr_parm_refresh_marshal(env, argp, bp)
ENV *env;
__repmgr_parm_refresh_args *argp;
u_int8_t *bp;
int
__repmgr_parm_refresh_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_parm_refresh_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__repmgr_permlsn_marshal(env, argp, bp)
ENV *env;
__repmgr_permlsn_args *argp;
u_int8_t *bp;
int
__repmgr_permlsn_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_permlsn_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__repmgr_version_proposal_marshal(env, argp, bp)
ENV *env;
__repmgr_version_proposal_args *argp;
u_int8_t *bp;
int
__repmgr_version_proposal_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_version_proposal_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__repmgr_version_confirmation_marshal(env, argp, bp)
ENV *env;
__repmgr_version_confirmation_args *argp;
u_int8_t *bp;
int
__repmgr_version_confirmation_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_version_confirmation_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__repmgr_msg_hdr_marshal(env, argp, bp)
ENV *env;
__repmgr_msg_hdr_args *argp;
u_int8_t *bp;
int
__repmgr_msg_hdr_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_msg_hdr_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__repmgr_msg_metadata_marshal(env, argp, bp)
ENV *env;
__repmgr_msg_metadata_args *argp;
u_int8_t *bp;
int
__repmgr_msg_metadata_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_msg_metadata_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
int
__repmgr_membership_key_marshal(env, argp, bp, max, lenp)
ENV *env;
__repmgr_membership_key_args *argp;
u_int8_t *bp;
size_t *lenp, max;
int
__repmgr_membership_key_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_membership_key_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__repmgr_membership_data_marshal(env, argp, bp)
ENV *env;
__repmgr_membership_data_args *argp;
u_int8_t *bp;
int
__repmgr_membership_data_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_membership_data_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__repmgr_v4membership_data_marshal(env, argp, bp)
ENV *env;
__repmgr_v4membership_data_args *argp;
u_int8_t *bp;
int
__repmgr_v4membership_data_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_v4membership_data_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__repmgr_member_metadata_marshal(env, argp, bp)
ENV *env;
__repmgr_member_metadata_args *argp;
u_int8_t *bp;
int
__repmgr_member_metadata_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_member_metadata_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
int
__repmgr_gm_fwd_marshal(env, argp, bp, max, lenp)
ENV *env;
__repmgr_gm_fwd_args *argp;
u_int8_t *bp;
size_t *lenp, max;
int
__repmgr_gm_fwd_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_gm_fwd_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__repmgr_membr_vers_marshal(env, argp, bp)
ENV *env;
__repmgr_membr_vers_args *argp;
u_int8_t *bp;
int
__repmgr_membr_vers_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_membr_vers_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
int
__repmgr_site_info_marshal(env, argp, bp, max, lenp)
ENV *env;
__repmgr_site_info_args *argp;
u_int8_t *bp;
size_t *lenp, max;
int
__repmgr_site_info_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_site_info_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
int
__repmgr_v4site_info_marshal(env, argp, bp, max, lenp)
ENV *env;
__repmgr_v4site_info_args *argp;
u_int8_t *bp;
size_t *lenp, max;
int
__repmgr_v4site_info_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_v4site_info_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__repmgr_connect_reject_marshal(env, argp, bp)
ENV *env;
__repmgr_connect_reject_args *argp;
u_int8_t *bp;
int
__repmgr_connect_reject_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_connect_reject_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__repmgr_v4connect_reject_marshal(env, argp, bp)
ENV *env;
__repmgr_v4connect_reject_args *argp;
u_int8_t *bp;
int
__repmgr_v4connect_reject_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_v4connect_reject_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
void
__repmgr_lsnhist_match_marshal(env, argp, bp)
ENV *env;
__repmgr_lsnhist_match_args *argp;
u_int8_t *bp;
int
__repmgr_lsnhist_match_unmarshal(env, argp, bp, max, nextp)
ENV *env;
__repmgr_lsnhist_match_args *argp;
u_int8_t *bp;
size_t max;
u_int8_t **nextp;
