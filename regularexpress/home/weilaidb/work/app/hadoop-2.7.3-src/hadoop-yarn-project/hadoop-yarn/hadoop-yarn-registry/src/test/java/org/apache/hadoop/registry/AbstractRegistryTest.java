package org.apache.hadoop.registry;
import org.apache.hadoop.fs.PathNotFoundException;
import org.apache.hadoop.registry.client.api.RegistryOperations;
import org.apache.hadoop.registry.client.binding.RegistryPathUtils;
import org.apache.hadoop.registry.client.types.yarn.PersistencePolicies;
import org.apache.hadoop.registry.client.types.ServiceRecord;
import org.apache.hadoop.registry.server.integration.RMRegistryOperationsService;
import org.junit.Before;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import java.io.IOException;
import java.net.URISyntaxException;
public class AbstractRegistryTest extends AbstractZKRegistryTest
