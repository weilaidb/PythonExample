package org.apache.hadoop.yarn.server.applicationhistoryservice;
import java.io.IOException;
import org.junit.Assert;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.Priority;
import org.apache.hadoop.yarn.server.applicationhistoryservice.records.ApplicationAttemptHistoryData;
import org.apache.hadoop.yarn.server.applicationhistoryservice.records.ApplicationHistoryData;
import org.apache.hadoop.yarn.server.applicationhistoryservice.records.ContainerHistoryData;
import org.junit.Before;
import org.junit.Test;
public class TestMemoryApplicationHistoryStore extends
ApplicationHistoryStoreTestUtils
