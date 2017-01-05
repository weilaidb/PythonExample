package org.apache.hadoop.yarn.server.resourcemanager.security;
import static org.mockito.Mockito.mock;
import static org.mockito.Mockito.when;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.yarn.server.resourcemanager.ClientRMService;
import org.apache.hadoop.yarn.server.resourcemanager.RMContext;
import org.junit.Test;
public class TestDelegationTokenRenewerLifecycle
