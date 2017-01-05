package org.apache.hadoop.yarn.server.resourcemanager.scheduler;
import java.util.List;
import java.util.Set;
import com.google.common.annotations.VisibleForTesting;
import org.apache.hadoop.yarn.api.records.Container;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.NMToken;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.api.records.ResourceRequest;
public class Allocation
