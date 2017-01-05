package org.apache.hadoop.hdfs.web.resources;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_WEBHDFS_USER_PATTERN_DEFAULT;
import org.apache.hadoop.security.UserGroupInformation;
import com.google.common.annotations.VisibleForTesting;
import java.text.MessageFormat;
import java.util.regex.Pattern;
public class UserParam extends StringParam
