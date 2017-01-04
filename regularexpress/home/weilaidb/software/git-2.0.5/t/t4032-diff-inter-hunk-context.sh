#!/bin/sh
test_description='diff hunk fusing'
. ./test-lib.sh
f()
t()
cat <<EOF >expected.f1.0.1 || exit 1
diff --git a/f1 b/f1
--- a/f1
+++ b/f1
@@ -1,3 +1,3 @@
-A
+X
1
-B
+Y
EOF
cat <<EOF >expected.f1.0.2 || exit 1
diff --git a/f1 b/f1
--- a/f1
+++ b/f1
@@ -1 +1 @@
-A
+X
@@ -3 +3 @@ A
-B
+Y
EOF
# common lines	ctx	intrctx	hunks
t 1 line	0		2
t 1 line	0	0	2
t 1 line	0	1	1
t 1 line	0	2	1
t 1 line	1		1
t 2 lines	0		2
t 2 lines	0	0	2
t 2 lines	0	1	2
t 2 lines	0	2	1
t 2 lines	1		1
t 3 lines	1		2
t 3 lines	1	0	2
t 3 lines	1	1	1
t 3 lines	1	2	1
t 9 lines	3		2
t 9 lines	3	2	2
t 9 lines	3	3	1
test_done
