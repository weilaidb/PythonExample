#define	DM_MPATH_H
struct dm_dev;
struct dm_path ;
void dm_pg_init_complete(struct dm_path *path, unsigned err_flags);
