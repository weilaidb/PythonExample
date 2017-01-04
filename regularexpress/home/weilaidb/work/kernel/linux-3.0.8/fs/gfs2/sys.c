struct gfs2_attr ;
static ssize_t gfs2_attr_show(struct kobject *kobj, struct attribute *attr,
char *buf)
static ssize_t gfs2_attr_store(struct kobject *kobj, struct attribute *attr,
const char *buf, size_t len)
static const struct sysfs_ops gfs2_attr_ops = ;
static struct kset *gfs2_kset;
static ssize_t id_show(struct gfs2_sbd *sdp, char *buf)
static ssize_t fsname_show(struct gfs2_sbd *sdp, char *buf)
static int gfs2_uuid_valid(const u8 *uuid)
static ssize_t uuid_show(struct gfs2_sbd *sdp, char *buf)
static ssize_t freeze_show(struct gfs2_sbd *sdp, char *buf)
static ssize_t freeze_store(struct gfs2_sbd *sdp, const char *buf, size_t len)
static ssize_t withdraw_show(struct gfs2_sbd *sdp, char *buf)
static ssize_t withdraw_store(struct gfs2_sbd *sdp, const char *buf, size_t len)
static ssize_t statfs_sync_store(struct gfs2_sbd *sdp, const char *buf,
size_t len)
static ssize_t quota_sync_store(struct gfs2_sbd *sdp, const char *buf,
size_t len)
static ssize_t quota_refresh_user_store(struct gfs2_sbd *sdp, const char *buf,
size_t len)
static ssize_t quota_refresh_group_store(struct gfs2_sbd *sdp, const char *buf,
size_t len)
static ssize_t demote_rq_store(struct gfs2_sbd *sdp, const char *buf, size_t len)
#define GFS2_ATTR(name, mode, show, store) \
static struct gfs2_attr gfs2_attr_##name = __ATTR(name, mode, show, store)
GFS2_ATTR(id,                  0444, id_show,       NULL);
GFS2_ATTR(fsname,              0444, fsname_show,   NULL);
GFS2_ATTR(uuid,                0444, uuid_show,     NULL);
GFS2_ATTR(freeze,              0644, freeze_show,   freeze_store);
GFS2_ATTR(withdraw,            0644, withdraw_show, withdraw_store);
GFS2_ATTR(statfs_sync,         0200, NULL,          statfs_sync_store);
GFS2_ATTR(quota_sync,          0200, NULL,          quota_sync_store);
GFS2_ATTR(quota_refresh_user,  0200, NULL,          quota_refresh_user_store);
GFS2_ATTR(quota_refresh_group, 0200, NULL,          quota_refresh_group_store);
GFS2_ATTR(demote_rq,           0200, NULL,	    demote_rq_store);
static struct attribute *gfs2_attrs[] = ;
static struct kobj_type gfs2_ktype = ;
static ssize_t proto_name_show(struct gfs2_sbd *sdp, char *buf)
static ssize_t block_show(struct gfs2_sbd *sdp, char *buf)
static ssize_t block_store(struct gfs2_sbd *sdp, const char *buf, size_t len)
static ssize_t lkfirst_show(struct gfs2_sbd *sdp, char *buf)
static ssize_t lkfirst_store(struct gfs2_sbd *sdp, const char *buf, size_t len)
static ssize_t first_done_show(struct gfs2_sbd *sdp, char *buf)
static ssize_t recover_store(struct gfs2_sbd *sdp, const char *buf, size_t len)
static ssize_t recover_done_show(struct gfs2_sbd *sdp, char *buf)
static ssize_t recover_status_show(struct gfs2_sbd *sdp, char *buf)
static ssize_t jid_show(struct gfs2_sbd *sdp, char *buf)
static ssize_t jid_store(struct gfs2_sbd *sdp, const char *buf, size_t len)
#define GDLM_ATTR(_name,_mode,_show,_store) \
static struct gfs2_attr gdlm_attr_##_name = __ATTR(_name,_mode,_show,_store)
GDLM_ATTR(proto_name,		0444, proto_name_show,		NULL);
GDLM_ATTR(block,		0644, block_show,		block_store);
GDLM_ATTR(withdraw,		0644, withdraw_show,		withdraw_store);
GDLM_ATTR(jid,			0644, jid_show,			jid_store);
GDLM_ATTR(first,		0644, lkfirst_show,		lkfirst_store);
GDLM_ATTR(first_done,		0444, first_done_show,		NULL);
GDLM_ATTR(recover,		0600, NULL,			recover_store);
GDLM_ATTR(recover_done,		0444, recover_done_show,	NULL);
GDLM_ATTR(recover_status,	0444, recover_status_show,	NULL);
static struct attribute *lock_module_attrs[] = ;
static ssize_t quota_scale_show(struct gfs2_sbd *sdp, char *buf)
static ssize_t quota_scale_store(struct gfs2_sbd *sdp, const char *buf,
size_t len)
static ssize_t tune_set(struct gfs2_sbd *sdp, unsigned int *field,
int check_zero, const char *buf, size_t len)
#define TUNE_ATTR_3(name, show, store)                                        \
static struct gfs2_attr tune_attr_##name = __ATTR(name, 0644, show, store)
#define TUNE_ATTR_2(name, store)                                              \
static ssize_t name##_show(struct gfs2_sbd *sdp, char *buf)                   \
\
TUNE_ATTR_3(name, name##_show, store)
#define TUNE_ATTR(name, check_zero)                                           \
static ssize_t name##_store(struct gfs2_sbd *sdp, const char *buf, size_t len)\
\
TUNE_ATTR_2(name, name##_store)
TUNE_ATTR(quota_warn_period, 0);
TUNE_ATTR(quota_quantum, 0);
TUNE_ATTR(max_readahead, 0);
TUNE_ATTR(complain_secs, 0);
TUNE_ATTR(statfs_slow, 0);
TUNE_ATTR(new_files_jdata, 0);
TUNE_ATTR(quota_simul_sync, 1);
TUNE_ATTR(statfs_quantum, 1);
TUNE_ATTR_3(quota_scale, quota_scale_show, quota_scale_store);
static struct attribute *tune_attrs[] = ;
static struct attribute_group tune_group = ;
static struct attribute_group lock_module_group = ;
int gfs2_sys_fs_add(struct gfs2_sbd *sdp)
void gfs2_sys_fs_del(struct gfs2_sbd *sdp)
static int gfs2_uevent(struct kset *kset, struct kobject *kobj,
struct kobj_uevent_env *env)
static const struct kset_uevent_ops gfs2_uevent_ops = ;
int gfs2_sys_init(void)
void gfs2_sys_uninit(void)
