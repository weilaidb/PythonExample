package org.apache.hadoop.util.bloom;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertNotNull;
import static org.junit.Assert.assertTrue;
import java.util.AbstractCollection;
import java.util.BitSet;
import java.util.Iterator;
import org.apache.hadoop.util.bloom.BloomFilterCommonTester.BloomFilterTestStrategy;
import org.apache.hadoop.util.hash.Hash;
import org.junit.Assert;
import org.junit.Test;
import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import com.google.common.collect.ImmutableSet;
public class TestBloomFilters
