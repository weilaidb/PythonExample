#if SDL_POWER_LINUX
static const char *proc_apm_path = "/proc/apm";
static const char *proc_acpi_battery_path = "/proc/acpi/battery";
static const char *proc_acpi_ac_adapter_path = "/proc/acpi/ac_adapter";
static const char *sys_class_power_supply_path = "/sys/class/power_supply";
static int
open_power_file(const char *base, const char *node, const char *key)
static SDL_bool
read_power_file(const char *base, const char *node, const char *key,
char *buf, size_t buflen)
static SDL_bool
make_proc_acpi_key_val(char **_ptr, char **_key, char **_val)
static void
check_proc_acpi_battery(const char * node, SDL_bool * have_battery,
SDL_bool * charging, int *seconds, int *percent)
static void
check_proc_acpi_ac_adapter(const char * node, SDL_bool * have_ac)
SDL_bool
SDL_GetPowerInfo_Linux_proc_acpi(SDL_PowerState * state,
int *seconds, int *percent)
static SDL_bool
next_string(char **_ptr, char **_str)
static SDL_bool
int_string(char *str, int *val)
}
br = read(fd, buf, sizeof (buf) - 1);
close(fd);
if (br < 0)
buf[br] = '\0';
if (!next_string(&ptr, &str))
if (!next_string(&ptr, &str))
if (!next_string(&ptr, &str))
if (!next_string(&ptr, &str))  else if (!int_string(str, &ac_status))
if (!next_string(&ptr, &str))  else if (!int_string(str, &battery_status))
if (!next_string(&ptr, &str))  else if (!int_string(str, &battery_flag))
if (!next_string(&ptr, &str))
if (str[strlen(str) - 1] == '%')
if (!int_string(str, &battery_percent))
if (!next_string(&ptr, &str))  else if (!int_string(str, &battery_time))
if (!next_string(&ptr, &str))  else if (strcmp(str, "min") == 0)
if (battery_flag == 0xFF)  else if (battery_flag & (1 << 7))  else if (battery_flag & (1 << 3))  else if (ac_status == 1)  else
*percent = -1;
*seconds = -1;
if (need_details)
return SDL_TRUE;
}
SDL_bool
SDL_GetPowerInfo_Linux_sys_class_power_supply(SDL_PowerState *state, int *seconds, int *percent)
