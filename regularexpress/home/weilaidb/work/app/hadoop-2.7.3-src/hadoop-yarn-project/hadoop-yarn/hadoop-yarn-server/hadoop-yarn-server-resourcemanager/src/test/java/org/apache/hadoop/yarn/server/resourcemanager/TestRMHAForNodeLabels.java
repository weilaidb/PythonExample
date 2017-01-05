package org.apache.hadoop.yarn.server.resourcemanager;
import java.io.File;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;
import com.google.common.collect.ImmutableSet;
public class TestRMHAForNodeLabels extends RMHATestBase
