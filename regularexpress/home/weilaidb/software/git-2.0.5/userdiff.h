#define USERDIFF_H
struct userdiff_funcname ;
struct userdiff_driver ;
int userdiff_config(const char *k, const char *v);
struct userdiff_driver *userdiff_find_by_name(const char *name);
struct userdiff_driver *userdiff_find_by_path(const char *path);
struct userdiff_driver *userdiff_get_textconv(struct userdiff_driver *driver);
