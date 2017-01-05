package org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair;
import static org.junit.Assert.*;
import static org.mockito.Mockito.*;
import java.util.HashSet;
import java.util.Set;
import org.apache.hadoop.yarn.util.SystemClock;
import org.junit.Before;
import org.junit.Test;
import com.google.common.collect.Sets;
public class TestQueueManager
