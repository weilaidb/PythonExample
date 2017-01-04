#define _GNU_SOURCE
static const struct option longopts[] = ;
static const char match_busid_path[] = "/sys/bus/usb/drivers/usbip/match_busid";
static void show_help(void)
static int modify_match_busid(char *busid, int add)
static const char unbind_path_format[] = "/sys/bus/usb/devices/%s/driver/unbind";
static int unbind_interface_busid(char *busid)
static int unbind_interface(char *busid, int configvalue, int interface)
static const char bind_path_format[] = "/sys/bus/usb/drivers/%s/bind";
static int bind_interface_busid(char *busid, char *driver)
static int bind_interface(char *busid, int configvalue, int interface, char *driver)
static int unbind(char *busid)
static int bind_to_usbip(char *busid)
static int use_device_by_usbip(char *busid)
static int use_device_by_other(char *busid)
static int is_usb_device(char *busid)
static int show_devices(void)
static int show_devices2(void)
}
if (be_local == 0)
use_device_by_usbip(busid);
}
}
closedir(dir);
return 0;
}
int main(int argc, char **argv)
