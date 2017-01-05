package org.apache.hadoop.yarn.server.timeline;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.WritableComparator;
import org.apache.hadoop.yarn.server.timeline.GenericObjectMapper;
import org.junit.Test;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import static org.junit.Assert.assertEquals;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class TestGenericObjectMapper
