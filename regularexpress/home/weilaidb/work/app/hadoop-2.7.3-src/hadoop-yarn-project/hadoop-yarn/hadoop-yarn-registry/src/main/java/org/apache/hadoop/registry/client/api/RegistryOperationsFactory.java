package org.apache.hadoop.registry.client.api;
import com.google.common.base.Preconditions;
import org.apache.commons.lang.StringUtils;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.service.ServiceStateException;
import org.apache.hadoop.registry.client.impl.RegistryOperationsClient;
import static org.apache.hadoop.registry.client.api.RegistryConstants.*;
public final class RegistryOperationsFactory
