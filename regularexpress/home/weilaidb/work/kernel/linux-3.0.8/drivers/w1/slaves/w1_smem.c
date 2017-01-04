MODULE_LICENSE("GPL");
MODULE_AUTHOR("Evgeniy Polyakov <johnpol@2ka.mipt.ru>");
MODULE_DESCRIPTION("Driver for 1-wire Dallas network protocol, 64bit memory family.");
static struct w1_family w1_smem_family_01 = ;
static struct w1_family w1_smem_family_81 = ;
static int __init w1_smem_init(void)
static void __exit w1_smem_fini(void)
module_init(w1_smem_init);
module_exit(w1_smem_fini);
