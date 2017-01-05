package org.apache.hadoop.hdfs.server.namenode;
import java.io.File;
import java.io.IOException;
import java.net.URI;
import java.util.ArrayList;
import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.DF;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.server.common.Util;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.collect.Collections2;
import com.google.common.base.Predicate;
@InterfaceAudience.Private
public class NameNodeResourceChecker
