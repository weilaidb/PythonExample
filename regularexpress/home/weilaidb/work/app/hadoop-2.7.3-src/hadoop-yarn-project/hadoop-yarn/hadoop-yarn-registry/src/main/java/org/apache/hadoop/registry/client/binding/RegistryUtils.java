package org.apache.hadoop.registry.client.binding;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.base.Preconditions;
import org.apache.commons.lang.StringUtils;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.PathNotFoundException;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.registry.client.api.RegistryConstants;
import org.apache.hadoop.registry.client.api.RegistryOperations;
import org.apache.hadoop.registry.client.exceptions.InvalidPathnameException;
import org.apache.hadoop.registry.client.exceptions.InvalidRecordException;
import org.apache.hadoop.registry.client.exceptions.NoRecordException;
import org.apache.hadoop.registry.client.impl.zk.RegistryInternalConstants;
import org.apache.hadoop.registry.client.types.RegistryPathStatus;
import org.apache.hadoop.registry.client.types.ServiceRecord;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import static org.apache.hadoop.registry.client.binding.RegistryPathUtils.*;
import java.io.EOFException;
import java.io.IOException;
import java.util.Collection;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class RegistryUtils
