package org.apache.hadoop.registry.integration;
import org.apache.hadoop.registry.RegistryTestHelper;
import org.apache.hadoop.registry.client.types.yarn.PersistencePolicies;
import org.apache.hadoop.registry.client.types.RegistryPathStatus;
import org.apache.hadoop.registry.client.types.ServiceRecord;
import org.apache.hadoop.registry.server.integration.SelectByYarnPersistence;
import org.apache.hadoop.registry.server.services.RegistryAdminService;
import org.junit.Test;
public class TestYarnPolicySelector extends RegistryTestHelper
