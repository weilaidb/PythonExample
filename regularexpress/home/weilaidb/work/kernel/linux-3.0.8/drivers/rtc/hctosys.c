int rtc_hctosys_ret = -ENODEV;
static int __init rtc_hctosys(void)
late_initcall(rtc_hctosys);
