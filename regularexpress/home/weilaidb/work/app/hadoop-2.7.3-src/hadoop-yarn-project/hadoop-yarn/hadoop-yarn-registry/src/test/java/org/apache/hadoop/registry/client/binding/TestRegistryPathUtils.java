package org.apache.hadoop.registry.client.binding;
import static org.apache.hadoop.registry.client.binding.RegistryPathUtils.*;
import java.io.IOException;
import java.util.List;
import org.apache.hadoop.fs.PathNotFoundException;
import org.apache.hadoop.registry.client.exceptions.InvalidPathnameException;
import org.junit.Assert;
import org.junit.Test;
public class TestRegistryPathUtils extends Assert
