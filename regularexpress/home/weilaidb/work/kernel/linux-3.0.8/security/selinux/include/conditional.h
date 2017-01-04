#define _SELINUX_CONDITIONAL_H_
int security_get_bools(int *len, char ***names, int **values);
int security_set_bools(int len, int *values);
int security_get_bool_value(int bool);
