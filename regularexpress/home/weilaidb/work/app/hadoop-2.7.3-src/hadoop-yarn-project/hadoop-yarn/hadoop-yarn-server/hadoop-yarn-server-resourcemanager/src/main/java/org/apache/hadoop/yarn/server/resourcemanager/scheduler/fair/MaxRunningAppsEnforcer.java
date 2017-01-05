package org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.PriorityQueue;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.collect.ArrayListMultimap;
import com.google.common.collect.ListMultimap;
public class MaxRunningAppsEnforcer
