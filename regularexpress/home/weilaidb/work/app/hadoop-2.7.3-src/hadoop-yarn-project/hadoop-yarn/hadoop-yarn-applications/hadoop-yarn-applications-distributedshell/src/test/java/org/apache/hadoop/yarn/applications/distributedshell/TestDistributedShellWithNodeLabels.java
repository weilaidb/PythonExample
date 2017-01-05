package org.apache.hadoop.yarn.applications.distributedshell;
import java.io.IOException;
import java.util.HashSet;
import java.util.Set;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.apache.hadoop.yarn.server.nodemanager.NodeManager;
import org.apache.hadoop.yarn.server.resourcemanager.RMContext;
import org.apache.hadoop.yarn.server.resourcemanager.nodelabels.RMNodeLabelsManager;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;
import com.google.common.collect.ImmutableMap;
public class TestDistributedShellWithNodeLabels
