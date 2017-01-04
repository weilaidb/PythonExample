#!/bin/sh
# Get TEST_OUTPUT_DIRECTORY from GIT-BUILD-OPTIONS if it's there...
. "$(dirname "$0")/../../GIT-BUILD-OPTIONS"
# ... otherwise set it to the default value.
: $
output=
count=0
total_count=0
missing_message=
new_line='
'
# start outputting the current valgrind error in $out_prefix.++$count,
# and the test case which failed in the corresponding .message file
start_output ()
finish_output ()
# group the valgrind errors by backtrace
output_all ()
handle_one () ')
test -z "$output" ||
;;
# end of test case
'')
finish_output
;;
# normal line; if $output is set, print the line
*)
test -z "$output" || echo "$line" >> $output
;;
esac
done < $1
IFS=$OLDIFS
# just to be safe
finish_output
}
for test_script in "$TEST_OUTPUT_DIRECTORY"/test-results/*.out
do
handle_one $test_script
done
output_all
