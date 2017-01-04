int usage(void);
char *show_inventory_item(void *);
int show_all_records(STOCK_DBS *);
int show_records(STOCK_DBS *, char *);
int show_vendor_record(char *, DB *);
int
usage()
int
main(int argc, char *argv[])
int show_all_records(STOCK_DBS *my_stock)
int
show_records(STOCK_DBS *my_stock, char *itemname)
char *
show_inventory_item(void *vBuf)
int
show_vendor_record(char *vendor_name, DB *vendor_dbp)
