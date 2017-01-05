package org.apache.hadoop.registry.server.integration;
import com.google.common.base.Preconditions;
import org.apache.commons.lang.StringUtils;
import org.apache.hadoop.registry.client.types.RegistryPathStatus;
import org.apache.hadoop.registry.client.types.ServiceRecord;
import org.apache.hadoop.registry.client.types.yarn.YarnRegistryAttributes;
import org.apache.hadoop.registry.server.services.RegistryAdminService;
public class SelectByYarnPersistence
implements RegistryAdminService.NodeSelector
