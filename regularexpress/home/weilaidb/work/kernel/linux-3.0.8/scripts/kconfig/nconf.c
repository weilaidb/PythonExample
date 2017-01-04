#define _GNU_SOURCE
#define LKC_DIRECT_LINK
static const char nconf_readme[] = N_(
"Overview\n"
"--------\n"
"This interface let you select features and parameters for the build.\n"
"Features can either be built-in, modularized, or ignored. Parameters\n"
"must be entered in as decimal or hexadecimal numbers or text.\n"
"\n"
"Menu items beginning with following braces represent features that\n"
"  [ ] can be built in or removed\n"
"  < > can be built in, modularized or removed\n"
"   can be built in or modularized (selected by other feature)\n"
"  - - are selected by other feature,\n"
"  XXX cannot be selected. Use Symbol Info to find out why,\n"
"while *, M or whitespace inside braces means to build in, build as\n"
"a module or to exclude the feature respectively.\n"
"\n"
"To change any of these features, highlight it with the cursor\n"
"keys and press <Y> to build it in, <M> to make it a module or\n"
"<N> to removed it.  You may also press the <Space Bar> to cycle\n"
"through the available options (ie. Y->N->M->Y).\n"
"\n"
"Some additional keyboard hints:\n"
"\n"
"Menus\n"
"----------\n"
"o  Use the Up/Down arrow keys (cursor keys) to highlight the item\n"
"   you wish to change use <Enter> or <Space>. Goto submenu by \n"
"   pressing <Enter> of <right-arrow>. Use <Esc> or <left-arrow> to go back.\n"
"   Submenus are designated by \"--->\".\n"
"\n"
"   Searching: pressing '/' triggers interactive search mode.\n"
"              nconfig performs a case insensitive search for the string\n"
"              in the menu prompts (no regex support).\n"
"              Pressing the up/down keys highlights the previous/next\n"
"              matching item. Backspace removes one character from the\n"
"              match string. Pressing either '/' again or ESC exits\n"
"              search mode. All other keys behave normally.\n"
"\n"
"   You may also use the <PAGE UP> and <PAGE DOWN> keys to scroll\n"
"   unseen options into view.\n"
"\n"
"o  To exit a menu use the just press <ESC> <F5> <F8> or <left-arrow>.\n"
"\n"
"o  To get help with an item, press <F1>\n"
"   Shortcut: Press <h> or <?>.\n"
"\n"
"\n"
"Radiolists  (Choice lists)\n"
"-----------\n"
"o  Use the cursor keys to select the option you wish to set and press\n"
"   <S> or the <SPACE BAR>.\n"
"\n"
"   Shortcut: Press the first letter of the option you wish to set then\n"
"             press <S> or <SPACE BAR>.\n"
"\n"
"o  To see available help for the item, press <F1>\n"
"   Shortcut: Press <H> or <?>.\n"
"\n"
"\n"
"Data Entry\n"
"-----------\n"
"o  Enter the requested information and press <ENTER>\n"
"   If you are entering hexadecimal values, it is not necessary to\n"
"   add the '0x' prefix to the entry.\n"
"\n"
"o  For help, press <F1>.\n"
"\n"
"\n"
"Text Box    (Help Window)\n"
"--------\n"
"o  Use the cursor keys to scroll up/down/left/right.  The VI editor\n"
"   keys h,j,k,l function here as do <SPACE BAR> for those\n"
"   who are familiar with less and lynx.\n"
"\n"
"o  Press <Enter>, <F1>, <F5>, <F7> or <Esc> to exit.\n"
"\n"
"\n"
"Alternate Configuration Files\n"
"-----------------------------\n"
"nconfig supports the use of alternate configuration files for\n"
"those who, for various reasons, find it necessary to switch\n"
"between different configurations.\n"
"\n"
"At the end of the main menu you will find two options.  One is\n"
"for saving the current configuration to a file of your choosing.\n"
"The other option is for loading a previously saved alternate\n"
"configuration.\n"
"\n"
"Even if you don't use alternate configuration files, but you\n"
"find during a nconfig session that you have completely messed\n"
"up your settings, you may use the \"Load Alternate...\" option to\n"
"restore your previously saved settings from \".config\" without\n"
"restarting nconfig.\n"
"\n"
"Other information\n"
"-----------------\n"
"If you use nconfig in an XTERM window make sure you have your\n"
"$TERM variable set to point to a xterm definition which supports color.\n"
"Otherwise, nconfig will look rather bad.  nconfig will not\n"
"display correctly in a RXVT window because rxvt displays only one\n"
"intensity of color, bright.\n"
"\n"
"nconfig will display larger menus on screens or xterms which are\n"
"set to display more than the standard 25 row by 80 column geometry.\n"
"In order for this to work, the \"stty size\" command must be able to\n"
"display the screen's current row and column geometry.  I STRONGLY\n"
"RECOMMEND that you make sure you do NOT have the shell variables\n"
"LINES and COLUMNS exported into your environment.  Some distributions\n"
"export those variables via /etc/profile.  Some ncurses programs can\n"
"become confused when those variables (LINES & COLUMNS) don't reflect\n"
"the true screen size.\n"
"\n"
"Optional personality available\n"
"------------------------------\n"
"If you prefer to have all of the options listed in a single menu, rather\n"
"than the default multimenu hierarchy, run the nconfig with NCONFIG_MODE\n"
"environment variable set to single_menu. Example:\n"
"\n"
"make NCONFIG_MODE=single_menu nconfig\n"
"\n"
"<Enter> will then unroll the appropriate category, or enfold it if it\n"
"is already unrolled.\n"
"\n"
"Note that this mode can eventually be a little more CPU expensive\n"
"(especially with a larger number of unrolled categories) than the\n"
"default mode.\n"
"\n"),
menu_no_f_instructions[] = N_(
" You do not have function keys support. Please follow the\n"
" following instructions:\n"
" Arrow keys navigate the menu.\n"
" <Enter> or <right-arrow> selects submenus --->.\n"
" Capital Letters are hotkeys.\n"
" Pressing <Y> includes, <N> excludes, <M> modularizes features.\n"
" Pressing SpaceBar toggles between the above options.\n"
" Press <Esc> or <left-arrow> to go back one menu,\n"
" <?> or <h> for Help, </> for Search.\n"
" <1> is interchangeable with <F1>, <2> with <F2>, etc.\n"
" Legend: [*] built-in  [ ] excluded  <M> module  < > module capable.\n"
" <Esc> always leaves the current window.\n"),
menu_instructions[] = N_(
" Arrow keys navigate the menu.\n"
" <Enter> or <right-arrow> selects submenus --->.\n"
" Capital Letters are hotkeys.\n"
" Pressing <Y> includes, <N> excludes, <M> modularizes features.\n"
" Pressing SpaceBar toggles between the above options\n"
" Press <Esc>, <F5> or <left-arrow> to go back one menu,\n"
" <?>, <F1> or <h> for Help, </> for Search.\n"
" <1> is interchangeable with <F1>, <2> with <F2>, etc.\n"
" Legend: [*] built-in  [ ] excluded  <M> module  < > module capable.\n"
" <Esc> always leaves the current window\n"),
radiolist_instructions[] = N_(
" Use the arrow keys to navigate this window or\n"
" press the hotkey of the item you wish to select\n"
" followed by the <SPACE BAR>.\n"
" Press <?>, <F1> or <h> for additional information about this option.\n"),
inputbox_instructions_int[] = N_(
"Please enter a decimal value.\n"
"Fractions will not be accepted.\n"
"Press <RETURN> to accept, <ESC> to cancel."),
inputbox_instructions_hex[] = N_(
"Please enter a hexadecimal value.\n"
"Press <RETURN> to accept, <ESC> to cancel."),
inputbox_instructions_string[] = N_(
"Please enter a string value.\n"
"Press <RETURN> to accept, <ESC> to cancel."),
setmod_text[] = N_(
"This feature depends on another which\n"
"has been configured as a module.\n"
"As a result, this feature will be built as a module."),
nohelp_text[] = N_(
"There is no help available for this option.\n"),
load_config_text[] = N_(
"Enter the name of the configuration file you wish to load.\n"
"Accept the name shown to restore the configuration you\n"
"last retrieved.  Leave blank to abort."),
load_config_help[] = N_(
"\n"
"For various reasons, one may wish to keep several different\n"
"configurations available on a single machine.\n"
"\n"
"If you have saved a previous configuration in a file other than the\n"
"default one, entering its name here will allow you to modify that\n"
"configuration.\n"
"\n"
"If you are uncertain, then you have probably never used alternate\n"
"configuration files.  You should therefor leave this blank to abort.\n"),
save_config_text[] = N_(
"Enter a filename to which this configuration should be saved\n"
"as an alternate.  Leave blank to abort."),
save_config_help[] = N_(
"\n"
"For various reasons, one may wish to keep different configurations\n"
"available on a single machine.\n"
"\n"
"Entering a file name here will allow you to later retrieve, modify\n"
"and use the current configuration as an alternate to whatever\n"
"configuration options you have selected at that time.\n"
"\n"
"If you are uncertain what all this means then you should probably\n"
"leave this blank.\n"),
search_help[] = N_(
"\n"
"Search for symbols and display their relations. Regular expressions\n"
"are allowed.\n"
"Example: search for \"^FOO\"\n"
"Result:\n"
"-----------------------------------------------------------------\n"
"Symbol: FOO [ = m]\n"
"Prompt: Foo bus is used to drive the bar HW\n"
"Defined at drivers/pci/Kconfig:47\n"
"Depends on: X86_LOCAL_APIC && X86_IO_APIC || IA64\n"
"Location:\n"
"  -> Bus options (PCI, PCMCIA, EISA, MCA, ISA)\n"
"    -> PCI support (PCI [ = y])\n"
"      -> PCI access mode (<choice> [ = y])\n"
"Selects: LIBCRC32\n"
"Selected by: BAR\n"
"-----------------------------------------------------------------\n"
"o The line 'Prompt:' shows the text used in the menu structure for\n"
"  this symbol\n"
"o The 'Defined at' line tell at what file / line number the symbol\n"
"  is defined\n"
"o The 'Depends on:' line tell what symbols needs to be defined for\n"
"  this symbol to be visible in the menu (selectable)\n"
"o The 'Location:' lines tell where in the menu structure this symbol\n"
"  is located\n"
"    A location followed by a [ = y] indicate that this is a selectable\n"
"    menu item - and current value is displayed inside brackets.\n"
"o The 'Selects:' line tell what symbol will be automatically\n"
"  selected if this symbol is selected (y or m)\n"
"o The 'Selected by' line tell what symbol has selected this symbol\n"
"\n"
"Only relevant lines are shown.\n"
"\n\n"
"Search examples:\n"
"Examples: USB  => find all symbols containing USB\n"
"          ^USB => find all symbols starting with USB\n"
"          USB$ => find all symbols ending with USB\n"
"\n");
struct mitem ;
#define MAX_MENU_ITEMS 4096
static int show_all_items;
static int indent;
static struct menu *current_menu;
static int child_count;
static int single_menu_mode;
static WINDOW *main_window;
static int mwin_max_lines;
static int mwin_max_cols;
static MENU *curses_menu;
static ITEM *curses_menu_items[MAX_MENU_ITEMS];
static struct mitem k_menu_items[MAX_MENU_ITEMS];
static int items_num;
static int global_exit;
const char *current_instructions = menu_instructions;
static void conf(struct menu *menu);
static void conf_choice(struct menu *menu);
static void conf_string(struct menu *menu);
static void conf_load(void);
static void conf_save(void);
static void show_help(struct menu *menu);
static int do_exit(void);
static void setup_windows(void);
static void search_conf(void);
typedef void (*function_key_handler_t)(int *key, struct menu *menu);
static void handle_f1(int *key, struct menu *current_item);
static void handle_f2(int *key, struct menu *current_item);
static void handle_f3(int *key, struct menu *current_item);
static void handle_f4(int *key, struct menu *current_item);
static void handle_f5(int *key, struct menu *current_item);
static void handle_f6(int *key, struct menu *current_item);
static void handle_f7(int *key, struct menu *current_item);
static void handle_f8(int *key, struct menu *current_item);
static void handle_f9(int *key, struct menu *current_item);
struct function_keys ;
static const int function_keys_num = 9;
struct function_keys function_keys[] = ;
static void print_function_line(void)
static void handle_f1(int *key, struct menu *current_item)
static void handle_f2(int *key, struct menu *current_item)
static void handle_f3(int *key, struct menu *current_item)
static void handle_f4(int *key, struct menu *current_item)
static void handle_f5(int *key, struct menu *current_item)
static void handle_f6(int *key, struct menu *current_item)
static void handle_f7(int *key, struct menu *current_item)
static void handle_f8(int *key, struct menu *current_item)
static void handle_f9(int *key, struct menu *current_item)
static int process_special_keys(int *key, struct menu *menu)
static void clean_items(void)
typedef enum  match_f;
static int get_mext_match(const char *match_str, match_f flag)
static void item_make(struct menu *menu, char tag, const char *fmt, ...)
static void item_add_str(const char *fmt, ...)
static char item_tag(void)
static int curses_item_index(void)
static void *item_data(void)
static int item_is_tag(char tag)
static char filename[PATH_MAX+1];
static char menu_backtitle[PATH_MAX+128];
static const char *set_config_filename(const char *config_filename)
static int do_exit(void)
static void search_conf(void)
static void build_conf(struct menu *menu)
static void reset_menu(void)
static void center_item(int selected_index, int *last_top_row)
static void show_menu(const char *prompt, const char *instructions,
int selected_index, int *last_top_row)
static void adj_match_dir(match_f *match_direction)
struct match_state
;
static int do_match(int key, struct match_state *state, int *ans)
static void conf(struct menu *menu)
static void conf_message_callback(const char *fmt, va_list ap)
static void show_help(struct menu *menu)
static void conf_choice(struct menu *menu)
static void conf_string(struct menu *menu)
static void conf_load(void)
static void conf_save(void)
void setup_windows(void)
int main(int ac, char **av)
