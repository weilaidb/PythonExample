#define LINE6_CONTROL_H
enum ;
enum ;
enum ;
extern int line6_pod_create_files(int firmware, int type, struct device *dev);
extern void line6_pod_remove_files(int firmware, int type, struct device *dev);
extern int line6_variax_create_files(int firmware, int type,
struct device *dev);
extern void line6_variax_remove_files(int firmware, int type,
struct device *dev);
