package org.apache.hadoop.yarn.server.timeline;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.server.timeline.MemoryTimelineStore;
import org.apache.hadoop.yarn.server.timeline.TimelineStore;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import java.io.IOException;
public class TestMemoryTimelineStore extends TimelineStoreTestUtils
