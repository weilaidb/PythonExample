package org.apache.hadoop.hdfs.server.namenode.top.window;
import java.util.List;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.log4j.Level;
import org.apache.log4j.Logger;
import org.junit.Before;
import org.junit.Test;
import static org.apache.hadoop.hdfs.server.namenode.top.window.RollingWindowManager.Op;
import static org.apache.hadoop.hdfs.server.namenode.top.window.RollingWindowManager.TopWindow;
import static org.apache.hadoop.hdfs.server.namenode.top.window.RollingWindowManager.User;
import static org.junit.Assert.assertEquals;
public class TestRollingWindowManager
