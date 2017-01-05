package org.apache.hadoop.registry.client.impl;
import org.apache.hadoop.service.ServiceOperations;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.registry.server.services.MicroZookeeperService;
import org.junit.After;
import org.junit.Assert;
import org.junit.Rule;
import org.junit.Test;
import org.junit.rules.TestName;
import org.junit.rules.Timeout;
import java.io.IOException;
public class TestMicroZookeeperService extends Assert
