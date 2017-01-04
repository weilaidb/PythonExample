#define SWIGJAVA
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
# if defined(_MSC_VER)
#   pragma warning(disable : 4505)
# endif
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
# define SWIGINTERN static SWIGUNUSED
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# undef _CRT_SECURE_NO_DEPRECATE
# define _CRT_SECURE_NO_DEPRECATE
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
# pragma warning disable 592
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
typedef long long __int64;
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
typedef enum  SWIG_JavaExceptionCodes;
typedef struct  SWIG_JavaExceptions_t;
static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg)
#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr))  else
#define	CRYPTO_ONLY(x) (x);
#define	CRYPTO_ONLY(x)
#define	SWIG_NOINCLUDE 1
#define	DB_ENV_INTERNAL(dbenv) ((dbenv)->api2_internal)
#define	DB_INTERNAL(db) ((db)->api_internal)
#define	DB_PKG "com/sleepycat/db/"
static int __dbj_throw(JNIEnv *jenv,
int ret, const char *msg, jobject obj, jobject jdbenv);
static JavaVM *javavm;
static jclass db_class, dbc_class, dbenv_class, dbt_class, dblsn_class;
static jclass dbpreplist_class, dbstream_class, dbtxn_class;
static jclass keyrange_class;
static jclass bt_stat_class, compact_class, h_stat_class, heap_stat_class;
static jclass lock_stat_class, log_stat_class, mpool_stat_class, mpool_fstat_class;
static jclass mutex_stat_class, qam_stat_class, rep_stat_class;
static jclass repmgr_stat_class, repmgr_siteinfo_class, rephost_class;
static jclass seq_stat_class, txn_stat_class;
static jclass txn_active_class;
static jclass lock_class, lockreq_class;
static jclass dbex_class, deadex_class, heapfullex_class, lockex_class, memex_class;
static jclass metachkfailex_class, repdupmasterex_class, rephandledeadex_class;
static jclass repholdelectionex_class, repjoinfailex_class;
static jclass repleaseexpiredex_class;
static jclass replockoutex_class, repunavailex_class;
static jclass runrecex_class, sliceex_class, versionex_class;
static jclass filenotfoundex_class, illegalargex_class, outofmemerr_class;
static jclass bytearray_class, string_class, outputstream_class;
static jfieldID db_cptr_fid, dbc_cptr_fid, dbenv_cptr_fid;
static jfieldID dblsn_file_fid, dblsn_offset_fid;
static jfieldID dbt_data_fid, dbt_data_nio_fid, dbt_size_fid, dbt_ulen_fid;
static jfieldID dbt_dlen_fid, dbt_doff_fid, dbt_flags_fid, dbt_offset_fid;
static jfieldID dbstream_cptr_fid;
static jfieldID kr_less_fid, kr_equal_fid, kr_greater_fid;
static jfieldID lock_cptr_fid;
static jfieldID lockreq_op_fid, lockreq_modeflag_fid, lockreq_timeout_fid;
static jfieldID lockreq_obj_fid, lockreq_lock_fid;
static jfieldID repmgr_siteinfo_flags_fid, repmgr_siteinfo_status_fid;
static jfieldID txn_commit_token;
static jfieldID bt_stat_bt_magic_fid;
static jfieldID bt_stat_bt_version_fid;
static jfieldID bt_stat_bt_metaflags_fid;
static jfieldID bt_stat_bt_nkeys_fid;
static jfieldID bt_stat_bt_ndata_fid;
static jfieldID bt_stat_bt_pagecnt_fid;
static jfieldID bt_stat_bt_pagesize_fid;
static jfieldID bt_stat_bt_minkey_fid;
static jfieldID bt_stat_bt_ext_files_fid;
static jfieldID bt_stat_bt_nblobs_fid;
static jfieldID bt_stat_bt_re_len_fid;
static jfieldID bt_stat_bt_re_pad_fid;
static jfieldID bt_stat_bt_levels_fid;
static jfieldID bt_stat_bt_int_pg_fid;
static jfieldID bt_stat_bt_leaf_pg_fid;
static jfieldID bt_stat_bt_dup_pg_fid;
static jfieldID bt_stat_bt_over_pg_fid;
static jfieldID bt_stat_bt_empty_pg_fid;
static jfieldID bt_stat_bt_free_fid;
static jfieldID bt_stat_bt_int_pgfree_fid;
static jfieldID bt_stat_bt_leaf_pgfree_fid;
static jfieldID bt_stat_bt_dup_pgfree_fid;
static jfieldID bt_stat_bt_over_pgfree_fid;
static jfieldID compact_compact_fillpercent_fid;
static jfieldID compact_compact_timeout_fid;
static jfieldID compact_compact_pages_fid;
static jfieldID compact_compact_empty_buckets_fid;
static jfieldID compact_compact_pages_free_fid;
static jfieldID compact_compact_pages_examine_fid;
static jfieldID compact_compact_levels_fid;
static jfieldID compact_compact_deadlock_fid;
static jfieldID compact_compact_pages_truncated_fid;
static jfieldID compact_compact_truncate_fid;
static jfieldID h_stat_hash_magic_fid;
static jfieldID h_stat_hash_version_fid;
static jfieldID h_stat_hash_metaflags_fid;
static jfieldID h_stat_hash_nkeys_fid;
static jfieldID h_stat_hash_ndata_fid;
static jfieldID h_stat_hash_ext_files_fid;
static jfieldID h_stat_hash_nblobs_fid;
static jfieldID h_stat_hash_pagecnt_fid;
static jfieldID h_stat_hash_pagesize_fid;
static jfieldID h_stat_hash_ffactor_fid;
static jfieldID h_stat_hash_buckets_fid;
static jfieldID h_stat_hash_free_fid;
static jfieldID h_stat_hash_bfree_fid;
static jfieldID h_stat_hash_bigpages_fid;
static jfieldID h_stat_hash_big_bfree_fid;
static jfieldID h_stat_hash_overflows_fid;
static jfieldID h_stat_hash_ovfl_free_fid;
static jfieldID h_stat_hash_dup_fid;
static jfieldID h_stat_hash_dup_free_fid;
static jfieldID heap_stat_heap_magic_fid;
static jfieldID heap_stat_heap_version_fid;
static jfieldID heap_stat_heap_metaflags_fid;
static jfieldID heap_stat_heap_ext_files_fid;
static jfieldID heap_stat_heap_nblobs_fid;
static jfieldID heap_stat_heap_nrecs_fid;
static jfieldID heap_stat_heap_pagecnt_fid;
static jfieldID heap_stat_heap_pagesize_fid;
static jfieldID heap_stat_heap_nregions_fid;
static jfieldID heap_stat_heap_regionsize_fid;
static jfieldID lock_stat_st_id_fid;
static jfieldID lock_stat_st_cur_maxid_fid;
static jfieldID lock_stat_st_initlocks_fid;
static jfieldID lock_stat_st_initlockers_fid;
static jfieldID lock_stat_st_initobjects_fid;
static jfieldID lock_stat_st_locks_fid;
static jfieldID lock_stat_st_lockers_fid;
static jfieldID lock_stat_st_objects_fid;
static jfieldID lock_stat_st_maxlocks_fid;
static jfieldID lock_stat_st_maxlockers_fid;
static jfieldID lock_stat_st_maxobjects_fid;
static jfieldID lock_stat_st_partitions_fid;
static jfieldID lock_stat_st_tablesize_fid;
static jfieldID lock_stat_st_nmodes_fid;
static jfieldID lock_stat_st_nlockers_fid;
static jfieldID lock_stat_st_nlocks_fid;
static jfieldID lock_stat_st_maxnlocks_fid;
static jfieldID lock_stat_st_maxhlocks_fid;
static jfieldID lock_stat_st_locksteals_fid;
static jfieldID lock_stat_st_maxlsteals_fid;
static jfieldID lock_stat_st_maxnlockers_fid;
static jfieldID lock_stat_st_nobjects_fid;
static jfieldID lock_stat_st_maxnobjects_fid;
static jfieldID lock_stat_st_maxhobjects_fid;
static jfieldID lock_stat_st_objectsteals_fid;
static jfieldID lock_stat_st_maxosteals_fid;
static jfieldID lock_stat_st_nrequests_fid;
static jfieldID lock_stat_st_nreleases_fid;
static jfieldID lock_stat_st_nupgrade_fid;
static jfieldID lock_stat_st_ndowngrade_fid;
static jfieldID lock_stat_st_lock_wait_fid;
static jfieldID lock_stat_st_lock_nowait_fid;
static jfieldID lock_stat_st_ndeadlocks_fid;
static jfieldID lock_stat_st_locktimeout_fid;
static jfieldID lock_stat_st_nlocktimeouts_fid;
static jfieldID lock_stat_st_txntimeout_fid;
static jfieldID lock_stat_st_ntxntimeouts_fid;
static jfieldID lock_stat_st_part_wait_fid;
static jfieldID lock_stat_st_part_nowait_fid;
static jfieldID lock_stat_st_part_max_wait_fid;
static jfieldID lock_stat_st_part_max_nowait_fid;
static jfieldID lock_stat_st_objs_wait_fid;
static jfieldID lock_stat_st_objs_nowait_fid;
static jfieldID lock_stat_st_lockers_wait_fid;
static jfieldID lock_stat_st_lockers_nowait_fid;
static jfieldID lock_stat_st_region_wait_fid;
static jfieldID lock_stat_st_region_nowait_fid;
static jfieldID lock_stat_st_nlockers_hit_fid;
static jfieldID lock_stat_st_nlockers_reused_fid;
static jfieldID lock_stat_st_hash_len_fid;
static jfieldID lock_stat_st_regsize_fid;
static jfieldID log_stat_st_magic_fid;
static jfieldID log_stat_st_version_fid;
static jfieldID log_stat_st_mode_fid;
static jfieldID log_stat_st_lg_bsize_fid;
static jfieldID log_stat_st_lg_size_fid;
static jfieldID log_stat_st_wc_bytes_fid;
static jfieldID log_stat_st_wc_mbytes_fid;
static jfieldID log_stat_st_fileid_init_fid;
static jfieldID log_stat_st_nfileid_fid;
static jfieldID log_stat_st_maxnfileid_fid;
static jfieldID log_stat_st_record_fid;
static jfieldID log_stat_st_w_bytes_fid;
static jfieldID log_stat_st_w_mbytes_fid;
static jfieldID log_stat_st_wcount_fid;
static jfieldID log_stat_st_wcount_fill_fid;
static jfieldID log_stat_st_rcount_fid;
static jfieldID log_stat_st_scount_fid;
static jfieldID log_stat_st_region_wait_fid;
static jfieldID log_stat_st_region_nowait_fid;
static jfieldID log_stat_st_cur_file_fid;
static jfieldID log_stat_st_cur_offset_fid;
static jfieldID log_stat_st_disk_file_fid;
static jfieldID log_stat_st_disk_offset_fid;
static jfieldID log_stat_st_maxcommitperflush_fid;
static jfieldID log_stat_st_mincommitperflush_fid;
static jfieldID log_stat_st_regsize_fid;
static jfieldID mpool_fstat_st_pagesize_fid;
static jfieldID mpool_fstat_st_map_fid;
static jfieldID mpool_fstat_st_cache_hit_fid;
static jfieldID mpool_fstat_st_cache_miss_fid;
static jfieldID mpool_fstat_st_page_create_fid;
static jfieldID mpool_fstat_st_page_in_fid;
static jfieldID mpool_fstat_st_page_out_fid;
static jfieldID mpool_fstat_st_backup_spins_fid;
static jfieldID mpool_fstat_file_name_fid;
static jfieldID mpool_stat_st_gbytes_fid;
static jfieldID mpool_stat_st_bytes_fid;
static jfieldID mpool_stat_st_ncache_fid;
static jfieldID mpool_stat_st_max_ncache_fid;
static jfieldID mpool_stat_st_mmapsize_fid;
static jfieldID mpool_stat_st_maxopenfd_fid;
static jfieldID mpool_stat_st_maxwrite_fid;
static jfieldID mpool_stat_st_maxwrite_sleep_fid;
static jfieldID mpool_stat_st_pages_fid;
static jfieldID mpool_stat_st_map_fid;
static jfieldID mpool_stat_st_cache_hit_fid;
static jfieldID mpool_stat_st_cache_miss_fid;
static jfieldID mpool_stat_st_page_create_fid;
static jfieldID mpool_stat_st_page_in_fid;
static jfieldID mpool_stat_st_page_out_fid;
static jfieldID mpool_stat_st_ro_evict_fid;
static jfieldID mpool_stat_st_rw_evict_fid;
static jfieldID mpool_stat_st_page_trickle_fid;
static jfieldID mpool_stat_st_page_clean_fid;
static jfieldID mpool_stat_st_page_dirty_fid;
static jfieldID mpool_stat_st_hash_buckets_fid;
static jfieldID mpool_stat_st_hash_mutexes_fid;
static jfieldID mpool_stat_st_pagesize_fid;
static jfieldID mpool_stat_st_hash_searches_fid;
static jfieldID mpool_stat_st_hash_longest_fid;
static jfieldID mpool_stat_st_hash_examined_fid;
static jfieldID mpool_stat_st_hash_nowait_fid;
static jfieldID mpool_stat_st_hash_wait_fid;
static jfieldID mpool_stat_st_hash_max_nowait_fid;
static jfieldID mpool_stat_st_hash_max_wait_fid;
static jfieldID mpool_stat_st_region_nowait_fid;
static jfieldID mpool_stat_st_region_wait_fid;
static jfieldID mpool_stat_st_mvcc_frozen_fid;
static jfieldID mpool_stat_st_mvcc_thawed_fid;
static jfieldID mpool_stat_st_mvcc_freed_fid;
static jfieldID mpool_stat_st_mvcc_reused_fid;
static jfieldID mpool_stat_st_alloc_fid;
static jfieldID mpool_stat_st_alloc_buckets_fid;
static jfieldID mpool_stat_st_alloc_max_buckets_fid;
static jfieldID mpool_stat_st_alloc_pages_fid;
static jfieldID mpool_stat_st_alloc_max_pages_fid;
static jfieldID mpool_stat_st_io_wait_fid;
static jfieldID mpool_stat_st_sync_interrupted_fid;
static jfieldID mpool_stat_st_oddfsize_detect_fid;
static jfieldID mpool_stat_st_oddfsize_resolve_fid;
static jfieldID mpool_stat_st_regsize_fid;
static jfieldID mpool_stat_st_regmax_fid;
static jfieldID mutex_stat_st_mutex_align_fid;
static jfieldID mutex_stat_st_mutex_tas_spins_fid;
static jfieldID mutex_stat_st_mutex_init_fid;
static jfieldID mutex_stat_st_mutex_cnt_fid;
static jfieldID mutex_stat_st_mutex_max_fid;
static jfieldID mutex_stat_st_mutex_free_fid;
static jfieldID mutex_stat_st_mutex_inuse_fid;
static jfieldID mutex_stat_st_mutex_inuse_max_fid;
static jfieldID mutex_stat_st_region_wait_fid;
static jfieldID mutex_stat_st_region_nowait_fid;
static jfieldID mutex_stat_st_regsize_fid;
static jfieldID mutex_stat_st_regmax_fid;
static jfieldID qam_stat_qs_magic_fid;
static jfieldID qam_stat_qs_version_fid;
static jfieldID qam_stat_qs_metaflags_fid;
static jfieldID qam_stat_qs_nkeys_fid;
static jfieldID qam_stat_qs_ndata_fid;
static jfieldID qam_stat_qs_pagesize_fid;
static jfieldID qam_stat_qs_extentsize_fid;
static jfieldID qam_stat_qs_pages_fid;
static jfieldID qam_stat_qs_re_len_fid;
static jfieldID qam_stat_qs_re_pad_fid;
static jfieldID qam_stat_qs_pgfree_fid;
static jfieldID qam_stat_qs_first_recno_fid;
static jfieldID qam_stat_qs_cur_recno_fid;
static jfieldID rep_stat_st_startup_complete_fid;
static jfieldID rep_stat_st_view_fid;
static jfieldID rep_stat_st_log_queued_fid;
static jfieldID rep_stat_st_status_fid;
static jfieldID rep_stat_st_next_lsn_fid;
static jfieldID rep_stat_st_waiting_lsn_fid;
static jfieldID rep_stat_st_max_perm_lsn_fid;
static jfieldID rep_stat_st_next_pg_fid;
static jfieldID rep_stat_st_waiting_pg_fid;
static jfieldID rep_stat_st_dupmasters_fid;
static jfieldID rep_stat_st_env_id_fid;
static jfieldID rep_stat_st_env_priority_fid;
static jfieldID rep_stat_st_ext_duplicated_fid;
static jfieldID rep_stat_st_ext_records_fid;
static jfieldID rep_stat_st_ext_rereq_fid;
static jfieldID rep_stat_st_ext_update_rereq_fid;
static jfieldID rep_stat_st_bulk_fills_fid;
static jfieldID rep_stat_st_bulk_overflows_fid;
static jfieldID rep_stat_st_bulk_records_fid;
static jfieldID rep_stat_st_bulk_transfers_fid;
static jfieldID rep_stat_st_client_rerequests_fid;
static jfieldID rep_stat_st_client_svc_req_fid;
static jfieldID rep_stat_st_client_svc_miss_fid;
static jfieldID rep_stat_st_gen_fid;
static jfieldID rep_stat_st_egen_fid;
static jfieldID rep_stat_st_lease_chk_fid;
static jfieldID rep_stat_st_lease_chk_misses_fid;
static jfieldID rep_stat_st_lease_chk_refresh_fid;
static jfieldID rep_stat_st_lease_sends_fid;
static jfieldID rep_stat_st_log_duplicated_fid;
static jfieldID rep_stat_st_log_queued_max_fid;
static jfieldID rep_stat_st_log_queued_total_fid;
static jfieldID rep_stat_st_log_records_fid;
static jfieldID rep_stat_st_log_requested_fid;
static jfieldID rep_stat_st_master_fid;
static jfieldID rep_stat_st_master_changes_fid;
static jfieldID rep_stat_st_msgs_badgen_fid;
static jfieldID rep_stat_st_msgs_processed_fid;
static jfieldID rep_stat_st_msgs_recover_fid;
static jfieldID rep_stat_st_msgs_send_failures_fid;
static jfieldID rep_stat_st_msgs_sent_fid;
static jfieldID rep_stat_st_newsites_fid;
static jfieldID rep_stat_st_nsites_fid;
static jfieldID rep_stat_st_nthrottles_fid;
static jfieldID rep_stat_st_outdated_fid;
static jfieldID rep_stat_st_pg_duplicated_fid;
static jfieldID rep_stat_st_pg_records_fid;
static jfieldID rep_stat_st_pg_requested_fid;
static jfieldID rep_stat_st_txns_applied_fid;
static jfieldID rep_stat_st_startsync_delayed_fid;
static jfieldID rep_stat_st_elections_fid;
static jfieldID rep_stat_st_elections_won_fid;
static jfieldID rep_stat_st_election_cur_winner_fid;
static jfieldID rep_stat_st_election_gen_fid;
static jfieldID rep_stat_st_election_datagen_fid;
static jfieldID rep_stat_st_election_lsn_fid;
static jfieldID rep_stat_st_election_nsites_fid;
static jfieldID rep_stat_st_election_nvotes_fid;
static jfieldID rep_stat_st_election_priority_fid;
static jfieldID rep_stat_st_election_status_fid;
static jfieldID rep_stat_st_election_tiebreaker_fid;
static jfieldID rep_stat_st_election_votes_fid;
static jfieldID rep_stat_st_election_sec_fid;
static jfieldID rep_stat_st_election_usec_fid;
static jfieldID rep_stat_st_max_lease_sec_fid;
static jfieldID rep_stat_st_max_lease_usec_fid;
static jfieldID repmgr_stat_st_perm_failed_fid;
static jfieldID repmgr_stat_st_msgs_queued_fid;
static jfieldID repmgr_stat_st_msgs_dropped_fid;
static jfieldID repmgr_stat_st_incoming_queue_gbytes_fid;
static jfieldID repmgr_stat_st_incoming_queue_bytes_fid;
static jfieldID repmgr_stat_st_incoming_msgs_dropped_fid;
static jfieldID repmgr_stat_st_connection_drop_fid;
static jfieldID repmgr_stat_st_connect_fail_fid;
static jfieldID repmgr_stat_st_elect_threads_fid;
static jfieldID repmgr_stat_st_max_elect_threads_fid;
static jfieldID repmgr_stat_st_site_participants_fid;
static jfieldID repmgr_stat_st_site_total_fid;
static jfieldID repmgr_stat_st_site_views_fid;
static jfieldID repmgr_stat_st_takeovers_fid;
static jfieldID repmgr_stat_st_write_ops_forwarded_fid;
static jfieldID repmgr_stat_st_write_ops_received_fid;
static jfieldID seq_stat_st_wait_fid;
static jfieldID seq_stat_st_nowait_fid;
static jfieldID seq_stat_st_current_fid;
static jfieldID seq_stat_st_value_fid;
static jfieldID seq_stat_st_last_value_fid;
static jfieldID seq_stat_st_min_fid;
static jfieldID seq_stat_st_max_fid;
static jfieldID seq_stat_st_cache_size_fid;
static jfieldID seq_stat_st_flags_fid;
static jfieldID txn_stat_st_nrestores_fid;
static jfieldID txn_stat_st_last_ckp_fid;
static jfieldID txn_stat_st_time_ckp_fid;
static jfieldID txn_stat_st_last_txnid_fid;
static jfieldID txn_stat_st_inittxns_fid;
static jfieldID txn_stat_st_maxtxns_fid;
static jfieldID txn_stat_st_naborts_fid;
static jfieldID txn_stat_st_nbegins_fid;
static jfieldID txn_stat_st_ncommits_fid;
static jfieldID txn_stat_st_nactive_fid;
static jfieldID txn_stat_st_nsnapshot_fid;
static jfieldID txn_stat_st_maxnactive_fid;
static jfieldID txn_stat_st_maxnsnapshot_fid;
static jfieldID txn_stat_st_region_wait_fid;
static jfieldID txn_stat_st_region_nowait_fid;
static jfieldID txn_stat_st_regsize_fid;
static jfieldID txn_stat_st_txnarray_fid;
static jfieldID txn_active_txnid_fid;
static jfieldID txn_active_parentid_fid;
static jfieldID txn_active_pid_fid;
static jfieldID txn_active_lsn_fid;
static jfieldID txn_active_read_lsn_fid;
static jfieldID txn_active_mvcc_ref_fid;
static jfieldID txn_active_priority_fid;
static jfieldID txn_active_gid_fid;
static jfieldID txn_active_name_fid;
static jfieldID txn_active_slice_txns_fid;
static jmethodID db_construct, dbenv_construct, dbt_construct, dblsn_construct;
static jmethodID dbpreplist_construct, dbtxn_construct;
static jmethodID bt_stat_construct, get_err_msg_method, h_stat_construct;
static jmethodID heap_stat_construct, lock_stat_construct, log_stat_construct;
static jmethodID mpool_stat_construct, mpool_fstat_construct;
static jmethodID mutex_stat_construct, qam_stat_construct;
static jmethodID rep_stat_construct, repmgr_stat_construct, seq_stat_construct;
static jmethodID txn_stat_construct, txn_active_construct;
static jmethodID dbex_construct, deadex_construct, lockex_construct;
static jmethodID heapfullex_construct, memex_construct, memex_update_method;
static jmethodID metachkfailex_construct, repdupmasterex_construct;
static jmethodID rephandledeadex_construct;
static jmethodID repholdelectionex_construct, repjoinfailex_construct;
static jmethodID repmgr_siteinfo_construct, rephost_construct, repleaseexpiredex_construct;
static jmethodID replockoutex_construct;
static jmethodID repunavailex_construct;
static jmethodID runrecex_construct, sliceex_construct, versionex_construct;
static jmethodID filenotfoundex_construct, illegalargex_construct;
static jmethodID outofmemerr_construct;
static jmethodID lock_construct;
static jmethodID app_dispatch_method, errcall_method, env_feedback_method;
static jmethodID msgcall_method, paniccall_method, rep_transport_method;
static jmethodID panic_event_notify_method;
static jmethodID rep_autotakeover_failed_event_notify_method;
static jmethodID rep_client_event_notify_method;
static jmethodID rep_connect_broken_event_notify_method;
static jmethodID rep_connect_established_event_notify_method;
static jmethodID rep_connect_try_failed_event_notify_method;
static jmethodID rep_dupmaster_event_notify_method;
static jmethodID rep_elected_event_notify_method;
static jmethodID rep_election_failed_event_notify_method;
static jmethodID rep_init_done_event_notify_method;
static jmethodID rep_inqueue_full_event_notify_method;
static jmethodID rep_join_failure_event_notify_method;
static jmethodID rep_local_site_removed_notify_method;
static jmethodID rep_master_event_notify_method;
static jmethodID rep_master_failure_event_notify_method;
static jmethodID rep_new_master_event_notify_method;
static jmethodID rep_perm_failed_event_notify_method;
static jmethodID rep_site_added_event_notify_method;
static jmethodID rep_site_removed_event_notify_method;
static jmethodID rep_startup_done_event_notify_method;
static jmethodID repmgr_msg_dispatch_method;
static jmethodID write_failed_event_notify_method;
static jmethodID append_recno_method, backup_close_method, backup_open_method;
static jmethodID backup_write_method, bt_compare_method, bt_compress_method;
static jmethodID bt_decompress_method, bt_prefix_method;
static jmethodID db_feedback_method, dup_compare_method;
static jmethodID foreignkey_nullify_method, h_compare_method, h_hash_method;
static jmethodID rep_view_method, partition_method, seckey_create_method;
static jmethodID slice_method;
static jmethodID outputstream_write_method;
const struct  all_classes[] = ;
const struct  all_fields[] = ;
const struct  all_methods[] = ;
#define	NELEM(x) (sizeof (x) / sizeof (x[0]))
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_initialize(
JNIEnv *jenv, jclass clazz)
static JNIEnv *__dbj_get_jnienv(int *needDetach)
static void __dbj_detach()
static jobject __dbj_wrap_DB_LSN(JNIEnv *jenv, const DB_LSN *lsn)
#define	JDBENV (arg1 ? (jobject)DB_ENV_INTERNAL(arg1) : NULL)
#define	DB2JDBENV ((jobject)DB_ENV_INTERNAL(arg1->dbenv))
#define	DBC2JDBENV ((jobject)DB_ENV_INTERNAL(arg1->dbp->dbenv))
#define	TXN2JDBENV ((jobject)DB_ENV_INTERNAL(arg1->mgrp->env->dbenv))
static jthrowable __dbj_get_except(JNIEnv *jenv,
int ret, const char *msg, jobject obj, jobject jdbenv)
static int __dbj_throw(JNIEnv *jenv,
int ret, const char *msg, jobject obj, jobject jdbenv)
typedef int db_ret_t;
typedef int int_bool;
struct __db_lk_conflicts ;
struct __db_out_stream ;
struct __db_repmgr_site_address ;
struct __db_repmgr_sites ;
#define        Db __db
#define        Dbc __dbc
#define        Dbt __db_dbt
#define        DbChannel __db_channel
#define        DbEnv __db_env
#define        DbLock __db_lock_u
#define        DbLogc __db_log_cursor
#define        DbLsn __db_lsn
#define        DbMpoolFile __db_mpoolfile
#define        DbSequence __db_sequence
#define        DbSite __db_site
#define        DbStream __db_stream
#define        DbTxn __db_txn
void *unused = (void *)SWIG_JavaThrowException;
typedef struct __dbt_locked  DBT_LOCKED;
struct __dbt_arr ;
static int __dbj_dbt_memcopy(DBT *dbt, u_int32_t offset, void *buf, u_int32_t size, u_int32_t flags)
static void __dbj_dbt_copyout(
JNIEnv *jenv, const DBT *dbt, jbyteArray *jarr, jobject jdbt)
static int __dbj_dbt_copyin(
JNIEnv *jenv, DBT_LOCKED *ldbt, DBT **dbtp, jobject jdbt, int allow_null)
static void __dbj_dbt_release(
JNIEnv *jenv, jobject jdbt, DBT *dbt, DBT_LOCKED *ldbt)
struct __dbj_verify_data ;
static int __dbj_verify_callback(void *handle, const void *str_arg)
SWIGEXPORT void JNICALL
Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1lock_1vec(JNIEnv *jenv,
jclass jcls, jlong jdbenvp, jobject jdbenv, jint locker, jint flags,
jobjectArray list, jint offset, jint count)
SWIGEXPORT void JNICALL
Java_com_sleepycat_db_internal_db_1javaJNI_DbTxn_1commit(JNIEnv *jenv,
jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
#define JAVADB_STAT_INT(jenv, jobj, fid, statp, name)			\
(*jenv)->SetIntField(jenv, jobj, fid, (jint)statp->name)
#define JAVADB_STAT_STRING(jenv, jobj, fid, statp, name)		\
(*jenv)->SetObjectField(jenv, jobj, fid,		\
(*jenv)->NewStringUTF(jenv, statp->name))
#define JAVADB_STAT_LSN(jenv, jobj, fid, statp, name)			\
(*jenv)->SetObjectField(jenv, jobj, fid,		\
__dbj_wrap_DB_LSN(jenv, &statp->name))
#define JAVADB_STAT_LONG(jenv, jobj, fid, statp, name)			\
(*jenv)->SetLongField(jenv, jobj, fid,			\
(jlong)statp->name)
#define JAVADB_STAT_GID(jenv, jobj, fid, statp, name)
#define JAVADB_STAT_ACTIVE_SLICE(jenv, jobj, fid, statp, name, dbenv)
#define JAVADB_STAT_ACTIVE(jenv, cl, jobj, statp, name) \
do  while(0)
static void __dbj_error(const DB_ENV *dbenv,
const char *prefix, const char *msg)
static void __dbj_env_feedback(DB_ENV *dbenv, int opcode, int percent)
static void __dbj_message(const DB_ENV *dbenv,
const char *prefix, const char *msg)
static void __dbj_repmgr_msg_dispatch(DB_ENV *dbenv, DB_CHANNEL *chan, DBT *msgs, u_int32_t nmsgs, u_int32_t flags)
static void __dbj_panic(DB_ENV *dbenv, int ret)
static int __dbj_app_dispatch(DB_ENV *dbenv,
DBT *dbt, DB_LSN *lsn, db_recops recops)
static void __dbj_event_notify(DB_ENV *dbenv, u_int32_t event_id, void * info)
static int __dbj_rep_transport(DB_ENV *dbenv,
const DBT *control, const DBT *rec, const DB_LSN *lsn, int envid,
u_int32_t flags)
static int __dbj_foreignkey_nullify(DB *db,
const DBT *key, DBT *data, const DBT *skey, int *changed)
static int __dbj_seckey_create(DB *db,
const DBT *key, const DBT *data, DBT *result)
static int __dbj_append_recno(DB *db, DBT *dbt, db_recno_t recno)
static int __dbj_am_compare(DB *db, const DBT *dbt1, const DBT *dbt2,
jmethodID compare_method)
static int __dbj_bt_compare(DB *db,
const DBT *dbt1, const DBT *dbt2, size_t *locp)
#define DBT_COPYOUT(num) do  while (0)
#define DBT_COPIED_FREE(num) do  while (0)
#define DBT_COPYIN_DATA(num) do  while (0)
static int __dbj_bt_compress(DB *db, const DBT *dbt1, const DBT *dbt2,
const DBT *dbt3, const DBT *dbt4, DBT *dbt5)
static int __dbj_bt_decompress(DB *db, const DBT *dbt1, const DBT *dbt2,
DBT *dbt3, DBT *dbt4, DBT *dbt5)
static size_t __dbj_bt_prefix(DB *db, const DBT *dbt1, const DBT *dbt2)
static int __dbj_dup_compare(DB *db,
const DBT *dbt1, const DBT *dbt2, size_t *locp)
static void __dbj_db_feedback(DB *db, int opcode, int percent)
static int __dbj_h_compare(DB *db,
const DBT *dbt1, const DBT *dbt2, size_t *locp)
static u_int32_t __dbj_h_hash(DB *db, const void *data, u_int32_t len)
static u_int32_t __dbj_partition(DB *db, DBT *dbt1)
static int __dbj_backup_close(DB_ENV *dbenv, const char *dbname, void *handle)
static int __dbj_backup_open(DB_ENV *dbenv, const char *target, const char *dbname, void **handle)
static int __dbj_backup_write(DB_ENV *dbenv, u_int32_t file_pos_gbytes, u_int32_t file_pos_bytes, u_int32_t size, u_int8_t *buf, void *handle)
static int __dbj_rep_view(DB_ENV *dbenv, const char *name, int *result, u_int32_t flags)
static int __dbj_slice(const DB *db, const DBT *dbt1, DBT *dbt2)
SWIGEXPORT jlong JNICALL
Java_com_sleepycat_db_internal_db_1javaJNI_initDbEnvRef0(
JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2)
SWIGEXPORT jlong JNICALL
Java_com_sleepycat_db_internal_db_1javaJNI_initDbRef0(
JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2)
SWIGEXPORT void JNICALL
Java_com_sleepycat_db_internal_db_1javaJNI_deleteRef0(
JNIEnv *jenv, jclass jcls, jlong jarg1)
SWIGEXPORT jlong JNICALL
Java_com_sleepycat_db_internal_db_1javaJNI_getDbEnv0(
JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jboolean JNICALL
Java_com_sleepycat_db_internal_DbUtil_is_1big_1endian(
JNIEnv *jenv, jclass clazz)
SWIGINTERN struct Db *new_Db(DB_ENV *dbenv,u_int32_t flags)
SWIGINTERN db_ret_t Db_associate(struct Db *self,DB_TXN *txnid,DB *secondary,int (*callback)(DB *,DBT const *,DBT const *,DBT *),u_int32_t flags)
SWIGINTERN db_ret_t Db_associate_foreign(struct Db *self,DB *primary,int (*callback)(DB *,DBT const *,DBT *,DBT const *,int *),u_int32_t flags)
SWIGINTERN db_ret_t Db_compact(struct Db *self,DB_TXN *txnid,DBT *start,DBT *stop,DB_COMPACT *c_data,u_int32_t flags,DBT *end)
SWIGINTERN int Db_close(struct Db *self,u_int32_t flags)
SWIGINTERN DBC *Db_cursor(struct Db *self,DB_TXN *txnid,u_int32_t flags)
SWIGINTERN int Db_del(struct Db *self,DB_TXN *txnid,DBT *key,u_int32_t flags)
SWIGINTERN void Db_err(struct Db *self,int ret,char const *message)
SWIGINTERN void Db_errx(struct Db *self,char const *message)
SWIGINTERN int Db_exists(struct Db *self,DB_TXN *txnid,DBT *key,u_int32_t flags)
SWIGINTERN int Db_get(struct Db *self,DB_TXN *txnid,DBT *key,DBT *data,u_int32_t flags)
SWIGINTERN u_int32_t Db_get_assoc_flags(struct Db *self)
SWIGINTERN char const *Db_get_blob_sub_dir(struct Db *self)
SWIGINTERN int_bool Db_get_byteswapped(struct Db *self)
SWIGINTERN jlong Db_get_cachesize(struct Db *self)
SWIGINTERN u_int32_t Db_get_cachesize_ncache(struct Db *self)
SWIGINTERN char const *Db_get_create_dir(struct Db *self)
SWIGINTERN char const *Db_get_filename(struct Db *self)
SWIGINTERN char const *Db_get_dbname(struct Db *self)
SWIGINTERN u_int32_t Db_get_encrypt_flags(struct Db *self)
SWIGINTERN char const *Db_get_ext_file_dir(struct Db *self)
SWIGINTERN u_int32_t Db_get_ext_file_threshold(struct Db *self)
SWIGINTERN u_int32_t Db_get_flags(struct Db *self)
SWIGINTERN int Db_get_lk_exclusive(struct Db *self)
SWIGINTERN int Db_get_lorder(struct Db *self)
SWIGINTERN DB_MPOOLFILE *Db_get_mpf(struct Db *self)
SWIGINTERN u_int32_t Db_get_open_flags(struct Db *self)
SWIGINTERN u_int32_t Db_get_pagesize(struct Db *self)
SWIGINTERN u_int32_t Db_get_bt_minkey(struct Db *self)
SWIGINTERN jlong Db_get_heapsize(struct Db *self)
SWIGINTERN u_int32_t Db_get_heap_regionsize(struct Db *self)
SWIGINTERN u_int32_t Db_get_h_ffactor(struct Db *self)
SWIGINTERN u_int32_t Db_get_h_nelem(struct Db *self)
SWIGINTERN int Db_get_re_delim(struct Db *self)
SWIGINTERN DB_CACHE_PRIORITY Db_get_priority(struct Db *self)
SWIGINTERN char const **Db_get_partition_dirs(struct Db *self)
SWIGINTERN struct __dbt_arr Db_get_partition_keys(struct Db *self)
SWIGINTERN int Db_get_partition_parts(struct Db *self)
SWIGINTERN u_int32_t Db_get_re_len(struct Db *self)
SWIGINTERN int Db_get_re_pad(struct Db *self)
SWIGINTERN char const *Db_get_re_source(struct Db *self)
SWIGINTERN u_int32_t Db_get_q_extentsize(struct Db *self)
SWIGINTERN int_bool Db_get_multiple(struct Db *self)
SWIGINTERN DB **Db_get_slices(struct Db *self)
SWIGINTERN int_bool Db_get_transactional(struct Db *self)
SWIGINTERN DBTYPE Db_get_type(struct Db *self)
SWIGINTERN DBC *Db_join(struct Db *self,DBC **curslist,u_int32_t flags)
SWIGINTERN db_ret_t Db_key_range(struct Db *self,DB_TXN *txnid,DBT *key,DB_KEY_RANGE *key_range,u_int32_t flags)
SWIGINTERN db_ret_t Db_open(struct Db *self,DB_TXN *txnid,char const *file,char const *database,DBTYPE type,u_int32_t flags,int mode)
SWIGINTERN int Db_pget(struct Db *self,DB_TXN *txnid,DBT *key,DBT *pkey,DBT *data,u_int32_t flags)
SWIGINTERN int Db_put(struct Db *self,DB_TXN *txnid,DBT *key,DBT *db_put_data,u_int32_t flags)
SWIGINTERN db_ret_t Db_remove(struct Db *self,char const *file,char const *database,u_int32_t flags)
SWIGINTERN db_ret_t Db_rename(struct Db *self,char const *file,char const *database,char const *newname,u_int32_t flags)
SWIGINTERN db_ret_t Db_set_append_recno(struct Db *self,int (*db_append_recno_fcn)(DB *,DBT *,db_recno_t))
SWIGINTERN db_ret_t Db_set_bt_compare(struct Db *self,int (*bt_compare_fcn)(DB *,DBT const *,DBT const *,size_t *))
SWIGINTERN db_ret_t Db_set_bt_minkey(struct Db *self,u_int32_t bt_minkey)
SWIGINTERN db_ret_t Db_set_bt_compress(struct Db *self,int (*bt_compress_fcn)(DB *,DBT const *,DBT const *,DBT const *,DBT const *,DBT *),int (*bt_decompress_fcn)(DB *,DBT const *,DBT const *,DBT *,DBT *,DBT *))
SWIGINTERN db_ret_t Db_set_bt_prefix(struct Db *self,size_t (*bt_prefix_fcn)(DB *,DBT const *,DBT const *))
SWIGINTERN db_ret_t Db_set_cachesize(struct Db *self,jlong bytes,int ncache)
SWIGINTERN db_ret_t Db_set_create_dir(struct Db *self,char const *dir)
SWIGINTERN db_ret_t Db_set_dup_compare(struct Db *self,int (*dup_compare_fcn)(DB *,DBT const *,DBT const *,size_t *))
SWIGINTERN db_ret_t Db_set_encrypt(struct Db *self,char const *passwd,u_int32_t flags)
SWIGINTERN db_ret_t Db_set_ext_file_dir(struct Db *self,char const *dir)
SWIGINTERN db_ret_t Db_set_ext_file_threshold(struct Db *self,u_int32_t bytes,u_int32_t flags)
SWIGINTERN db_ret_t Db_set_feedback(struct Db *self,void (*db_feedback_fcn)(DB *,int,int))
SWIGINTERN db_ret_t Db_set_flags(struct Db *self,u_int32_t flags)
SWIGINTERN db_ret_t Db_set_heapsize(struct Db *self,jlong bytes)
SWIGINTERN db_ret_t Db_set_heap_regionsize(struct Db *self,u_int32_t npages)
SWIGINTERN db_ret_t Db_set_h_compare(struct Db *self,int (*h_compare_fcn)(DB *,DBT const *,DBT const *,size_t *))
SWIGINTERN db_ret_t Db_set_h_ffactor(struct Db *self,u_int32_t h_ffactor)
SWIGINTERN db_ret_t Db_set_h_hash(struct Db *self,u_int32_t (*h_hash_fcn)(DB *,void const *,u_int32_t))
SWIGINTERN db_ret_t Db_set_h_nelem(struct Db *self,u_int32_t h_nelem)
SWIGINTERN db_ret_t Db_set_lk_exclusive(struct Db *self,int nowait)
SWIGINTERN db_ret_t Db_set_lorder(struct Db *self,int lorder)
SWIGINTERN int Db_set_msgfile(struct Db *self,char const *msgfile)
SWIGINTERN db_ret_t Db_set_pagesize(struct Db *self,u_int32_t pagesize)
SWIGINTERN db_ret_t Db_set_partition(struct Db *self,u_int32_t parts,DBT *keys,u_int32_t (*db_partition_fcn)(DB *,DBT *))
SWIGINTERN db_ret_t Db_set_partition_dirs(struct Db *self,char const **dirp)
SWIGINTERN db_ret_t Db_set_priority(struct Db *self,DB_CACHE_PRIORITY priority)
SWIGINTERN db_ret_t Db_set_re_delim(struct Db *self,int re_delim)
SWIGINTERN db_ret_t Db_set_re_len(struct Db *self,u_int32_t re_len)
SWIGINTERN db_ret_t Db_set_re_pad(struct Db *self,int re_pad)
SWIGINTERN db_ret_t Db_set_re_source(struct Db *self,char *source)
SWIGINTERN db_ret_t Db_set_q_extentsize(struct Db *self,u_int32_t extentsize)
SWIGINTERN db_ret_t Db_set_slice_callback(struct Db *self,int (*slice_fcn)(DB const *,DBT const *,DBT *))
SWIGINTERN DB *Db_slice_lookup(struct Db *self,DBT const *key,u_int32_t flags)
SWIGINTERN db_ret_t Db_sort_multiple(struct Db *self,DBT *key,DBT *data)
SWIGINTERN void *Db_stat(struct Db *self,DB_TXN *txnid,u_int32_t flags)
SWIGINTERN int Db_stat_print(struct Db *self,u_int32_t flags)
SWIGINTERN db_ret_t Db_sync(struct Db *self,u_int32_t flags)
SWIGINTERN int Db_truncate(struct Db *self,DB_TXN *txnid,u_int32_t flags)
SWIGINTERN db_ret_t Db_upgrade(struct Db *self,char const *file,u_int32_t flags)
SWIGINTERN int_bool Db_verify(struct Db *self,char const *file,char const *database,struct __db_out_stream outfile,u_int32_t flags)
SWIGINTERN db_ret_t Dbc_close(struct Dbc *self)
SWIGINTERN int Dbc_cmp(struct Dbc *self,DBC *odbc,u_int32_t flags)
SWIGINTERN db_recno_t Dbc_count(struct Dbc *self,u_int32_t flags)
SWIGINTERN DB_STREAM *Dbc_db_stream(struct Dbc *self,u_int32_t flags)
SWIGINTERN int Dbc_del(struct Dbc *self,u_int32_t flags)
SWIGINTERN DBC *Dbc_dup(struct Dbc *self,u_int32_t flags)
SWIGINTERN int Dbc_get(struct Dbc *self,DBT *key,DBT *data,u_int32_t flags)
SWIGINTERN DB_CACHE_PRIORITY Dbc_get_priority(struct Dbc *self)
SWIGINTERN int Dbc_pget(struct Dbc *self,DBT *key,DBT *pkey,DBT *data,u_int32_t flags)
SWIGINTERN int Dbc_put(struct Dbc *self,DBT *key,DBT *db_put_data,u_int32_t flags)
SWIGINTERN db_ret_t Dbc_set_priority(struct Dbc *self,DB_CACHE_PRIORITY priority)
SWIGINTERN struct DbEnv *new_DbEnv(u_int32_t flags)
SWIGINTERN db_ret_t DbEnv_close(struct DbEnv *self,u_int32_t flags)
SWIGINTERN db_ret_t DbEnv_dbremove(struct DbEnv *self,DB_TXN *txnid,char const *file,char const *database,u_int32_t flags)
SWIGINTERN db_ret_t DbEnv_dbrename(struct DbEnv *self,DB_TXN *txnid,char const *file,char const *database,char const *newname,u_int32_t flags)
SWIGINTERN void DbEnv_err(struct DbEnv *self,int ret,char const *message)
SWIGINTERN void DbEnv_errx(struct DbEnv *self,char const *message)
SWIGINTERN DB_ENV **DbEnv_get_slices(struct DbEnv *self)
SWIGINTERN DB_TXN *DbEnv_cdsgroup_begin(struct DbEnv *self)
SWIGINTERN db_ret_t DbEnv_fileid_reset(struct DbEnv *self,char const *file,u_int32_t flags)
SWIGINTERN char const **DbEnv_get_data_dirs(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_get_encrypt_flags(struct DbEnv *self)
SWIGINTERN char const *DbEnv_get_ext_file_dir(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_get_ext_file_threshold(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_get_flags(struct DbEnv *self)
SWIGINTERN char const *DbEnv_get_home(struct DbEnv *self)
SWIGINTERN char const *DbEnv_get_intermediate_dir_mode(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_get_open_flags(struct DbEnv *self)
SWIGINTERN char const *DbEnv_get_metadata_dir(struct DbEnv *self)
SWIGINTERN long DbEnv_get_shm_key(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_get_slice_count(struct DbEnv *self)
SWIGINTERN char const *DbEnv_get_tmp_dir(struct DbEnv *self)
SWIGINTERN int_bool DbEnv_get_verbose(struct DbEnv *self,u_int32_t which)
SWIGINTERN int_bool DbEnv_is_bigendian(struct DbEnv *self)
SWIGINTERN db_ret_t DbEnv_lsn_reset(struct DbEnv *self,char const *file,u_int32_t flags)
SWIGINTERN db_ret_t DbEnv_open(struct DbEnv *self,char const *db_home,u_int32_t flags,int mode)
SWIGINTERN db_ret_t DbEnv_remove(struct DbEnv *self,char const *db_home,u_int32_t flags)
SWIGINTERN db_ret_t DbEnv_set_cachesize(struct DbEnv *self,jlong bytes,int ncache)
SWIGINTERN db_ret_t DbEnv_set_cache_max(struct DbEnv *self,jlong bytes)
SWIGINTERN db_ret_t DbEnv_set_create_dir(struct DbEnv *self,char const *dir)
SWIGINTERN db_ret_t DbEnv_add_data_dir(struct DbEnv *self,char const *dir)
SWIGINTERN db_ret_t DbEnv_set_intermediate_dir_mode(struct DbEnv *self,char const *mode)
SWIGINTERN db_ret_t DbEnv_set_encrypt(struct DbEnv *self,char const *passwd,u_int32_t flags)
SWIGINTERN void DbEnv_set_errcall(struct DbEnv *self,void (*db_errcall_fcn)(DB_ENV const *,char const *,char const *))
SWIGINTERN db_ret_t DbEnv_set_ext_file_dir(struct DbEnv *self,char const *dir)
SWIGINTERN db_ret_t DbEnv_set_ext_file_threshold(struct DbEnv *self,u_int32_t bytes,u_int32_t flags)
SWIGINTERN db_ret_t DbEnv_set_flags(struct DbEnv *self,u_int32_t flags,int_bool onoff)
SWIGINTERN db_ret_t DbEnv_set_feedback(struct DbEnv *self,void (*env_feedback_fcn)(DB_ENV *,int,int))
SWIGINTERN db_ret_t DbEnv_set_metadata_dir(struct DbEnv *self,char const *dir)
SWIGINTERN db_ret_t DbEnv_set_mp_max_openfd(struct DbEnv *self,int maxopenfd)
SWIGINTERN db_ret_t DbEnv_set_mp_max_write(struct DbEnv *self,int maxwrite,db_timeout_t maxwrite_sleep)
SWIGINTERN db_ret_t DbEnv_set_mp_mmapsize(struct DbEnv *self,size_t mp_mmapsize)
SWIGINTERN db_ret_t DbEnv_set_mp_pagesize(struct DbEnv *self,u_int32_t mp_pagesize)
SWIGINTERN db_ret_t DbEnv_set_mp_tablesize(struct DbEnv *self,u_int32_t mp_tablesize)
SWIGINTERN void DbEnv_set_msgcall(struct DbEnv *self,void (*db_msgcall_fcn)(DB_ENV const *,char const *,char const *))
SWIGINTERN int DbEnv_set_msgfile(struct DbEnv *self,char const *msgfile)
SWIGINTERN db_ret_t DbEnv_set_paniccall(struct DbEnv *self,void (*db_panic_fcn)(DB_ENV *,int))
SWIGINTERN db_ret_t DbEnv_set_shm_key(struct DbEnv *self,long shm_key)
SWIGINTERN db_ret_t DbEnv_set_timeout(struct DbEnv *self,db_timeout_t timeout,u_int32_t flags)
SWIGINTERN db_ret_t DbEnv_set_tmp_dir(struct DbEnv *self,char const *dir)
SWIGINTERN db_ret_t DbEnv_set_tx_max(struct DbEnv *self,u_int32_t max)
SWIGINTERN db_ret_t DbEnv_set_app_dispatch(struct DbEnv *self,int (*tx_recover)(DB_ENV *,DBT *,DB_LSN *,db_recops))
SWIGINTERN db_ret_t DbEnv_set_event_notify(struct DbEnv *self,void (*event_notify)(DB_ENV *,u_int32_t,void *))
SWIGINTERN db_ret_t DbEnv_set_tx_timestamp(struct DbEnv *self,time_t *timestamp)
SWIGINTERN db_ret_t DbEnv_set_verbose(struct DbEnv *self,u_int32_t which,int_bool onoff)
SWIGINTERN struct __db_lk_conflicts DbEnv_get_lk_conflicts(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_get_lk_detect(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_get_lk_max_locks(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_get_lk_max_lockers(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_get_lk_max_objects(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_get_lk_partitions(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_get_lk_priority(struct DbEnv *self,u_int32_t lockerid)
SWIGINTERN u_int32_t DbEnv_get_lk_tablesize(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_get_memory_init(struct DbEnv *self,u_int32_t config_type)
SWIGINTERN jlong DbEnv_get_memory_max(struct DbEnv *self)
SWIGINTERN int DbEnv_lock_detect(struct DbEnv *self,u_int32_t flags,u_int32_t atype)
SWIGINTERN DB_LOCK *DbEnv_lock_get(struct DbEnv *self,u_int32_t locker,u_int32_t flags,DBT *object,db_lockmode_t lock_mode)
SWIGINTERN u_int32_t DbEnv_lock_id(struct DbEnv *self)
SWIGINTERN db_ret_t DbEnv_lock_id_free(struct DbEnv *self,u_int32_t id)
SWIGINTERN db_ret_t DbEnv_lock_put(struct DbEnv *self,DB_LOCK *lock)
SWIGINTERN DB_LOCK_STAT *DbEnv_lock_stat(struct DbEnv *self,u_int32_t flags)
SWIGINTERN int DbEnv_lock_stat_print(struct DbEnv *self,u_int32_t flags)
SWIGINTERN db_ret_t DbEnv_set_lk_conflicts(struct DbEnv *self,struct __db_lk_conflicts conflicts)
SWIGINTERN db_ret_t DbEnv_set_lk_detect(struct DbEnv *self,u_int32_t detect)
SWIGINTERN db_ret_t DbEnv_set_lk_max_lockers(struct DbEnv *self,u_int32_t max)
SWIGINTERN db_ret_t DbEnv_set_lk_max_locks(struct DbEnv *self,u_int32_t max)
SWIGINTERN db_ret_t DbEnv_set_lk_max_objects(struct DbEnv *self,u_int32_t max)
SWIGINTERN db_ret_t DbEnv_set_lk_partitions(struct DbEnv *self,u_int32_t partitions)
SWIGINTERN db_ret_t DbEnv_set_lk_priority(struct DbEnv *self,u_int32_t lockerid,u_int32_t priority)
SWIGINTERN db_ret_t DbEnv_set_lk_tablesize(struct DbEnv *self,u_int32_t size)
SWIGINTERN db_ret_t DbEnv_set_memory_init(struct DbEnv *self,u_int32_t config_type,u_int32_t value)
SWIGINTERN db_ret_t DbEnv_set_memory_max(struct DbEnv *self,jlong bytes)
SWIGINTERN u_int32_t DbEnv_get_lg_bsize(struct DbEnv *self)
SWIGINTERN char const *DbEnv_get_lg_dir(struct DbEnv *self)
SWIGINTERN int DbEnv_get_lg_filemode(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_get_lg_max(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_get_lg_regionmax(struct DbEnv *self)
SWIGINTERN char **DbEnv_log_archive(struct DbEnv *self,u_int32_t flags)
SWIGINTERN int DbEnv_log_compare(DB_LSN const *lsn0,DB_LSN const *lsn1)
SWIGINTERN DB_LOGC *DbEnv_log_cursor(struct DbEnv *self,u_int32_t flags)
SWIGINTERN char *DbEnv_log_file(struct DbEnv *self,DB_LSN *lsn)
SWIGINTERN db_ret_t DbEnv_log_flush(struct DbEnv *self,DB_LSN const *lsn_or_null)
SWIGINTERN int_bool DbEnv_log_get_config(struct DbEnv *self,u_int32_t which)
SWIGINTERN db_ret_t DbEnv_log_put(struct DbEnv *self,DB_LSN *lsn,DBT const *data,u_int32_t flags)
SWIGINTERN db_ret_t DbEnv_log_print(struct DbEnv *self,DB_TXN *txn,char const *msg)
SWIGINTERN db_ret_t DbEnv_log_set_config(struct DbEnv *self,u_int32_t which,int_bool onoff)
SWIGINTERN DB_LOG_STAT *DbEnv_log_stat(struct DbEnv *self,u_int32_t flags)
SWIGINTERN int DbEnv_log_stat_print(struct DbEnv *self,u_int32_t flags)
SWIGINTERN int DbEnv_log_verify(struct DbEnv *self,char const *envhome,u_int32_t cachesz,char const *dbfile,char const *dbname,time_t stime,time_t etime,u_int32_t stfile,u_int32_t stoffset,u_int32_t efile,u_int32_t eoffset,int caf,int verbose)
SWIGINTERN db_ret_t DbEnv_set_lg_bsize(struct DbEnv *self,u_int32_t lg_bsize)
SWIGINTERN db_ret_t DbEnv_set_lg_dir(struct DbEnv *self,char const *dir)
SWIGINTERN db_ret_t DbEnv_set_lg_filemode(struct DbEnv *self,int mode)
SWIGINTERN db_ret_t DbEnv_set_lg_max(struct DbEnv *self,u_int32_t lg_max)
SWIGINTERN db_ret_t DbEnv_set_lg_regionmax(struct DbEnv *self,u_int32_t lg_regionmax)
SWIGINTERN jlong DbEnv_get_cachesize(struct DbEnv *self)
SWIGINTERN int DbEnv_get_cachesize_ncache(struct DbEnv *self)
SWIGINTERN jlong DbEnv_get_cache_max(struct DbEnv *self)
SWIGINTERN char const *DbEnv_get_create_dir(struct DbEnv *self)
SWIGINTERN int DbEnv_get_mp_max_openfd(struct DbEnv *self)
SWIGINTERN int DbEnv_get_mp_max_write(struct DbEnv *self)
SWIGINTERN db_timeout_t DbEnv_get_mp_max_write_sleep(struct DbEnv *self)
SWIGINTERN size_t DbEnv_get_mp_mmapsize(struct DbEnv *self)
SWIGINTERN int DbEnv_get_mp_pagesize(struct DbEnv *self)
SWIGINTERN int DbEnv_get_mp_tablesize(struct DbEnv *self)
SWIGINTERN DB_MPOOL_STAT *DbEnv_memp_stat(struct DbEnv *self,u_int32_t flags)
SWIGINTERN int DbEnv_memp_stat_print(struct DbEnv *self,u_int32_t flags)
SWIGINTERN DB_MPOOL_FSTAT **DbEnv_memp_fstat(struct DbEnv *self,u_int32_t flags)
SWIGINTERN db_ret_t DbEnv_memp_sync(struct DbEnv *self,DB_LSN *lsn_or_null)
SWIGINTERN int DbEnv_memp_trickle(struct DbEnv *self,int percent)
SWIGINTERN u_int32_t DbEnv_mutex_get_align(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_mutex_get_increment(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_mutex_get_init(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_mutex_get_max(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_mutex_get_tas_spins(struct DbEnv *self)
SWIGINTERN db_ret_t DbEnv_mutex_set_align(struct DbEnv *self,u_int32_t align)
SWIGINTERN db_ret_t DbEnv_mutex_set_increment(struct DbEnv *self,u_int32_t increment)
SWIGINTERN db_ret_t DbEnv_mutex_set_init(struct DbEnv *self,u_int32_t mutex_init)
SWIGINTERN db_ret_t DbEnv_mutex_set_max(struct DbEnv *self,u_int32_t mutex_max)
SWIGINTERN db_ret_t DbEnv_mutex_set_tas_spins(struct DbEnv *self,u_int32_t tas_spins)
SWIGINTERN DB_MUTEX_STAT *DbEnv_mutex_stat(struct DbEnv *self,u_int32_t flags)
SWIGINTERN int DbEnv_mutex_stat_print(struct DbEnv *self,u_int32_t flags)
SWIGINTERN char const *DbEnv_get_region_dir(struct DbEnv *self)
SWIGINTERN db_ret_t DbEnv_set_region_dir(struct DbEnv *self,char const *dir)
SWIGINTERN u_int32_t DbEnv_get_tx_max(struct DbEnv *self)
SWIGINTERN time_t DbEnv_get_tx_timestamp(struct DbEnv *self)
SWIGINTERN db_timeout_t DbEnv_get_timeout(struct DbEnv *self,u_int32_t flag)
SWIGINTERN int DbEnv_stat_print(struct DbEnv *self,u_int32_t flags)
SWIGINTERN int DbEnv_txn_applied(struct DbEnv *self,DB_TXN_TOKEN *token,u_int32_t maxwait,u_int32_t flags)
SWIGINTERN DB_TXN *DbEnv_txn_begin(struct DbEnv *self,DB_TXN *parent,u_int32_t flags)
SWIGINTERN db_ret_t DbEnv_txn_checkpoint(struct DbEnv *self,u_int32_t kbyte,u_int32_t min,u_int32_t flags)
SWIGINTERN DB_PREPLIST *DbEnv_txn_recover(struct DbEnv *self,long count,long flags)
SWIGINTERN DB_TXN_STAT *DbEnv_txn_stat(struct DbEnv *self,u_int32_t flags)
SWIGINTERN int DbEnv_txn_stat_print(struct DbEnv *self,u_int32_t flags)
SWIGINTERN jlong DbEnv_rep_get_limit(struct DbEnv *self)
SWIGINTERN db_ret_t DbEnv_rep_elect(struct DbEnv *self,u_int32_t nsites,int nvotes,u_int32_t flags)
SWIGINTERN int DbEnv_rep_process_message(struct DbEnv *self,DBT *control,DBT *rec,int envid,DB_LSN *ret_lsn)
SWIGINTERN db_ret_t DbEnv_rep_flush(struct DbEnv *self)
SWIGINTERN db_ret_t DbEnv_rep_set_config(struct DbEnv *self,u_int32_t which,int_bool onoff)
SWIGINTERN db_ret_t DbEnv_rep_set_clockskew(struct DbEnv *self,u_int32_t fast_clock,u_int32_t slow_clock)
SWIGINTERN u_int32_t DbEnv_rep_get_clockskew_fast(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_rep_get_clockskew_slow(struct DbEnv *self)
SWIGINTERN db_ret_t DbEnv_rep_start(struct DbEnv *self,DBT *cdata,u_int32_t flags)
SWIGINTERN db_ret_t DbEnv_rep_sync(struct DbEnv *self,u_int32_t flags)
SWIGINTERN int_bool DbEnv_rep_get_config(struct DbEnv *self,u_int32_t which)
SWIGINTERN DB_REP_STAT *DbEnv_rep_stat(struct DbEnv *self,u_int32_t flags)
SWIGINTERN int DbEnv_rep_stat_print(struct DbEnv *self,u_int32_t flags)
SWIGINTERN db_ret_t DbEnv_rep_set_limit(struct DbEnv *self,jlong bytes)
SWIGINTERN u_int32_t DbEnv_rep_get_request_min(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_rep_get_request_max(struct DbEnv *self)
SWIGINTERN DB_CHANNEL *DbEnv_repmgr_channel(struct DbEnv *self,int eid,u_int32_t flags)
SWIGINTERN db_ret_t DbEnv_rep_set_request(struct DbEnv *self,u_int32_t min,u_int32_t max)
SWIGINTERN db_ret_t DbEnv_rep_set_transport(struct DbEnv *self,int envid,int (*send)(DB_ENV *,DBT const *,DBT const *,DB_LSN const *,int,u_int32_t))
SWIGINTERN db_ret_t DbEnv_rep_set_view(struct DbEnv *self,int (*rep_view_fcn)(DB_ENV *,char const *,int *,u_int32_t))
SWIGINTERN u_int32_t DbEnv_rep_get_nsites(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_rep_get_priority(struct DbEnv *self)
SWIGINTERN u_int32_t DbEnv_rep_get_timeout(struct DbEnv *self,int which)
SWIGINTERN db_ret_t DbEnv_rep_set_nsites(struct DbEnv *self,u_int32_t number)
SWIGINTERN db_ret_t DbEnv_rep_set_priority(struct DbEnv *self,u_int32_t priority)
SWIGINTERN db_ret_t DbEnv_rep_set_timeout(struct DbEnv *self,int which,db_timeout_t timeout)
SWIGINTERN int DbEnv_repmgr_get_ack_policy(struct DbEnv *self)
SWIGINTERN jlong DbEnv_repmgr_get_incoming_queue_max(struct DbEnv *self)
SWIGINTERN DB_SITE *DbEnv_repmgr_local_site(struct DbEnv *self)
SWIGINTERN db_ret_t DbEnv_repmgr_set_ack_policy(struct DbEnv *self,int policy)
SWIGINTERN db_ret_t DbEnv_repmgr_set_incoming_queue_max(struct DbEnv *self,jlong bytes)
SWIGINTERN DB_SITE *DbEnv_repmgr_site(struct DbEnv *self,char const *host,u_int port)
SWIGINTERN DB_SITE *DbEnv_repmgr_site_by_eid(struct DbEnv *self,int eid)
SWIGINTERN db_ret_t DbEnv_repmgr_set_dispatch(struct DbEnv *self,void (*dispatch)(DB_ENV *,DB_CHANNEL *,DBT *,u_int32_t,u_int32_t),u_int32_t flags)
SWIGINTERN struct __db_repmgr_sites DbEnv_repmgr_site_list(struct DbEnv *self)
SWIGINTERN db_ret_t DbEnv_repmgr_start(struct DbEnv *self,int nthreads,u_int32_t flags)
SWIGINTERN DB_REPMGR_STAT *DbEnv_repmgr_stat(struct DbEnv *self,u_int32_t flags)
SWIGINTERN int DbEnv_repmgr_stat_print(struct DbEnv *self,u_int32_t flags)
SWIGINTERN u_int32_t DbEnv_get_backup_config(struct DbEnv *self,u_int32_t config_type)
SWIGINTERN db_ret_t DbEnv_backup(struct DbEnv *self,char const *target,u_int32_t flags)
SWIGINTERN db_ret_t DbEnv_dbbackup(struct DbEnv *self,char const *dbfile,char const *target,u_int32_t flags)
SWIGINTERN db_ret_t DbEnv_set_backup_callbacks(struct DbEnv *self,int (*backup_open_fcn)(DB_ENV *,char const *,char const *,void **),int (*backup_write_fcn)(DB_ENV *,u_int32_t,u_int32_t,u_int32_t,u_int8_t *,void *),int (*backup_close_fcn)(DB_ENV *,char const *,void *))
SWIGINTERN db_ret_t DbEnv_set_backup_config(struct DbEnv *self,u_int32_t config_type,u_int32_t value)
SWIGINTERN char const *DbEnv_strerror(int ret)
SWIGINTERN int DbEnv_get_version_family(void)
SWIGINTERN int DbEnv_get_version_release(void)
SWIGINTERN int DbEnv_get_version_major(void)
SWIGINTERN int DbEnv_get_version_minor(void)
SWIGINTERN int DbEnv_get_version_patch(void)
SWIGINTERN char const *DbEnv_get_version_string(void)
SWIGINTERN char const *DbEnv_get_version_full_string(void)
SWIGINTERN int DbEnv_slices_enabled(void)
SWIGINTERN void delete_DbLock(struct DbLock *self)
SWIGINTERN db_ret_t DbLogc_close(struct DbLogc *self,u_int32_t flags)
SWIGINTERN int DbLogc_get(struct DbLogc *self,DB_LSN *lsn,DBT *data,u_int32_t flags)
SWIGINTERN u_int32_t DbLogc_version(struct DbLogc *self,u_int32_t flags)
SWIGINTERN DB_CACHE_PRIORITY DbMpoolFile_get_priority(struct DbMpoolFile *self)
SWIGINTERN db_ret_t DbMpoolFile_set_priority(struct DbMpoolFile *self,DB_CACHE_PRIORITY priority)
SWIGINTERN u_int32_t DbMpoolFile_get_flags(struct DbMpoolFile *self)
SWIGINTERN db_ret_t DbMpoolFile_set_flags(struct DbMpoolFile *self,u_int32_t flags,int_bool onoff)
SWIGINTERN jlong DbMpoolFile_get_maxsize(struct DbMpoolFile *self)
SWIGINTERN db_ret_t DbMpoolFile_set_maxsize(struct DbMpoolFile *self,jlong bytes)
SWIGINTERN struct DbSequence *new_DbSequence(DB *db,u_int32_t flags)
SWIGINTERN db_ret_t DbSequence_close(struct DbSequence *self,u_int32_t flags)
SWIGINTERN db_seq_t DbSequence_get(struct DbSequence *self,DB_TXN *txnid,u_int32_t delta,u_int32_t flags)
SWIGINTERN u_int32_t DbSequence_get_cachesize(struct DbSequence *self)
SWIGINTERN DB *DbSequence_get_db(struct DbSequence *self)
SWIGINTERN u_int32_t DbSequence_get_flags(struct DbSequence *self)
SWIGINTERN db_ret_t DbSequence_get_key(struct DbSequence *self,DBT *key)
SWIGINTERN db_seq_t DbSequence_get_range_min(struct DbSequence *self)
SWIGINTERN db_seq_t DbSequence_get_range_max(struct DbSequence *self)
SWIGINTERN db_ret_t DbSequence_initial_value(struct DbSequence *self,db_seq_t val)
SWIGINTERN db_ret_t DbSequence_open(struct DbSequence *self,DB_TXN *txnid,DBT *key,u_int32_t flags)
SWIGINTERN db_ret_t DbSequence_remove(struct DbSequence *self,DB_TXN *txnid,u_int32_t flags)
SWIGINTERN db_ret_t DbSequence_set_cachesize(struct DbSequence *self,u_int32_t size)
SWIGINTERN db_ret_t DbSequence_set_flags(struct DbSequence *self,u_int32_t flags)
SWIGINTERN db_ret_t DbSequence_set_range(struct DbSequence *self,db_seq_t min,db_seq_t max)
SWIGINTERN DB_SEQUENCE_STAT *DbSequence_stat(struct DbSequence *self,u_int32_t flags)
SWIGINTERN int DbSequence_stat_print(struct DbSequence *self,u_int32_t flags)
SWIGINTERN db_ret_t DbSite_close(struct DbSite *self)
SWIGINTERN struct __db_repmgr_site_address DbSite_get_address(struct DbSite *self)
SWIGINTERN int_bool DbSite_get_config(struct DbSite *self,u_int32_t which)
SWIGINTERN int DbSite_get_eid(struct DbSite *self)
SWIGINTERN db_ret_t DbSite_remove(struct DbSite *self)
SWIGINTERN db_ret_t DbSite_set_config(struct DbSite *self,u_int32_t which,int_bool onoff)
SWIGINTERN db_ret_t DbStream_close(struct DbStream *self,u_int32_t flags)
SWIGINTERN int DbStream_read(struct DbStream *self,DBT *data,db_off_t offset,u_int32_t size,u_int32_t flags)
SWIGINTERN db_off_t DbStream_size(struct DbStream *self,u_int32_t flags)
SWIGINTERN int DbStream_write(struct DbStream *self,DBT *data,db_off_t offset,u_int32_t flags)
SWIGINTERN db_ret_t DbTxn_abort(struct DbTxn *self)
SWIGINTERN db_ret_t DbTxn_discard(struct DbTxn *self,u_int32_t flags)
SWIGINTERN char const *DbTxn_get_name(struct DbTxn *self)
SWIGINTERN u_int32_t DbTxn_get_priority(struct DbTxn *self)
SWIGINTERN u_int32_t DbTxn_id(struct DbTxn *self)
SWIGINTERN db_ret_t DbTxn_prepare(struct DbTxn *self,u_int8_t *gid)
SWIGINTERN db_ret_t DbTxn_set_timeout(struct DbTxn *self,db_timeout_t timeout,u_int32_t flags)
SWIGINTERN db_ret_t DbTxn_set_name(struct DbTxn *self,char const *name)
SWIGINTERN db_ret_t DbTxn_set_priority(struct DbTxn *self,u_int32_t priority)
SWIGINTERN db_ret_t DbChannel_close(struct DbChannel *self,u_int32_t flags)
SWIGINTERN db_ret_t DbChannel_send_repmsg(struct DbChannel *self,DBT *chan_msgs,u_int32_t nmsg,u_int32_t flags)
SWIGINTERN db_ret_t DbChannel_send_request(struct DbChannel *self,DBT *chan_msgs,u_int32_t nrequest,DBT *response,db_timeout_t timeout,u_int32_t flags)
SWIGINTERN db_ret_t DbChannel_set_timeout(struct DbChannel *self,db_timeout_t timeout)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_new_1Db(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1associate(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jlong jarg3, jobject jarg3_, jboolean jarg4, jint jarg5)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1associate_1foreign(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jboolean jarg3, jint jarg4)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1compact(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jobject jarg3, jobject jarg4, jobject jarg5, jint jarg6, jobject jarg7)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1close0(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1cursor(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jint jarg3)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1del(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jobject jarg3, jint jarg4)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1err(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jstring jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1errx(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1exists(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jobject jarg3, jint jarg4)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jobject jarg3, jobject jarg4, jint jarg5)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1assoc_1flags(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jstring JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1blob_1sub_1dir(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jboolean JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1byteswapped(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1cachesize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1cachesize_1ncache(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jstring JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1create_1dir(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jstring JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1filename(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jstring JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1dbname(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1encrypt_1flags(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jstring JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1ext_1file_1dir(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1ext_1file_1threshold(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1flags(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1lk_1exclusive(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1lorder(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1mpf(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1open_1flags(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1pagesize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1bt_1minkey(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1heapsize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1heap_1regionsize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1h_1ffactor(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1h_1nelem(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1re_1delim(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1priority(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jobjectArray JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1partition_1dirs(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jobject JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1partition_1keys(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1partition_1parts(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1re_1len(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1re_1pad(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jstring JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1re_1source(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1q_1extentsize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jboolean JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1multiple(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jobjectArray JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1slices(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jboolean JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1transactional(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1get_1type(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1join(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobjectArray jarg2, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1key_1range(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jobject jarg3, jobject jarg4, jint jarg5)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1open(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jstring jarg3, jstring jarg4, jint jarg5, jint jarg6, jint jarg7)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1pget(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jobject jarg3, jobject jarg4, jobject jarg5, jint jarg6)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1put(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jobject jarg3, jobject jarg4, jint jarg5)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1remove0(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jstring jarg3, jint jarg4)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1rename0(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jstring jarg3, jstring jarg4, jint jarg5)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1append_1recno(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1bt_1compare(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1bt_1minkey(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1bt_1compress(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2, jboolean jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1bt_1prefix(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1cachesize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1create_1dir(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1dup_1compare(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1encrypt(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1ext_1file_1dir(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1ext_1file_1threshold(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1feedback(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1flags(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1heapsize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1heap_1regionsize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1h_1compare(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1h_1ffactor(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1h_1hash(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1h_1nelem(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1lk_1exclusive(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1lorder(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1msgfile(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1pagesize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1partition(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jobject jarg3, jboolean jarg4)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1partition_1dirs(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobjectArray jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1priority(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1re_1delim(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1re_1len(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1re_1pad(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1re_1source(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1q_1extentsize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1set_1slice_1callback(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1slice_1lookup(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1sort_1multiple(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2, jobject jarg3)
SWIGEXPORT jobject JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1stat(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jint jarg3)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1stat_1print(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1sync(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1truncate(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1upgrade(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jint jarg3)
SWIGEXPORT jboolean JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Db_1verify0(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jstring jarg3, jobject jarg4, jint jarg5)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Dbc_1close0(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Dbc_1cmp(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jint jarg3)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Dbc_1count(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Dbc_1db_1stream(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Dbc_1del(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Dbc_1dup(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Dbc_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2, jobject jarg3, jint jarg4)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Dbc_1get_1priority(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Dbc_1pget(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2, jobject jarg3, jobject jarg4, jint jarg5)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Dbc_1put(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2, jobject jarg3, jint jarg4)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_Dbc_1set_1priority(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_new_1DbEnv(JNIEnv *jenv, jclass jcls, jint jarg1)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1close0(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1dbremove(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jstring jarg3, jstring jarg4, jint jarg5)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1dbrename(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jstring jarg3, jstring jarg4, jstring jarg5, jint jarg6)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1err(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jstring jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1errx(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2)
SWIGEXPORT jobjectArray JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1slices(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1cdsgroup_1begin(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1fileid_1reset(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jint jarg3)
SWIGEXPORT jobjectArray JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1data_1dirs(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1encrypt_1flags(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jstring JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1ext_1file_1dir(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1ext_1file_1threshold(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1flags(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jstring JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1home(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jstring JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1intermediate_1dir_1mode(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1open_1flags(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jstring JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1metadata_1dir(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1shm_1key(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1slice_1count(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jstring JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1tmp_1dir(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jboolean JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1verbose(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jboolean JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1is_1bigendian(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1lsn_1reset(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1open(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jint jarg3, jint jarg4)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1remove0(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1cachesize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1cache_1max(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1create_1dir(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1add_1data_1dir(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1intermediate_1dir_1mode(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1encrypt(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1errcall(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1ext_1file_1dir(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1ext_1file_1threshold(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1flags(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jboolean jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1feedback(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1metadata_1dir(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1mp_1max_1openfd(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1mp_1max_1write(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jlong jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1mp_1mmapsize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1mp_1pagesize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1mp_1tablesize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1msgcall(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1msgfile(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1paniccall(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1shm_1key(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1timeout(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1tmp_1dir(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1tx_1max(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1app_1dispatch(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1event_1notify(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1tx_1timestamp0(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1verbose(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jboolean jarg3)
SWIGEXPORT jobjectArray JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1lk_1conflicts(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1lk_1detect(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1lk_1max_1locks(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1lk_1max_1lockers(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1lk_1max_1objects(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1lk_1partitions(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1lk_1priority(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1lk_1tablesize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1memory_1init(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1memory_1max(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1lock_1detect(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1lock_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3, jobject jarg4, jint jarg5)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1lock_1id(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1lock_1id_1free(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1lock_1put(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_)
SWIGEXPORT jobject JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1lock_1stat(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1lock_1stat_1print(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1lk_1conflicts(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobjectArray jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1lk_1detect(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1lk_1max_1lockers(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1lk_1max_1locks(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1lk_1max_1objects(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1lk_1partitions(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1lk_1priority(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1lk_1tablesize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1memory_1init(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1memory_1max(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1lg_1bsize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jstring JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1lg_1dir(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1lg_1filemode(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1lg_1max(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1lg_1regionmax(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jobjectArray JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1log_1archive(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1log_1compare(JNIEnv *jenv, jclass jcls, jobject jarg1, jobject jarg2)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1log_1cursor(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jstring JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1log_1file(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1log_1flush(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2)
SWIGEXPORT jboolean JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1log_1get_1config(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1log_1put(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2, jobject jarg3, jint jarg4)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1log_1print(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jstring jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1log_1set_1config(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jboolean jarg3)
SWIGEXPORT jobject JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1log_1stat(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1log_1stat_1print(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1log_1verify(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jint jarg3, jstring jarg4, jstring jarg5, jlong jarg6, jlong jarg7, jint jarg8, jint jarg9, jint jarg10, jint jarg11, jint jarg12, jint jarg13)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1lg_1bsize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1lg_1dir(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1lg_1filemode(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1lg_1max(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1lg_1regionmax(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1cachesize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1cachesize_1ncache(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1cache_1max(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jstring JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1create_1dir(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1mp_1max_1openfd(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1mp_1max_1write(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1mp_1max_1write_1sleep(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1mp_1mmapsize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1mp_1pagesize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1mp_1tablesize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jobject JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1memp_1stat(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1memp_1stat_1print(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jobjectArray JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1memp_1fstat(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1memp_1sync(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1memp_1trickle(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1mutex_1get_1align(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1mutex_1get_1increment(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1mutex_1get_1init(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1mutex_1get_1max(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1mutex_1get_1tas_1spins(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1mutex_1set_1align(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1mutex_1set_1increment(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1mutex_1set_1init(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1mutex_1set_1max(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1mutex_1set_1tas_1spins(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jobject JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1mutex_1stat(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1mutex_1stat_1print(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jstring JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1region_1dir(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1region_1dir(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1tx_1max(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1tx_1timestamp(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1timeout(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1stat_1print(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1txn_1applied(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2, jint jarg3, jint jarg4)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1txn_1begin(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1txn_1checkpoint(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3, jint jarg4)
SWIGEXPORT jobjectArray JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1txn_1recover(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jlong jarg3)
SWIGEXPORT jobject JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1txn_1stat(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1txn_1stat_1print(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1get_1limit(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1elect(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3, jint jarg4)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1process_1message(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2, jobject jarg3, jint jarg4, jobject jarg5)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1flush(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1set_1config(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jboolean jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1set_1clockskew(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1get_1clockskew_1fast(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1get_1clockskew_1slow(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1start(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1sync(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jboolean JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1get_1config(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jobject JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1stat(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1stat_1print(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1set_1limit(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1get_1request_1min(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1get_1request_1max(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1repmgr_1channel(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1set_1request(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1set_1transport(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jboolean jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1set_1view(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1get_1nsites(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1get_1priority(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1get_1timeout(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1set_1nsites(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1set_1priority(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1rep_1set_1timeout(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jlong jarg3)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1repmgr_1get_1ack_1policy(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1repmgr_1get_1incoming_1queue_1max(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1repmgr_1local_1site(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1repmgr_1set_1ack_1policy(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1repmgr_1set_1incoming_1queue_1max(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1repmgr_1site(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jlong jarg3)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1repmgr_1site_1by_1eid(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1repmgr_1set_1dispatch(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2, jint jarg3)
SWIGEXPORT jobjectArray JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1repmgr_1site_1list(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1repmgr_1start(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3)
SWIGEXPORT jobject JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1repmgr_1stat(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1repmgr_1stat_1print(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1backup_1config(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1backup(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1dbbackup(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2, jstring jarg3, jint jarg4)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1backup_1callbacks(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jboolean jarg2, jboolean jarg3, jboolean jarg4)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1set_1backup_1config(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jint jarg3)
SWIGEXPORT jstring JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1strerror(JNIEnv *jenv, jclass jcls, jint jarg1)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1version_1family(JNIEnv *jenv, jclass jcls)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1version_1release(JNIEnv *jenv, jclass jcls)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1version_1major(JNIEnv *jenv, jclass jcls)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1version_1minor(JNIEnv *jenv, jclass jcls)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1version_1patch(JNIEnv *jenv, jclass jcls)
SWIGEXPORT jstring JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1version_1string(JNIEnv *jenv, jclass jcls)
SWIGEXPORT jstring JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1get_1version_1full_1string(JNIEnv *jenv, jclass jcls)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbEnv_1slices_1enabled(JNIEnv *jenv, jclass jcls)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_delete_1DbLock(JNIEnv *jenv, jclass jcls, jlong jarg1)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbLogc_1close0(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbLogc_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2, jobject jarg3, jint jarg4)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbLogc_1version(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbMpoolFile_1get_1priority(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbMpoolFile_1set_1priority(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbMpoolFile_1get_1flags(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbMpoolFile_1set_1flags(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jboolean jarg3)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbMpoolFile_1get_1maxsize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbMpoolFile_1set_1maxsize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_new_1DbSequence(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSequence_1close0(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSequence_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jint jarg3, jint jarg4)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSequence_1get_1cachesize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSequence_1get_1db(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSequence_1get_1flags(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSequence_1get_1key(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSequence_1get_1range_1min(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSequence_1get_1range_1max(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSequence_1initial_1value(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSequence_1open(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jobject jarg3, jint jarg4)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSequence_1remove0(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jobject jarg2_, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSequence_1set_1cachesize(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSequence_1set_1flags(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSequence_1set_1range(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jlong jarg3)
SWIGEXPORT jobject JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSequence_1stat(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSequence_1stat_1print(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSite_1close0(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jobject JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSite_1get_1address(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jboolean JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSite_1get_1config(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSite_1get_1eid(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSite_1remove0(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbSite_1set_1config(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jboolean jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbStream_1close0(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbStream_1read(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2, jlong jarg3, jint jarg4, jint jarg5)
SWIGEXPORT jlong JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbStream_1size(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbStream_1write(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobject jarg2, jlong jarg3, jint jarg4)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbTxn_1abort0(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbTxn_1discard0(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT jstring JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbTxn_1get_1name(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbTxn_1get_1priority(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT jint JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbTxn_1id(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbTxn_1prepare(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jbyteArray jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbTxn_1set_1timeout(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2, jint jarg3)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbTxn_1set_1name(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbTxn_1set_1priority(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbChannel_1close0(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbChannel_1send_1repmsg(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobjectArray jarg2, jint jarg3, jint jarg4)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbChannel_1send_1request(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jobjectArray jarg2, jint jarg3, jobject jarg4, jlong jarg5, jint jarg6)
SWIGEXPORT void JNICALL Java_com_sleepycat_db_internal_db_1javaJNI_DbChannel_1set_1timeout(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2)
