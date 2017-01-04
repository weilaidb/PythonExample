#define MEI_VERSION_H
#define MAJOR_VERSION		7
#define MINOR_VERSION		1
#define QUICK_FIX_NUMBER	20
#define VER_BUILD		1
#define MEI_DRV_VER1 __stringify(MAJOR_VERSION) "." __stringify(MINOR_VERSION)
#define MEI_DRV_VER2 __stringify(QUICK_FIX_NUMBER) "." __stringify(VER_BUILD)
#define MEI_DRIVER_VERSION	MEI_DRV_VER1 "." MEI_DRV_VER2
