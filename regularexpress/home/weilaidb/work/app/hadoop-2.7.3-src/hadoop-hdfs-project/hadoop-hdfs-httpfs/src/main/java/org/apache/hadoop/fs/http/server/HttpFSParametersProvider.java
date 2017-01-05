package org.apache.hadoop.fs.http.server;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.fs.XAttrCodec;
import org.apache.hadoop.fs.XAttrSetFlag;
import org.apache.hadoop.fs.http.client.HttpFSFileSystem;
import org.apache.hadoop.fs.http.client.HttpFSFileSystem.Operation;
import org.apache.hadoop.lib.wsrs.BooleanParam;
import org.apache.hadoop.lib.wsrs.EnumParam;
import org.apache.hadoop.lib.wsrs.EnumSetParam;
import org.apache.hadoop.lib.wsrs.LongParam;
import org.apache.hadoop.lib.wsrs.Param;
import org.apache.hadoop.lib.wsrs.ParametersProvider;
import org.apache.hadoop.lib.wsrs.ShortParam;
import org.apache.hadoop.lib.wsrs.StringParam;
import org.apache.hadoop.util.StringUtils;
import javax.ws.rs.ext.Provider;
import java.util.HashMap;
import java.util.Map;
import java.util.regex.Pattern;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_WEBHDFS_ACL_PERMISSION_PATTERN_DEFAULT;
@Provider
@InterfaceAudience.Private
@SuppressWarnings("unchecked")
public class HttpFSParametersProvider extends ParametersProvider
