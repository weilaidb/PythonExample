unsigned int ubi_chk_flags;
unsigned int ubi_tst_flags;
module_param_named(debug_chks, ubi_chk_flags, uint, S_IRUGO | S_IWUSR);
module_param_named(debug_tsts, ubi_chk_flags, uint, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug_chks, "Debug check flags");
MODULE_PARM_DESC(debug_tsts, "Debug special test flags");
void ubi_dbg_dump_ec_hdr(const struct ubi_ec_hdr *ec_hdr)
void ubi_dbg_dump_vid_hdr(const struct ubi_vid_hdr *vid_hdr)
void ubi_dbg_dump_vol_info(const struct ubi_volume *vol)
void ubi_dbg_dump_vtbl_record(const struct ubi_vtbl_record *r, int idx)
void ubi_dbg_dump_sv(const struct ubi_scan_volume *sv)
void ubi_dbg_dump_seb(const struct ubi_scan_leb *seb, int type)
void ubi_dbg_dump_mkvol_req(const struct ubi_mkvol_req *req)
void ubi_dbg_dump_flash(struct ubi_device *ubi, int pnum, int offset, int len)
