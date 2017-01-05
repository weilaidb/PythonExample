package org.apache.hadoop.yarn.server.resourcemanager.webapp;
import java.io.IOException;
import java.io.PrintWriter;
import org.apache.hadoop.yarn.api.records.NodeState;
import org.apache.hadoop.yarn.server.resourcemanager.RMContext;
import org.apache.hadoop.yarn.server.resourcemanager.ResourceManager;
import org.apache.hadoop.yarn.server.resourcemanager.webapp.NodesPage.NodesBlock;
import org.apache.hadoop.yarn.webapp.test.WebAppTests;
import org.junit.Before;
import org.junit.Test;
import org.mockito.Mockito;
import com.google.inject.Binder;
import com.google.inject.Injector;
import com.google.inject.Module;
public class TestNodesPage
