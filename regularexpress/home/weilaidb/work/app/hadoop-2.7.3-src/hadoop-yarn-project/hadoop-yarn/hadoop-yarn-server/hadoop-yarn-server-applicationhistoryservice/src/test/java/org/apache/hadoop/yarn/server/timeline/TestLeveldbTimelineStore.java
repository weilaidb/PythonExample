package org.apache.hadoop.yarn.server.timeline;
import static org.apache.hadoop.yarn.server.timeline.GenericObjectMapper.writeReverseOrderedLong;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNotNull;
import java.io.File;
import java.io.IOException;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.Set;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileContext;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.service.ServiceStateException;
import org.apache.hadoop.yarn.api.records.timeline.TimelineEntities;
import org.apache.hadoop.yarn.api.records.timeline.TimelineEntity;
import org.apache.hadoop.yarn.api.records.timeline.TimelinePutResponse;
import org.apache.hadoop.yarn.api.records.timeline.TimelinePutResponse.TimelinePutError;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.server.records.Version;
import org.apache.hadoop.yarn.server.timeline.LeveldbTimelineStore;
import org.apache.hadoop.yarn.server.timeline.NameValuePair;
import org.apache.hadoop.yarn.server.utils.LeveldbIterator;
import org.iq80.leveldb.DBException;
import org.junit.After;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class TestLeveldbTimelineStore extends TimelineStoreTestUtils
