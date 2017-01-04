#define NFSDBG_FACILITY		NFSDBG_XDR
#define errno_NFSERR_IO		EIO
static int nfs4_stat_to_errno(int);
#define NFS4_MAXTAGLEN		20
#define NFS4_MAXTAGLEN		0
#define open_owner_id_maxsz	(1 + 1 + 4)
#define lock_owner_id_maxsz	(1 + 1 + 4)
#define decode_lockowner_maxsz	(1 + XDR_QUADLEN(IDMAP_NAMESZ))
#define compound_encode_hdr_maxsz	(3 + (NFS4_MAXTAGLEN >> 2))
#define compound_decode_hdr_maxsz	(3 + (NFS4_MAXTAGLEN >> 2))
#define op_encode_hdr_maxsz	(1)
#define op_decode_hdr_maxsz	(2)
#define encode_stateid_maxsz	(XDR_QUADLEN(NFS4_STATEID_SIZE))
#define decode_stateid_maxsz	(XDR_QUADLEN(NFS4_STATEID_SIZE))
#define encode_verifier_maxsz	(XDR_QUADLEN(NFS4_VERIFIER_SIZE))
#define decode_verifier_maxsz	(XDR_QUADLEN(NFS4_VERIFIER_SIZE))
#define encode_putfh_maxsz	(op_encode_hdr_maxsz + 1 + \
(NFS4_FHSIZE >> 2))
#define decode_putfh_maxsz	(op_decode_hdr_maxsz)
#define encode_putrootfh_maxsz	(op_encode_hdr_maxsz)
#define decode_putrootfh_maxsz	(op_decode_hdr_maxsz)
#define encode_getfh_maxsz      (op_encode_hdr_maxsz)
#define decode_getfh_maxsz      (op_decode_hdr_maxsz + 1 + \
((3+NFS4_FHSIZE) >> 2))
#define nfs4_fattr_bitmap_maxsz 4
#define encode_getattr_maxsz    (op_encode_hdr_maxsz + nfs4_fattr_bitmap_maxsz)
#define nfs4_name_maxsz		(1 + ((3 + NFS4_MAXNAMLEN) >> 2))
#define nfs4_path_maxsz		(1 + ((3 + NFS4_MAXPATHLEN) >> 2))
#define nfs4_owner_maxsz	(1 + XDR_QUADLEN(IDMAP_NAMESZ))
#define nfs4_group_maxsz	(1 + XDR_QUADLEN(IDMAP_NAMESZ))
#define nfs4_fattr_value_maxsz	(1 + (1 + 2 + 2 + 4 + 2 + 1 + 1 + 2 + 2 + \
3 + 3 + 3 + nfs4_owner_maxsz + nfs4_group_maxsz))
#define nfs4_fattr_maxsz	(nfs4_fattr_bitmap_maxsz + \
nfs4_fattr_value_maxsz)
#define decode_getattr_maxsz    (op_decode_hdr_maxsz + nfs4_fattr_maxsz)
#define encode_attrs_maxsz	(nfs4_fattr_bitmap_maxsz + \
1 + 2 + 1 + \
nfs4_owner_maxsz + \
nfs4_group_maxsz + \
4 + 4)
#define encode_savefh_maxsz     (op_encode_hdr_maxsz)
#define decode_savefh_maxsz     (op_decode_hdr_maxsz)
#define encode_restorefh_maxsz  (op_encode_hdr_maxsz)
#define decode_restorefh_maxsz  (op_decode_hdr_maxsz)
#define encode_fsinfo_maxsz	(encode_getattr_maxsz)
#define decode_fsinfo_maxsz	(op_decode_hdr_maxsz + 15)
#define encode_renew_maxsz	(op_encode_hdr_maxsz + 3)
#define decode_renew_maxsz	(op_decode_hdr_maxsz)
#define encode_setclientid_maxsz \
(op_encode_hdr_maxsz + \
XDR_QUADLEN(NFS4_VERIFIER_SIZE) + \
XDR_QUADLEN(NFS4_SETCLIENTID_NAMELEN) + \
1 + \
XDR_QUADLEN(RPCBIND_MAXNETIDLEN) + \
XDR_QUADLEN(RPCBIND_MAXUADDRLEN) + \
1)
#define decode_setclientid_maxsz \
(op_decode_hdr_maxsz + \
2 + \
1024)
#define encode_setclientid_confirm_maxsz \
(op_encode_hdr_maxsz + \
3 + (NFS4_VERIFIER_SIZE >> 2))
#define decode_setclientid_confirm_maxsz \
(op_decode_hdr_maxsz)
#define encode_lookup_maxsz	(op_encode_hdr_maxsz + nfs4_name_maxsz)
#define decode_lookup_maxsz	(op_decode_hdr_maxsz)
#define encode_share_access_maxsz \
(2)
#define encode_createmode_maxsz	(1 + encode_attrs_maxsz + encode_verifier_maxsz)
#define encode_opentype_maxsz	(1 + encode_createmode_maxsz)
#define encode_claim_null_maxsz	(1 + nfs4_name_maxsz)
#define encode_open_maxsz	(op_encode_hdr_maxsz + \
2 + encode_share_access_maxsz + 2 + \
open_owner_id_maxsz + \
encode_opentype_maxsz + \
encode_claim_null_maxsz)
#define decode_ace_maxsz	(3 + nfs4_owner_maxsz)
#define decode_delegation_maxsz	(1 + decode_stateid_maxsz + 1 + \
decode_ace_maxsz)
#define decode_change_info_maxsz	(5)
#define decode_open_maxsz	(op_decode_hdr_maxsz + \
decode_stateid_maxsz + \
decode_change_info_maxsz + 1 + \
nfs4_fattr_bitmap_maxsz + \
decode_delegation_maxsz)
#define encode_open_confirm_maxsz \
(op_encode_hdr_maxsz + \
encode_stateid_maxsz + 1)
#define decode_open_confirm_maxsz \
(op_decode_hdr_maxsz + \
decode_stateid_maxsz)
#define encode_open_downgrade_maxsz \
(op_encode_hdr_maxsz + \
encode_stateid_maxsz + 1 + \
encode_share_access_maxsz)
#define decode_open_downgrade_maxsz \
(op_decode_hdr_maxsz + \
decode_stateid_maxsz)
#define encode_close_maxsz	(op_encode_hdr_maxsz + \
1 + encode_stateid_maxsz)
#define decode_close_maxsz	(op_decode_hdr_maxsz + \
decode_stateid_maxsz)
#define encode_setattr_maxsz	(op_encode_hdr_maxsz + \
encode_stateid_maxsz + \
encode_attrs_maxsz)
#define decode_setattr_maxsz	(op_decode_hdr_maxsz + \
nfs4_fattr_bitmap_maxsz)
#define encode_read_maxsz	(op_encode_hdr_maxsz + \
encode_stateid_maxsz + 3)
#define decode_read_maxsz	(op_decode_hdr_maxsz + 2)
#define encode_readdir_maxsz	(op_encode_hdr_maxsz + \
2 + encode_verifier_maxsz + 5)
#define decode_readdir_maxsz	(op_decode_hdr_maxsz + \
decode_verifier_maxsz)
#define encode_readlink_maxsz	(op_encode_hdr_maxsz)
#define decode_readlink_maxsz	(op_decode_hdr_maxsz + 1)
#define encode_write_maxsz	(op_encode_hdr_maxsz + \
encode_stateid_maxsz + 4)
#define decode_write_maxsz	(op_decode_hdr_maxsz + \
2 + decode_verifier_maxsz)
#define encode_commit_maxsz	(op_encode_hdr_maxsz + 3)
#define decode_commit_maxsz	(op_decode_hdr_maxsz + \
decode_verifier_maxsz)
#define encode_remove_maxsz	(op_encode_hdr_maxsz + \
nfs4_name_maxsz)
#define decode_remove_maxsz	(op_decode_hdr_maxsz + \
decode_change_info_maxsz)
#define encode_rename_maxsz	(op_encode_hdr_maxsz + \
2 * nfs4_name_maxsz)
#define decode_rename_maxsz	(op_decode_hdr_maxsz + \
decode_change_info_maxsz + \
decode_change_info_maxsz)
#define encode_link_maxsz	(op_encode_hdr_maxsz + \
nfs4_name_maxsz)
#define decode_link_maxsz	(op_decode_hdr_maxsz + decode_change_info_maxsz)
#define encode_lockowner_maxsz	(7)
#define encode_lock_maxsz	(op_encode_hdr_maxsz + \
7 + \
1 + encode_stateid_maxsz + 1 + \
encode_lockowner_maxsz)
#define decode_lock_denied_maxsz \
(8 + decode_lockowner_maxsz)
#define decode_lock_maxsz	(op_decode_hdr_maxsz + \
decode_lock_denied_maxsz)
#define encode_lockt_maxsz	(op_encode_hdr_maxsz + 5 + \
encode_lockowner_maxsz)
#define decode_lockt_maxsz	(op_decode_hdr_maxsz + \
decode_lock_denied_maxsz)
#define encode_locku_maxsz	(op_encode_hdr_maxsz + 3 + \
encode_stateid_maxsz + \
4)
#define decode_locku_maxsz	(op_decode_hdr_maxsz + \
decode_stateid_maxsz)
#define encode_release_lockowner_maxsz \
(op_encode_hdr_maxsz + \
encode_lockowner_maxsz)
#define decode_release_lockowner_maxsz \
(op_decode_hdr_maxsz)
#define encode_access_maxsz	(op_encode_hdr_maxsz + 1)
#define decode_access_maxsz	(op_decode_hdr_maxsz + 2)
#define encode_symlink_maxsz	(op_encode_hdr_maxsz + \
1 + nfs4_name_maxsz + \
1 + \
nfs4_fattr_maxsz)
#define decode_symlink_maxsz	(op_decode_hdr_maxsz + 8)
#define encode_create_maxsz	(op_encode_hdr_maxsz + \
1 + 2 + nfs4_name_maxsz + \
encode_attrs_maxsz)
#define decode_create_maxsz	(op_decode_hdr_maxsz + \
decode_change_info_maxsz + \
nfs4_fattr_bitmap_maxsz)
#define encode_statfs_maxsz	(encode_getattr_maxsz)
#define decode_statfs_maxsz	(decode_getattr_maxsz)
#define encode_delegreturn_maxsz (op_encode_hdr_maxsz + 4)
#define decode_delegreturn_maxsz (op_decode_hdr_maxsz)
#define encode_getacl_maxsz	(encode_getattr_maxsz)
#define decode_getacl_maxsz	(op_decode_hdr_maxsz + \
nfs4_fattr_bitmap_maxsz + 1)
#define encode_setacl_maxsz	(op_encode_hdr_maxsz + \
encode_stateid_maxsz + 3)
#define decode_setacl_maxsz	(decode_setattr_maxsz)
#define encode_fs_locations_maxsz \
(encode_getattr_maxsz)
#define decode_fs_locations_maxsz \
(0)
#define encode_secinfo_maxsz	(op_encode_hdr_maxsz + nfs4_name_maxsz)
#define decode_secinfo_maxsz	(op_decode_hdr_maxsz + 1 + ((NFS_MAX_SECFLAVORS * (16 + GSS_OID_MAX_LEN)) / 4))
#if defined(CONFIG_NFS_V4_1)
#define NFS4_MAX_MACHINE_NAME_LEN (64)
#define encode_exchange_id_maxsz (op_encode_hdr_maxsz + \
encode_verifier_maxsz + \
1 + \
XDR_QUADLEN(NFS4_EXCHANGE_ID_LEN) + \
1 + \
1 + \
0 + \
1)
#define decode_exchange_id_maxsz (op_decode_hdr_maxsz + \
2 + \
1 + \
1 + \
1 + \
0 + \
2 + \ \
XDR_QUADLEN(NFS4_OPAQUE_LIMIT) + 1 + \ \
XDR_QUADLEN(NFS4_OPAQUE_LIMIT) + 1 + \
1 + \
0)
#define encode_channel_attrs_maxsz  (6 + 1)
#define decode_channel_attrs_maxsz  (6 + \
1 + \
1)
#define encode_create_session_maxsz  (op_encode_hdr_maxsz + \
2 + \
1 + \
1 + \
encode_channel_attrs_maxsz + \
encode_channel_attrs_maxsz + \
1 + \
1 + \
1 + \
1 + \
1 + \
XDR_QUADLEN(NFS4_MAX_MACHINE_NAME_LEN) + \
1 + \
1 + \
1)
#define decode_create_session_maxsz  (op_decode_hdr_maxsz +	\
XDR_QUADLEN(NFS4_MAX_SESSIONID_LEN) + \
1 + \
1 + \
decode_channel_attrs_maxsz + \
decode_channel_attrs_maxsz)
#define encode_destroy_session_maxsz    (op_encode_hdr_maxsz + 4)
#define decode_destroy_session_maxsz    (op_decode_hdr_maxsz)
#define encode_sequence_maxsz	(op_encode_hdr_maxsz + \
XDR_QUADLEN(NFS4_MAX_SESSIONID_LEN) + 4)
#define decode_sequence_maxsz	(op_decode_hdr_maxsz + \
XDR_QUADLEN(NFS4_MAX_SESSIONID_LEN) + 5)
#define encode_reclaim_complete_maxsz	(op_encode_hdr_maxsz + 4)
#define decode_reclaim_complete_maxsz	(op_decode_hdr_maxsz + 4)
#define encode_getdeviceinfo_maxsz (op_encode_hdr_maxsz + 4 + \
XDR_QUADLEN(NFS4_DEVICEID4_SIZE))
#define decode_getdeviceinfo_maxsz (op_decode_hdr_maxsz + \
1 + \
1 + \ \
1 + \
1)
#define encode_layoutget_maxsz	(op_encode_hdr_maxsz + 10 + \
encode_stateid_maxsz)
#define decode_layoutget_maxsz	(op_decode_hdr_maxsz + 8 + \
decode_stateid_maxsz + \
XDR_QUADLEN(PNFS_LAYOUT_MAXSIZE))
#define encode_layoutcommit_maxsz (op_encode_hdr_maxsz +          \
2 + \
2 + \
1 + \
encode_stateid_maxsz + \
1 + \
2 + \
1 + \
1 + \
1)
#define decode_layoutcommit_maxsz (op_decode_hdr_maxsz + 3)
#define encode_layoutreturn_maxsz (8 + op_encode_hdr_maxsz + \
encode_stateid_maxsz + \
1)
#define decode_layoutreturn_maxsz (op_decode_hdr_maxsz + \
1 + decode_stateid_maxsz)
#define encode_sequence_maxsz	0
#define decode_sequence_maxsz	0
#define NFS4_enc_compound_sz	(1024)
#define NFS4_dec_compound_sz	(1024)
#define NFS4_enc_read_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_read_maxsz)
#define NFS4_dec_read_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_read_maxsz)
#define NFS4_enc_readlink_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_readlink_maxsz)
#define NFS4_dec_readlink_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_readlink_maxsz)
#define NFS4_enc_readdir_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_readdir_maxsz)
#define NFS4_dec_readdir_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_readdir_maxsz)
#define NFS4_enc_write_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_write_maxsz + \
encode_getattr_maxsz)
#define NFS4_dec_write_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_write_maxsz + \
decode_getattr_maxsz)
#define NFS4_enc_commit_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_commit_maxsz + \
encode_getattr_maxsz)
#define NFS4_dec_commit_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_commit_maxsz + \
decode_getattr_maxsz)
#define NFS4_enc_open_sz        (compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_savefh_maxsz + \
encode_open_maxsz + \
encode_getfh_maxsz + \
encode_getattr_maxsz + \
encode_restorefh_maxsz + \
encode_getattr_maxsz)
#define NFS4_dec_open_sz        (compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_savefh_maxsz + \
decode_open_maxsz + \
decode_getfh_maxsz + \
decode_getattr_maxsz + \
decode_restorefh_maxsz + \
decode_getattr_maxsz)
#define NFS4_enc_open_confirm_sz \
(compound_encode_hdr_maxsz + \
encode_putfh_maxsz + \
encode_open_confirm_maxsz)
#define NFS4_dec_open_confirm_sz \
(compound_decode_hdr_maxsz + \
decode_putfh_maxsz + \
decode_open_confirm_maxsz)
#define NFS4_enc_open_noattr_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_open_maxsz + \
encode_getattr_maxsz)
#define NFS4_dec_open_noattr_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_open_maxsz + \
decode_getattr_maxsz)
#define NFS4_enc_open_downgrade_sz \
(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_open_downgrade_maxsz + \
encode_getattr_maxsz)
#define NFS4_dec_open_downgrade_sz \
(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_open_downgrade_maxsz + \
decode_getattr_maxsz)
#define NFS4_enc_close_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_close_maxsz + \
encode_getattr_maxsz)
#define NFS4_dec_close_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_close_maxsz + \
decode_getattr_maxsz)
#define NFS4_enc_setattr_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_setattr_maxsz + \
encode_getattr_maxsz)
#define NFS4_dec_setattr_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_setattr_maxsz + \
decode_getattr_maxsz)
#define NFS4_enc_fsinfo_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_fsinfo_maxsz)
#define NFS4_dec_fsinfo_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_fsinfo_maxsz)
#define NFS4_enc_renew_sz	(compound_encode_hdr_maxsz + \
encode_renew_maxsz)
#define NFS4_dec_renew_sz	(compound_decode_hdr_maxsz + \
decode_renew_maxsz)
#define NFS4_enc_setclientid_sz	(compound_encode_hdr_maxsz + \
encode_setclientid_maxsz)
#define NFS4_dec_setclientid_sz	(compound_decode_hdr_maxsz + \
decode_setclientid_maxsz)
#define NFS4_enc_setclientid_confirm_sz \
(compound_encode_hdr_maxsz + \
encode_setclientid_confirm_maxsz + \
encode_putrootfh_maxsz + \
encode_fsinfo_maxsz)
#define NFS4_dec_setclientid_confirm_sz \
(compound_decode_hdr_maxsz + \
decode_setclientid_confirm_maxsz + \
decode_putrootfh_maxsz + \
decode_fsinfo_maxsz)
#define NFS4_enc_lock_sz        (compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_lock_maxsz)
#define NFS4_dec_lock_sz        (compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_lock_maxsz)
#define NFS4_enc_lockt_sz       (compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_lockt_maxsz)
#define NFS4_dec_lockt_sz       (compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_lockt_maxsz)
#define NFS4_enc_locku_sz       (compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_locku_maxsz)
#define NFS4_dec_locku_sz       (compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_locku_maxsz)
#define NFS4_enc_release_lockowner_sz \
(compound_encode_hdr_maxsz + \
encode_lockowner_maxsz)
#define NFS4_dec_release_lockowner_sz \
(compound_decode_hdr_maxsz + \
decode_lockowner_maxsz)
#define NFS4_enc_access_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_access_maxsz + \
encode_getattr_maxsz)
#define NFS4_dec_access_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_access_maxsz + \
decode_getattr_maxsz)
#define NFS4_enc_getattr_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_getattr_maxsz)
#define NFS4_dec_getattr_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_getattr_maxsz)
#define NFS4_enc_lookup_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_lookup_maxsz + \
encode_getattr_maxsz + \
encode_getfh_maxsz)
#define NFS4_dec_lookup_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_lookup_maxsz + \
decode_getattr_maxsz + \
decode_getfh_maxsz)
#define NFS4_enc_lookup_root_sz (compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putrootfh_maxsz + \
encode_getattr_maxsz + \
encode_getfh_maxsz)
#define NFS4_dec_lookup_root_sz (compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putrootfh_maxsz + \
decode_getattr_maxsz + \
decode_getfh_maxsz)
#define NFS4_enc_remove_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_remove_maxsz + \
encode_getattr_maxsz)
#define NFS4_dec_remove_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_remove_maxsz + \
decode_getattr_maxsz)
#define NFS4_enc_rename_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_savefh_maxsz + \
encode_putfh_maxsz + \
encode_rename_maxsz + \
encode_getattr_maxsz + \
encode_restorefh_maxsz + \
encode_getattr_maxsz)
#define NFS4_dec_rename_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_savefh_maxsz + \
decode_putfh_maxsz + \
decode_rename_maxsz + \
decode_getattr_maxsz + \
decode_restorefh_maxsz + \
decode_getattr_maxsz)
#define NFS4_enc_link_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_savefh_maxsz + \
encode_putfh_maxsz + \
encode_link_maxsz + \
decode_getattr_maxsz + \
encode_restorefh_maxsz + \
decode_getattr_maxsz)
#define NFS4_dec_link_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_savefh_maxsz + \
decode_putfh_maxsz + \
decode_link_maxsz + \
decode_getattr_maxsz + \
decode_restorefh_maxsz + \
decode_getattr_maxsz)
#define NFS4_enc_symlink_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_symlink_maxsz + \
encode_getattr_maxsz + \
encode_getfh_maxsz)
#define NFS4_dec_symlink_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_symlink_maxsz + \
decode_getattr_maxsz + \
decode_getfh_maxsz)
#define NFS4_enc_create_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_savefh_maxsz + \
encode_create_maxsz + \
encode_getfh_maxsz + \
encode_getattr_maxsz + \
encode_restorefh_maxsz + \
encode_getattr_maxsz)
#define NFS4_dec_create_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_savefh_maxsz + \
decode_create_maxsz + \
decode_getfh_maxsz + \
decode_getattr_maxsz + \
decode_restorefh_maxsz + \
decode_getattr_maxsz)
#define NFS4_enc_pathconf_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_getattr_maxsz)
#define NFS4_dec_pathconf_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_getattr_maxsz)
#define NFS4_enc_statfs_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_statfs_maxsz)
#define NFS4_dec_statfs_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_statfs_maxsz)
#define NFS4_enc_server_caps_sz (compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_getattr_maxsz)
#define NFS4_dec_server_caps_sz (compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_getattr_maxsz)
#define NFS4_enc_delegreturn_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_delegreturn_maxsz + \
encode_getattr_maxsz)
#define NFS4_dec_delegreturn_sz (compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_delegreturn_maxsz + \
decode_getattr_maxsz)
#define NFS4_enc_getacl_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_getacl_maxsz)
#define NFS4_dec_getacl_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_getacl_maxsz)
#define NFS4_enc_setacl_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_setacl_maxsz)
#define NFS4_dec_setacl_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_setacl_maxsz)
#define NFS4_enc_fs_locations_sz \
(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_lookup_maxsz + \
encode_fs_locations_maxsz)
#define NFS4_dec_fs_locations_sz \
(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_lookup_maxsz + \
decode_fs_locations_maxsz)
#define NFS4_enc_secinfo_sz 	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_secinfo_maxsz)
#define NFS4_dec_secinfo_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_secinfo_maxsz)
#if defined(CONFIG_NFS_V4_1)
#define NFS4_enc_exchange_id_sz \
(compound_encode_hdr_maxsz + \
encode_exchange_id_maxsz)
#define NFS4_dec_exchange_id_sz \
(compound_decode_hdr_maxsz + \
decode_exchange_id_maxsz)
#define NFS4_enc_create_session_sz \
(compound_encode_hdr_maxsz + \
encode_create_session_maxsz)
#define NFS4_dec_create_session_sz \
(compound_decode_hdr_maxsz + \
decode_create_session_maxsz)
#define NFS4_enc_destroy_session_sz	(compound_encode_hdr_maxsz + \
encode_destroy_session_maxsz)
#define NFS4_dec_destroy_session_sz	(compound_decode_hdr_maxsz + \
decode_destroy_session_maxsz)
#define NFS4_enc_sequence_sz \
(compound_decode_hdr_maxsz + \
encode_sequence_maxsz)
#define NFS4_dec_sequence_sz \
(compound_decode_hdr_maxsz + \
decode_sequence_maxsz)
#define NFS4_enc_get_lease_time_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putrootfh_maxsz + \
encode_fsinfo_maxsz)
#define NFS4_dec_get_lease_time_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putrootfh_maxsz + \
decode_fsinfo_maxsz)
#define NFS4_enc_reclaim_complete_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_reclaim_complete_maxsz)
#define NFS4_dec_reclaim_complete_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_reclaim_complete_maxsz)
#define NFS4_enc_getdeviceinfo_sz (compound_encode_hdr_maxsz +    \
encode_sequence_maxsz +\
encode_getdeviceinfo_maxsz)
#define NFS4_dec_getdeviceinfo_sz (compound_decode_hdr_maxsz +    \
decode_sequence_maxsz + \
decode_getdeviceinfo_maxsz)
#define NFS4_enc_layoutget_sz	(compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz +        \
encode_layoutget_maxsz)
#define NFS4_dec_layoutget_sz	(compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz +        \
decode_layoutget_maxsz)
#define NFS4_enc_layoutcommit_sz (compound_encode_hdr_maxsz + \
encode_sequence_maxsz +\
encode_putfh_maxsz + \
encode_layoutcommit_maxsz + \
encode_getattr_maxsz)
#define NFS4_dec_layoutcommit_sz (compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_layoutcommit_maxsz + \
decode_getattr_maxsz)
#define NFS4_enc_layoutreturn_sz (compound_encode_hdr_maxsz + \
encode_sequence_maxsz + \
encode_putfh_maxsz + \
encode_layoutreturn_maxsz)
#define NFS4_dec_layoutreturn_sz (compound_decode_hdr_maxsz + \
decode_sequence_maxsz + \
decode_putfh_maxsz + \
decode_layoutreturn_maxsz)
const u32 nfs41_maxwrite_overhead = ((RPC_MAX_HEADER_WITH_AUTH +
compound_encode_hdr_maxsz +
encode_sequence_maxsz +
encode_putfh_maxsz +
encode_getattr_maxsz) *
XDR_UNIT);
const u32 nfs41_maxread_overhead = ((RPC_MAX_HEADER_WITH_AUTH +
compound_decode_hdr_maxsz +
decode_sequence_maxsz +
decode_putfh_maxsz) *
XDR_UNIT);
static const umode_t nfs_type2fmt[] = ;
struct compound_hdr ;
static __be32 *reserve_space(struct xdr_stream *xdr, size_t nbytes)
static void encode_string(struct xdr_stream *xdr, unsigned int len, const char *str)
static void encode_compound_hdr(struct xdr_stream *xdr,
struct rpc_rqst *req,
struct compound_hdr *hdr)
static void encode_nops(struct compound_hdr *hdr)
static void encode_nfs4_verifier(struct xdr_stream *xdr, const nfs4_verifier *verf)
static void encode_attrs(struct xdr_stream *xdr, const struct iattr *iap, const struct nfs_server *server)
static void encode_access(struct xdr_stream *xdr, u32 access, struct compound_hdr *hdr)
static void encode_close(struct xdr_stream *xdr, const struct nfs_closeargs *arg, struct compound_hdr *hdr)
static void encode_commit(struct xdr_stream *xdr, const struct nfs_writeargs *args, struct compound_hdr *hdr)
static void encode_create(struct xdr_stream *xdr, const struct nfs4_create_arg *create, struct compound_hdr *hdr)
static void encode_getattr_one(struct xdr_stream *xdr, uint32_t bitmap, struct compound_hdr *hdr)
static void encode_getattr_two(struct xdr_stream *xdr, uint32_t bm0, uint32_t bm1, struct compound_hdr *hdr)
static void encode_getfattr(struct xdr_stream *xdr, const u32* bitmask, struct compound_hdr *hdr)
static void encode_fsinfo(struct xdr_stream *xdr, const u32* bitmask, struct compound_hdr *hdr)
static void encode_fs_locations(struct xdr_stream *xdr, const u32* bitmask, struct compound_hdr *hdr)
static void encode_getfh(struct xdr_stream *xdr, struct compound_hdr *hdr)
static void encode_link(struct xdr_stream *xdr, const struct qstr *name, struct compound_hdr *hdr)
static inline int nfs4_lock_type(struct file_lock *fl, int block)
static inline uint64_t nfs4_lock_length(struct file_lock *fl)
static void encode_lockowner(struct xdr_stream *xdr, const struct nfs_lowner *lowner)
static void encode_lock(struct xdr_stream *xdr, const struct nfs_lock_args *args, struct compound_hdr *hdr)
static void encode_lockt(struct xdr_stream *xdr, const struct nfs_lockt_args *args, struct compound_hdr *hdr)
static void encode_locku(struct xdr_stream *xdr, const struct nfs_locku_args *args, struct compound_hdr *hdr)
static void encode_release_lockowner(struct xdr_stream *xdr, const struct nfs_lowner *lowner, struct compound_hdr *hdr)
static void encode_lookup(struct xdr_stream *xdr, const struct qstr *name, struct compound_hdr *hdr)
static void encode_share_access(struct xdr_stream *xdr, fmode_t fmode)
static inline void encode_openhdr(struct xdr_stream *xdr, const struct nfs_openargs *arg)
static inline void encode_createmode(struct xdr_stream *xdr, const struct nfs_openargs *arg)
static void encode_opentype(struct xdr_stream *xdr, const struct nfs_openargs *arg)
static inline void encode_delegation_type(struct xdr_stream *xdr, fmode_t delegation_type)
static inline void encode_claim_null(struct xdr_stream *xdr, const struct qstr *name)
static inline void encode_claim_previous(struct xdr_stream *xdr, fmode_t type)
static inline void encode_claim_delegate_cur(struct xdr_stream *xdr, const struct qstr *name, const nfs4_stateid *stateid)
static void encode_open(struct xdr_stream *xdr, const struct nfs_openargs *arg, struct compound_hdr *hdr)
static void encode_open_confirm(struct xdr_stream *xdr, const struct nfs_open_confirmargs *arg, struct compound_hdr *hdr)
static void encode_open_downgrade(struct xdr_stream *xdr, const struct nfs_closeargs *arg, struct compound_hdr *hdr)
static void
encode_putfh(struct xdr_stream *xdr, const struct nfs_fh *fh, struct compound_hdr *hdr)
static void encode_putrootfh(struct xdr_stream *xdr, struct compound_hdr *hdr)
static void encode_stateid(struct xdr_stream *xdr, const struct nfs_open_context *ctx, const struct nfs_lock_context *l_ctx, int zero_seqid)
static void encode_read(struct xdr_stream *xdr, const struct nfs_readargs *args, struct compound_hdr *hdr)
static void encode_readdir(struct xdr_stream *xdr, const struct nfs4_readdir_arg *readdir, struct rpc_rqst *req, struct compound_hdr *hdr)
static void encode_readlink(struct xdr_stream *xdr, const struct nfs4_readlink *readlink, struct rpc_rqst *req, struct compound_hdr *hdr)
static void encode_remove(struct xdr_stream *xdr, const struct qstr *name, struct compound_hdr *hdr)
static void encode_rename(struct xdr_stream *xdr, const struct qstr *oldname, const struct qstr *newname, struct compound_hdr *hdr)
static void encode_renew(struct xdr_stream *xdr, const struct nfs_client *client_stateid, struct compound_hdr *hdr)
static void
encode_restorefh(struct xdr_stream *xdr, struct compound_hdr *hdr)
static void
encode_setacl(struct xdr_stream *xdr, struct nfs_setaclargs *arg, struct compound_hdr *hdr)
static void
encode_savefh(struct xdr_stream *xdr, struct compound_hdr *hdr)
static void encode_setattr(struct xdr_stream *xdr, const struct nfs_setattrargs *arg, const struct nfs_server *server, struct compound_hdr *hdr)
static void encode_setclientid(struct xdr_stream *xdr, const struct nfs4_setclientid *setclientid, struct compound_hdr *hdr)
static void encode_setclientid_confirm(struct xdr_stream *xdr, const struct nfs4_setclientid_res *arg, struct compound_hdr *hdr)
static void encode_write(struct xdr_stream *xdr, const struct nfs_writeargs *args, struct compound_hdr *hdr)
static void encode_delegreturn(struct xdr_stream *xdr, const nfs4_stateid *stateid, struct compound_hdr *hdr)
static void encode_secinfo(struct xdr_stream *xdr, const struct qstr *name, struct compound_hdr *hdr)
#if defined(CONFIG_NFS_V4_1)
static void encode_exchange_id(struct xdr_stream *xdr,
struct nfs41_exchange_id_args *args,
struct compound_hdr *hdr)
static void encode_create_session(struct xdr_stream *xdr,
struct nfs41_create_session_args *args,
struct compound_hdr *hdr)
static void encode_destroy_session(struct xdr_stream *xdr,
struct nfs4_session *session,
struct compound_hdr *hdr)
static void encode_reclaim_complete(struct xdr_stream *xdr,
struct nfs41_reclaim_complete_args *args,
struct compound_hdr *hdr)
static void encode_sequence(struct xdr_stream *xdr,
const struct nfs4_sequence_args *args,
struct compound_hdr *hdr)
static void
encode_getdeviceinfo(struct xdr_stream *xdr,
const struct nfs4_getdeviceinfo_args *args,
struct compound_hdr *hdr)
static void
encode_layoutget(struct xdr_stream *xdr,
const struct nfs4_layoutget_args *args,
struct compound_hdr *hdr)
static int
encode_layoutcommit(struct xdr_stream *xdr,
struct inode *inode,
const struct nfs4_layoutcommit_args *args,
struct compound_hdr *hdr)
static void
encode_layoutreturn(struct xdr_stream *xdr,
const struct nfs4_layoutreturn_args *args,
struct compound_hdr *hdr)
static u32 nfs4_xdr_minorversion(const struct nfs4_sequence_args *args)
static void nfs4_xdr_enc_access(struct rpc_rqst *req, struct xdr_stream *xdr,
const struct nfs4_accessargs *args)
static void nfs4_xdr_enc_lookup(struct rpc_rqst *req, struct xdr_stream *xdr,
const struct nfs4_lookup_arg *args)
static void nfs4_xdr_enc_lookup_root(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs4_lookup_root_arg *args)
static void nfs4_xdr_enc_remove(struct rpc_rqst *req, struct xdr_stream *xdr,
const struct nfs_removeargs *args)
static void nfs4_xdr_enc_rename(struct rpc_rqst *req, struct xdr_stream *xdr,
const struct nfs_renameargs *args)
static void nfs4_xdr_enc_link(struct rpc_rqst *req, struct xdr_stream *xdr,
const struct nfs4_link_arg *args)
static void nfs4_xdr_enc_create(struct rpc_rqst *req, struct xdr_stream *xdr,
const struct nfs4_create_arg *args)
static void nfs4_xdr_enc_symlink(struct rpc_rqst *req, struct xdr_stream *xdr,
const struct nfs4_create_arg *args)
static void nfs4_xdr_enc_getattr(struct rpc_rqst *req, struct xdr_stream *xdr,
const struct nfs4_getattr_arg *args)
static void nfs4_xdr_enc_close(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs_closeargs *args)
static void nfs4_xdr_enc_open(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs_openargs *args)
static void nfs4_xdr_enc_open_confirm(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs_open_confirmargs *args)
static void nfs4_xdr_enc_open_noattr(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs_openargs *args)
static void nfs4_xdr_enc_open_downgrade(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs_closeargs *args)
static void nfs4_xdr_enc_lock(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs_lock_args *args)
static void nfs4_xdr_enc_lockt(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs_lockt_args *args)
static void nfs4_xdr_enc_locku(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs_locku_args *args)
static void nfs4_xdr_enc_release_lockowner(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs_release_lockowner_args *args)
static void nfs4_xdr_enc_readlink(struct rpc_rqst *req, struct xdr_stream *xdr,
const struct nfs4_readlink *args)
static void nfs4_xdr_enc_readdir(struct rpc_rqst *req, struct xdr_stream *xdr,
const struct nfs4_readdir_arg *args)
static void nfs4_xdr_enc_read(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs_readargs *args)
static void nfs4_xdr_enc_setattr(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs_setattrargs *args)
static void nfs4_xdr_enc_getacl(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs_getaclargs *args)
static void nfs4_xdr_enc_write(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs_writeargs *args)
static void nfs4_xdr_enc_commit(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs_writeargs *args)
static void nfs4_xdr_enc_fsinfo(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs4_fsinfo_arg *args)
static void nfs4_xdr_enc_pathconf(struct rpc_rqst *req, struct xdr_stream *xdr,
const struct nfs4_pathconf_arg *args)
static void nfs4_xdr_enc_statfs(struct rpc_rqst *req, struct xdr_stream *xdr,
const struct nfs4_statfs_arg *args)
static void nfs4_xdr_enc_server_caps(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs4_server_caps_arg *args)
static void nfs4_xdr_enc_renew(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs_client *clp)
static void nfs4_xdr_enc_setclientid(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs4_setclientid *sc)
static void nfs4_xdr_enc_setclientid_confirm(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs4_setclientid_res *arg)
static void nfs4_xdr_enc_delegreturn(struct rpc_rqst *req,
struct xdr_stream *xdr,
const struct nfs4_delegreturnargs *args)
static void nfs4_xdr_enc_fs_locations(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs4_fs_locations_arg *args)
static void nfs4_xdr_enc_secinfo(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs4_secinfo_arg *args)
#if defined(CONFIG_NFS_V4_1)
static void nfs4_xdr_enc_exchange_id(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs41_exchange_id_args *args)
static void nfs4_xdr_enc_create_session(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs41_create_session_args *args)
static void nfs4_xdr_enc_destroy_session(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs4_session *session)
static void nfs4_xdr_enc_sequence(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs4_sequence_args *args)
static void nfs4_xdr_enc_get_lease_time(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs4_get_lease_time_args *args)
static void nfs4_xdr_enc_reclaim_complete(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs41_reclaim_complete_args *args)
static void nfs4_xdr_enc_getdeviceinfo(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs4_getdeviceinfo_args *args)
static void nfs4_xdr_enc_layoutget(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs4_layoutget_args *args)
static void nfs4_xdr_enc_layoutcommit(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs4_layoutcommit_args *args)
static void nfs4_xdr_enc_layoutreturn(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs4_layoutreturn_args *args)
static void print_overflow_msg(const char *func, const struct xdr_stream *xdr)
static int decode_opaque_inline(struct xdr_stream *xdr, unsigned int *len, char **string)
static int decode_compound_hdr(struct xdr_stream *xdr, struct compound_hdr *hdr)
static int decode_op_hdr(struct xdr_stream *xdr, enum nfs_opnum4 expected)
static int decode_ace(struct xdr_stream *xdr, void *ace, struct nfs_client *clp)
static int decode_attr_bitmap(struct xdr_stream *xdr, uint32_t *bitmap)
static inline int decode_attr_length(struct xdr_stream *xdr, uint32_t *attrlen, __be32 **savep)
static int decode_attr_supported(struct xdr_stream *xdr, uint32_t *bitmap, uint32_t *bitmask)
static int decode_attr_type(struct xdr_stream *xdr, uint32_t *bitmap, uint32_t *type)
static int decode_attr_change(struct xdr_stream *xdr, uint32_t *bitmap, uint64_t *change)
static int decode_attr_size(struct xdr_stream *xdr, uint32_t *bitmap, uint64_t *size)
static int decode_attr_link_support(struct xdr_stream *xdr, uint32_t *bitmap, uint32_t *res)
static int decode_attr_symlink_support(struct xdr_stream *xdr, uint32_t *bitmap, uint32_t *res)
static int decode_attr_fsid(struct xdr_stream *xdr, uint32_t *bitmap, struct nfs_fsid *fsid)
static int decode_attr_lease_time(struct xdr_stream *xdr, uint32_t *bitmap, uint32_t *res)
static int decode_attr_error(struct xdr_stream *xdr, uint32_t *bitmap, int32_t *res)
static int decode_attr_filehandle(struct xdr_stream *xdr, uint32_t *bitmap, struct nfs_fh *fh)
static int decode_attr_aclsupport(struct xdr_stream *xdr, uint32_t *bitmap, uint32_t *res)
static int decode_attr_fileid(struct xdr_stream *xdr, uint32_t *bitmap, uint64_t *fileid)
static int decode_attr_mounted_on_fileid(struct xdr_stream *xdr, uint32_t *bitmap, uint64_t *fileid)
static int decode_attr_files_avail(struct xdr_stream *xdr, uint32_t *bitmap, uint64_t *res)
static int decode_attr_files_free(struct xdr_stream *xdr, uint32_t *bitmap, uint64_t *res)
static int decode_attr_files_total(struct xdr_stream *xdr, uint32_t *bitmap, uint64_t *res)
static int decode_pathname(struct xdr_stream *xdr, struct nfs4_pathname *path)
static int decode_attr_fs_locations(struct xdr_stream *xdr, uint32_t *bitmap, struct nfs4_fs_locations *res)
static int decode_attr_maxfilesize(struct xdr_stream *xdr, uint32_t *bitmap, uint64_t *res)
static int decode_attr_maxlink(struct xdr_stream *xdr, uint32_t *bitmap, uint32_t *maxlink)
static int decode_attr_maxname(struct xdr_stream *xdr, uint32_t *bitmap, uint32_t *maxname)
static int decode_attr_maxread(struct xdr_stream *xdr, uint32_t *bitmap, uint32_t *res)
static int decode_attr_maxwrite(struct xdr_stream *xdr, uint32_t *bitmap, uint32_t *res)
static int decode_attr_mode(struct xdr_stream *xdr, uint32_t *bitmap, umode_t *mode)
static int decode_attr_nlink(struct xdr_stream *xdr, uint32_t *bitmap, uint32_t *nlink)
static int decode_attr_owner(struct xdr_stream *xdr, uint32_t *bitmap,
const struct nfs_server *server, uint32_t *uid, int may_sleep)
static int decode_attr_group(struct xdr_stream *xdr, uint32_t *bitmap,
const struct nfs_server *server, uint32_t *gid, int may_sleep)
static int decode_attr_rdev(struct xdr_stream *xdr, uint32_t *bitmap, dev_t *rdev)
static int decode_attr_space_avail(struct xdr_stream *xdr, uint32_t *bitmap, uint64_t *res)
static int decode_attr_space_free(struct xdr_stream *xdr, uint32_t *bitmap, uint64_t *res)
static int decode_attr_space_total(struct xdr_stream *xdr, uint32_t *bitmap, uint64_t *res)
static int decode_attr_space_used(struct xdr_stream *xdr, uint32_t *bitmap, uint64_t *used)
static int decode_attr_time(struct xdr_stream *xdr, struct timespec *time)
static int decode_attr_time_access(struct xdr_stream *xdr, uint32_t *bitmap, struct timespec *time)
static int decode_attr_time_metadata(struct xdr_stream *xdr, uint32_t *bitmap, struct timespec *time)
static int decode_attr_time_delta(struct xdr_stream *xdr, uint32_t *bitmap,
struct timespec *time)
static int decode_attr_time_modify(struct xdr_stream *xdr, uint32_t *bitmap, struct timespec *time)
static int verify_attr_len(struct xdr_stream *xdr, __be32 *savep, uint32_t attrlen)
static int decode_change_info(struct xdr_stream *xdr, struct nfs4_change_info *cinfo)
static int decode_access(struct xdr_stream *xdr, struct nfs4_accessres *access)
static int decode_opaque_fixed(struct xdr_stream *xdr, void *buf, size_t len)
static int decode_stateid(struct xdr_stream *xdr, nfs4_stateid *stateid)
static int decode_close(struct xdr_stream *xdr, struct nfs_closeres *res)
static int decode_verifier(struct xdr_stream *xdr, void *verifier)
static int decode_commit(struct xdr_stream *xdr, struct nfs_writeres *res)
static int decode_create(struct xdr_stream *xdr, struct nfs4_change_info *cinfo)
static int decode_server_caps(struct xdr_stream *xdr, struct nfs4_server_caps_res *res)
static int decode_statfs(struct xdr_stream *xdr, struct nfs_fsstat *fsstat)
static int decode_pathconf(struct xdr_stream *xdr, struct nfs_pathconf *pathconf)
static int decode_getfattr_attrs(struct xdr_stream *xdr, uint32_t *bitmap,
struct nfs_fattr *fattr, struct nfs_fh *fh,
const struct nfs_server *server, int may_sleep)
static int decode_getfattr_generic(struct xdr_stream *xdr, struct nfs_fattr *fattr,
struct nfs_fh *fh, const struct nfs_server *server, int may_sleep)
static int decode_getfattr(struct xdr_stream *xdr, struct nfs_fattr *fattr,
const struct nfs_server *server, int may_sleep)
static int decode_first_pnfs_layout_type(struct xdr_stream *xdr,
uint32_t *layouttype)
static int decode_attr_pnfstype(struct xdr_stream *xdr, uint32_t *bitmap,
uint32_t *layouttype)
static int decode_fsinfo(struct xdr_stream *xdr, struct nfs_fsinfo *fsinfo)
static int decode_getfh(struct xdr_stream *xdr, struct nfs_fh *fh)
static int decode_link(struct xdr_stream *xdr, struct nfs4_change_info *cinfo)
static int decode_lock_denied (struct xdr_stream *xdr, struct file_lock *fl)
static int decode_lock(struct xdr_stream *xdr, struct nfs_lock_res *res)
static int decode_lockt(struct xdr_stream *xdr, struct nfs_lockt_res *res)
static int decode_locku(struct xdr_stream *xdr, struct nfs_locku_res *res)
static int decode_release_lockowner(struct xdr_stream *xdr)
static int decode_lookup(struct xdr_stream *xdr)
static int decode_space_limit(struct xdr_stream *xdr, u64 *maxsize)
static int decode_delegation(struct xdr_stream *xdr, struct nfs_openres *res)
static int decode_open(struct xdr_stream *xdr, struct nfs_openres *res)
static int decode_open_confirm(struct xdr_stream *xdr, struct nfs_open_confirmres *res)
static int decode_open_downgrade(struct xdr_stream *xdr, struct nfs_closeres *res)
static int decode_putfh(struct xdr_stream *xdr)
static int decode_putrootfh(struct xdr_stream *xdr)
static int decode_read(struct xdr_stream *xdr, struct rpc_rqst *req, struct nfs_readres *res)
static int decode_readdir(struct xdr_stream *xdr, struct rpc_rqst *req, struct nfs4_readdir_res *readdir)
static int decode_readlink(struct xdr_stream *xdr, struct rpc_rqst *req)
static int decode_remove(struct xdr_stream *xdr, struct nfs4_change_info *cinfo)
static int decode_rename(struct xdr_stream *xdr, struct nfs4_change_info *old_cinfo,
struct nfs4_change_info *new_cinfo)
static int decode_renew(struct xdr_stream *xdr)
static int
decode_restorefh(struct xdr_stream *xdr)
static int decode_getacl(struct xdr_stream *xdr, struct rpc_rqst *req,
size_t *acl_len)
static int
decode_savefh(struct xdr_stream *xdr)
static int decode_setattr(struct xdr_stream *xdr)
static int decode_setclientid(struct xdr_stream *xdr, struct nfs4_setclientid_res *res)
static int decode_setclientid_confirm(struct xdr_stream *xdr)
static int decode_write(struct xdr_stream *xdr, struct nfs_writeres *res)
static int decode_delegreturn(struct xdr_stream *xdr)
static int decode_secinfo_gss(struct xdr_stream *xdr, struct nfs4_secinfo_flavor *flavor)
static int decode_secinfo(struct xdr_stream *xdr, struct nfs4_secinfo_res *res)
#if defined(CONFIG_NFS_V4_1)
static int decode_exchange_id(struct xdr_stream *xdr,
struct nfs41_exchange_id_res *res)
static int decode_chan_attrs(struct xdr_stream *xdr,
struct nfs4_channel_attrs *attrs)
static int decode_sessionid(struct xdr_stream *xdr, struct nfs4_sessionid *sid)
static int decode_create_session(struct xdr_stream *xdr,
struct nfs41_create_session_res *res)
static int decode_destroy_session(struct xdr_stream *xdr, void *dummy)
static int decode_reclaim_complete(struct xdr_stream *xdr, void *dummy)
static int decode_sequence(struct xdr_stream *xdr,
struct nfs4_sequence_res *res,
struct rpc_rqst *rqstp)
#if defined(CONFIG_NFS_V4_1)
static int decode_getdeviceinfo(struct xdr_stream *xdr,
struct pnfs_device *pdev)
static int decode_layoutget(struct xdr_stream *xdr, struct rpc_rqst *req,
struct nfs4_layoutget_res *res)
static int decode_layoutreturn(struct xdr_stream *xdr,
struct nfs4_layoutreturn_res *res)
static int decode_layoutcommit(struct xdr_stream *xdr,
struct rpc_rqst *req,
struct nfs4_layoutcommit_res *res)
static int nfs4_xdr_dec_open_downgrade(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
struct nfs_closeres *res)
static int nfs4_xdr_dec_access(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
struct nfs4_accessres *res)
static int nfs4_xdr_dec_lookup(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
struct nfs4_lookup_res *res)
static int nfs4_xdr_dec_lookup_root(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
struct nfs4_lookup_res *res)
static int nfs4_xdr_dec_remove(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
struct nfs_removeres *res)
static int nfs4_xdr_dec_rename(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
struct nfs_renameres *res)
static int nfs4_xdr_dec_link(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
struct nfs4_link_res *res)
static int nfs4_xdr_dec_create(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
struct nfs4_create_res *res)
static int nfs4_xdr_dec_symlink(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
struct nfs4_create_res *res)
static int nfs4_xdr_dec_getattr(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
struct nfs4_getattr_res *res)
static void nfs4_xdr_enc_setacl(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs_setaclargs *args)
static int
nfs4_xdr_dec_setacl(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
struct nfs_setaclres *res)
static int
nfs4_xdr_dec_getacl(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
struct nfs_getaclres *res)
static int nfs4_xdr_dec_close(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
struct nfs_closeres *res)
static int nfs4_xdr_dec_open(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
struct nfs_openres *res)
static int nfs4_xdr_dec_open_confirm(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
struct nfs_open_confirmres *res)
static int nfs4_xdr_dec_open_noattr(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
struct nfs_openres *res)
static int nfs4_xdr_dec_setattr(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
struct nfs_setattrres *res)
static int nfs4_xdr_dec_lock(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
struct nfs_lock_res *res)
static int nfs4_xdr_dec_lockt(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
struct nfs_lockt_res *res)
static int nfs4_xdr_dec_locku(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
struct nfs_locku_res *res)
static int nfs4_xdr_dec_release_lockowner(struct rpc_rqst *rqstp,
struct xdr_stream *xdr, void *dummy)
static int nfs4_xdr_dec_readlink(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
struct nfs4_readlink_res *res)
static int nfs4_xdr_dec_readdir(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
struct nfs4_readdir_res *res)
static int nfs4_xdr_dec_read(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
struct nfs_readres *res)
static int nfs4_xdr_dec_write(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
struct nfs_writeres *res)
static int nfs4_xdr_dec_commit(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
struct nfs_writeres *res)
static int nfs4_xdr_dec_fsinfo(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs4_fsinfo_res *res)
static int nfs4_xdr_dec_pathconf(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs4_pathconf_res *res)
static int nfs4_xdr_dec_statfs(struct rpc_rqst *req, struct xdr_stream *xdr,
struct nfs4_statfs_res *res)
static int nfs4_xdr_dec_server_caps(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs4_server_caps_res *res)
static int nfs4_xdr_dec_renew(struct rpc_rqst *rqstp, struct xdr_stream *xdr,
void *__unused)
static int nfs4_xdr_dec_setclientid(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs4_setclientid_res *res)
static int nfs4_xdr_dec_setclientid_confirm(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs_fsinfo *fsinfo)
static int nfs4_xdr_dec_delegreturn(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
struct nfs4_delegreturnres *res)
static int nfs4_xdr_dec_fs_locations(struct rpc_rqst *req,
struct xdr_stream *xdr,
struct nfs4_fs_locations_res *res)
static int nfs4_xdr_dec_secinfo(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
struct nfs4_secinfo_res *res)
#if defined(CONFIG_NFS_V4_1)
static int nfs4_xdr_dec_exchange_id(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
void *res)
static int nfs4_xdr_dec_create_session(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
struct nfs41_create_session_res *res)
static int nfs4_xdr_dec_destroy_session(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
void *res)
static int nfs4_xdr_dec_sequence(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
struct nfs4_sequence_res *res)
static int nfs4_xdr_dec_get_lease_time(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
struct nfs4_get_lease_time_res *res)
static int nfs4_xdr_dec_reclaim_complete(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
struct nfs41_reclaim_complete_res *res)
static int nfs4_xdr_dec_getdeviceinfo(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
struct nfs4_getdeviceinfo_res *res)
static int nfs4_xdr_dec_layoutget(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
struct nfs4_layoutget_res *res)
static int nfs4_xdr_dec_layoutreturn(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
struct nfs4_layoutreturn_res *res)
static int nfs4_xdr_dec_layoutcommit(struct rpc_rqst *rqstp,
struct xdr_stream *xdr,
struct nfs4_layoutcommit_res *res)
int nfs4_decode_dirent(struct xdr_stream *xdr, struct nfs_entry *entry,
int plus)
static struct  nfs_errtbl[] = ;
static int
nfs4_stat_to_errno(int stat)
#define PROC(proc, argtype, restype)				\
[NFSPROC4_CLNT_##proc] =
struct rpc_procinfo	nfs4_procedures[] = ;
struct rpc_version		nfs_version4 = ;
