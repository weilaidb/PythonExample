package org.apache.hadoop.yarn.conf;
import com.google.common.annotations.VisibleForTesting;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.HadoopIllegalArgumentException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.net.NetUtils;
import org.apache.hadoop.yarn.exceptions.YarnRuntimeException;
import java.net.InetSocketAddress;
import java.util.Collection;
@InterfaceAudience.Private
public class HAUtil
