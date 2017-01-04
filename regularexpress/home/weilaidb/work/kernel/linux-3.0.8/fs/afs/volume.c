static const char *afs_voltypes[] = ;
struct afs_volume *afs_volume_lookup(struct afs_mount_params *params)
void afs_put_volume(struct afs_volume *volume)
struct afs_server *afs_volume_pick_fileserver(struct afs_vnode *vnode)
int afs_volume_release_fileserver(struct afs_vnode *vnode,
struct afs_server *server,
int result)
