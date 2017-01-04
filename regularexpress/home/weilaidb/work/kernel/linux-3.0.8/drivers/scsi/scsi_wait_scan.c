static int __init wait_scan_init(void)
static void __exit wait_scan_exit(void)
MODULE_DESCRIPTION("SCSI wait for scans");
MODULE_AUTHOR("James Bottomley");
MODULE_LICENSE("GPL");
late_initcall(wait_scan_init);
module_exit(wait_scan_exit);
