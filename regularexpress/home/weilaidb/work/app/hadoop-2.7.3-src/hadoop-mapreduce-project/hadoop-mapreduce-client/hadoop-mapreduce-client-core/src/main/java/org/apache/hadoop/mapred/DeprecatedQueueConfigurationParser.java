package org.apache.hadoop.mapred;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.MRConfig;
import org.apache.hadoop.mapreduce.QueueState;
import org.apache.hadoop.security.authorize.AccessControlList;
import static org.apache.hadoop.mapred.QueueManager.*;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import java.util.List;
import java.util.Map;
import java.util.HashMap;
import java.util.ArrayList;
class DeprecatedQueueConfigurationParser extends QueueConfigurationParser
