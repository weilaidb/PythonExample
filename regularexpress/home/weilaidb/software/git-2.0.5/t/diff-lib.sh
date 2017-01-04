:
sanitize_diff_raw='/^:/s/ '"$_x40"' '"$_x40"' \([A-Z]\)[0-9]*	/ X X \1#	/'
compare_diff_raw ()
sanitize_diff_raw_z='/^:/s/ '"$_x40"' '"$_x40"' \([A-Z]\)[0-9]*$/ X X \1#/'
compare_diff_raw_z ()
compare_diff_patch ()
