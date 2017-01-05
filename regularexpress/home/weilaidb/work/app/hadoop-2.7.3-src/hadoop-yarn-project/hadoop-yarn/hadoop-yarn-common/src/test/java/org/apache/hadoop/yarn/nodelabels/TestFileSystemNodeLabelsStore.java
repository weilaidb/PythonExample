package org.apache.hadoop.yarn.nodelabels;
import java.io.File;
import java.io.IOException;
import java.util.Arrays;
import java.util.Map;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.event.InlineDispatcher;
import org.junit.After;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;
import com.google.common.collect.ImmutableMap;
import org.mockito.Mockito;
public class TestFileSystemNodeLabelsStore extends NodeLabelTestBase
