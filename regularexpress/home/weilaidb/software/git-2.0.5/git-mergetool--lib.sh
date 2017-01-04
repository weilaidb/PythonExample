# git-mergetool--lib is a shell library for common merge tool functions
: $
mode_ok ()
is_available ()
list_config_tools ()
show_tool_names ()
diff_mode()
merge_mode()
translate_merge_tool_path ()
check_unchanged ()
valid_tool ()
setup_user_tool ()
setup_tool ()
get_merge_tool_cmd ()
# Entry point for running tools
run_merge_tool ()
# Run a either a configured or built-in diff tool
run_diff_cmd ()
# Run a either a configured or built-in merge tool
run_merge_cmd ()
list_merge_tool_candidates ()
show_tool_help ()
guess_merge_tool ()
get_configured_merge_tool ()
get_merge_tool_path ()
get_merge_tool ()
