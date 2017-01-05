package org.apache.hadoop.nfs;
import java.net.InetAddress;
import java.util.ArrayList;
import java.util.List;
import java.util.regex.Pattern;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.commons.net.util.SubnetUtils;
import org.apache.commons.net.util.SubnetUtils.SubnetInfo;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.nfs.nfs3.Nfs3Constant;
import org.apache.hadoop.util.LightWeightCache;
import org.apache.hadoop.util.LightWeightGSet;
import org.apache.hadoop.util.LightWeightGSet.LinkedElement;
import org.apache.hadoop.util.StringUtils;
import com.google.common.base.Preconditions;
public class NfsExports
