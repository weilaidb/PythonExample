package org.apache.hadoop.yarn.nodelabels;
import java.io.IOException;
import java.util.Collection;
import java.util.Map;
import java.util.Set;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.apache.hadoop.yarn.event.InlineDispatcher;
public class DummyCommonNodeLabelsManager extends CommonNodeLabelsManager
