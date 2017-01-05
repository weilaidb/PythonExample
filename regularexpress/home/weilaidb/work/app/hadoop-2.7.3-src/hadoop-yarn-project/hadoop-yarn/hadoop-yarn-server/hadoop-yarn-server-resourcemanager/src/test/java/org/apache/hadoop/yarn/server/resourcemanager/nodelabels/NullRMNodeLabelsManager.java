package org.apache.hadoop.yarn.server.resourcemanager.nodelabels;
import java.io.IOException;
import java.util.Collection;
import java.util.Map;
import java.util.Set;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.nodelabels.NodeLabelsStore;
public class NullRMNodeLabelsManager extends RMNodeLabelsManager
