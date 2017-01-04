#define _ASUS_WMI_H_
struct module;
struct key_entry;
struct asus_wmi;
struct asus_wmi_driver ;
int asus_wmi_register_driver(struct asus_wmi_driver *driver);
void asus_wmi_unregister_driver(struct asus_wmi_driver *driver);
