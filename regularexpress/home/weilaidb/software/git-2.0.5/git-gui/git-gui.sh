#!/bin/sh
# Tcl ignores the next line -*- tcl -*- \
if test "z$*" = zversion \
|| test "z$*" = z--version; \
then \
echo 'git-gui version @@GITGUI_VERSION@@'; \
exit; \
fi; \
argv0=$0; \
exec wish "$argv0" -- "$@"
set appvers
set copyright [string map [list (c) \u00a9] ]
######################################################################
##
## Tcl/Tk sanity check
if
catch  ; # What an evil concept...
######################################################################
##
## locate our library
set oguilib
set oguirel
if   elseif   else
unset oguirel
######################################################################
##
## enable verbose loading?
if
######################################################################
##
## Internationalization (i18n) through msgcat and gettext. See
## http:
package require msgcat
# Check for Windows 7 MUI language pack (missed by msgcat < 1.4.4)
if  then
proc _mc_trim
proc mc
proc strcat
::msgcat::mcload $oguimsg
unset oguimsg
######################################################################
##
## On Mac, bring the current Wish process window to front
if
######################################################################
##
## read only globals
set _appname
set _gitdir
set _gitworktree
set _isbare
set _gitexec
set _githtmldir
set _reponame
set _iscygwin
set _search_path
set _shellpath
set _trace [lsearch -exact $argv --trace]
if   else
# variable for the last merged branch (useful for a default when deleting
# branches).
set _last_merged_branch
proc shellpath
proc appname
proc gitdir
proc gitexec
proc githtmldir
proc reponame
proc is_MacOSX
proc is_Windows
proc is_Cygwin
proc is_enabled
proc enable_option
proc disable_option
######################################################################
##
## config
proc is_many_config
proc is_config_true
proc is_config_false
proc get_config
proc is_bare
######################################################################
##
## handy utils
proc _trace_exec
#'"  fix poor old emacs font-lock mode
proc _git_cmd
proc _which
# Test a file for a hashbang to identify executable scripts on Windows.
proc is_shellscript
# Run a command connected via pipes on stdout.
# This is for use with textconv filters and uses sh -c "..." to allow it to
# contain a command with arguments. On windows we must check for shell
# scripts specifically otherwise just call the filter command.
proc open_cmd_pipe
proc _lappend_nice
proc git
proc _open_stdout_stderr
proc git_read
proc git_write
proc githook_read
proc kill_file_process
proc gitattr
proc sq
proc load_current_branch
auto_load tk_optionMenu
rename tk_optionMenu real__tkOptionMenu
proc tk_optionMenu
proc rmsel_tag
wm withdraw .
set root_exists 0
bind . <Visibility>
if   else
######################################################################
##
## config defaults
set cursor_ptr arrow
font create font_ui
if   else
font create font_uiitalic
font create font_uibold
font create font_diffbold
font create font_diffitalic
foreach class
if
unset class
if
if   else
proc bind_button3
proc apply_config
set default_config(branch.autosetupmerge) true
set default_config(merge.tool)
set default_config(mergetool.keepbackup) true
set default_config(merge.diffstat) true
set default_config(merge.summary) false
set default_config(merge.verbosity) 2
set default_config(user.name)
set default_config(user.email)
set default_config(gui.encoding) [encoding system]
set default_config(gui.matchtrackingbranch) false
set default_config(gui.textconv) true
set default_config(gui.pruneduringfetch) false
set default_config(gui.trustmtime) false
set default_config(gui.fastcopyblame) false
set default_config(gui.maxrecentrepo) 10
set default_config(gui.copyblamethreshold) 40
set default_config(gui.blamehistoryctx) 7
set default_config(gui.diffcontext) 5
set default_config(gui.diffopts)
set default_config(gui.commitmsgwidth) 75
set default_config(gui.newbranchtemplate)
set default_config(gui.spellingdictionary)
set default_config(gui.fontui) [font configure font_ui]
set default_config(gui.fontdiff) [font configure font_diff]
# TODO: this option should be added to the git-config documentation
set default_config(gui.maxfilesdisplayed) 5000
set default_config(gui.usettk) 1
set default_config(gui.warndetachedcommit) 1
set font_descs
set default_config(gui.stageuntracked) ask
set default_config(gui.displayuntracked) true
######################################################################
##
## find git
set _git  [_which git]
if
######################################################################
##
## version check
if
if
proc get_trimmed_version
set _real_git_version $_git_version
set _git_version [get_trimmed_version $_git_version]
if
unset _real_git_version
proc git-version
if
######################################################################
##
## configure our library
set idx [file join $oguilib tclIndex]
if
if   else
close $fd
if   else
unset -nocomplain idx fd
######################################################################
##
## config file parsing
git-version proc _parse_config
proc load_config
######################################################################
##
## feature option selection
if   else
if
if
enable_option multicommit
enable_option branch
enable_option transport
disable_option bare
switch -- $subcommand
######################################################################
##
## execution environment
set have_tk85 [expr ]
# Suggest our implementation of askpass, if none is set
if
######################################################################
##
## repository setup
set picked 0
if
# we expand the _gitdir when it's just a single dot (i.e. when we're being
# run from the .git dir itself) lest the routines to find the worktree
# get confused
if
if
if
# _gitdir exists, so try loading the config
load_config 0
apply_config
# v1.7.0 introduced --show-toplevel to return the canonical work-tree
if   else
if   elseif
set _reponame [file split [file normalize $_gitdir]]
if   else
set env(GIT_DIR) $_gitdir
set env(GIT_WORK_TREE) $_gitworktree
######################################################################
##
## global init
set current_diff_path
set current_diff_side
set diff_actions [list]
set HEAD
set PARENT
set MERGE_HEAD [list]
set commit_type
set empty_tree
set current_branch
set is_detached 0
set current_diff_path
set is_3way_diff 0
set is_submodule_diff 0
set is_conflict_diff 0
set selected_commit_type new
set diff_empty_count 0
set nullid "0000000000000000000000000000000000000000"
set nullid2 "0000000000000000000000000000000000000001"
######################################################################
##
## task management
set rescan_active 0
set diff_active 0
set last_clicked
set disable_on_lock [list]
set index_lock_type none
proc lock_index
proc unlock_index
######################################################################
##
## status
proc repository_state
proc PARENT
proc force_amend
proc rescan
if   else
proc rescan_stage2
proc load_message
proc run_prepare_commit_msg_hook
proc prepare_commit_msg_hook_wait
proc read_diff_index
proc read_diff_files
proc read_ls_others
proc rescan_done
proc prune_selection
######################################################################
##
## ui helpers
proc mapicon
proc mapdesc
proc ui_status
proc ui_ready
proc escape_path
proc short_path
set next_icon_id 0
set null_sha1 [string repeat 0 40]
proc merge_state
proc display_file_helper
proc display_file
proc display_all_files_helper
set files_warning 0
proc display_all_files
######################################################################
##
## icons
set filemask
image create bitmap file_plain -background white -foreground black -data  -maskdata $filemask
image create bitmap file_mod -background white -foreground blue -data  -maskdata $filemask
image create bitmap file_fulltick -background white -foreground "#007000" -data  -maskdata $filemask
image create bitmap file_question -background white -foreground black -data  -maskdata $filemask
image create bitmap file_removed -background white -foreground red -data  -maskdata $filemask
image create bitmap file_merge -background white -foreground blue -data  -maskdata $filemask
image create bitmap file_statechange -background white -foreground green -data  -maskdata $filemask
set ui_index .vpane.files.index.list
set ui_workdir .vpane.files.workdir.list
set all_icons(_$ui_index)   file_plain
set all_icons(A$ui_index)   file_plain
set all_icons(M$ui_index)   file_fulltick
set all_icons(D$ui_index)   file_removed
set all_icons(U$ui_index)   file_merge
set all_icons(T$ui_index)   file_statechange
set all_icons(_$ui_workdir) file_plain
set all_icons(M$ui_workdir) file_mod
set all_icons(D$ui_workdir) file_question
set all_icons(U$ui_workdir) file_merge
set all_icons(O$ui_workdir) file_plain
set all_icons(T$ui_workdir) file_statechange
set max_status_desc 0
foreach i
unset i
######################################################################
##
## util
proc scrollbar2many
proc many2scrollbar
proc incr_font_size
######################################################################
##
## ui commands
set starting_gitk_msg [mc "Starting gitk... please wait..."]
proc do_gitk
proc do_git_gui
proc do_explore
set is_quitting 0
set ret_code    1
proc terminate_me
proc do_quit
proc do_rescan
proc ui_do_rescan
proc do_commit
proc next_diff
proc find_anchor_pos
proc find_file_from
proc find_next_diff
proc next_diff_after_action
proc select_first_diff
proc force_first_diff
proc toggle_or_diff
proc add_one_to_selection
proc add_range_to_selection
proc show_more_context
proc show_less_context
######################################################################
##
## ui construction
set ui_comm
# -- Menu Bar
#
menu .mbar -tearoff 0
if
.mbar add cascade -label [mc Repository] -menu .mbar.repository
.mbar add cascade -label [mc Edit] -menu .mbar.edit
if
if
if
if
# -- Repository Menu
#
menu .mbar.repository
if
if
if
.mbar.repository add command \
-label [mc "Browse Current Branch's Files"] \
-command
set ui_browse_current [.mbar.repository index last]
.mbar.repository add command \
-label [mc "Browse Branch Files..."] \
-command browser_open::dialog
.mbar.repository add separator
.mbar.repository add command \
-label [mc "Visualize Current Branch's History"] \
-command
set ui_visualize_current [.mbar.repository index last]
.mbar.repository add command \
-label [mc "Visualize All Branch History"] \
-command
.mbar.repository add separator
proc current_branch_write
trace add variable current_branch write current_branch_write
if
if   else
# -- Edit Menu
#
menu .mbar.edit
.mbar.edit add command -label [mc Undo] \
-command  \
-accelerator $M1T-Z
.mbar.edit add command -label [mc Redo] \
-command  \
-accelerator $M1T-Y
.mbar.edit add separator
.mbar.edit add command -label [mc Cut] \
-command  \
-accelerator $M1T-X
.mbar.edit add command -label [mc Copy] \
-command  \
-accelerator $M1T-C
.mbar.edit add command -label [mc Paste] \
-command  \
-accelerator $M1T-V
.mbar.edit add command -label [mc Delete] \
-command  \
-accelerator Del
.mbar.edit add separator
.mbar.edit add command -label [mc "Select All"] \
-command  \
-accelerator $M1T-A
# -- Branch Menu
#
if
# -- Commit Menu
#
proc commit_btn_caption
if
# -- Merge Menu
#
if
# -- Transport Menu
#
if
if   else
# -- Tools Menu
#
if
# -- Help Menu
#
.mbar add cascade -label [mc Help] -menu .mbar.help
menu .mbar.help
if   else
. configure -menu .mbar
set doc_path [githtmldir]
if
if   else {
set doc_url
proc start_browser
.mbar.help add command -label [mc "Online Documentation"] \
-command [list start_browser $doc_url]
.mbar.help add command -label [mc "Show SSH Key"] \
-command do_ssh_key
unset doc_path doc_url
# -- Standard bindings
#
wm protocol . WM_DELETE_WINDOW do_quit
bind all <$M1B-Key-q> do_quit
bind all <$M1B-Key-Q> do_quit
bind all <$M1B-Key-w>
bind all <$M1B-Key-W>
set subcommand_args
proc usage
proc normalize_relpath
# -- Not a normal commit type invocation?  Do that instead!
#
switch -- $subcommand
# -- Branch Control
#
$::frame .branch
if
$::label .branch.l1 \
-text [mc "Current Branch:"] \
-anchor w \
-justify left
$::label .branch.cb \
-textvariable current_branch \
-anchor w \
-justify left
pack .branch.l1 -side left
pack .branch.cb -side left -fill x
pack .branch -side top -fill x
# -- Main Window Layout
#
$::panedwindow .vpane -orient horizontal
$::panedwindow .vpane.files -orient vertical
if   else
pack .vpane -anchor n -side top -fill both -expand 1
# -- Index File List
#
$::frame .vpane.files.index -height 100 -width 200
tlabel .vpane.files.index.title \
-text [mc "Staged Changes (Will Commit)"] \
-background lightgreen -foreground black
text $ui_index -background white -foreground black \
-borderwidth 0 \
-width 20 -height 10 \
-wrap none \
-cursor $cursor_ptr \
-xscrollcommand  \
-yscrollcommand  \
-state disabled
$::scrollbar .vpane.files.index.sx -orient h -command [list $ui_index xview]
$::scrollbar .vpane.files.index.sy -orient v -command [list $ui_index yview]
pack .vpane.files.index.title -side top -fill x
pack .vpane.files.index.sx -side bottom -fill x
pack .vpane.files.index.sy -side right -fill y
pack $ui_index -side left -fill both -expand 1
# -- Working Directory File List
#
$::frame .vpane.files.workdir -height 100 -width 200
tlabel .vpane.files.workdir.title -text [mc "Unstaged Changes"] \
-background lightsalmon -foreground black
text $ui_workdir -background white -foreground black \
-borderwidth 0 \
-width 20 -height 10 \
-wrap none \
-cursor $cursor_ptr \
-xscrollcommand  \
-yscrollcommand  \
-state disabled
$::scrollbar .vpane.files.workdir.sx -orient h -command [list $ui_workdir xview]
$::scrollbar .vpane.files.workdir.sy -orient v -command [list $ui_workdir yview]
pack .vpane.files.workdir.title -side top -fill x
pack .vpane.files.workdir.sx -side bottom -fill x
pack .vpane.files.workdir.sy -side right -fill y
pack $ui_workdir -side left -fill both -expand 1
.vpane.files add .vpane.files.workdir
.vpane.files add .vpane.files.index
if
foreach i [list $ui_index $ui_workdir]
unset i
# -- Diff and Commit Area
#
if   else
# -- Commit Area Buttons
#
$::frame .vpane.lower.commarea.buttons
$::label .vpane.lower.commarea.buttons.l -text  \
-anchor w \
-justify left
pack .vpane.lower.commarea.buttons.l -side top -fill x
pack .vpane.lower.commarea.buttons -side left -fill y
$::button .vpane.lower.commarea.buttons.rescan -text [mc Rescan] \
-command ui_do_rescan
pack .vpane.lower.commarea.buttons.rescan -side top -fill x
lappend disable_on_lock \
$::button .vpane.lower.commarea.buttons.incall -text [mc "Stage Changed"] \
-command do_add_all
pack .vpane.lower.commarea.buttons.incall -side top -fill x
lappend disable_on_lock \
if
$::button .vpane.lower.commarea.buttons.commit -text [commit_btn_caption] \
-command do_commit
pack .vpane.lower.commarea.buttons.commit -side top -fill x
lappend disable_on_lock \
if
# -- Commit Message Buffer
#
$::frame .vpane.lower.commarea.buffer
$::frame .vpane.lower.commarea.buffer.header
set ui_comm .vpane.lower.commarea.buffer.t
set ui_coml .vpane.lower.commarea.buffer.header.l
if
$::label $ui_coml \
-anchor w \
-justify left
proc trace_commit_type
trace add variable commit_type write trace_commit_type
pack $ui_coml -side left -fill x
if
text $ui_comm -background white -foreground black \
-borderwidth 1 \
-undo true \
-maxundo 20 \
-autoseparators true \
-relief sunken \
-width $repo_config(gui.commitmsgwidth) -height 9 -wrap none \
-font font_diff \
-yscrollcommand
$::scrollbar .vpane.lower.commarea.buffer.sby \
-command [list $ui_comm yview]
pack .vpane.lower.commarea.buffer.header -side top -fill x
pack .vpane.lower.commarea.buffer.sby -side right -fill y
pack $ui_comm -side left -fill y
pack .vpane.lower.commarea.buffer -side left -fill y
# -- Commit Message Buffer Context Menu
#
set ctxm .vpane.lower.commarea.buffer.ctxm
menu $ctxm -tearoff 0
$ctxm add command \
-label [mc Cut] \
-command
$ctxm add command \
-label [mc Copy] \
-command
$ctxm add command \
-label [mc Paste] \
-command
$ctxm add command \
-label [mc Delete] \
-command
$ctxm add separator
$ctxm add command \
-label [mc "Select All"] \
-command
$ctxm add command \
-label [mc "Copy All"] \
-command
$ctxm add separator
$ctxm add command \
-label [mc "Sign Off"] \
-command do_signoff
set ui_comm_ctxm $ctxm
# -- Diff Header
#
proc trace_current_diff_path
trace add variable current_diff_path write trace_current_diff_path
gold_frame .vpane.lower.diff.header
tlabel .vpane.lower.diff.header.status \
-background gold \
-foreground black \
-width $max_status_desc \
-anchor w \
-justify left
tlabel .vpane.lower.diff.header.file \
-background gold \
-foreground black \
-anchor w \
-justify left
tlabel .vpane.lower.diff.header.path \
-background gold \
-foreground black \
-anchor w \
-justify left
pack .vpane.lower.diff.header.status -side left
pack .vpane.lower.diff.header.file -side left
pack .vpane.lower.diff.header.path -fill x
set ctxm .vpane.lower.diff.header.ctxm
menu $ctxm -tearoff 0
$ctxm add command \
-label [mc Copy] \
-command
lappend diff_actions [list $ctxm entryconf [$ctxm index last] -state]
bind_button3 .vpane.lower.diff.header.path "tk_popup $ctxm %X %Y"
# -- Diff Body
#
$::frame .vpane.lower.diff.body
set ui_diff .vpane.lower.diff.body.t
text $ui_diff -background white -foreground black \
-borderwidth 0 \
-width 80 -height 5 -wrap none \
-font font_diff \
-xscrollcommand  \
-yscrollcommand  \
-state disabled
catch
$::scrollbar .vpane.lower.diff.body.sbx -orient horizontal \
-command [list $ui_diff xview]
$::scrollbar .vpane.lower.diff.body.sby -orient vertical \
-command [list $ui_diff yview]
pack .vpane.lower.diff.body.sbx -side bottom -fill x
pack .vpane.lower.diff.body.sby -side right -fill y
pack $ui_diff -side left -fill both -expand 1
pack .vpane.lower.diff.header -side top -fill x
pack .vpane.lower.diff.body -side bottom -fill both -expand 1
foreach
$ui_diff tag configure clr1 -font font_diffbold
$ui_diff tag configure clr4 -underline 1
$ui_diff tag conf d_info -foreground blue -font font_diffbold
$ui_diff tag conf d_cr -elide true
$ui_diff tag conf d_@ -font font_diffbold
$ui_diff tag conf d_+ -foreground
$ui_diff tag conf d_- -foreground red
$ui_diff tag conf d_++ -foreground
$ui_diff tag conf d_-- -foreground red
$ui_diff tag conf d_+s \
-foreground  \
-background
$ui_diff tag conf d_-s \
-foreground red \
-background
$ui_diff tag conf d_s+ \
-foreground  \
-background ivory1
$ui_diff tag conf d_s- \
-foreground red \
-background ivory1
$ui_diff tag conf d< \
-foreground orange \
-font font_diffbold
$ui_diff tag conf d= \
-foreground orange \
-font font_diffbold
$ui_diff tag conf d> \
-foreground orange \
-font font_diffbold
$ui_diff tag raise sel
# -- Diff Body Context Menu
#
proc create_common_diff_popup
set ctxm .vpane.lower.diff.body.ctxm
menu $ctxm -tearoff 0
$ctxm add command \
-label [mc "Apply/Reverse Hunk"] \
-command
set ui_diff_applyhunk [$ctxm index last]
lappend diff_actions [list $ctxm entryconf $ui_diff_applyhunk -state]
$ctxm add command \
-label [mc "Apply/Reverse Line"] \
-command
set ui_diff_applyline [$ctxm index last]
lappend diff_actions [list $ctxm entryconf $ui_diff_applyline -state]
$ctxm add separator
$ctxm add command \
-label [mc "Show Less Context"] \
-command show_less_context
lappend diff_actions [list $ctxm entryconf [$ctxm index last] -state]
$ctxm add command \
-label [mc "Show More Context"] \
-command show_more_context
lappend diff_actions [list $ctxm entryconf [$ctxm index last] -state]
$ctxm add separator
create_common_diff_popup $ctxm
set ctxmmg .vpane.lower.diff.body.ctxmmg
menu $ctxmmg -tearoff 0
$ctxmmg add command \
-label [mc "Run Merge Tool"] \
-command
lappend diff_actions [list $ctxmmg entryconf [$ctxmmg index last] -state]
$ctxmmg add separator
$ctxmmg add command \
-label [mc "Use Remote Version"] \
-command
lappend diff_actions [list $ctxmmg entryconf [$ctxmmg index last] -state]
$ctxmmg add command \
-label [mc "Use Local Version"] \
-command
lappend diff_actions [list $ctxmmg entryconf [$ctxmmg index last] -state]
$ctxmmg add command \
-label [mc "Revert To Base"] \
-command
lappend diff_actions [list $ctxmmg entryconf [$ctxmmg index last] -state]
$ctxmmg add separator
$ctxmmg add command \
-label [mc "Show Less Context"] \
-command show_less_context
lappend diff_actions [list $ctxmmg entryconf [$ctxmmg index last] -state]
$ctxmmg add command \
-label [mc "Show More Context"] \
-command show_more_context
lappend diff_actions [list $ctxmmg entryconf [$ctxmmg index last] -state]
$ctxmmg add separator
create_common_diff_popup $ctxmmg
set ctxmsm .vpane.lower.diff.body.ctxmsm
menu $ctxmsm -tearoff 0
$ctxmsm add command \
-label [mc "Visualize These Changes In The Submodule"] \
-command
lappend diff_actions [list $ctxmsm entryconf [$ctxmsm index last] -state]
$ctxmsm add command \
-label [mc "Visualize Current Branch History In The Submodule"] \
-command
lappend diff_actions [list $ctxmsm entryconf [$ctxmsm index last] -state]
$ctxmsm add command \
-label [mc "Visualize All Branch History In The Submodule"] \
-command
lappend diff_actions [list $ctxmsm entryconf [$ctxmsm index last] -state]
$ctxmsm add separator
$ctxmsm add command \
-label [mc "Start git gui In The Submodule"] \
-command
lappend diff_actions [list $ctxmsm entryconf [$ctxmsm index last] -state]
$ctxmsm add separator
create_common_diff_popup $ctxmsm
proc has_textconv
proc popup_diff_menu
bind_button3 $ui_diff [list popup_diff_menu $ctxm $ctxmmg $ctxmsm %x %y %X %Y]
# -- Status Bar
#
set main_status [::status_bar::new .status]
pack .status -anchor w -side bottom -fill x
$main_status show [mc "Initializing..."]
# -- Load geometry
#
proc on_ttk_pane_mapped
proc on_tk_pane_mapped
proc on_application_mapped
if
# -- Load window state
#
if
# -- Key Bindings
#
bind $ui_comm <$M1B-Key-Return>
bind $ui_comm <$M1B-Key-t>
bind $ui_comm <$M1B-Key-T>
bind $ui_comm <$M1B-Key-u>
bind $ui_comm <$M1B-Key-U>
bind $ui_comm <$M1B-Key-j>
bind $ui_comm <$M1B-Key-J>
bind $ui_comm <$M1B-Key-i>
bind $ui_comm <$M1B-Key-I>
bind $ui_comm <$M1B-Key-x>
bind $ui_comm <$M1B-Key-X>
bind $ui_comm <$M1B-Key-c>
bind $ui_comm <$M1B-Key-C>
bind $ui_comm <$M1B-Key-v>
bind $ui_comm <$M1B-Key-V>
bind $ui_comm <$M1B-Key-a>
bind $ui_comm <$M1B-Key-A>
bind $ui_comm <$M1B-Key-minus>
bind $ui_comm <$M1B-Key-KP_Subtract>
bind $ui_comm <$M1B-Key-equal>
bind $ui_comm <$M1B-Key-plus>
bind $ui_comm <$M1B-Key-KP_Add>
bind $ui_diff <$M1B-Key-x>
bind $ui_diff <$M1B-Key-X>
bind $ui_diff <$M1B-Key-c>
bind $ui_diff <$M1B-Key-C>
bind $ui_diff <$M1B-Key-v>
bind $ui_diff <$M1B-Key-V>
bind $ui_diff <$M1B-Key-a>
bind $ui_diff <$M1B-Key-A>
bind $ui_diff <$M1B-Key-j>
bind $ui_diff <$M1B-Key-J>
bind $ui_diff <Key-Up>
bind $ui_diff <Key-Down>
bind $ui_diff <Key-Left>
bind $ui_diff <Key-Right>
bind $ui_diff <Key-k>
bind $ui_diff <Key-j>
bind $ui_diff <Key-h>
bind $ui_diff <Key-l>
bind $ui_diff <Control-Key-b>
bind $ui_diff <Control-Key-f>
bind $ui_diff <Button-1>
if
if
bind .   <Key-F5>     ui_do_rescan
bind .   <$M1B-Key-r> ui_do_rescan
bind .   <$M1B-Key-R> ui_do_rescan
bind .   <$M1B-Key-s> do_signoff
bind .   <$M1B-Key-S> do_signoff
bind .   <$M1B-Key-t> do_add_selection
bind .   <$M1B-Key-T> do_add_selection
bind .   <$M1B-Key-u> do_unstage_selection
bind .   <$M1B-Key-U> do_unstage_selection
bind .   <$M1B-Key-j> do_revert_selection
bind .   <$M1B-Key-J> do_revert_selection
bind .   <$M1B-Key-i> do_add_all
bind .   <$M1B-Key-I> do_add_all
bind .   <$M1B-Key-minus>
bind .   <$M1B-Key-KP_Subtract>
bind .   <$M1B-Key-equal>
bind .   <$M1B-Key-plus>
bind .   <$M1B-Key-KP_Add>
bind .   <$M1B-Key-Return> do_commit
foreach i [list $ui_index $ui_workdir]
unset i
set file_lists($ui_index) [list]
set file_lists($ui_workdir) [list]
wm title . "[appname] ([reponame]) [file normalize $_gitworktree]"
focus -force $ui_comm
# -- Warn the user about environmental problems.  Cygwin's Tcl
#    does *not* pass its env array onto any processes it spawns.
#    This means that git processes get none of our environment.
#
if
# -- Only initialize complex UI if we are going to stay running.
#
if
if
lock_index begin-read
if
after 1
if
if
if
# Local variables:
# mode: tcl
# indent-tabs-mode: t
# tab-width: 4
# End:
