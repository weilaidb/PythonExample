package org.apache.hadoop.lib.service.security;
import static org.junit.Assert.assertNotNull;
import static org.junit.Assert.assertNotSame;
import java.util.Arrays;
import java.util.List;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.lib.server.Server;
import org.apache.hadoop.lib.service.Groups;
import org.apache.hadoop.test.HTestCase;
import org.apache.hadoop.test.TestDir;
import org.apache.hadoop.test.TestDirHelper;
import org.apache.hadoop.util.StringUtils;
import org.junit.Test;
public class TestGroupsService extends HTestCase
