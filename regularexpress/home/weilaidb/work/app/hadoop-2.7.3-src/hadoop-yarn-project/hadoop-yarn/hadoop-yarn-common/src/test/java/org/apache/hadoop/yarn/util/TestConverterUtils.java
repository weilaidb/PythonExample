package org.apache.hadoop.yarn.util;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNull;
import java.net.URISyntaxException;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.yarn.api.TestContainerId;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.URL;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.junit.Test;
public class TestConverterUtils
