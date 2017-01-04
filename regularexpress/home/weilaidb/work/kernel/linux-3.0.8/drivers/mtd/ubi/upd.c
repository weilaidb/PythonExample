static int set_update_marker(struct ubi_device *ubi, struct ubi_volume *vol)
static int clear_update_marker(struct ubi_device *ubi, struct ubi_volume *vol,
long long bytes)
int ubi_start_update(struct ubi_device *ubi, struct ubi_volume *vol,
long long bytes)
int ubi_start_leb_change(struct ubi_device *ubi, struct ubi_volume *vol,
const struct ubi_leb_change_req *req)
static int write_leb(struct ubi_device *ubi, struct ubi_volume *vol, int lnum,
void *buf, int len, int used_ebs)
int ubi_more_update_data(struct ubi_device *ubi, struct ubi_volume *vol,
const void __user *buf, int count)
int ubi_more_leb_change_data(struct ubi_device *ubi, struct ubi_volume *vol,
const void __user *buf, int count)
