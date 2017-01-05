package org.apache.hadoop.yarn.server.resourcemanager;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ha.ClientBaseWithFixes;
import org.apache.hadoop.ha.ServiceFailedException;
import org.apache.hadoop.yarn.conf.HAUtil;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.junit.Before;
import org.junit.Test;
import java.io.IOException;
import java.util.concurrent.atomic.AtomicBoolean;
public class TestRMEmbeddedElector extends ClientBaseWithFixes
